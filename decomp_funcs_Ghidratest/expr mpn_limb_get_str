
size_t mpn_limb_get_str(uchar *sp,mp_limb_t w,gmp_div_inverse *binv)

{
  byte bVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (w == 0) {
    return 0;
  }
  sVar2 = 0;
  while( true ) {
    bVar1 = (byte)binv->shift;
    uVar6 = binv->di & 0xffffffff;
    uVar7 = binv->di >> 0x20;
    uVar8 = w >> (-bVar1 & 0x3f);
    uVar4 = w << (bVar1 & 0x3f);
    uVar9 = (uVar8 & 0xffffffff) * uVar6;
    uVar6 = uVar6 * (uVar8 >> 0x20);
    lVar3 = (uVar8 >> 0x20) * uVar7;
    uVar7 = uVar7 * (uVar8 & 0xffffffff) + uVar6 + (uVar9 >> 0x20);
    lVar5 = lVar3 + 0x100000000;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      lVar5 = lVar3;
    }
    uVar9 = (uVar9 & 0xffffffff) + (uVar7 << 0x20);
    uVar6 = binv->d1;
    lVar5 = uVar8 + 1 + (uVar7 >> 0x20) + (ulong)CARRY8(uVar9,uVar4) + lVar5;
    uVar7 = uVar4 - uVar6 * lVar5;
    uVar4 = (ulong)(uVar9 + uVar4 < uVar7);
    w = lVar5 - uVar4;
    uVar7 = (-uVar4 & uVar6) + uVar7;
    if (uVar6 <= uVar7) {
      uVar7 = uVar7 - uVar6;
      w = w + 1;
    }
    if ((0xffffffffffffffffU >> (-bVar1 & 0x3f) & uVar7) != 0) break;
    sp[sVar2] = (uchar)(uVar7 >> (bVar1 & 0x3f));
    sVar2 = sVar2 + 1;
    if (w == 0) {
      return sVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(r & (GMP_LIMB_MAX >> (GMP_LIMB_BITS - binv->shift))) == 0","lib/mini-gmp.c",0x4eb,
                "mpn_limb_get_str");
}

