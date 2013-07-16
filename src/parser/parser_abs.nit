# Raw AST node hierarchy.
# This file was generated by SableCC (http://www.sablecc.org/).
package parser_abs

import location

# Root of the AST hierarchy
abstract class ANode
	var _location: nullable Location

	# Location is set during AST building. Once built, location cannon be null
	# However, manual instanciated nodes may need mode care
	fun location: Location do return _location.as(not null)
end

# Ancestor of all tokens
abstract class Token
	super ANode
end

# Ancestor of all productions
abstract class Prod
	super ANode
	fun location=(loc: Location) do _location = loc
end
class TEol
	super Token
end
class TComment
	super Token
end
class TKwmodule
	super Token
end
class TKwimport
	super Token
end
class TKwclass
	super Token
end
class TKwabstract
	super Token
end
class TKwinterface
	super Token
end
class TKwenum
	super Token
end
class TKwend
	super Token
end
class TKwmeth
	super Token
end
class TKwtype
	super Token
end
class TKwinit
	super Token
end
class TKwredef
	super Token
end
class TKwis
	super Token
end
class TKwdo
	super Token
end
class TKwreadable
	super Token
end
class TKwwritable
	super Token
end
class TKwvar
	super Token
end
class TKwintern
	super Token
end
class TKwextern
	super Token
end
class TKwprotected
	super Token
end
class TKwprivate
	super Token
end
class TKwintrude
	super Token
end
class TKwif
	super Token
end
class TKwthen
	super Token
end
class TKwelse
	super Token
end
class TKwwhile
	super Token
end
class TKwloop
	super Token
end
class TKwfor
	super Token
end
class TKwin
	super Token
end
class TKwand
	super Token
end
class TKwor
	super Token
end
class TKwnot
	super Token
end
class TKwreturn
	super Token
end
class TKwcontinue
	super Token
end
class TKwbreak
	super Token
end
class TKwabort
	super Token
end
class TKwassert
	super Token
end
class TKwnew
	super Token
end
class TKwisa
	super Token
end
class TKwonce
	super Token
end
class TKwsuper
	super Token
end
class TKwself
	super Token
end
class TKwtrue
	super Token
end
class TKwfalse
	super Token
end
class TKwnull
	super Token
end
class TKwas
	super Token
end
class TKwnullable
	super Token
end
class TKwisset
	super Token
end
class TKwlabel
	super Token
end
class TKwdebug
	super Token
end
class TOpar
	super Token
end
class TCpar
	super Token
end
class TObra
	super Token
end
class TCbra
	super Token
end
class TComma
	super Token
end
class TColumn
	super Token
end
class TQuad
	super Token
end
class TAssign
	super Token
end
class TPluseq
	super Token
end
class TMinuseq
	super Token
end
class TDotdotdot
	super Token
end
class TDotdot
	super Token
end
class TDot
	super Token
end
class TPlus
	super Token
end
class TMinus
	super Token
end
class TStar
	super Token
end
class TSlash
	super Token
end
class TPercent
	super Token
end
class TEq
	super Token
end
class TNe
	super Token
end
class TLt
	super Token
end
class TLe
	super Token
end
class TLl
	super Token
end
class TGt
	super Token
end
class TGe
	super Token
end
class TGg
	super Token
end
class TStarship
	super Token
end
class TBang
	super Token
end
class TAt
	super Token
end
class TClassid
	super Token
end
class TId
	super Token
end
class TAttrid
	super Token
end
class TNumber
	super Token
end
class TFloat
	super Token
end
class TChar
	super Token
end
class TString
	super Token
end
class TStartString
	super Token
end
class TMidString
	super Token
end
class TEndString
	super Token
end
class TBadChar
	super Token
end
class TBadString
	super Token
end
class TExternCodeSegment
	super Token
end
class EOF
	super Token
private init noinit do end
end
class AError
	super EOF
private init noinit do end
end

