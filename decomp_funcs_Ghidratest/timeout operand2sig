
int operand2sig(char *operand,char *signame)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *signame_00;
  char *pcVar10;
  long in_FS_OFFSET;
  int signum;
  char *endp;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*operand - 0x30U < 10) {
    piVar6 = __errno_location();
    *piVar6 = 0;
    lVar7 = strtol(operand,&endp,10);
    if (((endp == operand) || (*endp != '\0')) ||
       ((*piVar6 != 0 || ((uVar2 = (uint)lVar7, (int)uVar2 != lVar7 || (uVar2 == 0xffffffff)))))) {
      signum = -1;
    }
    else {
      uVar5 = 0x7f;
      if (0xfe < (int)uVar2) {
        uVar5 = 0xff;
      }
      signum = uVar5 & uVar2;
LAB_00103aa1:
      iVar4 = sig2str(signum,signame);
      iVar3 = signum;
      if (iVar4 == 0) goto LAB_00103ab5;
    }
  }
  else {
    signame_00 = xstrdup(operand);
    cVar1 = *signame_00;
    pcVar8 = signame_00;
    while (cVar1 != '\0') {
      pcVar10 = strchr("abcdefghijklmnopqrstuvwxyz",(int)cVar1);
      if (pcVar10 != (char *)0x0) {
        *pcVar8 = cVar1 + -0x20;
      }
      pcVar10 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar10;
    }
    iVar3 = str2sig(signame_00,&signum);
    if ((iVar3 != 0) &&
       ((((*signame_00 != 'S' || (signame_00[1] != 'I')) || (signame_00[2] != 'G')) ||
        (iVar3 = str2sig(signame_00 + 3,&signum), iVar3 != 0)))) {
      signum = -1;
    }
    rpl_free(signame_00);
    if (-1 < signum) goto LAB_00103aa1;
  }
  pcVar8 = quote(operand);
  uVar9 = dcgettext(0,"%s: invalid signal",5);
  error(0,0,uVar9,pcVar8);
  iVar3 = -1;
LAB_00103ab5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

