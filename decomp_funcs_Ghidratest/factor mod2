
uintmax_t mod2(uintmax_t *r1,uintmax_t a1,uintmax_t a0,uintmax_t d1,uintmax_t d0)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  bool bVar9;
  
  if (d1 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("d1 != 0","src/factor.c",0x19b,(char *)&__PRETTY_FUNCTION___7883);
  }
  if (a1 != 0) {
    lVar1 = 0x3f;
    if (d1 != 0) {
      for (; d1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    lVar2 = 0x3f;
    if (a1 != 0) {
      for (; a1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar8 = ((uint)lVar1 ^ 0x3f) - ((uint)lVar2 ^ 0x3f);
    bVar3 = (byte)iVar8;
    uVar7 = d0 >> (0x40 - bVar3 & 0x3f) | d1 << (bVar3 & 0x3f);
    uVar6 = d0 << (bVar3 & 0x3f);
    if (0 < iVar8) {
      iVar5 = 0;
      do {
        if ((uVar7 < a1) || ((uVar7 == a1 && (uVar6 <= a0)))) {
          bVar9 = a0 < uVar6;
          a0 = a0 - uVar6;
          a1 = (a1 - uVar7) - (ulong)bVar9;
        }
        iVar5 = iVar5 + 1;
        uVar4 = uVar7 << 0x3f;
        uVar7 = uVar7 >> 1;
        uVar6 = uVar6 >> 1 | uVar4;
      } while (iVar8 != iVar5);
    }
    *r1 = a1;
    return a0;
  }
  *r1 = 0;
  return a0;
}