class AModule super Prod end
class AModuledecl super Prod end
class AImport super Prod end
class AVisibility super Prod end
class AClassdef super Prod end
class AClasskind super Prod end
class AFormaldef super Prod end
class ASuperclass super Prod end
class APropdef super Prod end
class AAble super Prod end
class AMethid super Prod end
class ASignature super Prod end
class AParam super Prod end
class AClosureDecl super Prod end
class AType super Prod end
class ALabel super Prod end
class AExpr super Prod end
class AExprs super Prod end
class AAssignOp super Prod end
class AClosureDef super Prod end
class AClosureId super Prod end
class AModuleName super Prod end
class AExternCalls super Prod end
class AExternCall super Prod end
class AInLanguage super Prod end
class AExternCodeBlock super Prod end
class AQualified super Prod end
class ADoc super Prod end
class AAnnotations super Prod end
class AAnnotation super Prod end
class AAtArg super Prod end
class AAtid super Prod end

class AModule
	super AModule
    readable var _n_moduledecl: nullable AModuledecl = null
    readable var _n_imports: List[AImport] = new List[AImport]
    readable var _n_extern_code_blocks: List[AExternCodeBlock] = new List[AExternCodeBlock]
    readable var _n_classdefs: List[AClassdef] = new List[AClassdef]
end
class AModuledecl
	super AModuledecl
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwmodule: TKwmodule
    readable var _n_name: AModuleName
    readable var _n_annotations: nullable AAnnotations = null
end
class AStdImport
	super AImport
    readable var _n_visibility: AVisibility
    readable var _n_kwimport: TKwimport
    readable var _n_name: AModuleName
    readable var _n_annotations: nullable AAnnotations = null
end
class ANoImport
	super AImport
    readable var _n_visibility: AVisibility
    readable var _n_kwimport: TKwimport
    readable var _n_kwend: TKwend
end
class APublicVisibility
	super AVisibility
end
class APrivateVisibility
	super AVisibility
    readable var _n_kwprivate: TKwprivate
end
class AProtectedVisibility
	super AVisibility
    readable var _n_kwprotected: TKwprotected
end
class AIntrudeVisibility
	super AVisibility
    readable var _n_kwintrude: TKwintrude
end
class AStdClassdef
	super AClassdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_classkind: AClasskind
    readable var _n_id: nullable TClassid = null
    readable var _n_formaldefs: List[AFormaldef] = new List[AFormaldef]
    readable var _n_annotations: nullable AAnnotations = null
    readable var _n_extern_code_block: nullable AExternCodeBlock = null
    readable var _n_superclasses: List[ASuperclass] = new List[ASuperclass]
    readable var _n_propdefs: List[APropdef] = new List[APropdef]
    readable var _n_kwend: TKwend
end
class ATopClassdef
	super AClassdef
    readable var _n_propdefs: List[APropdef] = new List[APropdef]
end
class AMainClassdef
	super AClassdef
    readable var _n_propdefs: List[APropdef] = new List[APropdef]
end
class AConcreteClasskind
	super AClasskind
    readable var _n_kwclass: TKwclass
end
class AAbstractClasskind
	super AClasskind
    readable var _n_kwabstract: TKwabstract
    readable var _n_kwclass: TKwclass
end
class AInterfaceClasskind
	super AClasskind
    readable var _n_kwinterface: TKwinterface
end
class AEnumClasskind
	super AClasskind
    readable var _n_kwenum: TKwenum
end
class AExternClasskind
	super AClasskind
    readable var _n_kwextern: TKwextern
    readable var _n_kwclass: nullable TKwclass = null
end
class AFormaldef
	super AFormaldef
    readable var _n_id: TClassid
    readable var _n_type: nullable AType = null
    readable var _n_annotations: nullable AAnnotations = null
end
class ASuperclass
	super ASuperclass
    readable var _n_kwsuper: TKwsuper
    readable var _n_type: AType
    readable var _n_annotations: nullable AAnnotations = null
