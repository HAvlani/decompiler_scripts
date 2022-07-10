
int fnmatch_no_wildcards(char *pattern,char *f,int options)

{
  int iVar1;
  size_t __n;
  char *s2;
  char *pcVar2;
  
  if ((options & 8U) == 0) {
    if ((options & 0x10U) != 0) {
      iVar1 = mbscasecmp(pattern,f);
      return iVar1;
    }
    iVar1 = strcmp(pattern,f);
    return iVar1;
  }
  if ((options & 0x10U) == 0) {
    __n = strlen(pattern);
    iVar1 = strncmp(pattern,f,__n);
    if ((iVar1 == 0) && (f[__n] != 0x2f)) {
      iVar1 = (int)f[__n];
    }
    return iVar1;
  }
  s2 = xstrdup(f);
  pcVar2 = s2;
  while( true ) {
    pcVar2 = strchr(pcVar2,0x2f);
    if (pcVar2 == (char *)0x0) break;
    *pcVar2 = '\0';
    iVar1 = mbscasecmp(pattern,s2);
    if (iVar1 < 1) goto LAB_00106586;
    *pcVar2 = '/';
    pcVar2 = pcVar2 + 1;
  }
  iVar1 = mbscasecmp(pattern,s2);
LAB_00106586:
  rpl_free(s2);
  return iVar1;
}

