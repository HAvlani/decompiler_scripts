
/* WARNING: Could not reconcile some variable overlaps */

void mpz_gcdext(__mpz_struct *g,__mpz_struct *s,__mpz_struct *t,__mpz_struct *u,__mpz_struct *v)

{
  int iVar1;
  long lVar2;
  mp_limb_t *pmVar3;
  mp_limb_t *pmVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  mp_bitcnt_t mVar8;
  mp_bitcnt_t mVar9;
  mp_bitcnt_t bits;
  long lVar10;
  mp_bitcnt_t bit_index;
  mp_bitcnt_t bits_00;
  long in_FS_OFFSET;
  long local_e0;
  __mpz_struct *local_d8;
  __mpz_struct *local_d0;
  __mpz_struct *local_c8;
  __mpz_struct *local_c0;
  mpz_t tu;
  mpz_t tv;
  mpz_t s0;
  mpz_t s1;
  mpz_t t0;
  mpz_t t1;
  
  iVar6 = u->_mp_size;
  iVar1 = v->_mp_size;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar6 == 0) {
    mpz_set(g,v);
    uVar7 = g->_mp_size >> 0x1f;
    g->_mp_size = g->_mp_size ^ uVar7;
    g->_mp_size = g->_mp_size - uVar7;
    if (s != (__mpz_struct *)0x0) {
      s->_mp_size = 0;
    }
    if (t != (__mpz_struct *)0x0) {
      mpz_set_si(t,(long)(int)((uint)(0 < iVar1) + (iVar1 >> 0x1f)));
    }
  }
  else if (iVar1 == 0) {
    mpz_set(g,u);
    uVar7 = g->_mp_size >> 0x1f;
    g->_mp_size = g->_mp_size ^ uVar7;
    g->_mp_size = g->_mp_size - uVar7;
    if (s != (__mpz_struct *)0x0) {
      mpz_set_si(s,(long)(int)((uint)(0 < iVar6) + (iVar6 >> 0x1f)));
    }
    if (t != (__mpz_struct *)0x0) {
      t->_mp_size = 0;
    }
  }
  else {
    tu[0]._0_8_ = 0;
    tu[0]._mp_d = &dummy_limb_5449;
    tv[0]._mp_d = &dummy_limb_5449;
    s0[0]._mp_d = &dummy_limb_5449;
    s1[0]._mp_d = &dummy_limb_5449;
    t0[0]._mp_d = &dummy_limb_5449;
    t1[0]._mp_d = &dummy_limb_5449;
    tv[0]._0_8_ = 0;
    s0[0]._0_8_ = 0;
    s1[0]._0_8_ = 0;
    t0[0]._0_8_ = 0;
    t1[0]._0_8_ = 0;
    mpz_set(tu,u);
    tu[0]._0_8_ = tu[0]._0_8_ & 0xffffffff |
                  (ulong)(uint)((tu[0]._mp_size ^ tu[0]._mp_size >> 0x1f) - (tu[0]._mp_size >> 0x1f)
                               ) << 0x20;
    mVar8 = mpz_make_odd(tu);
    mpz_set(tv,v);
    tv[0]._0_8_ = tv[0]._0_8_ & 0xffffffff |
                  (ulong)(uint)((tv[0]._mp_size ^ tv[0]._mp_size >> 0x1f) - (tv[0]._mp_size >> 0x1f)
                               ) << 0x20;
    mVar9 = mpz_make_odd(tv);
    pmVar3 = tv[0]._mp_d;
    uVar5 = tv[0]._0_8_;
    bits = mVar9;
    if (mVar8 <= mVar9) {
      bits = mVar8;
    }
    bit_index = mVar9 - bits;
    bits_00 = mVar8 - bits;
    local_d8 = u;
    local_d0 = v;
    local_c8 = s;
    local_c0 = t;
    if (tu[0]._mp_size < tv[0]._mp_size) {
      tv[0]._mp_d = tu[0]._mp_d;
      tv[0]._0_8_ = tu[0]._0_8_;
      tu[0]._mp_d = pmVar3;
      tu[0]._0_8_ = uVar5;
      bit_index = mVar8 - bits;
      bits_00 = mVar9 - bits;
      local_d8 = v;
      local_d0 = u;
      local_c8 = t;
      local_c0 = s;
    }
    mpz_div_qr(t1,tu,tu,tv,GMP_DIV_TRUNC);
    mpz_mul_2exp(t1,t1,bits_00);
    mpz_setbit(s1,bit_index);
    local_e0 = bits_00 + bit_index;
    if (tu[0]._mp_size < 1) {
      mpz_setbit(t0,bits_00);
    }
    else {
      mVar8 = mpz_make_odd(tu);
      mpz_setbit(t0,bits_00 + mVar8);
      local_e0 = local_e0 + mVar8;
      while( true ) {
        iVar6 = mpz_cmp(tu,tv);
        if (iVar6 == 0) break;
        if (iVar6 < 0) {
          mpz_sub(tv,tv,tu);
          mpz_add(t0,t0,t1);
          mpz_add(s0,s0,s1);
          mVar8 = mpz_make_odd(tv);
          mpz_mul_2exp(t1,t1,mVar8);
          mpz_mul_2exp(s1,s1,mVar8);
        }
        else {
          mpz_sub(tu,tu,tv);
          mpz_add(t1,t0,t1);
          mpz_add(s1,s0,s1);
          mVar8 = mpz_make_odd(tu);
          mpz_mul_2exp(t0,t0,mVar8);
          mpz_mul_2exp(s0,s0,mVar8);
        }
        local_e0 = local_e0 + mVar8;
      }
    }
    mpz_mul_2exp(tv,tv,bits);
    mpz_set(s0,s0);
    s0[0]._0_8_ = s0[0]._0_8_ & 0xffffffff | (ulong)(uint)-s0[0]._mp_size << 0x20;
    mpz_divexact(s1,local_d0,tv);
    mpz_set(s1,s1);
    s1[0]._0_8_ = s1[0]._0_8_ & 0xffffffff |
                  (ulong)(uint)((s1[0]._mp_size ^ s1[0]._mp_size >> 0x1f) - (s1[0]._mp_size >> 0x1f)
                               ) << 0x20;
    mpz_divexact(t1,local_d8,tv);
    mpz_set(t1,t1);
    t1[0]._0_8_ = t1[0]._0_8_ & 0xffffffff |
                  (ulong)(uint)((t1[0]._mp_size ^ t1[0]._mp_size >> 0x1f) - (t1[0]._mp_size >> 0x1f)
                               ) << 0x20;
    lVar10 = local_e0 + -1;
    if (local_e0 != 0) {
      do {
        if (((*(uint *)s0[0]._mp_d & (uint)(s0[0]._mp_size != 0)) != 0) ||
           ((*(uint *)t0[0]._mp_d & (uint)(t0[0]._mp_size != 0)) != 0)) {
          mpz_sub(s0,s0,s1);
          mpz_add(t0,t0,t1);
          if (((*(uint *)t0[0]._mp_d & (uint)(t0[0]._mp_size != 0)) != 0) ||
             ((*(uint *)s0[0]._mp_d & (uint)(s0[0]._mp_size != 0)) != 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("mpz_even_p (t0) && mpz_even_p (s0)","lib/mini-gmp.c",0xb85,"mpz_gcdext");
          }
        }
        lVar10 = lVar10 + -1;
        mpz_div_q_2exp();
        mpz_div_q_2exp();
      } while (lVar10 != -1);
    }
    mpz_add(s1,s0,s1);
    iVar6 = mpz_cmpabs(s0,s1);
    pmVar3 = s0[0]._mp_d;
    uVar5 = s0[0]._0_8_;
    if (0 < iVar6) {
      s0[0]._mp_d = s1[0]._mp_d;
      s1[0]._mp_d = pmVar3;
      s0[0]._0_8_ = s1[0]._0_8_;
      s1[0]._0_8_ = uVar5;
      mpz_sub(t0,t0,t1);
    }
    if (local_d8->_mp_size < 0) {
      mpz_set(s0,s0);
      s0[0]._0_8_ = s0[0]._0_8_ & 0xffffffff | (ulong)(uint)-s0[0]._mp_size << 0x20;
    }
    if (local_d0->_mp_size < 0) {
      mpz_set(t0,t0);
      t0[0]._0_8_ = t0[0]._0_8_ & 0xffffffff | (ulong)(uint)-t0[0]._mp_size << 0x20;
    }
    iVar6 = g->_mp_alloc;
    g->_mp_alloc = tv[0]._mp_alloc;
    pmVar3 = g->_mp_d;
    g->_mp_d = tv[0]._mp_d;
    iVar1 = g->_mp_size;
    g->_mp_size = tv[0]._mp_size;
    tv[0]._0_8_ = CONCAT44(iVar1,iVar6);
    if (local_c8 != (__mpz_struct *)0x0) {
      iVar1 = local_c8->_mp_alloc;
      uVar5 = s0[0]._0_8_ >> 0x20;
      pmVar4 = local_c8->_mp_d;
      local_c8->_mp_alloc = s0[0]._mp_alloc;
      local_c8->_mp_d = s0[0]._mp_d;
      s0[0]._0_8_ = CONCAT44(local_c8->_mp_size,iVar1);
      local_c8->_mp_size = (int)uVar5;
      s0[0]._mp_d = pmVar4;
    }
    if (local_c0 != (__mpz_struct *)0x0) {
      iVar1 = local_c0->_mp_alloc;
      uVar5 = t0[0]._0_8_ >> 0x20;
      pmVar4 = local_c0->_mp_d;
      local_c0->_mp_alloc = t0[0]._mp_alloc;
      local_c0->_mp_d = t0[0]._mp_d;
      t0[0]._0_8_ = CONCAT44(local_c0->_mp_size,iVar1);
      local_c0->_mp_size = (int)uVar5;
      t0[0]._mp_d = pmVar4;
    }
    tv[0]._mp_alloc = iVar6;
    tv[0]._mp_d = pmVar3;
    if (tu[0]._mp_alloc != 0) {
      (*gmp_free_func)(tu[0]._mp_d,(long)tu[0]._mp_alloc * 8);
    }
    if (tv[0]._mp_alloc != 0) {
      (*gmp_free_func)(tv[0]._mp_d,(long)tv[0]._mp_alloc * 8);
    }
    if (s0[0]._mp_alloc != 0) {
      (*gmp_free_func)(s0[0]._mp_d,(long)s0[0]._mp_alloc * 8);
    }
    if (s1[0]._mp_alloc != 0) {
      (*gmp_free_func)(s1[0]._mp_d,(long)s1[0]._mp_alloc * 8);
    }
    if (t0[0]._mp_alloc != 0) {
      (*gmp_free_func)(t0[0]._mp_d,(long)t0[0]._mp_alloc * 8);
    }
    if (t1[0]._mp_alloc != 0) {
      (*gmp_free_func)(t1[0]._mp_d,(long)t1[0]._mp_alloc * 8);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

