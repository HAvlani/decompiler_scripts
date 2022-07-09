
char * xcharalloc(size_t n)

{
  char *pcVar1;
  
  pcVar1 = (char *)malloc(n);
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

