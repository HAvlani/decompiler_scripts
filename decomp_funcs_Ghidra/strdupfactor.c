
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* strdup@@GLIBC_2.2.5 */
  halt_baddata();
}