end
class AAttrPropdef
	super APropdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_readable: nullable AAble = null
    readable var _n_writable: nullable AAble = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwvar: TKwvar
    readable var _n_id: nullable TAttrid = null
    readable var _n_id2: nullable TId = null
    readable var _n_type: nullable AType = null
    readable var _n_annotations: nullable AAnnotations = null
    readable var _n_expr: nullable AExpr = null
end
class AMethPropdef
	super APropdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_methid: AMethid
    readable var _n_signature: ASignature
end
class ADeferredMethPropdef
	super APropdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwmeth: TKwmeth
    readable var _n_methid: AMethid
    readable var _n_signature: ASignature
    readable var _n_annotations: nullable AAnnotations = null
end
class AInternMethPropdef
	super APropdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwmeth: TKwmeth
    readable var _n_methid: AMethid
    readable var _n_signature: ASignature
end
class AExternMethPropdef
	super APropdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwmeth: TKwmeth
    readable var _n_methid: AMethid
    readable var _n_signature: ASignature
    readable var _n_extern: nullable TString = null
    readable var _n_extern_calls: nullable AExternCalls = null
    readable var _n_extern_code_block: nullable AExternCodeBlock = null
end
class AConcreteMethPropdef
	super APropdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwmeth: TKwmeth
    readable var _n_methid: AMethid
    readable var _n_signature: ASignature
    readable var _n_annotations: nullable AAnnotations = null
    readable var _n_block: nullable AExpr = null
end
class AConcreteInitPropdef
	super APropdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwinit: TKwinit
    readable var _n_methid: nullable AMethid = null
    readable var _n_signature: ASignature
    readable var _n_annotations: nullable AAnnotations = null
    readable var _n_block: nullable AExpr = null
end
class AExternInitPropdef
	super APropdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwnew: TKwnew
    readable var _n_methid: nullable AMethid = null
    readable var _n_signature: ASignature
    readable var _n_extern: nullable TString = null
    readable var _n_extern_calls: nullable AExternCalls = null
    readable var _n_extern_code_block: nullable AExternCodeBlock = null
end
class AMainMethPropdef
	super APropdef
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_block: nullable AExpr = null
end
class ATypePropdef
	super APropdef
    readable var _n_doc: nullable ADoc = null
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: AVisibility
    readable var _n_kwtype: TKwtype
    readable var _n_id: TClassid
    readable var _n_type: AType
    readable var _n_annotations: nullable AAnnotations = null
end
class AReadAble
	super AAble
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_kwreadable: TKwreadable
end
class AWriteAble
	super AAble
    readable var _n_kwredef: nullable TKwredef = null
    readable var _n_visibility: nullable AVisibility = null
    readable var _n_kwwritable: TKwwritable
end
class AIdMethid
	super AMethid
    readable var _n_id: TId
end
class APlusMethid
	super AMethid
    readable var _n_plus: TPlus
end
class AMinusMethid
	super AMethid
    readable var _n_minus: TMinus
end
class AStarMethid
	super AMethid
    readable var _n_star: TStar
end
class ASlashMethid
	super AMethid
    readable var _n_slash: TSlash
end
class APercentMethid
	super AMethid
    readable var _n_percent: TPercent
end
class AEqMethid
	super AMethid
    readable var _n_eq: TEq
end
class ANeMethid
	super AMethid
    readable var _n_ne: TNe
end
class ALeMethid
	super AMethid
    readable var _n_le: TLe
end
class AGeMethid
	super AMethid
    readable var _n_ge: TGe
end
class ALtMethid
	super AMethid
    readable var _n_lt: TLt
end
class AGtMethid
	super AMethid
    readable var _n_gt: TGt
end
class ALlMethid
	super AMethid
    readable var _n_ll: TLl
end
class AGgMethid
	super AMethid
    readable var _n_gg: TGg
end
class ABraMethid
	super AMethid
    readable var _n_obra: TObra
    readable var _n_cbra: TCbra
