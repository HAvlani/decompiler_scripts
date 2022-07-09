
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int clock_getres(clockid_t __clock_id,timespec *__res)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* clock_getres@@GLIBC_2.17 */
  halt_baddata();
}

