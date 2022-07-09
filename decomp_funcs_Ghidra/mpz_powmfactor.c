
/* WARNING: Could not reconcile some variable overlaps */

void mpz_powm(__mpz_struct *r,__mpz_struct *b,__mpz_struct *e,__mpz_struct *m)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  mp_srcptr dp;
  ulong uVar4;
  mp_limb_t mVar5;
  mp_limb_t *pmVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long dn;
  long in_FS_OFFSET;
  mp_srcptr local_c8;
  long local_b8;
  mp_ptr local_a8;
  gmp_div_inverse minv;
  mpz_t tr;
  mpz_t base;
  
  uVar1 = m->_mp_size;
  uVar2 = e->_mp_size;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_powm: Zero modulo.");
  }
  if (uVar2 == 0) {
    mpz_set_ui(r,1);
  }
  else {
    dp = m->_mp_d;
    iVar11 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    dn = (long)iVar11;
    mpn_div_qr_invert(&minv,dp,dn);
    uVar1 = minv.shift;
    if (minv.shift == 0) {
      local_a8 = (mp_ptr)0x0;
      local_c8 = dp;
    }
    else {
      minv.shift = 0;
      local_c8 = (mp_srcptr)(*gmp_allocate_func)(dn * 8);
      mVar5 = mpn_lshift(local_c8,dp,dn,uVar1);
      local_a8 = local_c8;
      if (mVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xc2b,"mpz_powm");
      }
    }
    base[0]._0_8_ = 0;
    base[0]._mp_d = &dummy_limb_5449;
    if (e->_mp_size < 0) {
      iVar10 = mpz_invert(base,b,m);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        gmp_die("mpz_powm: Negative exponent and non-invertible base.");
      }
    }
    else {
      mpz_set(base,b);
      uVar7 = (base[0]._mp_size ^ base[0]._mp_size >> 0x1f) - (base[0]._mp_size >> 0x1f);
      base[0]._0_8_ = base[0]._0_8_ & 0xffffffff | (ulong)uVar7 << 0x20;
      lVar8 = (long)(int)uVar7;
      if (dn <= lVar8) {
        mpn_div_qr_preinv((mp_ptr)0x0,base[0]._mp_d,lVar8,local_c8,dn,&minv);
        pmVar6 = base[0]._mp_d;
        lVar8 = dn;
        if (-1 < b->_mp_size) goto LAB_0010c962;
LAB_0010cc19:
        pmVar6 = base[0]._mp_d;
        if (base[0]._mp_alloc < iVar11) {
          pmVar6 = mpz_realloc(base,dn);
        }
        mVar5 = mpn_sub(pmVar6,local_c8,dn,pmVar6,lVar8);
        pmVar6 = base[0]._mp_d;
        lVar8 = dn;
        if (mVar5 == 0) goto LAB_0010c962;
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xc48,"mpz_powm");
      }
      pmVar6 = base[0]._mp_d;
      if (b->_mp_size < 0) goto LAB_0010cc19;
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
LAB_0010c962:
        if (pmVar6[lVar8 + -1] != 0) {
          base[0]._0_8_ = base[0]._0_8_ & 0xffffffff | lVar8 << 0x20;
          goto LAB_0010ca09;
        }
      }
      base[0]._0_8_ = base[0]._0_8_ & 0xffffffff;
    }
LAB_0010ca09:
    tr[0]._mp_d = &dummy_limb_5449;
    tr[0]._mp_alloc = 0;
    tr[0]._mp_size = 0;
    mpz_set_ui(tr,1);
    local_b8 = (long)(int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) * 8 + -8;
    do {
      iVar10 = 0x40;
      uVar9 = 0x8000000000000000;
      uVar4 = *(ulong *)((long)e->_mp_d + local_b8);
      do {
        while (mpz_mul(tr,tr,tr), (uVar9 & uVar4) != 0) {
          mpz_mul(tr,tr,base);
          if (tr[0]._mp_size <= iVar11) goto LAB_0010ca7a;
LAB_0010caad:
          mpn_div_qr_preinv((mp_ptr)0x0,tr[0]._mp_d,(long)tr[0]._mp_size,local_c8,dn,&minv);
          lVar8 = dn;
          do {
            if (tr[0]._mp_d[lVar8 + -1] != 0) goto LAB_0010cae8;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          lVar8 = 0;
LAB_0010cae8:
          tr[0]._mp_size = (int)lVar8;
          uVar9 = uVar9 >> 1;
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto LAB_0010caf8;
        }
        if (iVar11 < tr[0]._mp_size) goto LAB_0010caad;
LAB_0010ca7a:
        uVar9 = uVar9 >> 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
LAB_0010caf8:
      local_b8 = local_b8 + -8;
    } while (local_b8 != -8);
    if (iVar11 <= tr[0]._mp_size) {
      minv.shift = uVar1;
      mpn_div_qr_preinv((mp_ptr)0x0,tr[0]._mp_d,(long)tr[0]._mp_size,local_c8,dn,&minv);
      lVar8 = dn;
      do {
        if (tr[0]._mp_d[lVar8 + -1] != 0) {
          tr[0]._mp_size = (int)lVar8;
          goto LAB_0010cb1a;
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      tr[0]._mp_size = 0;
    }
LAB_0010cb1a:
    if (local_a8 != (mp_ptr)0x0) {
      (*gmp_free_func)(local_a8,dn << 3);
    }
    iVar11 = r->_mp_alloc;
    pmVar6 = r->_mp_d;
    r->_mp_alloc = tr[0]._mp_alloc;
    r->_mp_d = tr[0]._mp_d;
    iVar10 = r->_mp_size;
    r->_mp_size = tr[0]._mp_size;
    tr[0]._0_8_ = CONCAT44(iVar10,iVar11);
    tr[0]._mp_d = pmVar6;
    if (iVar11 != 0) {
      (*gmp_free_func)(pmVar6,(long)iVar11 * 8);
    }
    if (base[0]._mp_alloc != 0) {
      (*gmp_free_func)(base[0]._mp_d,(long)base[0]._mp_alloc * 8);
    }
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

