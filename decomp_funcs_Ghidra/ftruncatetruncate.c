
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* ftruncate@@GLIBC_2.2.5 */
  halt_baddata();
}

