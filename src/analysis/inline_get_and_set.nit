# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Inline every automatic 'getters' and 'setters'
# This optimization is done BEFORE analysis
package inline_get_and_set

import icode
import syntax
import program

redef class Program
	fun inline_get_set do
		with_each_iroutines !action(i, m) do
			var v = new InlineGetSetVisitor(m, i)
			v.visit_iroutine(i)
		end
	end
end

private class InlineGetSetVisitor
special ICodeVisitor
	var _icb: ICodeBuilder

	redef fun visit_icode(ic)
	do
		# Algo mostly from inline_methods.nit, by Jean Privat
		if ic isa ICall then
			var m = ic.property
			var ir = m.iroutine
			if ir != null and m isa MMAttrImplementationMethod then
				var icb = _icb
				var seq = new ISeq
				var old_seq = icb.seq
				icb.seq = seq
				current_icode.insert_before(seq)
				var e = icb.inline_routine(ir, ic.exprs, ic.closure_defs)
				var r = ic.result
				if r != null then
					assert e != null
					current_icode.insert_before(new IMove(r, e))
				end
				current_icode.delete
				icb.seq = old_seq
				visit_icode(seq)
			end
		end
		super
	end

	init(m: MMModule, r: IRoutine)
	do
		_icb = new ICodeBuilder(m, r)
	end
end