end
class AStarshipMethid
	super AMethid
    readable var _n_starship: TStarship
end
class AAssignMethid
	super AMethid
    readable var _n_id: TId
    readable var _n_assign: TAssign
end
class ABraassignMethid
	super AMethid
    readable var _n_obra: TObra
    readable var _n_cbra: TCbra
    readable var _n_assign: TAssign
end
class ASignature
	super ASignature
    readable var _n_opar: nullable TOpar = null
    readable var _n_params: List[AParam] = new List[AParam]
    readable var _n_cpar: nullable TCpar = null
    readable var _n_type: nullable AType = null
    readable var _n_closure_decls: List[AClosureDecl] = new List[AClosureDecl]
end
class AParam
	super AParam
    readable var _n_id: TId
    readable var _n_type: nullable AType = null
    readable var _n_dotdotdot: nullable TDotdotdot = null
    readable var _n_annotations: nullable AAnnotations = null
end
class AClosureDecl
	super AClosureDecl
    readable var _n_kwbreak: nullable TKwbreak = null
    readable var _n_bang: TBang
    readable var _n_id: TId
    readable var _n_signature: ASignature
    readable var _n_expr: nullable AExpr = null
end
class AType
	super AType
    readable var _n_kwnullable: nullable TKwnullable = null
    readable var _n_id: TClassid
    readable var _n_types: List[AType] = new List[AType]
    readable var _n_annotations: nullable AAnnotations = null
end
class ALabel
	super ALabel
    readable var _n_kwlabel: TKwlabel
    readable var _n_id: TId
end
class ABlockExpr
	super AExpr
    readable var _n_expr: List[AExpr] = new List[AExpr]
    readable var _n_kwend: nullable TKwend = null
end
class AVardeclExpr
	super AExpr
    readable var _n_kwvar: TKwvar
    readable var _n_id: TId
    readable var _n_type: nullable AType = null
    readable var _n_assign: nullable TAssign = null
    readable var _n_expr: nullable AExpr = null
    readable var _n_annotations: nullable AAnnotations = null
end
class AReturnExpr
	super AExpr
    readable var _n_kwreturn: nullable TKwreturn = null
    readable var _n_expr: nullable AExpr = null
end
class ABreakExpr
	super AExpr
    readable var _n_kwbreak: TKwbreak
    readable var _n_label: nullable ALabel = null
    readable var _n_expr: nullable AExpr = null
end
class AAbortExpr
	super AExpr
    readable var _n_kwabort: TKwabort
end
class AContinueExpr
	super AExpr
    readable var _n_kwcontinue: nullable TKwcontinue = null
    readable var _n_label: nullable ALabel = null
    readable var _n_expr: nullable AExpr = null
end
class ADoExpr
	super AExpr
    readable var _n_kwdo: TKwdo
    readable var _n_block: nullable AExpr = null
    readable var _n_label: nullable ALabel = null
end
class AIfExpr
	super AExpr
    readable var _n_kwif: TKwif
    readable var _n_expr: AExpr
    readable var _n_then: nullable AExpr = null
    readable var _n_else: nullable AExpr = null
end
class AIfexprExpr
	super AExpr
    readable var _n_kwif: TKwif
    readable var _n_expr: AExpr
    readable var _n_kwthen: TKwthen
    readable var _n_then: AExpr
    readable var _n_kwelse: TKwelse
    readable var _n_else: AExpr
end
class AWhileExpr
	super AExpr
    readable var _n_kwwhile: TKwwhile
    readable var _n_expr: AExpr
    readable var _n_kwdo: TKwdo
    readable var _n_block: nullable AExpr = null
    readable var _n_label: nullable ALabel = null
end
class ALoopExpr
	super AExpr
    readable var _n_kwloop: TKwloop
    readable var _n_block: nullable AExpr = null
    readable var _n_label: nullable ALabel = null
