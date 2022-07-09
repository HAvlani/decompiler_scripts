
_Bool exclude_fnmatch(char *pattern,char *f,int options)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  code *pcVar6;
  _Bool _Var7;
  
  pcVar6 = fnmatch_no_wildcards;
  if ((options & 0x10000000U) != 0) {
    pcVar6 = (code *)PTR_fnmatch_0012bfc0;
  }
  iVar1 = (*pcVar6)(pattern,f,options);
  _Var7 = iVar1 == 0;
  if (((options & 0x40000000U) == 0) && (cVar2 = *f, cVar2 != '\0')) {
    do {
      if (iVar1 == 0) {
        return true;
      }
      while( true ) {
        pcVar4 = f + 1;
        cVar3 = *pcVar4;
        pcVar5 = f;
        if (cVar2 == '/') break;
        f = pcVar4;
        cVar2 = cVar3;
        if (cVar3 == '\0') {
          return false;
        }
      }
      while (f = pcVar4, cVar3 == '/') {
        pcVar4 = f + 1;
        pcVar5 = f;
        cVar3 = f[1];
      }
      iVar1 = (*pcVar6)(pattern,f,options);
      cVar2 = pcVar5[1];
    } while (cVar2 != '\0');
    _Var7 = iVar1 == 0;
  }
  return _Var7;
}

