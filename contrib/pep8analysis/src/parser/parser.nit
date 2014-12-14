# Parser.
# This file was generated by SableCC (http://www.sablecc.org/).
module parser

intrude import parser_prod
import tables

# State of the parser automata as stored in the parser stack.
private class State
	# The internal state number
	var state: Int

	# The node stored with the state in the stack
	var nodes: nullable Object

	init(state: Int, nodes: nullable Object)
	do
		self.state = state
		self.nodes = nodes
	end
end

class Parser
	super TablesCapable
	# Associated lexer
	var lexer: Lexer

	# Stack of pushed states and productions
	private var stack: Array[State]

	# Position in the stack
	private var stack_pos: Int

	# Create a new parser based on a given lexer
	init(lexer: Lexer)
	do
		_lexer = lexer
		_stack = new Array[State]
		_stack_pos = -1
		build_reduce_table
	end

	# Do a transition in the automata
	private fun go_to(index: Int): Int
	do
		var state = state
		var low = 1
		var high = parser_goto(index, 0) - 1

		while low <= high do
			var middle = (low + high) / 2
			var subindex = middle * 2 + 1 # +1 because parser_goto(index, 0) is the length

			var goal = parser_goto(index, subindex)
			if state < goal then
				high = middle - 1
			else if state > goal then
				low = middle + 1
			else
				return parser_goto(index, subindex+1)
			end
		end

		return parser_goto(index, 2) # Default value
	end

	# Push someting in the state stack
	private fun push(numstate: Int, list_node: nullable Object)
	do
		var pos = _stack_pos + 1
		_stack_pos = pos
		if pos < _stack.length then
			var state = _stack[pos]
			state.state = numstate
			state.nodes = list_node
		else
			_stack.push(new State(numstate, list_node))
		end
	end

	# The current state
	private fun state: Int
	do
		return _stack[_stack_pos].state
	end

	# Pop something from the stack state
	private fun pop: nullable Object
	do
		var res = _stack[_stack_pos].nodes
		_stack_pos = _stack_pos -1
		return res
	end

	# Build and return a full AST.
	fun parse: Start
	do
		push(0, null)

		var lexer = _lexer
		loop
			var token = lexer.peek
			if token isa AError then
				return new Start(null, token)
			end

			var state = self.state
			var index = token.parser_index
			var action_type = parser_action(state, 2)
			var action_value = parser_action(state, 3)

			var low = 1
			var high = parser_action(state, 0) - 1

			while low <= high do
				var middle = (low + high) / 2
				var subindex = middle * 3 + 1 # +1 because parser_action(state, 0) is the length

				var goal = parser_action(state, subindex)
				if index < goal then
					high = middle - 1
				else if index > goal then
					low = middle + 1
				else
					action_type = parser_action(state, subindex+1)
					action_value = parser_action(state, subindex+2)
					break
				end
			end

			if action_type == 0 then # SHIFT
				push(action_value, lexer.next)
			else if action_type == 1 then # REDUCE
				_reduce_table[action_value].action(self)
			else if action_type == 2 then # ACCEPT
				var node2 = lexer.next
				assert node2 isa EOF
				var node1 = pop
				assert node1 isa AListing
				var node = new Start(node1, node2)
				(new ComputeProdLocationVisitor).enter_visit(node)
				return node
			else if action_type == 3 then # ERROR
				var node2 = new AError.init_error("Syntax error: unexpected {token}.", token.location)
				var node = new Start(null, node2)
				return node
			end
		end
	end

	private var reduce_table: Array[ReduceAction]
	private fun build_reduce_table
	do
		reduce_table = new Array[ReduceAction].with_items(
			new ReduceAction0(0),
			new ReduceAction1(0),
			new ReduceAction2(0),
			new ReduceAction3(0),
			new ReduceAction4(1),
			new ReduceAction5(1),
			new ReduceAction6(1),
			new ReduceAction7(1),
			new ReduceAction8(1),
			new ReduceAction9(1),
			new ReduceAction10(1),
			new ReduceAction11(1),
			new ReduceAction12(1),
			new ReduceAction13(1),
			new ReduceAction14(1),
			new ReduceAction15(1),
			new ReduceAction16(2),
			new ReduceAction17(3),
			new ReduceAction18(3),
			new ReduceAction19(4),
			new ReduceAction20(4),
			new ReduceAction21(5),
			new ReduceAction22(5),
			new ReduceAction23(5),
			new ReduceAction24(5),
			new ReduceAction25(5),
			new ReduceAction26(6),
			new ReduceAction27(6),
			new ReduceAction28(6),
			new ReduceAction29(6),
			new ReduceAction30(6),
			new ReduceAction31(6),
			new ReduceAction32(6),
			new ReduceAction33(7),
			new ReduceAction34(7)
		)
	end