end
class AForExpr
	super AExpr
    readable var _n_kwfor: TKwfor
    readable var _n_ids: List[TId] = new List[TId]
    readable var _n_expr: AExpr
    readable var _n_kwdo: TKwdo
    readable var _n_block: nullable AExpr = null
    readable var _n_label: nullable ALabel = null
end
class AAssertExpr
	super AExpr
    readable var _n_kwassert: TKwassert
    readable var _n_id: nullable TId = null
    readable var _n_expr: AExpr
    readable var _n_else: nullable AExpr = null
end
class AOnceExpr
	super AExpr
    readable var _n_kwonce: TKwonce
    readable var _n_expr: AExpr
end
class ASendExpr
	super AExpr
    readable var _n_expr: AExpr
end
class ABinopExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AOrExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AAndExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AOrElseExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ANotExpr
	super AExpr
    readable var _n_kwnot: TKwnot
    readable var _n_expr: AExpr
end
class AEqExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AEeExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ANeExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ALtExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ALeExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ALlExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AGtExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AGeExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AGgExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AIsaExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_type: AType
end
class APlusExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AMinusExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AStarshipExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AStarExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class ASlashExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class APercentExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
end
class AUminusExpr
	super AExpr
    readable var _n_minus: TMinus
    readable var _n_expr: AExpr
end
class ANewExpr
	super AExpr
    readable var _n_kwnew: TKwnew
    readable var _n_type: AType
    readable var _n_id: nullable TId = null
    readable var _n_args: AExprs
end
class AAttrExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_id: TAttrid
end
class AAttrAssignExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_id: TAttrid
    readable var _n_assign: TAssign
    readable var _n_value: AExpr
end
class AAttrReassignExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_id: TAttrid
    readable var _n_assign_op: AAssignOp
    readable var _n_value: AExpr
end
class ACallExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_id: TId
    readable var _n_args: AExprs
    readable var _n_closure_defs: List[AClosureDef] = new List[AClosureDef]
end
class ACallAssignExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_id: TId
    readable var _n_args: AExprs
    readable var _n_assign: TAssign
    readable var _n_value: AExpr
end
class ACallReassignExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_id: TId
    readable var _n_args: AExprs
    readable var _n_assign_op: AAssignOp
    readable var _n_value: AExpr
end
class ASuperExpr
	super AExpr
    readable var _n_qualified: nullable AQualified = null
    readable var _n_kwsuper: TKwsuper
    readable var _n_args: AExprs
end
class AInitExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_kwinit: TKwinit
    readable var _n_args: AExprs
end
class ABraExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_args: AExprs
    readable var _n_closure_defs: List[AClosureDef] = new List[AClosureDef]
end
class ABraAssignExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_args: AExprs
    readable var _n_assign: TAssign
    readable var _n_value: AExpr
end
class ABraReassignExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_args: AExprs
    readable var _n_assign_op: AAssignOp
    readable var _n_value: AExpr
end
class AClosureCallExpr
	super AExpr
    readable var _n_id: TId
    readable var _n_args: AExprs
    readable var _n_closure_defs: List[AClosureDef] = new List[AClosureDef]
end
class AVarExpr
	super AExpr
    readable var _n_id: TId
end
class AVarAssignExpr
	super AExpr
    readable var _n_id: TId
    readable var _n_assign: TAssign
    readable var _n_value: AExpr
end
class AVarReassignExpr
	super AExpr
    readable var _n_id: TId
    readable var _n_assign_op: AAssignOp
    readable var _n_value: AExpr
end
class ARangeExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
    readable var _n_annotations: nullable AAnnotations = null
end
class ACrangeExpr
	super AExpr
    readable var _n_obra: TObra
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
    readable var _n_cbra: TCbra
    readable var _n_annotations: nullable AAnnotations = null
