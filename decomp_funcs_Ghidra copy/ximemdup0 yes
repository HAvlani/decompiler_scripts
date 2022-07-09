
char * ximemdup0(void *p,idx_t s)

{
  void *__dest;
  char *pcVar1;
  
  __dest = malloc(s + 1);
  if (__dest != (void *)0x0) {
    *(undefined *)((long)__dest + s) = 0;
    pcVar1 = (char *)memcpy(__dest,p,s);
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