end

redef class Prod
	# Location on the first token after the start of a production
	# So outside the production for epilon production
	var first_location: nullable Location

	# Location of the last token before the end of a production
	# So outside the production for epilon production
	var last_location: nullable Location
end

# Find location of production nodes
# Uses existing token locations to infer location of productions.
private class ComputeProdLocationVisitor
	super Visitor
	# Currenlty visited productions that need a first token
	var need_first_prods: Array[Prod] = new Array[Prod]

	# Already visited epsilon productions that waits something after them
	var need_after_epsilons: Array[Prod] = new Array[Prod]

	# Already visited epsilon production that waits something before them
	var need_before_epsilons: Array[Prod] = new Array[Prod]

	# Location of the last visited token in the current production
	var last_location: nullable Location = null

	redef fun visit(n: nullable ANode)
	do
		if n == null then
			return
		else if n isa Token then
			var loc = n.location
			_last_location = loc

			# Add a first token to productions that need one
			if not _need_first_prods.is_empty then
				for no in _need_first_prods do
					no._first_location = loc
				end
				_need_first_prods.clear
			end

			# Find location for already visited epsilon production that need one
			if not _need_after_epsilons.is_empty then
				for no in _need_after_epsilons do
					# Epsilon production that is in the middle of a non-epsilon production
					# The epsilon production has both a token before and after it
					var endl = loc
					var startl = no._last_location
					no.location = new Location(endl.file, startl.line_end, endl.line_start, startl.column_end, endl.column_start)
				end
				_need_after_epsilons.clear
			end
		else
			assert n isa Prod
			_need_first_prods.add(n)

			var old_last = _last_location
			_last_location = null
			n.visit_all(self)
			var endl = _last_location
			if endl == null then _last_location = old_last

			n._last_location = endl
			var startl = n._first_location
			if startl != null then
				# Non-epsilon production
				assert endl != null

				n.location = new Location(startl.file, startl.line_start, endl.line_end, startl.column_start, endl.column_end)

				if not _need_before_epsilons.is_empty then
					var loc = new Location(startl.file, startl.line_start, startl.line_start, startl.column_start, startl.column_start)
					for no in _need_before_epsilons do
						# Epsilon production that starts the current non-epsilon production
						no.location = loc
					end
					_need_before_epsilons.clear
				end

				if not _need_after_epsilons.is_empty then
					var loc = new Location(endl.file, endl.line_end, endl.line_end, endl.column_end, endl.column_end)
					for no in _need_after_epsilons do
						# Epsilon production that finishes the current non-epsilon production
						no.location = loc
					end
					_need_after_epsilons.clear
				end
			else
				# No first token means epsilon production (or "throw all my tokens" production)
				# So, it must be located it later
				if endl == null then
					# Epsilon production that starts a parent non-epsilon production
					_need_before_epsilons.add(n)
				else
					# Epsilon production in the middle or that finishes a parent non-epsilon production
					_need_after_epsilons.add(n)
				end
			end
		end
	end
end

# Each reduca action has its own class, this one is the root of the hierarchy.
private abstract class ReduceAction
	fun action(p: Parser) is abstract
	fun concat(l1, l2 : Array[Object]): Array[Object]
	do
		if l1.is_empty then return l2
		l1.append(l2)
		return l1
	end
	var goto: Int
	init(g: Int) do _goto = g
end