end
class AOrangeExpr
	super AExpr
    readable var _n_obra: TObra
    readable var _n_expr: AExpr
    readable var _n_expr2: AExpr
    readable var _n_cbra: TObra
    readable var _n_annotations: nullable AAnnotations = null
end
class AArrayExpr
	super AExpr
    readable var _n_exprs: AExprs
    readable var _n_annotations: nullable AAnnotations = null
end
class ASelfExpr
	super AExpr
    readable var _n_kwself: TKwself
    readable var _n_annotations: nullable AAnnotations = null
end
class AImplicitSelfExpr
	super AExpr
end
class ATrueExpr
	super AExpr
    readable var _n_kwtrue: TKwtrue
    readable var _n_annotations: nullable AAnnotations = null
end
class AFalseExpr
	super AExpr
    readable var _n_kwfalse: TKwfalse
    readable var _n_annotations: nullable AAnnotations = null
end
class ANullExpr
	super AExpr
    readable var _n_kwnull: TKwnull
    readable var _n_annotations: nullable AAnnotations = null
end
class AIntExpr
	super AExpr
    readable var _n_number: TNumber
    readable var _n_annotations: nullable AAnnotations = null
end
class AFloatExpr
	super AExpr
    readable var _n_float: TFloat
    readable var _n_annotations: nullable AAnnotations = null
end
class ACharExpr
	super AExpr
    readable var _n_char: TChar
    readable var _n_annotations: nullable AAnnotations = null
end
class AStringExpr
	super AExpr
    readable var _n_string: TString
    readable var _n_annotations: nullable AAnnotations = null
end
class AStartStringExpr
	super AExpr
    readable var _n_string: TStartString
end
class AMidStringExpr
	super AExpr
    readable var _n_string: TMidString
end
class AEndStringExpr
	super AExpr
    readable var _n_string: TEndString
end
class ASuperstringExpr
	super AExpr
    readable var _n_exprs: List[AExpr] = new List[AExpr]
    readable var _n_annotations: nullable AAnnotations = null
end
class AParExpr
	super AExpr
    readable var _n_opar: TOpar
    readable var _n_expr: AExpr
    readable var _n_cpar: TCpar
    readable var _n_annotations: nullable AAnnotations = null
end
class AAsCastExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_kwas: TKwas
    readable var _n_opar: TOpar
    readable var _n_type: AType
    readable var _n_cpar: TCpar
end
class AAsNotnullExpr
	super AExpr
    readable var _n_expr: AExpr
    readable var _n_kwas: TKwas
    readable var _n_opar: TOpar
    readable var _n_kwnot: TKwnot
    readable var _n_kwnull: TKwnull
    readable var _n_cpar: TCpar
end
class AIssetAttrExpr
	super AExpr
    readable var _n_kwisset: TKwisset
    readable var _n_expr: AExpr
    readable var _n_id: TAttrid
end
class ADebugTypeExpr
	super AExpr
    readable var _n_kwdebug: TKwdebug
    readable var _n_kwtype: TKwtype
    readable var _n_expr: AExpr
    readable var _n_type: AType
end
class AListExprs
	super AExprs
    readable var _n_exprs: List[AExpr] = new List[AExpr]
end
class AParExprs
	super AExprs
    readable var _n_opar: TOpar
    readable var _n_exprs: List[AExpr] = new List[AExpr]
    readable var _n_cpar: TCpar
end
class ABraExprs
	super AExprs
    readable var _n_obra: TObra
    readable var _n_exprs: List[AExpr] = new List[AExpr]
    readable var _n_cbra: TCbra
end
class APlusAssignOp
	super AAssignOp
    readable var _n_pluseq: TPluseq
end
class AMinusAssignOp
	super AAssignOp
    readable var _n_minuseq: TMinuseq
end
class AClosureDef
	super AClosureDef
    readable var _n_bang: TBang
    readable var _n_id: AClosureId
    readable var _n_ids: List[TId] = new List[TId]
    readable var _n_kwdo: nullable TKwdo = null
    readable var _n_expr: nullable AExpr = null
    readable var _n_label: nullable ALabel = null
