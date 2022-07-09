
char * xstr_cd_iconv(char *src,iconv_t cd)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = str_cd_iconv(src,cd);
  if (pcVar1 == (char *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  return pcVar1;
}