private class ReduceAction0
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var listnode2 = new Array[Object]
					var tendblocknode4 = nodearraylist1
					assert tendblocknode4 isa nullable TEndBlock
					var plistingnode1: nullable AListing = new AListing.init_alisting(
						listnode2,
						null,
						tendblocknode4
					)
					node_list = plistingnode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction1
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var listnode3 = new Array[Object]
					var listnode2 = nodearraylist1
					assert listnode2 isa Array[Object]
					listnode3 = concat(listnode3, listnode2)
					var tendblocknode5 = nodearraylist2
					assert tendblocknode5 isa nullable TEndBlock
					var plistingnode1: nullable AListing = new AListing.init_alisting(
						listnode3,
						null,
						tendblocknode5
					)
					node_list = plistingnode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction2
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var listnode2 = new Array[Object]
					var plabeldeclnode3 = nodearraylist1
					assert plabeldeclnode3 isa nullable ALabelDecl
					var tendblocknode4 = nodearraylist2
					assert tendblocknode4 isa nullable TEndBlock
					var plistingnode1: nullable AListing = new AListing.init_alisting(
						listnode2,
						plabeldeclnode3,
						tendblocknode4
					)
					node_list = plistingnode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction3
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist3 = p.pop
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var listnode3 = new Array[Object]
					var listnode2 = nodearraylist1
					assert listnode2 isa Array[Object]
					listnode3 = concat(listnode3, listnode2)
					var plabeldeclnode4 = nodearraylist2
					assert plabeldeclnode4 isa nullable ALabelDecl
					var tendblocknode5 = nodearraylist3
					assert tendblocknode5 isa nullable TEndBlock
					var plistingnode1: nullable AListing = new AListing.init_alisting(
						listnode3,
						plabeldeclnode4,
						tendblocknode5
					)
					node_list = plistingnode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction4
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var teolnode4 = nodearraylist1
					assert teolnode4 isa nullable TEol
					var plinenode1: nullable AEmptyLine = new AEmptyLine.init_aemptyline(
						null,
						null,
						teolnode4
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction5
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var plabeldeclnode2 = nodearraylist1
					assert plabeldeclnode2 isa nullable ALabelDecl
					var teolnode4 = nodearraylist2
					assert teolnode4 isa nullable TEol
					var plinenode1: nullable AEmptyLine = new AEmptyLine.init_aemptyline(
						plabeldeclnode2,
						null,
						teolnode4
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction6
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var tcommentnode3 = nodearraylist1
					assert tcommentnode3 isa nullable TComment
					var teolnode4 = nodearraylist2
					assert teolnode4 isa nullable TEol
					var plinenode1: nullable AEmptyLine = new AEmptyLine.init_aemptyline(
						null,
						tcommentnode3,
						teolnode4
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction7
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist3 = p.pop
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var plabeldeclnode2 = nodearraylist1
					assert plabeldeclnode2 isa nullable ALabelDecl
					var tcommentnode3 = nodearraylist2
					assert tcommentnode3 isa nullable TComment
					var teolnode4 = nodearraylist3
					assert teolnode4 isa nullable TEol
					var plinenode1: nullable AEmptyLine = new AEmptyLine.init_aemptyline(
						plabeldeclnode2,
						tcommentnode3,
						teolnode4
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction8
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var pinstructionnode3 = nodearraylist1
					assert pinstructionnode3 isa nullable AInstruction
					var teolnode5 = nodearraylist2
					assert teolnode5 isa nullable TEol
					var plinenode1: nullable AInstructionLine = new AInstructionLine.init_ainstructionline(
						null,
						pinstructionnode3,
						null,
						teolnode5
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction9
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist3 = p.pop
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var plabeldeclnode2 = nodearraylist1
					assert plabeldeclnode2 isa nullable ALabelDecl
					var pinstructionnode3 = nodearraylist2
					assert pinstructionnode3 isa nullable AInstruction
					var teolnode5 = nodearraylist3
					assert teolnode5 isa nullable TEol
					var plinenode1: nullable AInstructionLine = new AInstructionLine.init_ainstructionline(
						plabeldeclnode2,
						pinstructionnode3,
						null,
						teolnode5
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction10
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist3 = p.pop
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var pinstructionnode3 = nodearraylist1
					assert pinstructionnode3 isa nullable AInstruction
					var tcommentnode4 = nodearraylist2
					assert tcommentnode4 isa nullable TComment
					var teolnode5 = nodearraylist3
					assert teolnode5 isa nullable TEol
					var plinenode1: nullable AInstructionLine = new AInstructionLine.init_ainstructionline(
						null,
						pinstructionnode3,
						tcommentnode4,
						teolnode5
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction11
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist4 = p.pop
					var nodearraylist3 = p.pop
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var plabeldeclnode2 = nodearraylist1
					assert plabeldeclnode2 isa nullable ALabelDecl
					var pinstructionnode3 = nodearraylist2
					assert pinstructionnode3 isa nullable AInstruction
					var tcommentnode4 = nodearraylist3
					assert tcommentnode4 isa nullable TComment
					var teolnode5 = nodearraylist4
					assert teolnode5 isa nullable TEol
					var plinenode1: nullable AInstructionLine = new AInstructionLine.init_ainstructionline(
						plabeldeclnode2,
						pinstructionnode3,
						tcommentnode4,
						teolnode5
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction12
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var pdirectivenode3 = nodearraylist1
					assert pdirectivenode3 isa nullable ADirective
					var teolnode5 = nodearraylist2
					assert teolnode5 isa nullable TEol
					var plinenode1: nullable ADirectiveLine = new ADirectiveLine.init_adirectiveline(
						null,
						pdirectivenode3,
						null,
						teolnode5
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction13
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist3 = p.pop
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var plabeldeclnode2 = nodearraylist1
					assert plabeldeclnode2 isa nullable ALabelDecl
					var pdirectivenode3 = nodearraylist2
					assert pdirectivenode3 isa nullable ADirective
					var teolnode5 = nodearraylist3
					assert teolnode5 isa nullable TEol
					var plinenode1: nullable ADirectiveLine = new ADirectiveLine.init_adirectiveline(
						plabeldeclnode2,
						pdirectivenode3,
						null,
						teolnode5
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction14
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist3 = p.pop
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var pdirectivenode3 = nodearraylist1
					assert pdirectivenode3 isa nullable ADirective
					var tcommentnode4 = nodearraylist2
					assert tcommentnode4 isa nullable TComment
					var teolnode5 = nodearraylist3
					assert teolnode5 isa nullable TEol
					var plinenode1: nullable ADirectiveLine = new ADirectiveLine.init_adirectiveline(
						null,
						pdirectivenode3,
						tcommentnode4,
						teolnode5
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction15
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist4 = p.pop
					var nodearraylist3 = p.pop
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var plabeldeclnode2 = nodearraylist1
					assert plabeldeclnode2 isa nullable ALabelDecl
					var pdirectivenode3 = nodearraylist2
					assert pdirectivenode3 isa nullable ADirective
					var tcommentnode4 = nodearraylist3
					assert tcommentnode4 isa nullable TComment
					var teolnode5 = nodearraylist4
					assert teolnode5 isa nullable TEol
					var plinenode1: nullable ADirectiveLine = new ADirectiveLine.init_adirectiveline(
						plabeldeclnode2,
						pdirectivenode3,
						tcommentnode4,
						teolnode5
					)
					node_list = plinenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction16
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var tidnode2 = nodearraylist1
					assert tidnode2 isa nullable TId
					var tcolonnode3 = nodearraylist2
					assert tcolonnode3 isa nullable TColon
					var plabeldeclnode1: nullable ALabelDecl = new ALabelDecl.init_alabeldecl(
						tidnode2,
						tcolonnode3
					)
					node_list = plabeldeclnode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction17
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var tidnode2 = nodearraylist1
					assert tidnode2 isa nullable TId
					var pinstructionnode1: nullable AUnaryInstruction = new AUnaryInstruction.init_aunaryinstruction(
						tidnode2
					)
					node_list = pinstructionnode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction18
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var tidnode2 = nodearraylist1
					assert tidnode2 isa nullable TId
					var poperandnode3 = nodearraylist2
					assert poperandnode3 isa nullable AOperand
					var pinstructionnode1: nullable ABinaryInstruction = new ABinaryInstruction.init_abinaryinstruction(
						tidnode2,
						poperandnode3
					)
					node_list = pinstructionnode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction19
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var pvaluenode2 = nodearraylist1
					assert pvaluenode2 isa nullable AValue
					var poperandnode1: nullable AImmediateOperand = new AImmediateOperand.init_aimmediateoperand(
						pvaluenode2
					)
					node_list = poperandnode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction20
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist3 = p.pop
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var pvaluenode2 = nodearraylist1
					assert pvaluenode2 isa nullable AValue
					var tcommanode3 = nodearraylist2
					assert tcommanode3 isa nullable TComma
					var tidnode4 = nodearraylist3
					assert tidnode4 isa nullable TId
					var poperandnode1: nullable AAnyOperand = new AAnyOperand.init_aanyoperand(
						pvaluenode2,
						tcommanode3,
						tidnode4
					)
					node_list = poperandnode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction21
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var tidnode2 = nodearraylist1
					assert tidnode2 isa nullable TId
					var pvaluenode1: nullable ALabelValue = new ALabelValue.init_alabelvalue(
						tidnode2
					)
					node_list = pvaluenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction22
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var tnumbernode2 = nodearraylist1
					assert tnumbernode2 isa nullable TNumber
					var pvaluenode1: nullable ANumberValue = new ANumberValue.init_anumbervalue(
						tnumbernode2
					)
					node_list = pvaluenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction23
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var tcharnode2 = nodearraylist1
					assert tcharnode2 isa nullable TChar
					var pvaluenode1: nullable ACharValue = new ACharValue.init_acharvalue(
						tcharnode2
					)
					node_list = pvaluenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction24
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var tstringnode2 = nodearraylist1
					assert tstringnode2 isa nullable TString
					var pvaluenode1: nullable AStringValue = new AStringValue.init_astringvalue(
						tstringnode2
					)
					node_list = pvaluenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction25
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var thexnode2 = nodearraylist1
					assert thexnode2 isa nullable THex
					var pvaluenode1: nullable AHexValue = new AHexValue.init_ahexvalue(
						thexnode2
					)
					node_list = pvaluenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction26
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var ttkbytenode2 = nodearraylist1
					assert ttkbytenode2 isa nullable TTkByte
					var pvaluenode3 = nodearraylist2
					assert pvaluenode3 isa nullable AValue
					var pdirectivenode1: nullable AByteDirective = new AByteDirective.init_abytedirective(
						ttkbytenode2,
						pvaluenode3
					)
					node_list = pdirectivenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction27
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var ttkwordnode2 = nodearraylist1
					assert ttkwordnode2 isa nullable TTkWord
					var pvaluenode3 = nodearraylist2
					assert pvaluenode3 isa nullable AValue
					var pdirectivenode1: nullable AWordDirective = new AWordDirective.init_aworddirective(
						ttkwordnode2,
						pvaluenode3
					)
					node_list = pdirectivenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction28
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var ttkblocknode2 = nodearraylist1
					assert ttkblocknode2 isa nullable TTkBlock
					var pvaluenode3 = nodearraylist2
					assert pvaluenode3 isa nullable AValue
					var pdirectivenode1: nullable ABlockDirective = new ABlockDirective.init_ablockdirective(
						ttkblocknode2,
						pvaluenode3
					)
					node_list = pdirectivenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction29
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var ttkasciinode2 = nodearraylist1
					assert ttkasciinode2 isa nullable TTkAscii
					var pvaluenode3 = nodearraylist2
					assert pvaluenode3 isa nullable AValue
					var pdirectivenode1: nullable AAsciiDirective = new AAsciiDirective.init_aasciidirective(
						ttkasciinode2,
						pvaluenode3
					)
					node_list = pdirectivenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction30
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var ttkaddrssnode2 = nodearraylist1
					assert ttkaddrssnode2 isa nullable TTkAddrss
					var pvaluenode3 = nodearraylist2
					assert pvaluenode3 isa nullable AValue
					var pdirectivenode1: nullable AAddrssDirective = new AAddrssDirective.init_aaddrssdirective(
						ttkaddrssnode2,
						pvaluenode3
					)
					node_list = pdirectivenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction31
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var ttkequatenode2 = nodearraylist1
					assert ttkequatenode2 isa nullable TTkEquate
					var pvaluenode3 = nodearraylist2
					assert pvaluenode3 isa nullable AValue
					var pdirectivenode1: nullable AEquateDirective = new AEquateDirective.init_aequatedirective(
						ttkequatenode2,
						pvaluenode3
					)
					node_list = pdirectivenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction32
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var ttkburnnode2 = nodearraylist1
					assert ttkburnnode2 isa nullable TTkBurn
					var pvaluenode3 = nodearraylist2
					assert pvaluenode3 isa nullable AValue
					var pdirectivenode1: nullable ABurnDirective = new ABurnDirective.init_aburndirective(
						ttkburnnode2,
						pvaluenode3
					)
					node_list = pdirectivenode1
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction33
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist1 = p.pop
					var listnode2 = new Array[Object]
					var plinenode1 = nodearraylist1
					if plinenode1 != null then
						listnode2.add(plinenode1)
					end
					node_list = listnode2
					p.push(p.go_to(_goto), node_list)
	end
end
private class ReduceAction34
	super ReduceAction
	redef fun action(p: Parser)
	do
					var node_list: nullable Object = null
					var nodearraylist2 = p.pop
					var nodearraylist1 = p.pop
					var listnode3 = new Array[Object]
					var listnode1 = nodearraylist1
					assert listnode1 isa Array[Object]
					var plinenode2 = nodearraylist2
					listnode3 = concat(listnode3, listnode1)
					if plinenode2 != null then
						listnode3.add(plinenode2)
					end
					node_list = listnode3
					p.push(p.go_to(_goto), node_list)
	end
end