end
class ASimpleClosureId
	super AClosureId
    readable var _n_id: TId
end
class ABreakClosureId
	super AClosureId
    readable var _n_kwbreak: TKwbreak
end
class AModuleName
	super AModuleName
    readable var _n_quad: nullable TQuad = null
    readable var _n_path: List[TId] = new List[TId]
    readable var _n_id: TId
end
class AExternCalls
	super AExternCalls
    readable var _n_kwimport: TKwimport
    readable var _n_extern_calls: List[AExternCall] = new List[AExternCall]
end
class AExternCall
	super AExternCall
end
class ASuperExternCall
	super AExternCall
    readable var _n_kwsuper: TKwsuper
end
class ALocalPropExternCall
	super AExternCall
    readable var _n_methid: AMethid
end
class AFullPropExternCall
	super AExternCall
    readable var _n_classid: TClassid
    readable var _n_quad: nullable TQuad = null
    readable var _n_methid: AMethid
end
class AInitPropExternCall
	super AExternCall
    readable var _n_classid: TClassid
end
class ACastAsExternCall
	super AExternCall
    readable var _n_from_type: AType
    readable var _n_kwas: TKwas
    readable var _n_to_type: AType
end
class AAsNullableExternCall
	super AExternCall
    readable var _n_type: AType
    readable var _n_kwas: TKwas
    readable var _n_kwnullable: TKwnullable
end
class AAsNotNullableExternCall
	super AExternCall
    readable var _n_type: AType
    readable var _n_kwas: TKwas
    readable var _n_kwnot: TKwnot
    readable var _n_kwnullable: TKwnullable
end
class AInLanguage
	super AInLanguage
    readable var _n_kwin: TKwin
    readable var _n_string: TString
end
class AExternCodeBlock
	super AExternCodeBlock
    readable var _n_in_language: nullable AInLanguage = null
    readable var _n_extern_code_segment: TExternCodeSegment
end
class AQualified
	super AQualified
    readable var _n_id: List[TId] = new List[TId]
    readable var _n_classid: nullable TClassid = null
end
class ADoc
	super ADoc
    readable var _n_comment: List[TComment] = new List[TComment]
end
class AAnnotations
	super AAnnotations
    readable var _n_at: nullable TAt = null
    readable var _n_opar: nullable TOpar = null
    readable var _n_items: List[AAnnotation] = new List[AAnnotation]
    readable var _n_cpar: nullable TCpar = null
end
class AAnnotation
	super AAnnotation
    readable var _n_atid: AAtid
    readable var _n_opar: nullable TOpar = null
    readable var _n_args: List[AAtArg] = new List[AAtArg]
    readable var _n_cpar: nullable TCpar = null
    readable var _n_annotations: nullable AAnnotations = null
end
class ATypeAtArg
	super AAtArg
    readable var _n_type: AType
end
class AExprAtArg
	super AAtArg
    readable var _n_expr: AExpr
end
class AAtAtArg
	super AAtArg
    readable var _n_annotations: AAnnotations
end
class AIdAtid
	super AAtid
    readable var _n_id: TId
end
class AKwexternAtid
	super AAtid
    readable var _n_id: TKwextern
end
class AKwinternAtid
	super AAtid
    readable var _n_id: TKwintern
end
class AKwreadableAtid
	super AAtid
    readable var _n_id: TKwreadable
end
class AKwwritableAtid
	super AAtid
    readable var _n_id: TKwwritable
end
class AKwimportAtid
	super AAtid
    readable var _n_id: TKwimport
end

class Start
	super Prod
    readable var _n_base: nullable AModule
    readable var _n_eof: EOF
    init(
        n_base: nullable AModule,
        n_eof: EOF)
    do
        _n_base = n_base
        _n_eof = n_eof
    end

end
