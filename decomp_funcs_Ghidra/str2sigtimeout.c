
int str2sig(char *signame,int *signum)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *__s1;
  long in_FS_OFFSET;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  char *endp;
  long local_30;
  
  bVar10 = 0;
  __s1 = numname_table[0].name;
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*signame - 0x30U < 10) {
    uVar3 = strtol(signame,&endp,10);
    if ((*endp == '\0') && ((long)uVar3 < 0x41)) {
LAB_00105c39:
      *signum = (int)uVar3;
      iVar1 = (int)uVar3 >> 0x1f;
      goto LAB_00105c40;
    }
  }
  else {
    do {
      iVar1 = strcmp(__s1,signame);
      if (iVar1 == 0) {
        uVar3 = (ulong)(uint)numname_table[uVar3].num;
        goto LAB_00105c39;
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar5;
      __s1 = __s1 + 0xc;
    } while (uVar5 != 0x23);
    iVar1 = __libc_current_sigrtmin();
    iVar2 = __libc_current_sigrtmax();
    bVar8 = false;
    bVar9 = iVar1 == 0;
    if (0 < iVar1) {
      lVar4 = 5;
      pbVar6 = (byte *)signame;
      pbVar7 = (byte *)"RTMIN";
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar8 = *pbVar6 < *pbVar7;
        bVar9 = *pbVar6 == *pbVar7;
        pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      if ((!bVar8 && !bVar9) == bVar8) {
        lVar4 = strtol(signame + 5,&endp,10);
        if (((*endp == '\0') && (-1 < lVar4)) && (lVar4 <= iVar2 - iVar1)) {
          uVar3 = (ulong)(uint)(iVar1 + (int)lVar4);
          goto LAB_00105c39;
        }
        goto LAB_00105c80;
      }
    }
    bVar8 = false;
    bVar9 = iVar2 == 0;
    if (0 < iVar2) {
      lVar4 = 5;
      pbVar6 = (byte *)signame;
      pbVar7 = (byte *)"RTMAX";
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar8 = *pbVar6 < *pbVar7;
        bVar9 = *pbVar6 == *pbVar7;
        pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      if ((!bVar8 && !bVar9) == bVar8) {
        lVar4 = strtol(signame + 5,&endp,10);
        if (((*endp == '\0') && (iVar1 - iVar2 <= lVar4)) && (lVar4 < 1)) {
          uVar3 = (ulong)(uint)(iVar2 + (int)lVar4);
          goto LAB_00105c39;
        }
      }
    }
  }
LAB_00105c80:
  *signum = -1;
  iVar1 = -1;
LAB_00105c40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

