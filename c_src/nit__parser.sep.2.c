#include "nit__parser.sep.0.h"
/* method parser#ReduceAction0#action for (self: ReduceAction0, Parser) */
void nit__parser___nit__parser__ReduceAction0___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode4 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode6 = var3;
var_pclassdefnode5 = var_nodearraylist1;
/* <var_pclassdefnode5:nullable Object> isa nullable AClassdef */
cltype = type_nullable__nit__AClassdef.color;
idtype = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode5 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_pclassdefnode5&3)?type_info[((long)var_pclassdefnode5&3)]:var_pclassdefnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pclassdefnode5&3)?type_info[((long)var_pclassdefnode5&3)]:var_pclassdefnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1143);
fatal_exit(1);
}
if (var_pclassdefnode5 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode5,((val*)NULL)) on <var_pclassdefnode5:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_pclassdefnode5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode5, var_other); /* == on <var_pclassdefnode5:nullable AClassdef(AClassdef)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode6, var_pclassdefnode5); /* Direct call array#Array#add on <var_listnode6:Array[Object]>*/
}
} else {
}
var10 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var10, ((val*)NULL), var_listnode3, var_listnode4, var_listnode6); /* Direct call parser_prod#AModule#init_amodule on <var10:AModule>*/
}
var_pmodulenode1 = var10;
var_node_list = var_pmodulenode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction0> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1#action for (self: ReduceAction1, Parser) */
void nit__parser___nit__parser__ReduceAction1___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode6 = var4;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1168);
fatal_exit(1);
}
var_pclassdefnode5 = var_nodearraylist2;
/* <var_pclassdefnode5:nullable Object> isa nullable AClassdef */
cltype7 = type_nullable__nit__AClassdef.color;
idtype8 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode5 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pclassdefnode5&3)?type_info[((long)var_pclassdefnode5&3)]:var_pclassdefnode5->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pclassdefnode5&3)?type_info[((long)var_pclassdefnode5&3)]:var_pclassdefnode5->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1170);
fatal_exit(1);
}
if (var_pclassdefnode5 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode5,((val*)NULL)) on <var_pclassdefnode5:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_pclassdefnode5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode5, var_other); /* == on <var_pclassdefnode5:nullable AClassdef(AClassdef)>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode6, var_pclassdefnode5); /* Direct call array#Array#add on <var_listnode6:Array[Object]>*/
}
} else {
}
var14 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var14, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode6); /* Direct call parser_prod#AModule#init_amodule on <var14:AModule>*/
}
var_pmodulenode1 = var14;
var_node_list = var_pmodulenode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction2#action for (self: ReduceAction2, Parser) */
void nit__parser___nit__parser__ReduceAction2___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode4 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1195);
fatal_exit(1);
}
{
var6 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var6;
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype8 = type_nullable__nit__AClassdef.color;
idtype9 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1198);
fatal_exit(1);
}
if (var_pclassdefnode6 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,((val*)NULL)) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other); /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var15 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var15, ((val*)NULL), var_listnode4, var_listnode5, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var15:AModule>*/
}
var_pmodulenode1 = var15;
var_node_list = var_pmodulenode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction2> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction3#action for (self: ReduceAction3, Parser) */
void nit__parser___nit__parser__ReduceAction3___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1224);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1226);
fatal_exit(1);
}
{
var10 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var10;
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable__nit__AClassdef.color;
idtype13 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1229);
fatal_exit(1);
}
if (var_pclassdefnode6 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,((val*)NULL)) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other); /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var19 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var19, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var19:AModule>*/
}
var_pmodulenode1 = var19;
var_node_list = var_pmodulenode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction3> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction4#action for (self: ReduceAction4, Parser) */
void nit__parser___nit__parser__ReduceAction4___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1254);
fatal_exit(1);
}
{
var6 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var6;
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype8 = type_nullable__nit__AClassdef.color;
idtype9 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1257);
fatal_exit(1);
}
if (var_pclassdefnode6 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,((val*)NULL)) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other); /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var15 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var15, ((val*)NULL), var_listnode3, var_listnode5, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var15:AModule>*/
}
var_pmodulenode1 = var15;
var_node_list = var_pmodulenode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction4> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction5#action for (self: ReduceAction5, Parser) */
void nit__parser___nit__parser__ReduceAction5___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1283);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1285);
fatal_exit(1);
}
{
var10 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var10;
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable__nit__AClassdef.color;
idtype13 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1288);
fatal_exit(1);
}
if (var_pclassdefnode6 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,((val*)NULL)) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other); /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var19 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var19, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var19:AModule>*/
}
var_pmodulenode1 = var19;
var_node_list = var_pmodulenode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction5> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction6#action for (self: ReduceAction6, Parser) */
void nit__parser___nit__parser__ReduceAction6___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var21 /* : Int */;
long var22 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode6 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode8 = var5;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1314);
fatal_exit(1);
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var7;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1317);
fatal_exit(1);
}
{
var11 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var11;
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable__nit__AClassdef.color;
idtype14 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1320);
fatal_exit(1);
}
if (var_pclassdefnode7 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,((val*)NULL)) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other); /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var20 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var20, ((val*)NULL), var_listnode4, var_listnode6, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var20:AModule>*/
}
var_pmodulenode1 = var20;
var_node_list = var_pmodulenode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction6> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction7#action for (self: ReduceAction7, Parser) */
void nit__parser___nit__parser__ReduceAction7___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1347);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1349);
fatal_exit(1);
}
{
var11 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var11;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype13 = type_standard__Array__standard__Object.color;
idtype14 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var12 = 0;
} else {
if(cltype13 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1352);
fatal_exit(1);
}
{
var15 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var15;
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype17 = type_nullable__nit__AClassdef.color;
idtype18 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1355);
fatal_exit(1);
}
if (var_pclassdefnode7 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,((val*)NULL)) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other); /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var24 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var24, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var24:AModule>*/
}
var_pmodulenode1 = var24;
var_node_list = var_pmodulenode1;
var25 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction7> */
{
var26 = nit___nit__Parser___go_to(var_p, var25);
}
{
nit___nit__Parser___push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction8#action for (self: ReduceAction8, Parser) */
void nit__parser___nit__parser__ReduceAction8___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1380);
fatal_exit(1);
}
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype7 = type_nullable__nit__AClassdef.color;
idtype8 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1382);
fatal_exit(1);
}
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode7, var_listnode5);
}
var_listnode7 = var9;
if (var_pclassdefnode6 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,((val*)NULL)) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other); /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var15 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var15, ((val*)NULL), var_listnode3, var_listnode4, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var15:AModule>*/
}
var_pmodulenode1 = var15;
var_node_list = var_pmodulenode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction8> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction9#action for (self: ReduceAction9, Parser) */
void nit__parser___nit__parser__ReduceAction9___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1409);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1411);
fatal_exit(1);
}
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype11 = type_nullable__nit__AClassdef.color;
idtype12 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pclassdefnode6&3)?type_info[((long)var_pclassdefnode6&3)]:var_pclassdefnode6->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1413);
fatal_exit(1);
}
{
var13 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode7, var_listnode5);
}
var_listnode7 = var13;
if (var_pclassdefnode6 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,((val*)NULL)) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other); /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var19 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var19, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var19:AModule>*/
}
var_pmodulenode1 = var19;
var_node_list = var_pmodulenode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction9> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction10#action for (self: ReduceAction10, Parser) */
void nit__parser___nit__parser__ReduceAction10___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var21 /* : Int */;
long var22 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode8 = var5;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1440);
fatal_exit(1);
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var7;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1443);
fatal_exit(1);
}
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable__nit__AClassdef.color;
idtype13 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1445);
fatal_exit(1);
}
{
var14 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode6);
}
var_listnode8 = var14;
if (var_pclassdefnode7 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,((val*)NULL)) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other); /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var20 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var20, ((val*)NULL), var_listnode4, var_listnode5, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var20:AModule>*/
}
var_pmodulenode1 = var20;
var_node_list = var_pmodulenode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction10> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction11#action for (self: ReduceAction11, Parser) */
void nit__parser___nit__parser__ReduceAction11___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1473);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1475);
fatal_exit(1);
}
{
var11 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var11;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype13 = type_standard__Array__standard__Object.color;
idtype14 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var12 = 0;
} else {
if(cltype13 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1478);
fatal_exit(1);
}
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype16 = type_nullable__nit__AClassdef.color;
idtype17 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1480);
fatal_exit(1);
}
{
var18 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode6);
}
var_listnode8 = var18;
if (var_pclassdefnode7 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,((val*)NULL)) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other); /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var24 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var24, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var24:AModule>*/
}
var_pmodulenode1 = var24;
var_node_list = var_pmodulenode1;
var25 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction11> */
{
var26 = nit___nit__Parser___go_to(var_p, var25);
}
{
nit___nit__Parser___push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction12#action for (self: ReduceAction12, Parser) */
void nit__parser___nit__parser__ReduceAction12___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var21 /* : Int */;
long var22 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode8 = var5;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1507);
fatal_exit(1);
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var7;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1510);
fatal_exit(1);
}
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable__nit__AClassdef.color;
idtype13 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1512);
fatal_exit(1);
}
{
var14 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode6);
}
var_listnode8 = var14;
if (var_pclassdefnode7 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,((val*)NULL)) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other); /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var20 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var20, ((val*)NULL), var_listnode3, var_listnode5, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var20:AModule>*/
}
var_pmodulenode1 = var20;
var_node_list = var_pmodulenode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction12> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction13#action for (self: ReduceAction13, Parser) */
void nit__parser___nit__parser__ReduceAction13___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode3 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1540);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1542);
fatal_exit(1);
}
{
var11 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var11;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype13 = type_standard__Array__standard__Object.color;
idtype14 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var12 = 0;
} else {
if(cltype13 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1545);
fatal_exit(1);
}
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype16 = type_nullable__nit__AClassdef.color;
idtype17 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pclassdefnode7&3)?type_info[((long)var_pclassdefnode7&3)]:var_pclassdefnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1547);
fatal_exit(1);
}
{
var18 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode6);
}
var_listnode8 = var18;
if (var_pclassdefnode7 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,((val*)NULL)) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other); /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var24 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var24, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var24:AModule>*/
}
var_pmodulenode1 = var24;
var_node_list = var_pmodulenode1;
var25 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction13> */
{
var26 = nit___nit__Parser___go_to(var_p, var25);
}
{
nit___nit__Parser___push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction14#action for (self: ReduceAction14, Parser) */
void nit__parser___nit__parser__ReduceAction14___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var26 /* : Int */;
long var27 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode9 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1575);
fatal_exit(1);
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var8;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1578);
fatal_exit(1);
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var12;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype14 = type_standard__Array__standard__Object.color;
idtype15 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var13 = 0;
} else {
if(cltype14 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1581);
fatal_exit(1);
}
var_pclassdefnode8 = var_nodearraylist4;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype17 = type_nullable__nit__AClassdef.color;
idtype18 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pclassdefnode8&3)?type_info[((long)var_pclassdefnode8&3)]:var_pclassdefnode8->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pclassdefnode8&3)?type_info[((long)var_pclassdefnode8&3)]:var_pclassdefnode8->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1583);
fatal_exit(1);
}
{
var19 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode9, var_listnode7);
}
var_listnode9 = var19;
if (var_pclassdefnode8 == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode8,((val*)NULL)) on <var_pclassdefnode8:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_pclassdefnode8->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode8, var_other); /* == on <var_pclassdefnode8:nullable AClassdef(AClassdef)>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode9, var_pclassdefnode8); /* Direct call array#Array#add on <var_listnode9:Array[Object]>*/
}
} else {
}
var25 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var25, ((val*)NULL), var_listnode4, var_listnode6, var_listnode9); /* Direct call parser_prod#AModule#init_amodule on <var25:AModule>*/
}
var_pmodulenode1 = var25;
var_node_list = var_pmodulenode1;
var26 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction14> */
{
var27 = nit___nit__Parser___go_to(var_p, var26);
}
{
nit___nit__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction15#action for (self: ReduceAction15, Parser) */
void nit__parser___nit__parser__ReduceAction15___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : Array[Object] */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var30 /* : Int */;
long var31 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode4 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode9 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pmoduledeclnode2&3)?type_info[((long)var_pmoduledeclnode2&3)]:var_pmoduledeclnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1612);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1614);
fatal_exit(1);
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var12;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype14 = type_standard__Array__standard__Object.color;
idtype15 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var13 = 0;
} else {
if(cltype14 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1617);
fatal_exit(1);
}
{
var16 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var16;
var_listnode7 = var_nodearraylist4;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype18 = type_standard__Array__standard__Object.color;
idtype19 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var17 = 0;
} else {
if(cltype18 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1620);
fatal_exit(1);
}
var_pclassdefnode8 = var_nodearraylist5;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype21 = type_nullable__nit__AClassdef.color;
idtype22 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pclassdefnode8&3)?type_info[((long)var_pclassdefnode8&3)]:var_pclassdefnode8->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pclassdefnode8&3)?type_info[((long)var_pclassdefnode8&3)]:var_pclassdefnode8->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1622);
fatal_exit(1);
}
{
var23 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode9, var_listnode7);
}
var_listnode9 = var23;
if (var_pclassdefnode8 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode8,((val*)NULL)) on <var_pclassdefnode8:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var27 = ((short int(*)(val* self, val* p0))(var_pclassdefnode8->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode8, var_other); /* == on <var_pclassdefnode8:nullable AClassdef(AClassdef)>*/
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode9, var_pclassdefnode8); /* Direct call array#Array#add on <var_listnode9:Array[Object]>*/
}
} else {
}
var29 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var29, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode9); /* Direct call parser_prod#AModule#init_amodule on <var29:AModule>*/
}
var_pmodulenode1 = var29;
var_node_list = var_pmodulenode1;
var30 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction15> */
{
var31 = nit___nit__Parser___go_to(var_p, var30);
}
{
nit___nit__Parser___push(var_p, var31, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction16#action for (self: ReduceAction16, Parser) */
void nit__parser___nit__parser__ReduceAction16___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwmodulenode5 /* var tkwmodulenode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pmodulenamenode6 /* var pmodulenamenode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AModuledecl */;
val* var_pmoduledeclnode1 /* var pmoduledeclnode1: nullable AModuledecl */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1651);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1653);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1655);
fatal_exit(1);
}
var_tkwmodulenode5 = var_nodearraylist4;
/* <var_tkwmodulenode5:nullable Object> isa nullable TKwmodule */
cltype16 = type_nullable__nit__TKwmodule.color;
idtype17 = type_nullable__nit__TKwmodule.id;
if(var_tkwmodulenode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwmodulenode5&3)?type_info[((long)var_tkwmodulenode5&3)]:var_tkwmodulenode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwmodulenode5&3)?type_info[((long)var_tkwmodulenode5&3)]:var_tkwmodulenode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1657);
fatal_exit(1);
}
var_pmodulenamenode6 = var_nodearraylist6;
/* <var_pmodulenamenode6:nullable Object> isa nullable AModuleName */
cltype19 = type_nullable__nit__AModuleName.color;
idtype20 = type_nullable__nit__AModuleName.id;
if(var_pmodulenamenode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pmodulenamenode6&3)?type_info[((long)var_pmodulenamenode6&3)]:var_pmodulenamenode6->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pmodulenamenode6&3)?type_info[((long)var_pmodulenamenode6&3)]:var_pmodulenamenode6->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1659);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist7;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable__nit__AAnnotations.color;
idtype23 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1661);
fatal_exit(1);
}
var24 = NEW_nit__AModuledecl(&type_nit__AModuledecl);
{
nit__parser_prod___AModuledecl___init_amoduledecl(var24, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmodulenode5, var_pmodulenamenode6, var_pannotationsnode7); /* Direct call parser_prod#AModuledecl#init_amoduledecl on <var24:AModuledecl>*/
}
var_pmoduledeclnode1 = var24;
var_node_list = var_pmoduledeclnode1;
var25 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction16> */
{
var26 = nit___nit__Parser___go_to(var_p, var25);
}
{
nit___nit__Parser___push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction17#action for (self: ReduceAction17, Parser) */
void nit__parser___nit__parser__ReduceAction17___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pvisibilitynode2 /* var pvisibilitynode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwimportnode3 /* var tkwimportnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pmodulenamenode4 /* var pmodulenamenode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AStdImport */;
val* var_pimportnode1 /* var pimportnode1: nullable AStdImport */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pvisibilitynode2 = var_nodearraylist3;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable__nit__AVisibility.color;
idtype = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pvisibilitynode2&3)?type_info[((long)var_pvisibilitynode2&3)]:var_pvisibilitynode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pvisibilitynode2&3)?type_info[((long)var_pvisibilitynode2&3)]:var_pvisibilitynode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1688);
fatal_exit(1);
}
var_tkwimportnode3 = var_nodearraylist4;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype10 = type_nullable__nit__TKwimport.color;
idtype11 = type_nullable__nit__TKwimport.id;
if(var_tkwimportnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwimportnode3&3)?type_info[((long)var_tkwimportnode3&3)]:var_tkwimportnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwimportnode3&3)?type_info[((long)var_tkwimportnode3&3)]:var_tkwimportnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1690);
fatal_exit(1);
}
var_pmodulenamenode4 = var_nodearraylist6;
/* <var_pmodulenamenode4:nullable Object> isa nullable AModuleName */
cltype13 = type_nullable__nit__AModuleName.color;
idtype14 = type_nullable__nit__AModuleName.id;
if(var_pmodulenamenode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pmodulenamenode4&3)?type_info[((long)var_pmodulenamenode4&3)]:var_pmodulenamenode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pmodulenamenode4&3)?type_info[((long)var_pmodulenamenode4&3)]:var_pmodulenamenode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1692);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist7;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype16 = type_nullable__nit__AAnnotations.color;
idtype17 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1694);
fatal_exit(1);
}
var18 = NEW_nit__AStdImport(&type_nit__AStdImport);
{
nit__parser_prod___AStdImport___init_astdimport(var18, var_pvisibilitynode2, var_tkwimportnode3, var_pmodulenamenode4, var_pannotationsnode5); /* Direct call parser_prod#AStdImport#init_astdimport on <var18:AStdImport>*/
}
var_pimportnode1 = var18;
var_node_list = var_pimportnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction17> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction18#action for (self: ReduceAction18, Parser) */
void nit__parser___nit__parser__ReduceAction18___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pvisibilitynode2 /* var pvisibilitynode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwimportnode3 /* var tkwimportnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwendnode4 /* var tkwendnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ANoImport */;
val* var_pimportnode1 /* var pimportnode1: nullable ANoImport */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pvisibilitynode2 = var_nodearraylist3;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable__nit__AVisibility.color;
idtype = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pvisibilitynode2&3)?type_info[((long)var_pvisibilitynode2&3)]:var_pvisibilitynode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pvisibilitynode2&3)?type_info[((long)var_pvisibilitynode2&3)]:var_pvisibilitynode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1718);
fatal_exit(1);
}
var_tkwimportnode3 = var_nodearraylist4;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype9 = type_nullable__nit__TKwimport.color;
idtype10 = type_nullable__nit__TKwimport.id;
if(var_tkwimportnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwimportnode3&3)?type_info[((long)var_tkwimportnode3&3)]:var_tkwimportnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwimportnode3&3)?type_info[((long)var_tkwimportnode3&3)]:var_tkwimportnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1720);
fatal_exit(1);
}
var_tkwendnode4 = var_nodearraylist6;
/* <var_tkwendnode4:nullable Object> isa nullable TKwend */
cltype12 = type_nullable__nit__TKwend.color;
idtype13 = type_nullable__nit__TKwend.id;
if(var_tkwendnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwendnode4&3)?type_info[((long)var_tkwendnode4&3)]:var_tkwendnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwendnode4&3)?type_info[((long)var_tkwendnode4&3)]:var_tkwendnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1722);
fatal_exit(1);
}
var14 = NEW_nit__ANoImport(&type_nit__ANoImport);
{
nit__parser_prod___ANoImport___init_anoimport(var14, var_pvisibilitynode2, var_tkwimportnode3, var_tkwendnode4); /* Direct call parser_prod#ANoImport#init_anoimport on <var14:ANoImport>*/
}
var_pimportnode1 = var14;
var_node_list = var_pimportnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction18> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction19#action for (self: ReduceAction19, Parser) */
void nit__parser___nit__parser__ReduceAction19___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pclassdefnode1 = var_nodearraylist1;
var_node_list = var_pclassdefnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction19> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction20#action for (self: ReduceAction20, Parser) */
void nit__parser___nit__parser__ReduceAction20___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ATopClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable ATopClassdef */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_ppropdefnode2 = var_nodearraylist1;
/* <var_ppropdefnode2:nullable Object> isa nullable APropdef */
cltype = type_nullable__nit__APropdef.color;
idtype = type_nullable__nit__APropdef.id;
if(var_ppropdefnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_ppropdefnode2&3)?type_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_ppropdefnode2&3)?type_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1752);
fatal_exit(1);
}
if (var_ppropdefnode2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ppropdefnode2,((val*)NULL)) on <var_ppropdefnode2:nullable Object(nullable APropdef)> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_ppropdefnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ppropdefnode2, var_other); /* == on <var_ppropdefnode2:nullable APropdef(APropdef)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var9 = NEW_nit__ATopClassdef(&type_nit__ATopClassdef);
{
nit__parser_prod___ATopClassdef___init_atopclassdef(var9, var_listnode3); /* Direct call parser_prod#ATopClassdef#init_atopclassdef on <var9:ATopClassdef>*/
}
var_pclassdefnode1 = var9;
var_node_list = var_pclassdefnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction20> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction21#action for (self: ReduceAction21, Parser) */
void nit__parser___nit__parser__ReduceAction21___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : AMainClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AMainClassdef */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_ppropdefnode2 = var_nodearraylist1;
/* <var_ppropdefnode2:nullable Object> isa nullable APropdef */
cltype = type_nullable__nit__APropdef.color;
idtype = type_nullable__nit__APropdef.id;
if(var_ppropdefnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_ppropdefnode2&3)?type_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_ppropdefnode2&3)?type_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1771);
fatal_exit(1);
}
if (var_ppropdefnode2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ppropdefnode2,((val*)NULL)) on <var_ppropdefnode2:nullable Object(nullable APropdef)> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_ppropdefnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ppropdefnode2, var_other); /* == on <var_ppropdefnode2:nullable APropdef(APropdef)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var8 = NEW_nit__AMainClassdef(&type_nit__AMainClassdef);
{
nit__parser_prod___AMainClassdef___init_amainclassdef(var8, var_listnode3); /* Direct call parser_prod#AMainClassdef#init_amainclassdef on <var8:AMainClassdef>*/
}
var_pclassdefnode1 = var8;
var_node_list = var_pclassdefnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction21> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction22#action for (self: ReduceAction22, Parser) */
void nit__parser___nit__parser__ReduceAction22___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
long var /* : Int */;
long var1 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var_node_list = ((val*)NULL);
var = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction22> */
{
var1 = nit___nit__Parser___go_to(var_p, var);
}
{
nit___nit__Parser___push(var_p, var1, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction23#action for (self: ReduceAction23, Parser) */
void nit__parser___nit__parser__ReduceAction23___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_node_list = ((val*)NULL);
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction23> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction24#action for (self: ReduceAction24, Parser) */
void nit__parser___nit__parser__ReduceAction24___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMainMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMainMethPropdef */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1809);
fatal_exit(1);
}
var3 = NEW_nit__AMainMethPropdef(&type_nit__AMainMethPropdef);
{
nit__parser_prod___AMainMethPropdef___init_amainmethpropdef(var3, ((val*)NULL), var_pexprnode3); /* Direct call parser_prod#AMainMethPropdef#init_amainmethpropdef on <var3:AMainMethPropdef>*/
}
var_ppropdefnode1 = var3;
var_node_list = var_ppropdefnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction24> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction26#action for (self: ReduceAction26, Parser) */
void nit__parser___nit__parser__ReduceAction26___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var8 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var9 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var8 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode8 = var8;
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode12 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1834);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1836);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1838);
fatal_exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype18 = type_nullable__nit__AClasskind.color;
idtype19 = type_nullable__nit__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1840);
fatal_exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype21 = type_nullable__nit__TClassid.color;
idtype22 = type_nullable__nit__TClassid.id;
if(var_tclassidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1842);
fatal_exit(1);
}
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype24 = type_standard__Array__standard__Object.color;
idtype25 = type_standard__Array__standard__Object.id;
if(var_listnode11 == NULL) {
var23 = 0;
} else {
if(cltype24 >= (((long)var_listnode11&3)?type_info[((long)var_listnode11&3)]:var_listnode11->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_listnode11&3)?type_info[((long)var_listnode11&3)]:var_listnode11->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1844);
fatal_exit(1);
}
{
var26 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var26;
var_tkwendnode13 = var_nodearraylist8;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype28 = type_nullable__nit__TKwend.color;
idtype29 = type_nullable__nit__TKwend.id;
if(var_tkwendnode13 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1847);
fatal_exit(1);
}
var30 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL), var_listnode12, var_tkwendnode13); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var30:AStdClassdef>*/
}
var_pclassdefnode1 = var30;
var_node_list = var_pclassdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction26> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction27#action for (self: ReduceAction27, Parser) */
void nit__parser___nit__parser__ReduceAction27___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var9 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var10 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode8 = var9;
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var10); /* Direct call array#Array#init on <var10:Array[Object]>*/
}
var_listnode12 = var10;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1882);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nit__TKwredef.color;
idtype14 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1884);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nit__AVisibility.color;
idtype17 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1886);
fatal_exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable__nit__AClasskind.color;
idtype20 = type_nullable__nit__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1888);
fatal_exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable__nit__TClassid.color;
idtype23 = type_nullable__nit__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1890);
fatal_exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist7;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype25 = type_nullable__nit__AExternCodeBlock.color;
idtype26 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexterncodeblocknode10&3)?type_info[((long)var_pexterncodeblocknode10&3)]:var_pexterncodeblocknode10->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexterncodeblocknode10&3)?type_info[((long)var_pexterncodeblocknode10&3)]:var_pexterncodeblocknode10->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1892);
fatal_exit(1);
}
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype28 = type_standard__Array__standard__Object.color;
idtype29 = type_standard__Array__standard__Object.id;
if(var_listnode11 == NULL) {
var27 = 0;
} else {
if(cltype28 >= (((long)var_listnode11&3)?type_info[((long)var_listnode11&3)]:var_listnode11->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_listnode11&3)?type_info[((long)var_listnode11&3)]:var_listnode11->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1894);
fatal_exit(1);
}
{
var30 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var30;
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nit__TKwend.color;
idtype33 = type_nullable__nit__TKwend.id;
if(var_tkwendnode13 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1897);
fatal_exit(1);
}
var34 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, ((val*)NULL), var_listnode8, ((val*)NULL), var_pexterncodeblocknode10, var_listnode12, var_tkwendnode13); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var34:AStdClassdef>*/
}
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction27> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction28#action for (self: ReduceAction28, Parser) */
void nit__parser___nit__parser__ReduceAction28___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tobranode7 /* var tobranode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var_tcbranode10 /* var tcbranode10: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var45 /* : Int */;
long var46 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist12 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var11;
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode9 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1935);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1937);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable__nit__AVisibility.color;
idtype20 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1939);
fatal_exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable__nit__AClasskind.color;
idtype23 = type_nullable__nit__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1941);
fatal_exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable__nit__TClassid.color;
idtype26 = type_nullable__nit__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1943);
fatal_exit(1);
}
var_tobranode7 = var_nodearraylist7;
/* <var_tobranode7:nullable Object> isa nullable TObra */
cltype28 = type_nullable__nit__TObra.color;
idtype29 = type_nullable__nit__TObra.id;
if(var_tobranode7 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_tobranode7&3)?type_info[((long)var_tobranode7&3)]:var_tobranode7->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_tobranode7&3)?type_info[((long)var_tobranode7&3)]:var_tobranode7->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1945);
fatal_exit(1);
}
var_listnode8 = var_nodearraylist9;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype31 = type_standard__Array__standard__Object.color;
idtype32 = type_standard__Array__standard__Object.id;
if(var_listnode8 == NULL) {
var30 = 0;
} else {
if(cltype31 >= (((long)var_listnode8&3)?type_info[((long)var_listnode8&3)]:var_listnode8->type)->table_size) {
var30 = 0;
} else {
var30 = (((long)var_listnode8&3)?type_info[((long)var_listnode8&3)]:var_listnode8->type)->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1947);
fatal_exit(1);
}
{
var33 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode9, var_listnode8);
}
var_listnode9 = var33;
var_tcbranode10 = var_nodearraylist10;
/* <var_tcbranode10:nullable Object> isa nullable TCbra */
cltype35 = type_nullable__nit__TCbra.color;
idtype36 = type_nullable__nit__TCbra.id;
if(var_tcbranode10 == NULL) {
var34 = 1;
} else {
if(cltype35 >= (((long)var_tcbranode10&3)?type_info[((long)var_tcbranode10&3)]:var_tcbranode10->type)->table_size) {
var34 = 0;
} else {
var34 = (((long)var_tcbranode10&3)?type_info[((long)var_tcbranode10&3)]:var_tcbranode10->type)->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1950);
fatal_exit(1);
}
var_listnode12 = var_nodearraylist11;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype38 = type_standard__Array__standard__Object.color;
idtype39 = type_standard__Array__standard__Object.id;
if(var_listnode12 == NULL) {
var37 = 0;
} else {
if(cltype38 >= (((long)var_listnode12&3)?type_info[((long)var_listnode12&3)]:var_listnode12->type)->table_size) {
var37 = 0;
} else {
var37 = (((long)var_listnode12&3)?type_info[((long)var_listnode12&3)]:var_listnode12->type)->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1952);
fatal_exit(1);
}
{
var40 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var40;
var_tkwendnode14 = var_nodearraylist12;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype42 = type_nullable__nit__TKwend.color;
idtype43 = type_nullable__nit__TKwend.id;
if(var_tkwendnode14 == NULL) {
var41 = 1;
} else {
if(cltype42 >= (((long)var_tkwendnode14&3)?type_info[((long)var_tkwendnode14&3)]:var_tkwendnode14->type)->table_size) {
var41 = 0;
} else {
var41 = (((long)var_tkwendnode14&3)?type_info[((long)var_tkwendnode14&3)]:var_tkwendnode14->type)->type_table[cltype42] == idtype43;
}
}
if (unlikely(!var41)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1955);
fatal_exit(1);
}
var44 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var44, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_tobranode7, var_listnode9, var_tcbranode10, ((val*)NULL), var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var44:AStdClassdef>*/
}
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction28> */
{
var46 = nit___nit__Parser___go_to(var_p, var45);
}
{
nit___nit__Parser___push(var_p, var46, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction29#action for (self: ReduceAction29, Parser) */
void nit__parser___nit__parser__ReduceAction29___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_tobranode7 /* var tobranode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_tcbranode10 /* var tcbranode10: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var_pexterncodeblocknode11 /* var pexterncodeblocknode11: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var49 /* : Int */;
long var50 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist13 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist12 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var9;
{
var10 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var10;
{
var11 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var11;
{
var12 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode9 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1994);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable__nit__TKwredef.color;
idtype18 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1996);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable__nit__AVisibility.color;
idtype21 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1998);
fatal_exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable__nit__AClasskind.color;
idtype24 = type_nullable__nit__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pclasskindnode5&3)?type_info[((long)var_pclasskindnode5&3)]:var_pclasskindnode5->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2000);
fatal_exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable__nit__TClassid.color;
idtype27 = type_nullable__nit__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2002);
fatal_exit(1);
}
var_tobranode7 = var_nodearraylist7;
/* <var_tobranode7:nullable Object> isa nullable TObra */
cltype29 = type_nullable__nit__TObra.color;
idtype30 = type_nullable__nit__TObra.id;
if(var_tobranode7 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_tobranode7&3)?type_info[((long)var_tobranode7&3)]:var_tobranode7->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_tobranode7&3)?type_info[((long)var_tobranode7&3)]:var_tobranode7->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2004);
fatal_exit(1);
}
var_listnode8 = var_nodearraylist9;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype32 = type_standard__Array__standard__Object.color;
idtype33 = type_standard__Array__standard__Object.id;
if(var_listnode8 == NULL) {
var31 = 0;
} else {
if(cltype32 >= (((long)var_listnode8&3)?type_info[((long)var_listnode8&3)]:var_listnode8->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_listnode8&3)?type_info[((long)var_listnode8&3)]:var_listnode8->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2006);
fatal_exit(1);
}
{
var34 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode9, var_listnode8);
}
var_listnode9 = var34;
var_tcbranode10 = var_nodearraylist10;
/* <var_tcbranode10:nullable Object> isa nullable TCbra */
cltype36 = type_nullable__nit__TCbra.color;
idtype37 = type_nullable__nit__TCbra.id;
if(var_tcbranode10 == NULL) {
var35 = 1;
} else {
if(cltype36 >= (((long)var_tcbranode10&3)?type_info[((long)var_tcbranode10&3)]:var_tcbranode10->type)->table_size) {
var35 = 0;
} else {
var35 = (((long)var_tcbranode10&3)?type_info[((long)var_tcbranode10&3)]:var_tcbranode10->type)->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2009);
fatal_exit(1);
}
var_pexterncodeblocknode11 = var_nodearraylist11;
/* <var_pexterncodeblocknode11:nullable Object> isa nullable AExternCodeBlock */
cltype39 = type_nullable__nit__AExternCodeBlock.color;
idtype40 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode11 == NULL) {
var38 = 1;
} else {
if(cltype39 >= (((long)var_pexterncodeblocknode11&3)?type_info[((long)var_pexterncodeblocknode11&3)]:var_pexterncodeblocknode11->type)->table_size) {
var38 = 0;
} else {
var38 = (((long)var_pexterncodeblocknode11&3)?type_info[((long)var_pexterncodeblocknode11&3)]:var_pexterncodeblocknode11->type)->type_table[cltype39] == idtype40;
}
}
if (unlikely(!var38)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2011);
fatal_exit(1);
}
var_listnode12 = var_nodearraylist12;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype42 = type_standard__Array__standard__Object.color;
idtype43 = type_standard__Array__standard__Object.id;
if(var_listnode12 == NULL) {
var41 = 0;
} else {
if(cltype42 >= (((long)var_listnode12&3)?type_info[((long)var_listnode12&3)]:var_listnode12->type)->table_size) {
var41 = 0;
} else {
var41 = (((long)var_listnode12&3)?type_info[((long)var_listnode12&3)]:var_listnode12->type)->type_table[cltype42] == idtype43;
}
}
if (unlikely(!var41)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2013);
fatal_exit(1);
}
{
var44 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var44;
var_tkwendnode14 = var_nodearraylist13;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype46 = type_nullable__nit__TKwend.color;
idtype47 = type_nullable__nit__TKwend.id;
if(var_tkwendnode14 == NULL) {
var45 = 1;
} else {
if(cltype46 >= (((long)var_tkwendnode14&3)?type_info[((long)var_tkwendnode14&3)]:var_tkwendnode14->type)->table_size) {
var45 = 0;
} else {
var45 = (((long)var_tkwendnode14&3)?type_info[((long)var_tkwendnode14&3)]:var_tkwendnode14->type)->type_table[cltype46] == idtype47;
}
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2016);
fatal_exit(1);
}
var48 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_tobranode7, var_listnode9, var_tcbranode10, var_pexterncodeblocknode11, var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var48:AStdClassdef>*/
}
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var49 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction29> */
{
var50 = nit___nit__Parser___go_to(var_p, var49);
}
{
nit___nit__Parser___push(var_p, var50, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction31#action for (self: ReduceAction31, Parser) */
void nit__parser___nit__parser__ReduceAction31___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwredefnode1 /* var tkwredefnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwredefnode1 = var_nodearraylist1;
var_node_list = var_tkwredefnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction31> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction32#action for (self: ReduceAction32, Parser) */
void nit__parser___nit__parser__ReduceAction32___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwclassnode2 /* var tkwclassnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AConcreteClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AConcreteClasskind */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwclassnode2 = var_nodearraylist1;
/* <var_tkwclassnode2:nullable Object> isa nullable TKwclass */
cltype = type_nullable__nit__TKwclass.color;
idtype = type_nullable__nit__TKwclass.id;
if(var_tkwclassnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwclassnode2&3)?type_info[((long)var_tkwclassnode2&3)]:var_tkwclassnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwclassnode2&3)?type_info[((long)var_tkwclassnode2&3)]:var_tkwclassnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2052);
fatal_exit(1);
}
var2 = NEW_nit__AConcreteClasskind(&type_nit__AConcreteClasskind);
{
nit__parser_prod___AConcreteClasskind___init_aconcreteclasskind(var2, var_tkwclassnode2); /* Direct call parser_prod#AConcreteClasskind#init_aconcreteclasskind on <var2:AConcreteClasskind>*/
}
var_pclasskindnode1 = var2;
var_node_list = var_pclasskindnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction32> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction33#action for (self: ReduceAction33, Parser) */
void nit__parser___nit__parser__ReduceAction33___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabstractnode2 /* var tkwabstractnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tkwclassnode3 /* var tkwclassnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AAbstractClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AAbstractClasskind */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwabstractnode2 = var_nodearraylist1;
/* <var_tkwabstractnode2:nullable Object> isa nullable TKwabstract */
cltype = type_nullable__nit__TKwabstract.color;
idtype = type_nullable__nit__TKwabstract.id;
if(var_tkwabstractnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwabstractnode2&3)?type_info[((long)var_tkwabstractnode2&3)]:var_tkwabstractnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwabstractnode2&3)?type_info[((long)var_tkwabstractnode2&3)]:var_tkwabstractnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2068);
fatal_exit(1);
}
var_tkwclassnode3 = var_nodearraylist2;
/* <var_tkwclassnode3:nullable Object> isa nullable TKwclass */
cltype4 = type_nullable__nit__TKwclass.color;
idtype5 = type_nullable__nit__TKwclass.id;
if(var_tkwclassnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tkwclassnode3&3)?type_info[((long)var_tkwclassnode3&3)]:var_tkwclassnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwclassnode3&3)?type_info[((long)var_tkwclassnode3&3)]:var_tkwclassnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2070);
fatal_exit(1);
}
var6 = NEW_nit__AAbstractClasskind(&type_nit__AAbstractClasskind);
{
nit__parser_prod___AAbstractClasskind___init_aabstractclasskind(var6, var_tkwabstractnode2, var_tkwclassnode3); /* Direct call parser_prod#AAbstractClasskind#init_aabstractclasskind on <var6:AAbstractClasskind>*/
}
var_pclasskindnode1 = var6;
var_node_list = var_pclasskindnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction33> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction34#action for (self: ReduceAction34, Parser) */
void nit__parser___nit__parser__ReduceAction34___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwinterfacenode2 /* var tkwinterfacenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AInterfaceClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AInterfaceClasskind */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwinterfacenode2 = var_nodearraylist1;
/* <var_tkwinterfacenode2:nullable Object> isa nullable TKwinterface */
cltype = type_nullable__nit__TKwinterface.color;
idtype = type_nullable__nit__TKwinterface.id;
if(var_tkwinterfacenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwinterfacenode2&3)?type_info[((long)var_tkwinterfacenode2&3)]:var_tkwinterfacenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwinterfacenode2&3)?type_info[((long)var_tkwinterfacenode2&3)]:var_tkwinterfacenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2086);
fatal_exit(1);
}
var2 = NEW_nit__AInterfaceClasskind(&type_nit__AInterfaceClasskind);
{
nit__parser_prod___AInterfaceClasskind___init_ainterfaceclasskind(var2, var_tkwinterfacenode2); /* Direct call parser_prod#AInterfaceClasskind#init_ainterfaceclasskind on <var2:AInterfaceClasskind>*/
}
var_pclasskindnode1 = var2;
var_node_list = var_pclasskindnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction34> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction35#action for (self: ReduceAction35, Parser) */
void nit__parser___nit__parser__ReduceAction35___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwenumnode2 /* var tkwenumnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AEnumClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AEnumClasskind */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwenumnode2 = var_nodearraylist1;
/* <var_tkwenumnode2:nullable Object> isa nullable TKwenum */
cltype = type_nullable__nit__TKwenum.color;
idtype = type_nullable__nit__TKwenum.id;
if(var_tkwenumnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwenumnode2&3)?type_info[((long)var_tkwenumnode2&3)]:var_tkwenumnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwenumnode2&3)?type_info[((long)var_tkwenumnode2&3)]:var_tkwenumnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2101);
fatal_exit(1);
}
var2 = NEW_nit__AEnumClasskind(&type_nit__AEnumClasskind);
{
nit__parser_prod___AEnumClasskind___init_aenumclasskind(var2, var_tkwenumnode2); /* Direct call parser_prod#AEnumClasskind#init_aenumclasskind on <var2:AEnumClasskind>*/
}
var_pclasskindnode1 = var2;
var_node_list = var_pclasskindnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction35> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction36#action for (self: ReduceAction36, Parser) */
void nit__parser___nit__parser__ReduceAction36___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwexternnode2 /* var tkwexternnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tkwclassnode3 /* var tkwclassnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AExternClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AExternClasskind */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwexternnode2 = var_nodearraylist1;
/* <var_tkwexternnode2:nullable Object> isa nullable TKwextern */
cltype = type_nullable__nit__TKwextern.color;
idtype = type_nullable__nit__TKwextern.id;
if(var_tkwexternnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwexternnode2&3)?type_info[((long)var_tkwexternnode2&3)]:var_tkwexternnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwexternnode2&3)?type_info[((long)var_tkwexternnode2&3)]:var_tkwexternnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2117);
fatal_exit(1);
}
var_tkwclassnode3 = var_nodearraylist2;
/* <var_tkwclassnode3:nullable Object> isa nullable TKwclass */
cltype4 = type_nullable__nit__TKwclass.color;
idtype5 = type_nullable__nit__TKwclass.id;
if(var_tkwclassnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tkwclassnode3&3)?type_info[((long)var_tkwclassnode3&3)]:var_tkwclassnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwclassnode3&3)?type_info[((long)var_tkwclassnode3&3)]:var_tkwclassnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2119);
fatal_exit(1);
}
var6 = NEW_nit__AExternClasskind(&type_nit__AExternClasskind);
{
nit__parser_prod___AExternClasskind___init_aexternclasskind(var6, var_tkwexternnode2, var_tkwclassnode3); /* Direct call parser_prod#AExternClasskind#init_aexternclasskind on <var6:AExternClasskind>*/
}
var_pclasskindnode1 = var6;
var_node_list = var_pclasskindnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction36> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction37#action for (self: ReduceAction37, Parser) */
void nit__parser___nit__parser__ReduceAction37___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pformaldefnode1 = var_nodearraylist1;
if (var_pformaldefnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pformaldefnode1&3)?class_info[((long)var_pformaldefnode1&3)]:var_pformaldefnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode1, ((val*)NULL)); /* != on <var_pformaldefnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pformaldefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction37> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction38#action for (self: ReduceAction38, Parser) */
void nit__parser___nit__parser__ReduceAction38___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_pformaldefnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2153);
fatal_exit(1);
}
if (var_pformaldefnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_pformaldefnode1&3)?class_info[((long)var_pformaldefnode1&3)]:var_pformaldefnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode1, ((val*)NULL)); /* != on <var_pformaldefnode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pformaldefnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction38> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction39#action for (self: ReduceAction39, Parser) */
void nit__parser___nit__parser__ReduceAction39___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : Array[Object] */;
val* var_listnode1 /* var listnode1: Array[Object] */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Object]>*/
}
var_listnode1 = var;
var_node_list = var_listnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction39> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction40#action for (self: ReduceAction40, Parser) */
void nit__parser___nit__parser__ReduceAction40___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pformaldefnode1 = var_nodearraylist3;
var_node_list = var_pformaldefnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction40> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction41#action for (self: ReduceAction41, Parser) */
void nit__parser___nit__parser__ReduceAction41___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode2 /* var tclassidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AFormaldef */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable AFormaldef */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tclassidnode2&3)?type_info[((long)var_tclassidnode2&3)]:var_tclassidnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tclassidnode2&3)?type_info[((long)var_tclassidnode2&3)]:var_tclassidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2194);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable__nit__AType.color;
idtype6 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2196);
fatal_exit(1);
}
var7 = NEW_nit__AFormaldef(&type_nit__AFormaldef);
{
nit__parser_prod___AFormaldef___init_aformaldef(var7, var_tclassidnode2, var_ptypenode3, ((val*)NULL)); /* Direct call parser_prod#AFormaldef#init_aformaldef on <var7:AFormaldef>*/
}
var_pformaldefnode1 = var7;
var_node_list = var_pformaldefnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction41> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction42#action for (self: ReduceAction42, Parser) */
void nit__parser___nit__parser__ReduceAction42___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode2 /* var tclassidnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pannotationsnode4 /* var pannotationsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AFormaldef */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable AFormaldef */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tclassidnode2&3)?type_info[((long)var_tclassidnode2&3)]:var_tclassidnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tclassidnode2&3)?type_info[((long)var_tclassidnode2&3)]:var_tclassidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2216);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable__nit__AType.color;
idtype7 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2218);
fatal_exit(1);
}
var_pannotationsnode4 = var_nodearraylist2;
/* <var_pannotationsnode4:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nit__AAnnotations.color;
idtype10 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pannotationsnode4&3)?type_info[((long)var_pannotationsnode4&3)]:var_pannotationsnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pannotationsnode4&3)?type_info[((long)var_pannotationsnode4&3)]:var_pannotationsnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2220);
fatal_exit(1);
}
var11 = NEW_nit__AFormaldef(&type_nit__AFormaldef);
{
nit__parser_prod___AFormaldef___init_aformaldef(var11, var_tclassidnode2, var_ptypenode3, var_pannotationsnode4); /* Direct call parser_prod#AFormaldef#init_aformaldef on <var11:AFormaldef>*/
}
var_pformaldefnode1 = var11;
var_node_list = var_pformaldefnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction42> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction43#action for (self: ReduceAction43, Parser) */
void nit__parser___nit__parser__ReduceAction43___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwsupernode5 /* var tkwsupernode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_ptypenode6 /* var ptypenode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ASuperPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ASuperPropdef */;
long var24 /* : Int */;
long var25 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2243);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2245);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2247);
fatal_exit(1);
}
var_tkwsupernode5 = var_nodearraylist4;
/* <var_tkwsupernode5:nullable Object> isa nullable TKwsuper */
cltype15 = type_nullable__nit__TKwsuper.color;
idtype16 = type_nullable__nit__TKwsuper.id;
if(var_tkwsupernode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwsupernode5&3)?type_info[((long)var_tkwsupernode5&3)]:var_tkwsupernode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwsupernode5&3)?type_info[((long)var_tkwsupernode5&3)]:var_tkwsupernode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2249);
fatal_exit(1);
}
var_ptypenode6 = var_nodearraylist6;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype18 = type_nullable__nit__AType.color;
idtype19 = type_nullable__nit__AType.id;
if(var_ptypenode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_ptypenode6&3)?type_info[((long)var_ptypenode6&3)]:var_ptypenode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_ptypenode6&3)?type_info[((long)var_ptypenode6&3)]:var_ptypenode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2251);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist7;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable__nit__AAnnotations.color;
idtype22 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2253);
fatal_exit(1);
}
var23 = NEW_nit__ASuperPropdef(&type_nit__ASuperPropdef);
{
nit__parser_prod___ASuperPropdef___init_asuperpropdef(var23, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwsupernode5, var_ptypenode6, var_pannotationsnode7); /* Direct call parser_prod#ASuperPropdef#init_asuperpropdef on <var23:ASuperPropdef>*/
}
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction43> */
{
var25 = nit___nit__Parser___go_to(var_p, var24);
}
{
nit___nit__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction44#action for (self: ReduceAction44, Parser) */
void nit__parser___nit__parser__ReduceAction44___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2275);
fatal_exit(1);
}
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var4;
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction44> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction45#action for (self: ReduceAction45, Parser) */
void nit__parser___nit__parser__ReduceAction45___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_ppropdefnode1 = var_nodearraylist1;
if (var_ppropdefnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_ppropdefnode1&3)?class_info[((long)var_ppropdefnode1&3)]:var_ppropdefnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ppropdefnode1, ((val*)NULL)); /* != on <var_ppropdefnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_ppropdefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction45> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction46#action for (self: ReduceAction46, Parser) */
void nit__parser___nit__parser__ReduceAction46___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode1 /* var listnode1: Array[Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode1 = var1;
var_node_list = var_listnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction46> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction47#action for (self: ReduceAction47, Parser) */
void nit__parser___nit__parser__ReduceAction47___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_ppropdefnode1 = var_nodearraylist1;
var_node_list = var_ppropdefnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction47> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction48#action for (self: ReduceAction48, Parser) */
void nit__parser___nit__parser__ReduceAction48___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2334);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2336);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2338);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable__nit__TKwmeth.color;
idtype18 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2340);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2342);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2344);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist7;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable__nit__TKwdo.color;
idtype27 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2346);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist8;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nit__AExpr.color;
idtype30 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2348);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist9;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nit__TKwend.color;
idtype33 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2350);
fatal_exit(1);
}
var34 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction48> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction49#action for (self: ReduceAction49, Parser) */
void nit__parser___nit__parser__ReduceAction49___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var39 /* : Int */;
long var40 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2387);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2389);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2391);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype18 = type_nullable__nit__TKwmeth.color;
idtype19 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2393);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2395);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2397);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2399);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist8;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype30 = type_nullable__nit__TKwdo.color;
idtype31 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2401);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist9;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype33 = type_nullable__nit__AExpr.color;
idtype34 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var32 = 1;
} else {
if(cltype33 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var32 = 0;
} else {
var32 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2403);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist10;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype36 = type_nullable__nit__TKwend.color;
idtype37 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var35 = 1;
} else {
if(cltype36 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var35 = 0;
} else {
var35 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2405);
fatal_exit(1);
}
var38 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var38:AMethPropdef>*/
}
var_ppropdefnode1 = var38;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction49> */
{
var40 = nit___nit__Parser___go_to(var_p, var39);
}
{
nit___nit__Parser___push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction50#action for (self: ReduceAction50, Parser) */
void nit__parser___nit__parser__ReduceAction50___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2439);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2441);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2443);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype15 = type_nullable__nit__TKwmeth.color;
idtype16 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2445);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype18 = type_nullable__nit__AMethid.color;
idtype19 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2447);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype21 = type_nullable__nit__ASignature.color;
idtype22 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2449);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2451);
fatal_exit(1);
}
var26 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var26:AMethPropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction50> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction51#action for (self: ReduceAction51, Parser) */
void nit__parser___nit__parser__ReduceAction51___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var23 /* : Int */;
long var24 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2484);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype8 = type_nullable__nit__TKwredef.color;
idtype9 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2486);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable__nit__AVisibility.color;
idtype12 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2488);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype14 = type_nullable__nit__TKwnew.color;
idtype15 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2490);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype17 = type_nullable__nit__ASignature.color;
idtype18 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2492);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype20 = type_nullable__nit__AAnnotations.color;
idtype21 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2494);
fatal_exit(1);
}
var22 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var22, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var22:AMethPropdef>*/
}
var_ppropdefnode1 = var22;
var_node_list = var_ppropdefnode1;
var23 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction51> */
{
var24 = nit___nit__Parser___go_to(var_p, var23);
}
{
nit___nit__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction52#action for (self: ReduceAction52, Parser) */
void nit__parser___nit__parser__ReduceAction52___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2528);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2530);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2532);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable__nit__TKwnew.color;
idtype16 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2534);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype18 = type_nullable__nit__AMethid.color;
idtype19 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2536);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype21 = type_nullable__nit__ASignature.color;
idtype22 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2538);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2540);
fatal_exit(1);
}
var26 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var26:AMethPropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction52> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction53#action for (self: ReduceAction53, Parser) */
void nit__parser___nit__parser__ReduceAction53___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2575);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2577);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2579);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable__nit__TKwnew.color;
idtype17 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2581);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype19 = type_nullable__nit__ASignature.color;
idtype20 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2583);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist6;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype22 = type_nullable__nit__TKwdo.color;
idtype23 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2585);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist7;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nit__AExpr.color;
idtype26 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2587);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist8;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype28 = type_nullable__nit__TKwend.color;
idtype29 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2589);
fatal_exit(1);
}
var30 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction53> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction54#action for (self: ReduceAction54, Parser) */
void nit__parser___nit__parser__ReduceAction54___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2625);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2627);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2629);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable__nit__TKwnew.color;
idtype18 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2631);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2633);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2635);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist7;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable__nit__TKwdo.color;
idtype27 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2637);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist8;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nit__AExpr.color;
idtype30 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2639);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist9;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nit__TKwend.color;
idtype33 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2641);
fatal_exit(1);
}
var34 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction54> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction55#action for (self: ReduceAction55, Parser) */
void nit__parser___nit__parser__ReduceAction55___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2677);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2679);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2681);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable__nit__TKwnew.color;
idtype18 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2683);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable__nit__ASignature.color;
idtype21 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2685);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable__nit__AAnnotations.color;
idtype24 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2687);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist7;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable__nit__TKwdo.color;
idtype27 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2689);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist8;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nit__AExpr.color;
idtype30 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2691);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist9;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nit__TKwend.color;
idtype33 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2693);
fatal_exit(1);
}
var34 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction55> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction56#action for (self: ReduceAction56, Parser) */
void nit__parser___nit__parser__ReduceAction56___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var39 /* : Int */;
long var40 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2730);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2732);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2734);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable__nit__TKwnew.color;
idtype19 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2736);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2738);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2740);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2742);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist8;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype30 = type_nullable__nit__TKwdo.color;
idtype31 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2744);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist9;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype33 = type_nullable__nit__AExpr.color;
idtype34 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var32 = 1;
} else {
if(cltype33 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var32 = 0;
} else {
var32 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2746);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist10;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype36 = type_nullable__nit__TKwend.color;
idtype37 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var35 = 1;
} else {
if(cltype36 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var35 = 0;
} else {
var35 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2748);
fatal_exit(1);
}
var38 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var38:AMethPropdef>*/
}
var_ppropdefnode1 = var38;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction56> */
{
var40 = nit___nit__Parser___go_to(var_p, var39);
}
{
nit___nit__Parser___push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction57#action for (self: ReduceAction57, Parser) */
void nit__parser___nit__parser__ReduceAction57___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2783);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2785);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2787);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype16 = type_nullable__nit__TKwmeth.color;
idtype17 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2789);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype19 = type_nullable__nit__AMethid.color;
idtype20 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2791);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype22 = type_nullable__nit__ASignature.color;
idtype23 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2793);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype25 = type_nullable__nit__AExternCalls.color;
idtype26 = type_nullable__nit__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2795);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype28 = type_nullable__nit__AExternCodeBlock.color;
idtype29 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2797);
fatal_exit(1);
}
var30 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, ((val*)NULL), var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction57> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction58#action for (self: ReduceAction58, Parser) */
void nit__parser___nit__parser__ReduceAction58___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2833);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2835);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2837);
fatal_exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable__nit__TKwmeth.color;
idtype18 = type_nullable__nit__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwmethnode5&3)?type_info[((long)var_tkwmethnode5&3)]:var_tkwmethnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2839);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2841);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2843);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype26 = type_nullable__nit__AAnnotations.color;
idtype27 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2845);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist8;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype29 = type_nullable__nit__AExternCalls.color;
idtype30 = type_nullable__nit__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2847);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist9;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype32 = type_nullable__nit__AExternCodeBlock.color;
idtype33 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2849);
fatal_exit(1);
}
var34 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, ((val*)NULL), ((val*)NULL), var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction58> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction59#action for (self: ReduceAction59, Parser) */
void nit__parser___nit__parser__ReduceAction59___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2883);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2885);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2887);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype15 = type_nullable__nit__TKwvar.color;
idtype16 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2889);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype18 = type_nullable__nit__TId.color;
idtype19 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2891);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype21 = type_nullable__nit__AType.color;
idtype22 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2893);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2895);
fatal_exit(1);
}
var26 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), var_pannotationsnode10, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var26:AAttrPropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction59> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction60#action for (self: ReduceAction60, Parser) */
void nit__parser___nit__parser__ReduceAction60___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tassignnode8 /* var tassignnode8: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var36 /* : Int */;
long var37 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2930);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2932);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2934);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable__nit__TKwvar.color;
idtype19 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2936);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype21 = type_nullable__nit__TId.color;
idtype22 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2938);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype24 = type_nullable__nit__AType.color;
idtype25 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2940);
fatal_exit(1);
}
var_tassignnode8 = var_nodearraylist7;
/* <var_tassignnode8:nullable Object> isa nullable TAssign */
cltype27 = type_nullable__nit__TAssign.color;
idtype28 = type_nullable__nit__TAssign.id;
if(var_tassignnode8 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_tassignnode8&3)?type_info[((long)var_tassignnode8&3)]:var_tassignnode8->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_tassignnode8&3)?type_info[((long)var_tassignnode8&3)]:var_tassignnode8->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2942);
fatal_exit(1);
}
var_pexprnode9 = var_nodearraylist9;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype30 = type_nullable__nit__AExpr.color;
idtype31 = type_nullable__nit__AExpr.id;
if(var_pexprnode9 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2944);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist10;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype33 = type_nullable__nit__AAnnotations.color;
idtype34 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var32 = 1;
} else {
if(cltype33 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var32 = 0;
} else {
var32 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2946);
fatal_exit(1);
}
var35 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var_tassignnode8, var_pexprnode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var35:AAttrPropdef>*/
}
var_ppropdefnode1 = var35;
var_node_list = var_ppropdefnode1;
var36 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction60> */
{
var37 = nit___nit__Parser___go_to(var_p, var36);
}
{
nit___nit__Parser___push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction61#action for (self: ReduceAction61, Parser) */
void nit__parser___nit__parser__ReduceAction61___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tkwdonode11 /* var tkwdonode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2979);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2981);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2983);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype16 = type_nullable__nit__TKwvar.color;
idtype17 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2985);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype19 = type_nullable__nit__TId.color;
idtype20 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2987);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype22 = type_nullable__nit__AType.color;
idtype23 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2989);
fatal_exit(1);
}
var_tkwdonode11 = var_nodearraylist7;
/* <var_tkwdonode11:nullable Object> isa nullable TKwdo */
cltype25 = type_nullable__nit__TKwdo.color;
idtype26 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2991);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype28 = type_nullable__nit__AExpr.color;
idtype29 = type_nullable__nit__AExpr.id;
if(var_pexprnode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2993);
fatal_exit(1);
}
var30 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode11, var_pexprnode12, ((val*)NULL)); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var30:AAttrPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction61> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction62#action for (self: ReduceAction62, Parser) */
void nit__parser___nit__parser__ReduceAction62___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_tkwdonode11 /* var tkwdonode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3027);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3029);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3031);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable__nit__TKwvar.color;
idtype18 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3033);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype20 = type_nullable__nit__TId.color;
idtype21 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3035);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype23 = type_nullable__nit__AType.color;
idtype24 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3037);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype26 = type_nullable__nit__AAnnotations.color;
idtype27 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3039);
fatal_exit(1);
}
var_tkwdonode11 = var_nodearraylist8;
/* <var_tkwdonode11:nullable Object> isa nullable TKwdo */
cltype29 = type_nullable__nit__TKwdo.color;
idtype30 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode11 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3041);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype32 = type_nullable__nit__AExpr.color;
idtype33 = type_nullable__nit__AExpr.id;
if(var_pexprnode12 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3043);
fatal_exit(1);
}
var34 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), var_pannotationsnode10, var_tkwdonode11, var_pexprnode12, ((val*)NULL)); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var34:AAttrPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction62> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction63#action for (self: ReduceAction63, Parser) */
void nit__parser___nit__parser__ReduceAction63___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwdonode11 /* var tkwdonode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3077);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3079);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3081);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable__nit__TKwvar.color;
idtype18 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3083);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype20 = type_nullable__nit__TId.color;
idtype21 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3085);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype23 = type_nullable__nit__AType.color;
idtype24 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3087);
fatal_exit(1);
}
var_tkwdonode11 = var_nodearraylist7;
/* <var_tkwdonode11:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable__nit__TKwdo.color;
idtype27 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode11 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3089);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nit__AExpr.color;
idtype30 = type_nullable__nit__AExpr.id;
if(var_pexprnode12 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3091);
fatal_exit(1);
}
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nit__TKwend.color;
idtype33 = type_nullable__nit__TKwend.id;
if(var_tkwendnode13 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3093);
fatal_exit(1);
}
var34 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode11, var_pexprnode12, var_tkwendnode13); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var34:AAttrPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction63> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
