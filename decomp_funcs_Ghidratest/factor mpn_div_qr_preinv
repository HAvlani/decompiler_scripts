
void mpn_div_qr_preinv(mp_ptr qp,mp_ptr np,mp_size_t nn,mp_srcptr dp,mp_size_t dn,
                      gmp_div_inverse *inv)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  mp_limb_t mVar4;
  mp_limb_t mVar5;
  mp_limb_t mVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  mp_limb_t vl;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  mp_ptr pmVar18;
  mp_ptr rp;
  long lVar19;
  bool bVar20;
  long local_98;
  uint __vl;
  uint __vh;
  
  if (dn == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x459,"mpn_div_qr_preinv");
  }
  if (nn < dn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("nn >= dn","lib/mini-gmp.c",0x45a,"mpn_div_qr_preinv");
  }
  if (dn == 1) {
    mVar5 = mpn_div_qr_1_preinv(qp,np,nn,inv);
    *np = mVar5;
    return;
  }
  if (dn == 2) {
    if (nn == 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("nn >= 2","lib/mini-gmp.c",0x3f1,"mpn_div_qr_2_preinv");
    }
    uVar1 = inv->shift;
    uVar7 = 0;
    uVar2 = inv->d1;
    uVar10 = inv->d0;
    uVar9 = inv->di & 0xffffffff;
    uVar8 = inv->di >> 0x20;
    if (uVar1 != 0) {
      uVar7 = mpn_lshift(np,np,nn,uVar1);
    }
    mVar5 = np[nn + -1];
    lVar11 = nn + -2;
    do {
      uVar14 = (uVar7 >> 0x20) * uVar9;
      uVar16 = (uVar7 & 0xffffffff) * uVar9;
      lVar12 = (uVar7 >> 0x20) * uVar8;
      uVar13 = (uVar16 >> 0x20) + (uVar7 & 0xffffffff) * uVar8 + uVar14;
      if (uVar13 <= uVar14 && uVar14 - uVar13 != 0) {
        lVar12 = lVar12 + 0x100000000;
      }
      uVar16 = (uVar13 << 0x20) + (uVar16 & 0xffffffff);
      uVar15 = (uVar13 >> 0x20) + uVar7 + (ulong)CARRY8(uVar16,mVar5) + lVar12;
      uVar7 = np[lVar11] - uVar10;
      uVar17 = (uVar15 & 0xffffffff) * (uVar10 >> 0x20);
      uVar14 = (uVar15 & 0xffffffff) * (uVar10 & 0xffffffff);
      lVar19 = (uVar10 >> 0x20) * (uVar15 >> 0x20);
      uVar13 = (uVar15 >> 0x20) * (uVar10 & 0xffffffff) + uVar17 + (uVar14 >> 0x20);
      lVar12 = lVar19 + 0x100000000;
      if (uVar17 < uVar13 || uVar17 - uVar13 == 0) {
        lVar12 = lVar19;
      }
      uVar14 = (uVar14 & 0xffffffff) + (uVar13 << 0x20);
      uVar17 = (((((mVar5 - uVar2) - (ulong)(np[lVar11] < uVar10)) - uVar2 * uVar15) -
                (uVar13 >> 0x20)) - (ulong)(uVar7 < uVar14)) - lVar12;
      uVar13 = (ulong)(uVar16 + mVar5 <= uVar17);
      uVar7 = uVar7 - uVar14;
      mVar6 = (uVar15 + 1) - uVar13;
      uVar13 = -uVar13;
      uVar16 = uVar10 & uVar13;
      mVar5 = uVar7 + uVar16;
      uVar7 = (ulong)CARRY8(uVar7,uVar16) + (uVar13 & uVar2) + uVar17;
      if ((uVar2 <= uVar7) && ((uVar2 < uVar7 || (uVar10 <= mVar5)))) {
        mVar6 = mVar6 + 1;
        bVar20 = mVar5 < uVar10;
        mVar5 = mVar5 - uVar10;
        uVar7 = (uVar7 - bVar20) - uVar2;
      }
      if (qp != (mp_ptr)0x0) {
        qp[lVar11] = mVar6;
      }
      lVar11 = lVar11 + -1;
    } while (lVar11 != -1);
    if (uVar1 != 0) {
      bVar3 = (byte)uVar1;
      if ((0xffffffffffffffffU >> (0x40 - bVar3 & 0x3f) & mVar5) != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(r0 & (GMP_LIMB_MAX >> (GMP_LIMB_BITS - shift))) == 0","lib/mini-gmp.c",0x40c
                      ,"mpn_div_qr_2_preinv");
      }
      mVar5 = mVar5 >> (bVar3 & 0x3f) | uVar7 << (0x40 - bVar3 & 0x3f);
      uVar7 = uVar7 >> (bVar3 & 0x3f);
    }
    np[1] = uVar7;
    *np = mVar5;
    return;
  }
  mVar5 = dp[dn + -1];
  if (inv->d1 != mVar5) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("inv->d1 == dp[dn-1]","lib/mini-gmp.c",0x465,"mpn_div_qr_preinv");
  }
  mVar6 = dp[dn + -2];
  if (inv->d0 != mVar6) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("inv->d0 == dp[dn-2]","lib/mini-gmp.c",0x466,"mpn_div_qr_preinv");
  }
  if (-1 < (long)inv->d1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(inv->d1 & GMP_LIMB_HIGHBIT) != 0","lib/mini-gmp.c",0x467,"mpn_div_qr_preinv");
  }
  uVar1 = inv->shift;
  uVar7 = 0;
  if (uVar1 != 0) {
    uVar7 = mpn_lshift(np,np,nn,uVar1);
    mVar5 = dp[dn + -1];
    mVar6 = dp[dn + -2];
  }
  uVar2 = inv->di;
  if (-1 < (long)mVar5) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(d1 & GMP_LIMB_HIGHBIT) != 0","lib/mini-gmp.c",0x427,"mpn_div_qr_pi1");
  }
  local_98 = nn - dn;
  uVar10 = uVar2 >> 0x20;
  rp = np + local_98;
  pmVar18 = np + nn;
  do {
    uVar8 = pmVar18[-1];
    if ((uVar7 == mVar5) && (uVar8 == mVar6)) {
      vl = 0xffffffffffffffff;
      mpn_submul_1(rp,dp,dn,0xffffffffffffffff);
      uVar7 = pmVar18[-1];
    }
    else {
      uVar13 = uVar2 & 0xffffffff;
      uVar16 = (uVar7 & 0xffffffff) * uVar13;
      uVar13 = uVar13 * (uVar7 >> 0x20);
      lVar11 = (uVar7 >> 0x20) * uVar10;
      uVar9 = (uVar16 >> 0x20) + (uVar7 & 0xffffffff) * uVar10 + uVar13;
      if (uVar9 <= uVar13 && uVar13 - uVar9 != 0) {
        lVar11 = lVar11 + 0x100000000;
      }
      uVar13 = (uVar9 << 0x20) + (uVar16 & 0xffffffff);
      uVar9 = (uVar9 >> 0x20) + uVar7 + (ulong)CARRY8(uVar13,uVar8) + lVar11;
      uVar16 = pmVar18[-2] - mVar6;
      uVar15 = (mVar6 & 0xffffffff) * (uVar9 & 0xffffffff);
      uVar14 = (uVar9 & 0xffffffff) * (mVar6 >> 0x20);
      lVar12 = (mVar6 >> 0x20) * (uVar9 >> 0x20);
      uVar7 = (uVar9 >> 0x20) * (mVar6 & 0xffffffff) + uVar14 + (uVar15 >> 0x20);
      lVar11 = lVar12 + 0x100000000;
      if (uVar14 < uVar7 || uVar14 - uVar7 == 0) {
        lVar11 = lVar12;
      }
      uVar15 = (uVar15 & 0xffffffff) + (uVar7 << 0x20);
      uVar14 = (((((uVar8 - mVar5) - (ulong)(pmVar18[-2] < mVar6)) - uVar9 * mVar5) -
                (uVar7 >> 0x20)) - (ulong)(uVar16 < uVar15)) - lVar11;
      uVar7 = (ulong)(uVar13 + uVar8 <= uVar14);
      uVar16 = uVar16 - uVar15;
      vl = (uVar9 + 1) - uVar7;
      uVar7 = -uVar7;
      uVar8 = uVar7 & mVar6;
      uVar9 = uVar16 + uVar8;
      uVar8 = (ulong)CARRY8(uVar16,uVar8) + (uVar7 & mVar5) + uVar14;
      if (mVar5 <= uVar8) {
        if ((uVar8 <= mVar5) && (uVar9 < mVar6)) {
          mVar4 = mpn_submul_1(rp,dp,dn + -2,vl);
          uVar7 = uVar8 - (uVar9 < mVar4);
          pmVar18[-2] = uVar9 - mVar4;
          goto LAB_001081af;
        }
        vl = vl + 1;
        bVar20 = uVar9 < mVar6;
        uVar9 = uVar9 - mVar6;
        uVar8 = (uVar8 - bVar20) - mVar5;
      }
      mVar4 = mpn_submul_1(rp,dp,dn + -2,vl);
      uVar7 = uVar8 - (uVar9 < mVar4);
      pmVar18[-2] = uVar9 - mVar4;
      if (uVar8 < (uVar9 < mVar4)) {
        uVar8 = 0;
        lVar11 = 0;
        do {
          uVar9 = rp[lVar11];
          uVar16 = uVar8 + rp[lVar11];
          uVar13 = dp[lVar11];
          rp[lVar11] = uVar16 + dp[lVar11];
          uVar8 = (ulong)CARRY8(uVar8,uVar9) + (ulong)CARRY8(uVar16,uVar13);
          lVar11 = lVar11 + 1;
        } while (lVar11 < dn + -1);
        vl = vl - 1;
        uVar7 = uVar7 + mVar5 + uVar8;
      }
    }
LAB_001081af:
    if (qp != (mp_ptr)0x0) {
      qp[local_98] = vl;
    }
    pmVar18 = pmVar18 + -1;
    rp = rp + -1;
    local_98 = local_98 + -1;
    if (local_98 < 0) {
      np[dn + -1] = uVar7;
      if (uVar1 != 0) {
        mVar5 = mpn_rshift(np,np,dn,uVar1);
        if (mVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("__cy == 0","lib/mini-gmp.c",0x472,"mpn_div_qr_preinv");
        }
      }
      return;
    }
  } while( true );
}

