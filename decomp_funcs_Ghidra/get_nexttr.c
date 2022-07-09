
ulong get_next(long *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  
  lVar3 = param_1[2];
LAB_00103b56:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 2;
  }
  if (lVar3 == -2) {
    puVar10 = *(uint **)(*param_1 + 8);
    param_1[2] = -1;
    param_1[1] = (long)puVar10;
  }
  else {
    puVar10 = (uint *)param_1[1];
  }
  if (puVar10 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (4 < *puVar10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  switch(*puVar10) {
  default:
    lVar3 = *(long *)(puVar10 + 2);
    bVar1 = *(byte *)(puVar10 + 4);
    param_1[2] = -1;
    param_1[1] = lVar3;
    return (ulong)bVar1;
  case 1:
    uVar7 = param_1[2] + 1;
    if (param_1[2] == -1) {
      uVar7 = (ulong)*(byte *)(puVar10 + 4);
    }
    bVar1 = *(byte *)((long)puVar10 + 0x11);
    param_1[2] = uVar7;
    uVar9 = uVar7 & 0xffffffff;
    if (bVar1 != uVar7) {
      return uVar9;
    }
    goto LAB_00103c97;
  case 2:
    uVar8 = puVar10[4];
    if (param_2 != (undefined4 *)0x0) {
      if (uVar8 == 6) {
        *param_2 = 0;
        uVar8 = puVar10[4];
      }
      else if (uVar8 == 10) {
        *param_2 = 1;
        uVar8 = puVar10[4];
      }
    }
    uVar7 = param_1[2];
    if (uVar7 == 0xffffffffffffffff) {
      iVar6 = 0;
      while (cVar2 = is_char_class_member(uVar8,iVar6), cVar2 == '\0') {
        iVar6 = iVar6 + 1;
        if (iVar6 == 0x100) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < N_CHARS","src/tr.c",0x437,"get_next");
        }
      }
      uVar7 = (ulong)iVar6;
      param_1[2] = uVar7;
    }
    cVar2 = is_char_class_member(uVar8,uVar7 & 0xff);
    if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("is_char_class_member (p->u.char_class, s->state)","src/tr.c",0x43a,"get_next");
    }
    uVar9 = uVar7 & 0xffffffff;
    uVar5 = (int)uVar7 + 1;
    if ((int)uVar5 < 0x100) {
      do {
        cVar2 = is_char_class_member(uVar8,uVar5 & 0xff);
        if (cVar2 != '\0') {
          param_1[2] = (long)(int)uVar5;
          return uVar9;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x100);
    }
    goto LAB_00103c97;
  case 4:
    break;
  }
  lVar3 = *(long *)(puVar10 + 6);
  if (lVar3 != 0) {
    uVar9 = (ulong)*(byte *)(puVar10 + 4);
    lVar4 = param_1[2] + 1;
    if (param_1[2] == -1) {
      lVar4 = 1;
    }
    param_1[2] = lVar4;
    if (lVar3 != lVar4) {
      return uVar9;
    }
LAB_00103c97:
    lVar3 = *(long *)(puVar10 + 2);
    param_1[2] = -1;
    param_1[1] = lVar3;
    return uVar9;
  }
  lVar3 = *(long *)(puVar10 + 2);
  param_1[2] = -1;
  param_1[1] = lVar3;
  lVar3 = -1;
  goto LAB_00103b56;
}

