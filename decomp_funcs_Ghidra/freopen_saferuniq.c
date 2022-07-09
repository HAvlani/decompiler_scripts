
FILE * freopen_safer(char *name,char *mode,FILE *f)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  FILE *pFVar4;
  char cVar5;
  char cVar6;
  
  iVar2 = fileno((FILE *)f);
  piVar3 = __errno_location();
  if (iVar2 == 1) {
    iVar2 = dup2(0,0);
    if (iVar2 == 0) {
LAB_0010425d:
      cVar5 = '\0';
      cVar6 = '\0';
      cVar1 = '\0';
LAB_001041dc:
      pFVar4 = freopen(name,mode,(FILE *)f);
      goto LAB_001041ef;
    }
    cVar5 = '\0';
    cVar6 = '\0';
    cVar1 = protect_fd(0);
    if ((_Bool)cVar1 != false) goto LAB_001041dc;
    iVar2 = *piVar3;
    pFVar4 = (FILE *)0x0;
  }
  else {
    if (iVar2 == 2) {
      cVar5 = false;
    }
    else {
      if (iVar2 == 0) goto LAB_0010425d;
      iVar2 = dup2(2,2);
      cVar5 = iVar2 != 2;
    }
    iVar2 = dup2(1,1);
    cVar6 = iVar2 != 1;
    iVar2 = dup2(0,0);
    if (iVar2 == 0) {
      cVar1 = '\0';
LAB_001041a9:
      if ((!(bool)cVar6) || (cVar6 = protect_fd(1), (_Bool)cVar6 != false)) {
        if (((bool)cVar5 == false) || (cVar5 = protect_fd(2), (_Bool)cVar5 != false))
        goto LAB_001041dc;
        iVar2 = *piVar3;
        pFVar4 = (FILE *)0x0;
        goto LAB_001042f6;
      }
      iVar2 = *piVar3;
      pFVar4 = (FILE *)0x0;
      if ((bool)cVar5 != false) {
        close(2);
      }
LAB_001042d8:
      close(1);
    }
    else {
      cVar1 = protect_fd(0);
      if ((_Bool)cVar1 != false) goto LAB_001041a9;
      cVar1 = '\x01';
      pFVar4 = (FILE *)0x0;
LAB_001041ef:
      iVar2 = *piVar3;
      if (cVar5 != '\0') {
LAB_001042f6:
        close(2);
      }
      if (cVar6 != '\0') goto LAB_001042d8;
    }
    if (cVar1 == '\0') goto joined_r0x001042aa;
  }
  close(0);
joined_r0x001042aa:
  if (pFVar4 == (FILE *)0x0) {
    *piVar3 = iVar2;
  }
  return (FILE *)pFVar4;
}
