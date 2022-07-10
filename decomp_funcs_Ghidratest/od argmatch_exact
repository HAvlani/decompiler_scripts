
ptrdiff_t argmatch_exact(char *arg,char **arglist)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  __s1 = *arglist;
  if (__s1 != (char *)0x0) {
    lVar2 = 0;
    do {
      iVar1 = strcmp(__s1,arg);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
      __s1 = arglist[lVar2];
    } while (__s1 != (char *)0x0);
  }
  return -1;
}

