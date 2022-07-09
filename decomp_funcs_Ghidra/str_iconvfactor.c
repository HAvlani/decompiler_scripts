
char * str_iconv(char *src,char *from_codeset,char *to_codeset)

{
  int iVar1;
  char *pcVar2;
  iconv_t cd;
  int *piVar3;
  
  if ((*src == '\0') || (iVar1 = c_strcasecmp(from_codeset,to_codeset), iVar1 == 0)) {
    pcVar2 = strdup(src);
    if (pcVar2 == (char *)0x0) {
      piVar3 = __errno_location();
      *piVar3 = 0xc;
    }
    return pcVar2;
  }
  cd = iconv_open(to_codeset,from_codeset);
  if (cd == (iconv_t)0xffffffffffffffff) {
    return (char *)0x0;
  }
  pcVar2 = str_cd_iconv(src,cd);
  if (pcVar2 != (char *)0x0) {
    iVar1 = iconv_close(cd);
    if (-1 < iVar1) {
      return pcVar2;
    }
    rpl_free(pcVar2);
    return (char *)0x0;
  }
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  iconv_close(cd);
  *piVar3 = iVar1;
  return (char *)0x0;
}

