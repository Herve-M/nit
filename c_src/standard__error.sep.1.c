#include "standard__error.sep.0.h"
/* method error#Error#message for (self: Error): String */
val* standard___standard__Error___message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_standard__error__Error___message].val; /* _message on <self:Error> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__error, 19);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method error#Error#message= for (self: Error, String) */
void standard___standard__Error___message_61d(val* self, val* p0) {
self->attrs[COLOR_standard__error__Error___message].val = p0; /* _message on <self:Error> */
RET_LABEL:;
}
/* method error#Error#to_s for (self: Error): String */
val* standard___standard__Error___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline error#Error#message (self) on <self:Error> */
var3 = self->attrs[COLOR_standard__error__Error___message].val; /* _message on <self:Error> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__error, 19);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method error#Error#init for (self: Error) */
void standard___standard__Error___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_standard___standard__Error___standard__kernel__Object__init]))(self); /* init on <self:Error>*/
}
RET_LABEL:;
}
