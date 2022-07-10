
_Bool relpath(char *can_fname,char *can_reldir,char *buf,size_t len)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  _Bool _Var4;
  _Bool _Var5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  size_t local_48;
  char *local_40 [2];
  
  bVar3 = 0;
  if (((can_reldir[1] == '/') == (can_fname[1] == '/')) &&
     (cVar2 = *can_reldir, bVar3 = 0, cVar2 != '\0')) {
    iVar7 = 0;
    iVar6 = 0;
    iVar9 = 0;
    pcVar10 = can_fname;
    pcVar11 = can_reldir;
    do {
      cVar1 = *pcVar10;
      if ((cVar1 != cVar2) || (cVar1 == '\0')) {
        if ((cVar2 == '/') && (iVar6 = iVar7, cVar1 == '\0')) {
          iVar6 = iVar9;
        }
        goto LAB_0010459e;
      }
      iVar9 = iVar9 + 1;
      if (cVar2 == '/') {
        iVar6 = iVar9;
        iVar7 = iVar9;
      }
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    if ((*pcVar10 != '\0') && (*pcVar10 != '/')) {
LAB_0010459e:
      iVar9 = iVar6;
      if (iVar6 == 0) {
        return false;
      }
    }
    pcVar10 = can_reldir + iVar9;
    cVar2 = *pcVar10;
    if (cVar2 == '/') {
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    }
    pcVar11 = can_fname + iVar9 + (can_fname[iVar9] == '/');
    local_48 = len;
    local_40[0] = buf;
    if (cVar2 == '\0') {
      if (*pcVar11 == '\0') {
        pcVar11 = ".";
      }
      bVar3 = buffer_or_output(pcVar11,local_40,&local_48);
    }
    else {
      bVar3 = buffer_or_output("..",local_40,&local_48);
      cVar2 = *pcVar10;
      while (cVar2 != '\0') {
        while (cVar2 != '/') {
          cVar2 = pcVar10[1];
          pcVar10 = pcVar10 + 1;
          if (cVar2 == '\0') goto LAB_001046b8;
        }
        pcVar10 = pcVar10 + 1;
        _Var4 = buffer_or_output("/..",local_40,&local_48);
        bVar3 = bVar3 | _Var4;
        cVar2 = *pcVar10;
      }
LAB_001046b8:
      if (*pcVar11 != '\0') {
        _Var4 = buffer_or_output("/",local_40,&local_48);
        _Var5 = buffer_or_output(pcVar11,local_40,&local_48);
        bVar3 = bVar3 | _Var4 | _Var5;
      }
    }
    if (bVar3 != 0) {
      uVar8 = dcgettext(0,"generating relative path",5);
      error(0,0x24,&DAT_0010ddb7,uVar8);
    }
    bVar3 = bVar3 ^ 1;
  }
  return (_Bool)bVar3;
}

