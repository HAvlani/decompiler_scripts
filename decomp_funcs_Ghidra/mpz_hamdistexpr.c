
mp_bitcnt_t mpz_hamdist(__mpz_struct *u,__mpz_struct *v)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  mp_limb_t *pmVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  mp_bitcnt_t mVar13;
  mp_limb_t *pmVar14;
  long lVar15;
  uint uVar16;
  
  lVar7 = (long)u->_mp_size;
  lVar15 = (long)v->_mp_size;
  if ((u->_mp_size ^ v->_mp_size) < 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = lVar7 >> 0x3f;
  uVar11 = -uVar1;
  if (lVar7 < 0) {
    if (-1 < lVar15) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("vn < 0","lib/mini-gmp.c",0xfee,"mpz_hamdist");
    }
    pmVar14 = u->_mp_d;
    lVar5 = -lVar15;
    lVar8 = -lVar7;
    pmVar9 = v->_mp_d;
    if (lVar7 <= lVar15) {
      lVar8 = lVar5;
      pmVar9 = pmVar14;
      pmVar14 = v->_mp_d;
      lVar5 = -lVar7;
    }
  }
  else {
    pmVar9 = v->_mp_d;
    lVar8 = lVar7;
    lVar5 = lVar15;
    pmVar14 = u->_mp_d;
    if (lVar15 <= lVar7) {
      lVar8 = lVar15;
      lVar5 = lVar7;
      pmVar14 = pmVar9;
      pmVar9 = u->_mp_d;
    }
    if (lVar8 < 1) {
      mVar13 = 0;
      uVar12 = 0;
      lVar8 = 0;
      goto LAB_0010bbb3;
    }
  }
  mVar13 = 0;
  lVar7 = 0;
  uVar4 = uVar11;
  uVar12 = uVar11;
  do {
    uVar2 = (pmVar9[lVar7] ^ uVar1) + uVar12;
    uVar12 = (ulong)CARRY8(pmVar9[lVar7] ^ uVar1,uVar12);
    uVar3 = (pmVar14[lVar7] ^ uVar1) + uVar4;
    uVar4 = (ulong)CARRY8(pmVar14[lVar7] ^ uVar1,uVar4);
    uVar6 = uVar2 ^ uVar3;
    if (uVar2 != uVar3) {
      uVar2 = 0;
      do {
        uVar16 = (int)uVar6 - ((uint)(uVar6 >> 1) & 0x5555);
        uVar16 = (uVar16 >> 2 & 0x3333) + (uVar16 & 0x3333);
        uVar16 = uVar16 + (uVar16 >> 4);
        uVar2 = (ulong)((int)uVar2 + (uVar16 & 0xf) + (uVar16 >> 8 & 0xf));
        uVar6 = uVar6 >> 0x10;
      } while (uVar6 != 0);
      mVar13 = mVar13 + uVar2;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 < lVar8);
  if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0x1003,"mpz_hamdist");
  }
LAB_0010bbb3:
  if (lVar8 < lVar5) {
    puVar10 = pmVar9 + lVar8;
    do {
      uVar4 = (*puVar10 ^ uVar1) + uVar12;
      uVar2 = uVar1 ^ uVar4;
      uVar12 = (ulong)CARRY8(*puVar10 ^ uVar1,uVar12);
      if (-uVar4 != uVar11) {
        uVar4 = 0;
        do {
          uVar16 = (int)uVar2 - ((uint)(uVar2 >> 1) & 0x5555);
          uVar16 = (uVar16 >> 2 & 0x3333) + (uVar16 & 0x3333);
          uVar16 = uVar16 + (uVar16 >> 4);
          uVar4 = (ulong)((int)uVar4 + (uVar16 & 0xf) + (uVar16 >> 8 & 0xf));
          uVar2 = uVar2 >> 0x10;
        } while (uVar2 != 0);
        mVar13 = mVar13 + uVar4;
      }
      puVar10 = puVar10 + 1;
    } while (pmVar9 + lVar5 != puVar10);
  }
  return mVar13;
}

