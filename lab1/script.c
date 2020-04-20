#include <stdio.h>
#include <unistd.h>
#include <limits.h>
int main(void) {
long r;
#ifdef _SC_ARG_MAX
r = sysconf(_SC_ARG_MAX
printf("The value of _SC_ARG_MAX
#else
printf("The _SC_ARG_MAX
#endif
#ifdef _SC_CHILD_MAX
r = sysconf(_SC_CHILD_MAX
printf("The value of _SC_CHILD_MAX
#else
printf("The _SC_CHILD_MAX
#endif
#ifdef _SC_CLK_TCK
r = sysconf(_SC_CLK_TCK
printf("The value of _SC_CLK_TCK
#else
printf("The _SC_CLK_TCK
#endif
#ifdef _SC_NGROUPS_MAX4
r = sysconf(_SC_NGROUPS_MAX4
printf("The value of _SC_NGROUPS_MAX4
#else
printf("The _SC_NGROUPS_MAX4
#endif
#ifdef _SC_OPEN_MAX
r = sysconf(_SC_OPEN_MAX
printf("The value of _SC_OPEN_MAX
#else
printf("The _SC_OPEN_MAX
#endif
#ifdef _SC_JOB_CONTROL6
r = sysconf(_SC_JOB_CONTROL6
printf("The value of _SC_JOB_CONTROL6
#else
printf("The _SC_JOB_CONTROL6
#endif
#ifdef _SC_SAVED_IDS
r = sysconf(_SC_SAVED_IDS
printf("The value of _SC_SAVED_IDS
#else
printf("The _SC_SAVED_IDS
#endif
#ifdef _SC_VERSION
r = sysconf(_SC_VERSION
printf("The value of _SC_VERSION
#else
printf("The _SC_VERSION
#endif
#ifdef _SC_PASS_MAX
r = sysconf(_SC_PASS_MAX
printf("The value of _SC_PASS_MAX
#else
printf("The _SC_PASS_MAX
#endif
#ifdef _SC_LOGNAME_MAX
r = sysconf(_SC_LOGNAME_MAX
printf("The value of _SC_LOGNAME_MAX
#else
printf("The _SC_LOGNAME_MAX
#endif
#ifdef _SC_PAGESIZE
r = sysconf(_SC_PAGESIZE
printf("The value of _SC_PAGESIZE
#else
printf("The _SC_PAGESIZE
#endif
#ifdef _SC_XOPEN_VERSION
r = sysconf(_SC_XOPEN_VERSION
printf("The value of _SC_XOPEN_VERSION
#else
printf("The _SC_XOPEN_VERSION
#endif
#ifdef _SC_NPROCESSORS_CONF
r = sysconf(_SC_NPROCESSORS_CONF
printf("The value of _SC_NPROCESSORS_CONF
#else
printf("The _SC_NPROCESSORS_CONF
#endif
#ifdef _SC_NPROCESSORS_ONLN
r = sysconf(_SC_NPROCESSORS_ONLN
printf("The value of _SC_NPROCESSORS_ONLN
#else
printf("The _SC_NPROCESSORS_ONLN
#endif
#ifdef _SC_STREAM_MAX
r = sysconf(_SC_STREAM_MAX
printf("The value of _SC_STREAM_MAX
#else
printf("The _SC_STREAM_MAX
#endif
#ifdef _SC_TZNAME_MAX
r = sysconf(_SC_TZNAME_MAX
printf("The value of _SC_TZNAME_MAX
#else
printf("The _SC_TZNAME_MAX
#endif
#ifdef _SC_AIO_LISTIO_MAX
r = sysconf(_SC_AIO_LISTIO_MAX
printf("The value of _SC_AIO_LISTIO_MAX
#else
printf("The _SC_AIO_LISTIO_MAX
#endif
#ifdef _SC_AIO_MAX
r = sysconf(_SC_AIO_MAX
printf("The value of _SC_AIO_MAX
#else
printf("The _SC_AIO_MAX
#endif
#ifdef _SC_AIO_PRIO_DELTA_MAX
r = sysconf(_SC_AIO_PRIO_DELTA_MAX
printf("The value of _SC_AIO_PRIO_DELTA_MAX
#else
printf("The _SC_AIO_PRIO_DELTA_MAX
#endif
#ifdef _SC_ASYNCHRONOUS_IO
r = sysconf(_SC_ASYNCHRONOUS_IO
printf("The value of _SC_ASYNCHRONOUS_IO
#else
printf("The _SC_ASYNCHRONOUS_IO
#endif
#ifdef _SC_DELAYTIMER_MAX
r = sysconf(_SC_DELAYTIMER_MAX
printf("The value of _SC_DELAYTIMER_MAX
#else
printf("The _SC_DELAYTIMER_MAX
#endif
#ifdef _SC_FSYNC
r = sysconf(_SC_FSYNC
printf("The value of _SC_FSYNC
#else
printf("The _SC_FSYNC
#endif
#ifdef _SC_MAPPED_FILES
r = sysconf(_SC_MAPPED_FILES
printf("The value of _SC_MAPPED_FILES
#else
printf("The _SC_MAPPED_FILES
#endif
#ifdef _SC_MEMLOCK
r = sysconf(_SC_MEMLOCK
printf("The value of _SC_MEMLOCK
#else
printf("The _SC_MEMLOCK
#endif
#ifdef _SC_MEMLOCK_RANGE
r = sysconf(_SC_MEMLOCK_RANGE
printf("The value of _SC_MEMLOCK_RANGE
#else
printf("The _SC_MEMLOCK_RANGE
#endif
#ifdef _SC_MEMORY_PROTECTION
r = sysconf(_SC_MEMORY_PROTECTION
printf("The value of _SC_MEMORY_PROTECTION
#else
printf("The _SC_MEMORY_PROTECTION
#endif
#ifdef _SC_MESSAGE_PASSING
r = sysconf(_SC_MESSAGE_PASSING
printf("The value of _SC_MESSAGE_PASSING
#else
printf("The _SC_MESSAGE_PASSING
#endif
#ifdef _SC_MQ_OPEN_MAX
r = sysconf(_SC_MQ_OPEN_MAX
printf("The value of _SC_MQ_OPEN_MAX
#else
printf("The _SC_MQ_OPEN_MAX
#endif
#ifdef _SC_MQ_PRIO_MAX
r = sysconf(_SC_MQ_PRIO_MAX
printf("The value of _SC_MQ_PRIO_MAX
#else
printf("The _SC_MQ_PRIO_MAX
#endif
#ifdef _SC_PRIORITIZED_IO
r = sysconf(_SC_PRIORITIZED_IO
printf("The value of _SC_PRIORITIZED_IO
#else
printf("The _SC_PRIORITIZED_IO
#endif
#ifdef _SC_PRIORITY_SCHEDULING
r = sysconf(_SC_PRIORITY_SCHEDULING
printf("The value of _SC_PRIORITY_SCHEDULING
#else
printf("The _SC_PRIORITY_SCHEDULING
#endif
#ifdef _SC_REALTIME_SIGNALS
r = sysconf(_SC_REALTIME_SIGNALS
printf("The value of _SC_REALTIME_SIGNALS
#else
printf("The _SC_REALTIME_SIGNALS
#endif
#ifdef _SC_RTSIG_MAX
r = sysconf(_SC_RTSIG_MAX
printf("The value of _SC_RTSIG_MAX
#else
printf("The _SC_RTSIG_MAX
#endif
#ifdef _SC_SEMAPHORES
r = sysconf(_SC_SEMAPHORES
printf("The value of _SC_SEMAPHORES
#else
printf("The _SC_SEMAPHORES
#endif
#ifdef _SC_SEM_NSEMS_MAX
r = sysconf(_SC_SEM_NSEMS_MAX
printf("The value of _SC_SEM_NSEMS_MAX
#else
printf("The _SC_SEM_NSEMS_MAX
#endif
#ifdef _SC_SEM_VALUE_MAX
r = sysconf(_SC_SEM_VALUE_MAX
printf("The value of _SC_SEM_VALUE_MAX
#else
printf("The _SC_SEM_VALUE_MAX
#endif
#ifdef _SC_SHARED_MEMORY_OBJECTS
r = sysconf(_SC_SHARED_MEMORY_OBJECTS
printf("The value of _SC_SHARED_MEMORY_OBJECTS
#else
printf("The _SC_SHARED_MEMORY_OBJECTS
#endif
#ifdef _SC_SIGQUEUE_MAX
r = sysconf(_SC_SIGQUEUE_MAX
printf("The value of _SC_SIGQUEUE_MAX
#else
printf("The _SC_SIGQUEUE_MAX
#endif
#ifdef _SC_SIGRT_MIN
r = sysconf(_SC_SIGRT_MIN
printf("The value of _SC_SIGRT_MIN
#else
printf("The _SC_SIGRT_MIN
#endif
#ifdef _SC_SIGRT_MAX
r = sysconf(_SC_SIGRT_MAX
printf("The value of _SC_SIGRT_MAX
#else
printf("The _SC_SIGRT_MAX
#endif
#ifdef _SC_SYNCHRONIZED_IO
r = sysconf(_SC_SYNCHRONIZED_IO
printf("The value of _SC_SYNCHRONIZED_IO
#else
printf("The _SC_SYNCHRONIZED_IO
#endif
#ifdef _SC_TIMERS
r = sysconf(_SC_TIMERS
printf("The value of _SC_TIMERS
#else
printf("The _SC_TIMERS
#endif
#ifdef _SC_TIMER_MAX
r = sysconf(_SC_TIMER_MAX
printf("The value of _SC_TIMER_MAX
#else
printf("The _SC_TIMER_MAX
#endif
#ifdef _SC_2_C_BIND
r = sysconf(_SC_2_C_BIND
printf("The value of _SC_2_C_BIND
#else
printf("The _SC_2_C_BIND
#endif
#ifdef _SC_2_C_DEV
r = sysconf(_SC_2_C_DEV);
printf("The value of _SC_2_C_DEV is %d.", r);
#else
printf("The _SC_2_C_DEV is undefined.\n");
#endif
#ifdef 
r = sysconf(
printf("The value of 
#else
printf("The 
#endif
#ifdef _SC_2_C_VERSION
r = sysconf(_SC_2_C_VERSION
printf("The value of _SC_2_C_VERSION
#else
printf("The _SC_2_C_VERSION
#endif
#ifdef _SC_2_FORT_DEV
r = sysconf(_SC_2_FORT_DEV);
printf("The value of _SC_2_FORT_DEV is %d.", r);
#else
printf("The _SC_2_FORT_DEV is undefined.\n");
#endif
#ifdef 
r = sysconf(
printf("The value of 
#else
printf("The 
#endif
#ifdef _SC_2_FORT_RUN
r = sysconf(_SC_2_FORT_RUN);
printf("The value of _SC_2_FORT_RUN is %d.", r);
#else
printf("The _SC_2_FORT_RUN is undefined.\n");
#endif
#ifdef 
r = sysconf(
printf("The value of 
#else
printf("The 
#endif
#ifdef _SC_2_LOCALEDEF
r = sysconf(_SC_2_LOCALEDEF
printf("The value of _SC_2_LOCALEDEF
#else
printf("The _SC_2_LOCALEDEF
#endif
#ifdef _SC_2_SW_DEV
r = sysconf(_SC_2_SW_DEV);
printf("The value of _SC_2_SW_DEV is %d.", r);
#else
printf("The _SC_2_SW_DEV is undefined.\n");
#endif
#ifdef 
r = sysconf(
printf("The value of 
#else
printf("The 
#endif
#ifdef _SC_2_UPE
r = sysconf(_SC_2_UPE
printf("The value of _SC_2_UPE
#else
printf("The _SC_2_UPE
#endif
#ifdef _SC_2_VERSION
r = sysconf(_SC_2_VERSION
printf("The value of _SC_2_VERSION
#else
printf("The _SC_2_VERSION
#endif
#ifdef _SC_BC_BASE_MAX
r = sysconf(_SC_BC_BASE_MAX
printf("The value of _SC_BC_BASE_MAX
#else
printf("The _SC_BC_BASE_MAX
#endif
#ifdef _SC_BC_DIM_MAX
r = sysconf(_SC_BC_DIM_MAX);
printf("The value of _SC_BC_DIM_MAX is %d.", r);
#else
printf("The _SC_BC_DIM_MAX is undefined.\n");
#endif
#ifdef 
r = sysconf(
printf("The value of 
#else
printf("The 
#endif
#ifdef _SC_BC_SCALE_MAX
r = sysconf(_SC_BC_SCALE_MAX
printf("The value of _SC_BC_SCALE_MAX
#else
printf("The _SC_BC_SCALE_MAX
#endif
#ifdef _SC_BC_STRING_MAX
r = sysconf(_SC_BC_STRING_MAX
printf("The value of _SC_BC_STRING_MAX
#else
printf("The _SC_BC_STRING_MAX
#endif
#ifdef _SC_COLL_WEIGHTS_MAX
r = sysconf(_SC_COLL_WEIGHTS_MAX
printf("The value of _SC_COLL_WEIGHTS_MAX
#else
printf("The _SC_COLL_WEIGHTS_MAX
#endif
#ifdef _SC_EXPR_NEST_MAX
r = sysconf(_SC_EXPR_NEST_MAX
printf("The value of _SC_EXPR_NEST_MAX
#else
printf("The _SC_EXPR_NEST_MAX
#endif
#ifdef _SC_LINE_MAX
r = sysconf(_SC_LINE_MAX);
printf("The value of _SC_LINE_MAX is %d.", r);
#else
printf("The _SC_LINE_MAX is undefined.\n");
#endif
#ifdef 
r = sysconf(
printf("The value of 
#else
printf("The 
#endif
#ifdef _SC_RE_DUP_MAX
r = sysconf(_SC_RE_DUP_MAX
printf("The value of _SC_RE_DUP_MAX
#else
printf("The _SC_RE_DUP_MAX
#endif
#ifdef _SC_XOPEN_CRYPT
r = sysconf(_SC_XOPEN_CRYPT
printf("The value of _SC_XOPEN_CRYPT
#else
printf("The _SC_XOPEN_CRYPT
#endif
#ifdef _SC_XOPEN_ENH_I18N
r = sysconf(_SC_XOPEN_ENH_I18N
printf("The value of _SC_XOPEN_ENH_I18N
#else
printf("The _SC_XOPEN_ENH_I18N
#endif
#ifdef _SC_XOPEN_SHM
r = sysconf(_SC_XOPEN_SHM
printf("The value of _SC_XOPEN_SHM
#else
printf("The _SC_XOPEN_SHM
#endif
#ifdef _SC_2_CHAR_TERM
r = sysconf(_SC_2_CHAR_TERM
printf("The value of _SC_2_CHAR_TERM
#else
printf("The _SC_2_CHAR_TERM
#endif
#ifdef _SC_XOPEN_XCU_VERSION
r = sysconf(_SC_XOPEN_XCU_VERSION
printf("The value of _SC_XOPEN_XCU_VERSION
#else
printf("The _SC_XOPEN_XCU_VERSION
#endif
#ifdef _SC_ATEXIT_MAX
r = sysconf(_SC_ATEXIT_MAX
printf("The value of _SC_ATEXIT_MAX
#else
printf("The _SC_ATEXIT_MAX
#endif
#ifdef _SC_IOV_MAX
r = sysconf(_SC_IOV_MAX
printf("The value of _SC_IOV_MAX
#else
printf("The _SC_IOV_MAX
#endif
#ifdef _SC_XOPEN_UNIX
r = sysconf(_SC_XOPEN_UNIX
printf("The value of _SC_XOPEN_UNIX
#else
printf("The _SC_XOPEN_UNIX
#endif
#ifdef _SC_PAGE_SIZE
r = sysconf(_SC_PAGE_SIZE
printf("The value of _SC_PAGE_SIZE
#else
printf("The _SC_PAGE_SIZE
#endif
#ifdef _SC_PHYS_PAGES
r = sysconf(_SC_PHYS_PAGES
printf("The value of _SC_PHYS_PAGES
#else
printf("The _SC_PHYS_PAGES
#endif
#ifdef _SC_AVPHYS_PAGES
r = sysconf(_SC_AVPHYS_PAGES
printf("The value of _SC_AVPHYS_PAGES
#else
printf("The _SC_AVPHYS_PAGES
#endif
#ifdef _SC_COHER_BLKSZ
r = sysconf(_SC_COHER_BLKSZ
printf("The value of _SC_COHER_BLKSZ
#else
printf("The _SC_COHER_BLKSZ
#endif
#ifdef _SC_SPLIT_CACHE
r = sysconf(_SC_SPLIT_CACHE
printf("The value of _SC_SPLIT_CACHE
#else
printf("The _SC_SPLIT_CACHE
#endif
#ifdef _SC_ICACHE_SZ
r = sysconf(_SC_ICACHE_SZ
printf("The value of _SC_ICACHE_SZ
#else
printf("The _SC_ICACHE_SZ
#endif
#ifdef _SC_DCACHE_SZ
r = sysconf(_SC_DCACHE_SZ
printf("The value of _SC_DCACHE_SZ
#else
printf("The _SC_DCACHE_SZ
#endif
#ifdef _SC_ICACHE_LINESZ
r = sysconf(_SC_ICACHE_LINESZ
printf("The value of _SC_ICACHE_LINESZ
#else
printf("The _SC_ICACHE_LINESZ
#endif
#ifdef _SC_DCACHE_LINESZ
r = sysconf(_SC_DCACHE_LINESZ
printf("The value of _SC_DCACHE_LINESZ
#else
printf("The _SC_DCACHE_LINESZ
#endif
#ifdef _SC_ICACHE_BLKSZ
r = sysconf(_SC_ICACHE_BLKSZ
printf("The value of _SC_ICACHE_BLKSZ
#else
printf("The _SC_ICACHE_BLKSZ
#endif
#ifdef _SC_DCACHE_BLKSZ
r = sysconf(_SC_DCACHE_BLKSZ
printf("The value of _SC_DCACHE_BLKSZ
#else
printf("The _SC_DCACHE_BLKSZ
#endif
#ifdef _SC_DCACHE_TBLKSZ
r = sysconf(_SC_DCACHE_TBLKSZ
printf("The value of _SC_DCACHE_TBLKSZ
#else
printf("The _SC_DCACHE_TBLKSZ
#endif
#ifdef _SC_ICACHE_ASSOC
r = sysconf(_SC_ICACHE_ASSOC
printf("The value of _SC_ICACHE_ASSOC
#else
printf("The _SC_ICACHE_ASSOC
#endif
#ifdef _SC_DCACHE_ASSOC
r = sysconf(_SC_DCACHE_ASSOC
printf("The value of _SC_DCACHE_ASSOC
#else
printf("The _SC_DCACHE_ASSOC
#endif
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS
r = sysconf(_SC_THREAD_DESTRUCTOR_ITERATIONS
printf("The value of _SC_THREAD_DESTRUCTOR_ITERATIONS
#else
printf("The _SC_THREAD_DESTRUCTOR_ITERATIONS
#endif
#ifdef _SC_GETGR_R_SIZE_MAX
r = sysconf(_SC_GETGR_R_SIZE_MAX
printf("The value of _SC_GETGR_R_SIZE_MAX
#else
printf("The _SC_GETGR_R_SIZE_MAX
#endif
#ifdef _SC_GETPW_R_SIZE_MAX
r = sysconf(_SC_GETPW_R_SIZE_MAX
printf("The value of _SC_GETPW_R_SIZE_MAX
#else
printf("The _SC_GETPW_R_SIZE_MAX
#endif
#ifdef _SC_LOGIN_NAME_MAX
r = sysconf(_SC_LOGIN_NAME_MAX
printf("The value of _SC_LOGIN_NAME_MAX
#else
printf("The _SC_LOGIN_NAME_MAX
#endif
#ifdef _SC_THREAD_KEYS_MAX
r = sysconf(_SC_THREAD_KEYS_MAX
printf("The value of _SC_THREAD_KEYS_MAX
#else
printf("The _SC_THREAD_KEYS_MAX
#endif
#ifdef _SC_THREAD_STACK_MIN
r = sysconf(_SC_THREAD_STACK_MIN
printf("The value of _SC_THREAD_STACK_MIN
#else
printf("The _SC_THREAD_STACK_MIN
#endif
#ifdef _SC_THREAD_THREADS_MAX
r = sysconf(_SC_THREAD_THREADS_MAX
printf("The value of _SC_THREAD_THREADS_MAX
#else
printf("The _SC_THREAD_THREADS_MAX
#endif
#ifdef _SC_TTY_NAME_MAX
r = sysconf(_SC_TTY_NAME_MAX
printf("The value of _SC_TTY_NAME_MAX
#else
printf("The _SC_TTY_NAME_MAX
#endif
#ifdef _SC_THREADS
r = sysconf(_SC_THREADS
printf("The value of _SC_THREADS
#else
printf("The _SC_THREADS
#endif
#ifdef _SC_THREAD_ATTR_STACKADDR
r = sysconf(_SC_THREAD_ATTR_STACKADDR
printf("The value of _SC_THREAD_ATTR_STACKADDR
#else
printf("The _SC_THREAD_ATTR_STACKADDR
#endif
#ifdef _SC_THREAD_ATTR_STACKSIZE
r = sysconf(_SC_THREAD_ATTR_STACKSIZE
printf("The value of _SC_THREAD_ATTR_STACKSIZE
#else
printf("The _SC_THREAD_ATTR_STACKSIZE
#endif
#ifdef _SC_THREAD_PRIORITY_SCHEDULING
r = sysconf(_SC_THREAD_PRIORITY_SCHEDULING
printf("The value of _SC_THREAD_PRIORITY_SCHEDULING
#else
printf("The _SC_THREAD_PRIORITY_SCHEDULING
#endif
#ifdef _SC_THREAD_PRIO_INHERIT
r = sysconf(_SC_THREAD_PRIO_INHERIT
printf("The value of _SC_THREAD_PRIO_INHERIT
#else
printf("The _SC_THREAD_PRIO_INHERIT
#endif
#ifdef _SC_THREAD_PRIO_PROTECT
r = sysconf(_SC_THREAD_PRIO_PROTECT
printf("The value of _SC_THREAD_PRIO_PROTECT
#else
printf("The _SC_THREAD_PRIO_PROTECT
#endif
#ifdef _SC_THREAD_PROCESS_SHARED
r = sysconf(_SC_THREAD_PROCESS_SHARED
printf("The value of _SC_THREAD_PROCESS_SHARED
#else
printf("The _SC_THREAD_PROCESS_SHARED
#endif
#ifdef _SC_THREAD_SAFE_FUNCTIONS
r = sysconf(_SC_THREAD_SAFE_FUNCTIONS
printf("The value of _SC_THREAD_SAFE_FUNCTIONS
#else
printf("The _SC_THREAD_SAFE_FUNCTIONS
#endif
#ifdef _SC_PPC_GRANULE_SZ
r = sysconf(_SC_PPC_GRANULE_SZ
printf("The value of _SC_PPC_GRANULE_SZ
#else
printf("The _SC_PPC_GRANULE_SZ
#endif
#ifdef _SC_PPC_TB_TICKSPSECH
r = sysconf(_SC_PPC_TB_TICKSPSECH
printf("The value of _SC_PPC_TB_TICKSPSECH
#else
printf("The _SC_PPC_TB_TICKSPSECH
#endif
#ifdef _SC_PPC_TB_TICKSPSECL
r = sysconf(_SC_PPC_TB_TICKSPSECL
printf("The value of _SC_PPC_TB_TICKSPSECL
#else
printf("The _SC_PPC_TB_TICKSPSECL
#endif
#ifdef _SC_ARG_MAX
r = sysconf(_SC_ARG_MAX
printf("The value of _SC_ARG_MAX
#else
printf("The _SC_ARG_MAX
#endif
#ifdef _SC_CHILD_MAX
r = sysconf(_SC_CHILD_MAX
printf("The value of _SC_CHILD_MAX
#else
printf("The _SC_CHILD_MAX
#endif
#ifdef _SC_CLK_TCK
r = sysconf(_SC_CLK_TCK
printf("The value of _SC_CLK_TCK
#else
printf("The _SC_CLK_TCK
#endif
#ifdef _SC_NGROUPS_MAX
r = sysconf(_SC_NGROUPS_MAX
printf("The value of _SC_NGROUPS_MAX
#else
printf("The _SC_NGROUPS_MAX
#endif
#ifdef _SC_OPEN_MAX
r = sysconf(_SC_OPEN_MAX
printf("The value of _SC_OPEN_MAX
#else
printf("The _SC_OPEN_MAX
#endif
#ifdef _SC_STREAM_MAX
r = sysconf(_SC_STREAM_MAX
printf("The value of _SC_STREAM_MAX
#else
printf("The _SC_STREAM_MAX
#endif
#ifdef _SC_TZNAME_MAX
r = sysconf(_SC_TZNAME_MAX
printf("The value of _SC_TZNAME_MAX
#else
printf("The _SC_TZNAME_MAX
#endif
#ifdef _SC_JOB_CONTROL
r = sysconf(_SC_JOB_CONTROL
printf("The value of _SC_JOB_CONTROL
#else
printf("The _SC_JOB_CONTROL
#endif
#ifdef _SC_SAVED_IDS
r = sysconf(_SC_SAVED_IDS
printf("The value of _SC_SAVED_IDS
#else
printf("The _SC_SAVED_IDS
#endif
#ifdef _SC_VERSION
r = sysconf(_SC_VERSION
printf("The value of _SC_VERSION
#else
printf("The _SC_VERSION
#endif
#ifdef _SC_PASS_MAX
r = sysconf(_SC_PASS_MAX
printf("The value of _SC_PASS_MAX
#else
printf("The _SC_PASS_MAX
#endif
#ifdef _SC_LOGNAME_MAX
r = sysconf(_SC_LOGNAME_MAX
printf("The value of _SC_LOGNAME_MAX
#else
printf("The _SC_LOGNAME_MAX
#endif
#ifdef _SC_PAGESIZE
r = sysconf(_SC_PAGESIZE
printf("The value of _SC_PAGESIZE
#else
printf("The _SC_PAGESIZE
#endif
#ifdef _SC_XOPEN_VERSION
r = sysconf(_SC_XOPEN_VERSION
printf("The value of _SC_XOPEN_VERSION
#else
printf("The _SC_XOPEN_VERSION
#endif
#ifdef _SC_STREAM_MAX
r = sysconf(_SC_STREAM_MAX
printf("The value of _SC_STREAM_MAX
#else
printf("The _SC_STREAM_MAX
#endif
#ifdef _SC_TZNAME_MAX
r = sysconf(_SC_TZNAME_MAX
printf("The value of _SC_TZNAME_MAX
#else
printf("The _SC_TZNAME_MAX
#endif
#ifdef _SC_BC_BASE_MAX
r = sysconf(_SC_BC_BASE_MAX
printf("The value of _SC_BC_BASE_MAX
#else
printf("The _SC_BC_BASE_MAX
#endif
#ifdef _SC_BC_DIM_MAX
r = sysconf(_SC_BC_DIM_MAX
printf("The value of _SC_BC_DIM_MAX
#else
printf("The _SC_BC_DIM_MAX
#endif
#ifdef _SC_BC_SCALE_MAX
r = sysconf(_SC_BC_SCALE_MAX
printf("The value of _SC_BC_SCALE_MAX
#else
printf("The _SC_BC_SCALE_MAX
#endif
#ifdef _SC_BC_STRING_MAX
r = sysconf(_SC_BC_STRING_MAX
printf("The value of _SC_BC_STRING_MAX
#else
printf("The _SC_BC_STRING_MAX
#endif
#ifdef _SC_COLL_WEIGHTS_MAX
r = sysconf(_SC_COLL_WEIGHTS_MAX
printf("The value of _SC_COLL_WEIGHTS_MAX
#else
printf("The _SC_COLL_WEIGHTS_MAX
#endif
#ifdef _SC_EQUIV_CLASS_MAX
r = sysconf(_SC_EQUIV_CLASS_MAX
printf("The value of _SC_EQUIV_CLASS_MAX
#else
printf("The _SC_EQUIV_CLASS_MAX
#endif
#ifdef _SC_EXPR_NEST_MAX
r = sysconf(_SC_EXPR_NEST_MAX
printf("The value of _SC_EXPR_NEST_MAX
#else
printf("The _SC_EXPR_NEST_MAX
#endif
#ifdef _SC_LINE_MAX
r = sysconf(_SC_LINE_MAX
printf("The value of _SC_LINE_MAX
#else
printf("The _SC_LINE_MAX
#endif
#ifdef _SC_RE_DUP_MAX
r = sysconf(_SC_RE_DUP_MAX
printf("The value of _SC_RE_DUP_MAX
#else
printf("The _SC_RE_DUP_MAX
#endif
#ifdef _SC_2_VERSION
r = sysconf(_SC_2_VERSION
printf("The value of _SC_2_VERSION
#else
printf("The _SC_2_VERSION
#endif
#ifdef _SC_2_C_BIND
r = sysconf(_SC_2_C_BIND
printf("The value of _SC_2_C_BIND
#else
printf("The _SC_2_C_BIND
#endif
#ifdef _SC_2_C_DEV
r = sysconf(_SC_2_C_DEV
printf("The value of _SC_2_C_DEV
#else
printf("The _SC_2_C_DEV
#endif
#ifdef _SC_2_FORT_DEV
r = sysconf(_SC_2_FORT_DEV
printf("The value of _SC_2_FORT_DEV
#else
printf("The _SC_2_FORT_DEV
#endif
#ifdef _SC_2_FORT_RUN
r = sysconf(_SC_2_FORT_RUN
printf("The value of _SC_2_FORT_RUN
#else
printf("The _SC_2_FORT_RUN
#endif
#ifdef _SC_2_SW_DEV
r = sysconf(_SC_2_SW_DEV
printf("The value of _SC_2_SW_DEV
#else
printf("The _SC_2_SW_DEV
#endif
#ifdef _SC_2_LOCALEDEF
r = sysconf(_SC_2_LOCALEDEF
printf("The value of _SC_2_LOCALEDEF
#else
printf("The _SC_2_LOCALEDEF
#endif
#ifdef _SC_AIO_LISTIO_MAX
r = sysconf(_SC_AIO_LISTIO_MAX
printf("The value of _SC_AIO_LISTIO_MAX
#else
printf("The _SC_AIO_LISTIO_MAX
#endif
#ifdef _SC_AIO_MAX
r = sysconf(_SC_AIO_MAX
printf("The value of _SC_AIO_MAX
#else
printf("The _SC_AIO_MAX
#endif
#ifdef _SC_AIO_PRIO_DELTA_MAX
r = sysconf(_SC_AIO_PRIO_DELTA_MAX
printf("The value of _SC_AIO_PRIO_DELTA_MAX
#else
printf("The _SC_AIO_PRIO_DELTA_MAX
#endif
#ifdef _SC_DELAYTIMER_MAX
r = sysconf(_SC_DELAYTIMER_MAX
printf("The value of _SC_DELAYTIMER_MAX
#else
printf("The _SC_DELAYTIMER_MAX
#endif
#ifdef _SC_MQ_OPEN_MAX
r = sysconf(_SC_MQ_OPEN_MAX
printf("The value of _SC_MQ_OPEN_MAX
#else
printf("The _SC_MQ_OPEN_MAX
#endif
#ifdef _SC_MQ_PRIO_MAX
r = sysconf(_SC_MQ_PRIO_MAX
printf("The value of _SC_MQ_PRIO_MAX
#else
printf("The _SC_MQ_PRIO_MAX
#endif
#ifdef _SC_RTSIG_MAX
r = sysconf(_SC_RTSIG_MAX
printf("The value of _SC_RTSIG_MAX
#else
printf("The _SC_RTSIG_MAX
#endif
#ifdef _SC_SEM_NSEMS_MAX
r = sysconf(_SC_SEM_NSEMS_MAX
printf("The value of _SC_SEM_NSEMS_MAX
#else
printf("The _SC_SEM_NSEMS_MAX
#endif
#ifdef _SC_SEM_VALUE_MAX
r = sysconf(_SC_SEM_VALUE_MAX
printf("The value of _SC_SEM_VALUE_MAX
#else
printf("The _SC_SEM_VALUE_MAX
#endif
#ifdef _SC_SIGQUEUE_MAX
r = sysconf(_SC_SIGQUEUE_MAX
printf("The value of _SC_SIGQUEUE_MAX
#else
printf("The _SC_SIGQUEUE_MAX
#endif
#ifdef _SC_TIMER_MAX
r = sysconf(_SC_TIMER_MAX
printf("The value of _SC_TIMER_MAX
#else
printf("The _SC_TIMER_MAX
#endif
#ifdef _SC_ASYNCHRONOUS_IO
r = sysconf(_SC_ASYNCHRONOUS_IO
printf("The value of _SC_ASYNCHRONOUS_IO
#else
printf("The _SC_ASYNCHRONOUS_IO
#endif
#ifdef _SC_FSYNC
r = sysconf(_SC_FSYNC
printf("The value of _SC_FSYNC
#else
printf("The _SC_FSYNC
#endif
#ifdef _SC_MAPPED_FILES
r = sysconf(_SC_MAPPED_FILES
printf("The value of _SC_MAPPED_FILES
#else
printf("The _SC_MAPPED_FILES
#endif
#ifdef _SC_MEMLOCK
r = sysconf(_SC_MEMLOCK
printf("The value of _SC_MEMLOCK
#else
printf("The _SC_MEMLOCK
#endif
#ifdef _SC_MEMLOCK_RANGE
r = sysconf(_SC_MEMLOCK_RANGE
printf("The value of _SC_MEMLOCK_RANGE
#else
printf("The _SC_MEMLOCK_RANGE
#endif
#ifdef _SC_MEMORY_PROTECTION
r = sysconf(_SC_MEMORY_PROTECTION
printf("The value of _SC_MEMORY_PROTECTION
#else
printf("The _SC_MEMORY_PROTECTION
#endif
#ifdef _SC_MESSAGE_PASSING
r = sysconf(_SC_MESSAGE_PASSING
printf("The value of _SC_MESSAGE_PASSING
#else
printf("The _SC_MESSAGE_PASSING
#endif
#ifdef _SC_PRIORITIZED_IO
r = sysconf(_SC_PRIORITIZED_IO
printf("The value of _SC_PRIORITIZED_IO
#else
printf("The _SC_PRIORITIZED_IO
#endif
#ifdef _SC_PRIORITY_SCHEDULING
r = sysconf(_SC_PRIORITY_SCHEDULING
printf("The value of _SC_PRIORITY_SCHEDULING
#else
printf("The _SC_PRIORITY_SCHEDULING
#endif
#ifdef _SC_REALTIME_SIGNALS
r = sysconf(_SC_REALTIME_SIGNALS
printf("The value of _SC_REALTIME_SIGNALS
#else
printf("The _SC_REALTIME_SIGNALS
#endif
#ifdef _SC_SEMAPHORES
r = sysconf(_SC_SEMAPHORES
printf("The value of _SC_SEMAPHORES
#else
printf("The _SC_SEMAPHORES
#endif
#ifdef _SC_SHARED_MEMORY_OBJECTS
r = sysconf(_SC_SHARED_MEMORY_OBJECTS
printf("The value of _SC_SHARED_MEMORY_OBJECTS
#else
printf("The _SC_SHARED_MEMORY_OBJECTS
#endif
#ifdef _SC_SYNCHRONIZED_IO
r = sysconf(_SC_SYNCHRONIZED_IO
printf("The value of _SC_SYNCHRONIZED_IO
#else
printf("The _SC_SYNCHRONIZED_IO
#endif
#ifdef _SC_TIMERS
r = sysconf(_SC_TIMERS
printf("The value of _SC_TIMERS
#else
printf("The _SC_TIMERS
#endif
return 0;
}