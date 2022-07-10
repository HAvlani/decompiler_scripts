
void mpz_div_r_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t bit_index,mpz_div_round_mode mode)

{
  uint uVar1;
  mp_limb_t *pmVar2;
  mp_limb_t *rp;
  long lVar3;
  mp_limb_t mVar4;
  mp_ptr pmVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong size;
  long lVar10;
  
  uVar1 = u->_mp_size;
  lVar10 = (long)(int)uVar1;
  if ((lVar10 != 0) && (bit_index != 0)) {
    size = bit_index + 0x3f >> 6;
    if (size == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("rn > 0","lib/mini-gmp.c",0x97a,"mpz_div_r_2exp");
    }
    if ((long)r->_mp_alloc < (long)size) {
      rp = mpz_realloc(r,size);
    }
    else {
      rp = r->_mp_d;
    }
    uVar7 = (ulong)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
    uVar9 = 0xffffffffffffffff >> (-(char)bit_index & 0x3fU);
    if (uVar7 < size) {
      if (mode == 0 < lVar10) {
        mVar4 = mpn_neg(rp,u->_mp_d,uVar7);
        if (mVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("__cy == 0","lib/mini-gmp.c",0x98a,"mpz_div_r_2exp");
        }
        if ((long)uVar7 < (long)(size - 1)) {
          pmVar5 = rp + uVar7;
          do {
            *pmVar5 = 0xffffffffffffffff;
            pmVar5 = pmVar5 + 1;
          } while (pmVar5 != rp + (size - 1));
        }
        rp[size - 1] = uVar9;
        lVar10 = -lVar10;
        uVar7 = uVar9;
      }
      else if (u == r) {
        size = uVar7;
        uVar7 = rp[uVar7 - 1];
      }
      else {
        pmVar2 = u->_mp_d;
        size = 0;
        do {
          rp[size] = pmVar2[size];
          size = size + 1;
        } while (uVar7 != size);
        uVar7 = rp[uVar7 - 1];
      }
    }
    else {
      pmVar2 = u->_mp_d;
      if ((u != r) && (size != 1)) {
        lVar3 = 0;
        do {
          rp[lVar3] = pmVar2[lVar3];
          lVar3 = lVar3 + 1;
        } while (lVar3 != size - 1);
      }
      puVar8 = rp + (size - 1);
      uVar7 = pmVar2[size - 1] & uVar9;
      *puVar8 = uVar7;
      if (mode == 0 < lVar10) {
        lVar10 = -lVar10;
        mpn_neg(rp,rp,size);
        uVar7 = *puVar8 & uVar9;
        *puVar8 = uVar7;
      }
    }
    while( true ) {
      if (uVar7 != 0) {
        iVar6 = (int)size;
        if (lVar10 < 0) {
          iVar6 = -(int)size;
        }
        r->_mp_size = iVar6;
        return;
      }
      if (size - 1 == 0) break;
      lVar3 = size - 2;
      size = size - 1;
      uVar7 = rp[lVar3];
    }
    r->_mp_size = 0;
    return;
  }
  r->_mp_size = 0;
  return;
}

