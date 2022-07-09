
ptrdiff_t argmatch(char *arg,char **arglist,void *vallist,size_t valsize)

{
  bool bVar1;
  long lVar2;
  ptrdiff_t pVar3;
  int iVar4;
  size_t __n;
  size_t sVar5;
  long lVar6;
  void *__s2;
  char *__s1;
  long local_58;
  
  __n = strlen(arg);
  __s1 = *arglist;
  if (__s1 == (char *)0x0) {
    local_58 = -1;
    pVar3 = local_58;
  }
  else {
    bVar1 = false;
    lVar6 = 0;
    local_58 = -1;
    __s2 = vallist;
    do {
      iVar4 = strncmp(__s1,arg,__n);
      lVar2 = local_58;
      if (iVar4 == 0) {
        sVar5 = strlen(__s1);
        if (sVar5 == __n) {
          return lVar6;
        }
        lVar2 = lVar6;
        if (local_58 != -1) {
          if (vallist == (void *)0x0) {
            bVar1 = true;
            lVar2 = local_58;
          }
          else {
            iVar4 = memcmp((void *)(local_58 * valsize + (long)vallist),__s2,valsize);
            lVar2 = local_58;
            if (iVar4 != 0) {
              bVar1 = true;
            }
          }
        }
      }
      local_58 = lVar2;
      lVar6 = lVar6 + 1;
      __s2 = (void *)((long)__s2 + valsize);
      __s1 = arglist[lVar6];
    } while (__s1 != (char *)0x0);
    pVar3 = -2;
    if (!bVar1) {
      pVar3 = local_58;
    }
  }
  local_58 = pVar3;
  return local_58;
}

