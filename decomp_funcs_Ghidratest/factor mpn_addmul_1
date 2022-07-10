
mp_limb_t mpn_addmul_1(mp_ptr rp,mp_srcptr up,mp_size_t n,mp_limb_t vl)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  mp_limb_t mVar7;
  ulong uVar8;
  
  if (0 < n) {
    lVar6 = 0;
    mVar7 = 0;
    do {
      uVar1 = up[lVar6] & 0xffffffff;
      uVar3 = up[lVar6] >> 0x20;
      uVar2 = uVar1 * (vl & 0xffffffff);
      uVar8 = uVar3 * (vl & 0xffffffff);
      lVar4 = uVar3 * (vl >> 0x20);
      uVar1 = uVar1 * (vl >> 0x20) + uVar8 + (uVar2 >> 0x20);
      lVar5 = lVar4 + 0x100000000;
      if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
        lVar5 = lVar4;
      }
      uVar3 = (uVar2 & 0xffffffff) + mVar7 + (uVar1 << 0x20);
      uVar2 = rp[lVar6];
      rp[lVar6] = uVar3 + rp[lVar6];
      lVar6 = lVar6 + 1;
      mVar7 = (uVar1 >> 0x20) + (ulong)(uVar3 < mVar7) + (ulong)CARRY8(uVar3,uVar2) + lVar5;
    } while (n != lVar6);
    return mVar7;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n >= 1","lib/mini-gmp.c",0x238,"mpn_addmul_1");
}

