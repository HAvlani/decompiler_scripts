
void get_spec_stats(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  
  uVar7 = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  puVar2 = *(uint **)(*param_1 + 8);
  param_1[4] = 0;
  *(undefined *)((long)param_1 + 0x32) = 0;
  do {
    if (puVar2 == (uint *)0x0) {
      param_1[3] = uVar7;
      return;
    }
    if (4 < *puVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    switch(*puVar2) {
    case 0:
      uVar6 = 1;
      break;
    case 1:
      if (*(byte *)((long)puVar2 + 0x11) < *(byte *)(puVar2 + 4)) goto LAB_00103b12;
      uVar6 = (ulong)(int)(((uint)*(byte *)((long)puVar2 + 0x11) - (uint)*(byte *)(puVar2 + 4)) + 1)
      ;
      break;
    case 2:
      uVar1 = puVar2[4];
      iVar4 = 0;
      uVar6 = 0;
      *(undefined *)((long)param_1 + 0x31) = 1;
      do {
        cVar3 = is_char_class_member(uVar1,iVar4);
        uVar6 = (uVar6 + 1) - (ulong)(cVar3 == '\0');
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x100);
      if ((uVar1 - 6 & 0xfffffffb) != 0) {
        *(undefined *)((long)param_1 + 0x32) = 1;
      }
      break;
    case 3:
      iVar4 = 0;
      uVar6 = 0;
      do {
        cVar3 = (char)iVar4;
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 + (*(char *)(puVar2 + 4) == cVar3);
      } while (iVar4 != 0x100);
      *(undefined *)(param_1 + 6) = 1;
      break;
    case 4:
      uVar6 = *(ulong *)(puVar2 + 6);
      if (uVar6 != 0) break;
      param_1[4] = param_1[4] + 1;
      param_1[5] = (long)puVar2;
      goto LAB_00103a33;
    }
    bVar8 = CARRY8(uVar6,uVar7);
    uVar7 = uVar6 + uVar7;
    if ((bVar8) || (uVar7 == 0xffffffffffffffff)) {
      uVar5 = dcgettext(0,"too many characters in set",5);
      error(1,0,uVar5);
LAB_00103b12:
                    /* WARNING: Subroutine does not return */
      __assert_fail("p->u.range.last_char >= p->u.range.first_char","src/tr.c",0x4f1,
                    "get_spec_stats");
    }
LAB_00103a33:
    puVar2 = *(uint **)(puVar2 + 2);
  } while( true );
}

