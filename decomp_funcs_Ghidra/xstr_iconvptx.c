
char * xstr_iconv(char *src,char *from_codeset,char *to_codeset)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = str_iconv(src,from_codeset,to_codeset);
  if (pcVar1 == (char *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  return pcVar1;
}

