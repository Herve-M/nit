/* This C header file is generated by NIT to compile modules and programs that requires ./../lib/standard/exec. */
#ifndef standard___exec_sep
#define standard___exec_sep
#include "standard___stream._sep.h"
#include <nit_common.h>
#include <exec_nit.h>

extern const classtable_elt_t VFT_standard___exec___Process[];

extern const classtable_elt_t VFT_standard___exec___IProcess[];

extern const classtable_elt_t VFT_standard___exec___OProcess[];

extern const classtable_elt_t VFT_standard___exec___IOProcess[];

extern const classtable_elt_t VFT_standard___exec___NativeProcess[];
struct TBOX_NativeProcess { const classtable_elt_t * vft; bigint object_id; void * val;};
val_t BOX_NativeProcess(void * val);
#define UNBOX_NativeProcess(x) (((struct TBOX_NativeProcess *)(VAL2OBJ(x)))->val)
extern const char *LOCATE_standard___exec;
extern const int SFT_standard___exec[];
#define ID_standard___exec___Process (SFT_standard___exec[0])
#define COLOR_standard___exec___Process (SFT_standard___exec[1])
#define ATTR_standard___exec___Process____data(recv) ATTR(recv, (SFT_standard___exec[2] + 0))
#define INIT_TABLE_POS_standard___exec___Process (SFT_standard___exec[3] + 0)
#define CALL_standard___exec___Process___id(recv) ((standard___exec___Process___id_t)CALL((recv), (SFT_standard___exec[3] + 1)))
#define CALL_standard___exec___Process___is_finished(recv) ((standard___exec___Process___is_finished_t)CALL((recv), (SFT_standard___exec[3] + 2)))
#define CALL_standard___exec___Process___wait(recv) ((standard___exec___Process___wait_t)CALL((recv), (SFT_standard___exec[3] + 3)))
#define CALL_standard___exec___Process___status(recv) ((standard___exec___Process___status_t)CALL((recv), (SFT_standard___exec[3] + 4)))
#define CALL_standard___exec___Process___init(recv) ((standard___exec___Process___init_t)CALL((recv), (SFT_standard___exec[3] + 5)))
#define CALL_standard___exec___Process___init_(recv) ((standard___exec___Process___init__t)CALL((recv), (SFT_standard___exec[3] + 6)))
#define CALL_standard___exec___Process___execute(recv) ((standard___exec___Process___execute_t)CALL((recv), (SFT_standard___exec[3] + 7)))
#define CALL_standard___exec___Process___basic_exec_execute(recv) ((standard___exec___Process___basic_exec_execute_t)CALL((recv), (SFT_standard___exec[3] + 8)))
#define ID_standard___exec___IProcess (SFT_standard___exec[4])
#define COLOR_standard___exec___IProcess (SFT_standard___exec[5])
#define ATTR_standard___exec___IProcess____in(recv) ATTR(recv, (SFT_standard___exec[6] + 0))
#define INIT_TABLE_POS_standard___exec___IProcess (SFT_standard___exec[7] + 0)
#define CALL_standard___exec___IProcess___init(recv) ((standard___exec___IProcess___init_t)CALL((recv), (SFT_standard___exec[7] + 1)))
#define CALL_standard___exec___IProcess___init_(recv) ((standard___exec___IProcess___init__t)CALL((recv), (SFT_standard___exec[7] + 2)))
#define ID_standard___exec___OProcess (SFT_standard___exec[8])
#define COLOR_standard___exec___OProcess (SFT_standard___exec[9])
#define ATTR_standard___exec___OProcess____out(recv) ATTR(recv, (SFT_standard___exec[10] + 0))
#define INIT_TABLE_POS_standard___exec___OProcess (SFT_standard___exec[11] + 0)
#define CALL_standard___exec___OProcess___init(recv) ((standard___exec___OProcess___init_t)CALL((recv), (SFT_standard___exec[11] + 1)))
#define CALL_standard___exec___OProcess___init_(recv) ((standard___exec___OProcess___init__t)CALL((recv), (SFT_standard___exec[11] + 2)))
#define ID_standard___exec___IOProcess (SFT_standard___exec[12])
#define COLOR_standard___exec___IOProcess (SFT_standard___exec[13])
#define INIT_TABLE_POS_standard___exec___IOProcess (SFT_standard___exec[14] + 0)
#define CALL_standard___exec___IOProcess___init(recv) ((standard___exec___IOProcess___init_t)CALL((recv), (SFT_standard___exec[14] + 1)))
#define CALL_standard___exec___IOProcess___init_(recv) ((standard___exec___IOProcess___init__t)CALL((recv), (SFT_standard___exec[14] + 2)))
#define CALL_standard___exec___Sys___system(recv) ((standard___exec___Sys___system_t)CALL((recv), (SFT_standard___exec[15] + 0)))
#define CALL_standard___exec___NativeString___system(recv) ((standard___exec___NativeString___system_t)CALL((recv), (SFT_standard___exec[16] + 0)))
#define ID_standard___exec___NativeProcess (SFT_standard___exec[17])
#define COLOR_standard___exec___NativeProcess (SFT_standard___exec[18])
#define INIT_TABLE_POS_standard___exec___NativeProcess (SFT_standard___exec[19] + 0)
#define CALL_standard___exec___NativeProcess___id(recv) ((standard___exec___NativeProcess___id_t)CALL((recv), (SFT_standard___exec[19] + 1)))
#define CALL_standard___exec___NativeProcess___is_finished(recv) ((standard___exec___NativeProcess___is_finished_t)CALL((recv), (SFT_standard___exec[19] + 2)))
#define CALL_standard___exec___NativeProcess___status(recv) ((standard___exec___NativeProcess___status_t)CALL((recv), (SFT_standard___exec[19] + 3)))
#define CALL_standard___exec___NativeProcess___wait(recv) ((standard___exec___NativeProcess___wait_t)CALL((recv), (SFT_standard___exec[19] + 4)))
#define CALL_standard___exec___NativeProcess___in_fd(recv) ((standard___exec___NativeProcess___in_fd_t)CALL((recv), (SFT_standard___exec[19] + 5)))
#define CALL_standard___exec___NativeProcess___out_fd(recv) ((standard___exec___NativeProcess___out_fd_t)CALL((recv), (SFT_standard___exec[19] + 6)))
#define CALL_standard___exec___NativeProcess___err_fd(recv) ((standard___exec___NativeProcess___err_fd_t)CALL((recv), (SFT_standard___exec[19] + 7)))
static const char * const LOCATE_standard___exec___Process___id = "exec::Process::id";
val_t standard___exec___Process___id(val_t p0);
typedef val_t (*standard___exec___Process___id_t)(val_t p0);
static const char * const LOCATE_standard___exec___Process___is_finished = "exec::Process::is_finished";
val_t standard___exec___Process___is_finished(val_t p0);
typedef val_t (*standard___exec___Process___is_finished_t)(val_t p0);
static const char * const LOCATE_standard___exec___Process___wait = "exec::Process::wait";
void standard___exec___Process___wait(val_t p0);
typedef void (*standard___exec___Process___wait_t)(val_t p0);
static const char * const LOCATE_standard___exec___Process___status = "exec::Process::status";
val_t standard___exec___Process___status(val_t p0);
typedef val_t (*standard___exec___Process___status_t)(val_t p0);
static const char * const LOCATE_standard___exec___Process___init = "exec::Process::init";
void standard___exec___Process___init(val_t p0, val_t p1, val_t p2, int* init_table);
typedef void (*standard___exec___Process___init_t)(val_t p0, val_t p1, val_t p2, int* init_table);
val_t NEW_Process_standard___exec___Process___init(val_t p0, val_t p1);
static const char * const LOCATE_standard___exec___Process___init_ = "exec::Process::init_";
void standard___exec___Process___init_(val_t p0, val_t p1, int* init_table);
typedef void (*standard___exec___Process___init__t)(val_t p0, val_t p1, int* init_table);
val_t NEW_Process_standard___exec___Process___init_(val_t p0);
static const char * const LOCATE_standard___exec___Process___execute = "exec::Process::execute";
void standard___exec___Process___execute(val_t p0, val_t p1, val_t p2, val_t p3, int* init_table);
typedef void (*standard___exec___Process___execute_t)(val_t p0, val_t p1, val_t p2, val_t p3, int* init_table);
val_t NEW_Process_standard___exec___Process___execute(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___exec___Process___basic_exec_execute = "exec::Process::basic_exec_execute";
val_t standard___exec___Process___basic_exec_execute(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
typedef val_t (*standard___exec___Process___basic_exec_execute_t)(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
static const char * const LOCATE_standard___exec___IProcess___close = "exec::IProcess::(stream::IOS::close)";
void standard___exec___IProcess___close(val_t p0);
typedef void (*standard___exec___IProcess___close_t)(val_t p0);
static const char * const LOCATE_standard___exec___IProcess___read_char = "exec::IProcess::(stream::IStream::read_char)";
val_t standard___exec___IProcess___read_char(val_t p0);
typedef val_t (*standard___exec___IProcess___read_char_t)(val_t p0);
static const char * const LOCATE_standard___exec___IProcess___eof = "exec::IProcess::(stream::IStream::eof)";
val_t standard___exec___IProcess___eof(val_t p0);
typedef val_t (*standard___exec___IProcess___eof_t)(val_t p0);
static const char * const LOCATE_standard___exec___IProcess___init = "exec::IProcess::init";
void standard___exec___IProcess___init(val_t p0, val_t p1, val_t p2, int* init_table);
typedef void (*standard___exec___IProcess___init_t)(val_t p0, val_t p1, val_t p2, int* init_table);
val_t NEW_IProcess_standard___exec___IProcess___init(val_t p0, val_t p1);
static const char * const LOCATE_standard___exec___IProcess___init_ = "exec::IProcess::init_";
void standard___exec___IProcess___init_(val_t p0, val_t p1, int* init_table);
typedef void (*standard___exec___IProcess___init__t)(val_t p0, val_t p1, int* init_table);
val_t NEW_IProcess_standard___exec___IProcess___init_(val_t p0);
static const char * const LOCATE_standard___exec___OProcess___close = "exec::OProcess::(stream::IOS::close)";
void standard___exec___OProcess___close(val_t p0);
typedef void (*standard___exec___OProcess___close_t)(val_t p0);
static const char * const LOCATE_standard___exec___OProcess___is_writable = "exec::OProcess::(stream::OStream::is_writable)";
val_t standard___exec___OProcess___is_writable(val_t p0);
typedef val_t (*standard___exec___OProcess___is_writable_t)(val_t p0);
static const char * const LOCATE_standard___exec___OProcess___write = "exec::OProcess::(stream::OStream::write)";
void standard___exec___OProcess___write(val_t p0, val_t p1);
typedef void (*standard___exec___OProcess___write_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___exec___OProcess___init = "exec::OProcess::init";
void standard___exec___OProcess___init(val_t p0, val_t p1, val_t p2, int* init_table);
typedef void (*standard___exec___OProcess___init_t)(val_t p0, val_t p1, val_t p2, int* init_table);
val_t NEW_OProcess_standard___exec___OProcess___init(val_t p0, val_t p1);
static const char * const LOCATE_standard___exec___OProcess___init_ = "exec::OProcess::init_";
void standard___exec___OProcess___init_(val_t p0, val_t p1, int* init_table);
typedef void (*standard___exec___OProcess___init__t)(val_t p0, val_t p1, int* init_table);
val_t NEW_OProcess_standard___exec___OProcess___init_(val_t p0);
static const char * const LOCATE_standard___exec___IOProcess___close = "exec::IOProcess::(stream::IOS::close)";
void standard___exec___IOProcess___close(val_t p0);
typedef void (*standard___exec___IOProcess___close_t)(val_t p0);
static const char * const LOCATE_standard___exec___IOProcess___init = "exec::IOProcess::init";
void standard___exec___IOProcess___init(val_t p0, val_t p1, val_t p2, int* init_table);
typedef void (*standard___exec___IOProcess___init_t)(val_t p0, val_t p1, val_t p2, int* init_table);
val_t NEW_IOProcess_standard___exec___IOProcess___init(val_t p0, val_t p1);
static const char * const LOCATE_standard___exec___IOProcess___init_ = "exec::IOProcess::init_";
void standard___exec___IOProcess___init_(val_t p0, val_t p1, int* init_table);
typedef void (*standard___exec___IOProcess___init__t)(val_t p0, val_t p1, int* init_table);
val_t NEW_IOProcess_standard___exec___IOProcess___init_(val_t p0);
static const char * const LOCATE_standard___exec___Sys___system = "exec::Sys::system";
val_t standard___exec___Sys___system(val_t p0, val_t p1);
typedef val_t (*standard___exec___Sys___system_t)(val_t p0, val_t p1);
val_t NEW_Sys_standard___kernel___Sys___init();
static const char * const LOCATE_standard___exec___NativeString___system = "exec::NativeString::system";
val_t standard___exec___NativeString___system(val_t p0);
typedef val_t (*standard___exec___NativeString___system_t)(val_t p0);
val_t NEW_NativeString_standard___string___NativeString___init();
static const char * const LOCATE_standard___exec___NativeProcess___id = "exec::NativeProcess::id";
val_t standard___exec___NativeProcess___id(val_t p0);
typedef val_t (*standard___exec___NativeProcess___id_t)(val_t p0);
static const char * const LOCATE_standard___exec___NativeProcess___is_finished = "exec::NativeProcess::is_finished";
val_t standard___exec___NativeProcess___is_finished(val_t p0);
typedef val_t (*standard___exec___NativeProcess___is_finished_t)(val_t p0);
static const char * const LOCATE_standard___exec___NativeProcess___status = "exec::NativeProcess::status";
val_t standard___exec___NativeProcess___status(val_t p0);
typedef val_t (*standard___exec___NativeProcess___status_t)(val_t p0);
static const char * const LOCATE_standard___exec___NativeProcess___wait = "exec::NativeProcess::wait";
void standard___exec___NativeProcess___wait(val_t p0);
typedef void (*standard___exec___NativeProcess___wait_t)(val_t p0);
static const char * const LOCATE_standard___exec___NativeProcess___in_fd = "exec::NativeProcess::in_fd";
val_t standard___exec___NativeProcess___in_fd(val_t p0);
typedef val_t (*standard___exec___NativeProcess___in_fd_t)(val_t p0);
static const char * const LOCATE_standard___exec___NativeProcess___out_fd = "exec::NativeProcess::out_fd";
val_t standard___exec___NativeProcess___out_fd(val_t p0);
typedef val_t (*standard___exec___NativeProcess___out_fd_t)(val_t p0);
static const char * const LOCATE_standard___exec___NativeProcess___err_fd = "exec::NativeProcess::err_fd";
val_t standard___exec___NativeProcess___err_fd(val_t p0);
typedef val_t (*standard___exec___NativeProcess___err_fd_t)(val_t p0);
#endif