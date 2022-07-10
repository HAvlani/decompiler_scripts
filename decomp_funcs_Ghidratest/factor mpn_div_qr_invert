
void mpn_div_qr_invert(gmp_div_inverse *inv,mp_srcptr dp,mp_size_t dn)

{
  byte bVar1;
  ulong uVar2;
  mp_limb_t mVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (dn == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x3a4,"mpn_div_qr_invert");
  }
  if (dn == 1) {
    mpn_div_qr_1_invert(inv,*dp);
    return;
  }
  if (dn == 2) {
    uVar6 = dp[1];
    uVar7 = *dp;
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("d1 > 0","lib/mini-gmp.c",0x393,"mpn_div_qr_2_invert");
    }
    uVar4 = 0;
    uVar5 = 0;
    uVar2 = uVar6;
    if ((uVar6 & 0xff00000000000000) == 0) {
      do {
        uVar2 = uVar2 << 8;
        uVar4 = uVar4 + 8;
        uVar5 = uVar4;
      } while ((uVar2 & 0xff00000000000000) == 0);
      for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00108ff8:
        uVar5 = uVar5 + 1;
      }
      inv->shift = uVar5;
      if (uVar5 != 0) {
        bVar1 = (byte)uVar5;
        uVar2 = uVar7 >> (0x40 - bVar1 & 0x3f);
        uVar7 = uVar7 << (bVar1 & 0x3f);
        uVar6 = uVar6 << (bVar1 & 0x3f) | uVar2;
      }
    }
    else {
      if (-1 < (long)uVar6) goto LAB_00108ff8;
      inv->shift = 0;
    }
    inv->d1 = uVar6;
    inv->d0 = uVar7;
    mVar3 = mpn_invert_3by2(uVar6,uVar7);
    inv->di = mVar3;
    return;
  }
  uVar6 = dp[dn + -1];
  uVar7 = dp[dn + -2];
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("d1 > 0","lib/mini-gmp.c",0x3b1,"mpn_div_qr_invert");
  }
  uVar4 = 0;
  uVar5 = 0;
  uVar2 = uVar6;
  if ((uVar6 & 0xff00000000000000) == 0) {
    do {
      uVar2 = uVar2 << 8;
      uVar4 = uVar4 + 8;
      uVar5 = uVar4;
    } while ((uVar2 & 0xff00000000000000) == 0);
    for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00108f48:
      uVar5 = uVar5 + 1;
    }
    inv->shift = uVar5;
    if (uVar5 != 0) {
      bVar1 = (byte)uVar5;
      uVar6 = uVar6 << (bVar1 & 0x3f) | uVar7 >> (0x40 - bVar1 & 0x3f);
      uVar7 = uVar7 << (bVar1 & 0x3f) | dp[dn + -3] >> (0x40 - bVar1 & 0x3f);
    }
  }
  else {
    if (-1 < (long)uVar6) goto LAB_00108f48;
    inv->shift = 0;
  }
  inv->d1 = uVar6;
  inv->d0 = uVar7;
  mVar3 = mpn_invert_3by2(uVar6,uVar7);
  inv->di = mVar3;
  return;
}

