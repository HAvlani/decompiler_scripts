
/* WARNING: Could not reconcile some variable overlaps */

int mpz_div_qr(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,__mpz_struct *d,
              mpz_div_round_mode mode)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  mp_srcptr dp;
  mp_limb_t *pmVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  mp_limb_t mVar10;
  mp_ptr pmVar11;
  uint uVar12;
  ulong dn;
  int iVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  mp_ptr local_d0;
  gmp_div_inverse inv;
  mpz_t tq;
  mpz_t tr;
  
  uVar1 = n->_mp_size;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = d->_mp_size;
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  if (uVar1 == 0) {
    if (q != (__mpz_struct *)0x0) {
      q->_mp_size = 0;
    }
    iVar13 = 0;
    if (r != (__mpz_struct *)0x0) {
      r->_mp_size = 0;
    }
    goto LAB_00108991;
  }
  uVar12 = uVar1 ^ uVar7;
  uVar14 = (ulong)(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f));
  dn = (ulong)(((int)uVar7 >> 0x1f ^ uVar7) - ((int)uVar7 >> 0x1f));
  if (uVar14 < dn) {
    if ((mode == GMP_DIV_CEIL) && (-1 < (int)uVar12)) {
      if (r != (__mpz_struct *)0x0) {
        mpz_sub(r,n,d);
      }
      if (q != (__mpz_struct *)0x0) {
        iVar13 = 1;
        mpz_set_ui(q,1);
        goto LAB_00108991;
      }
    }
    else if ((mode == GMP_DIV_FLOOR) && ((int)uVar12 < 0)) {
      if (r != (__mpz_struct *)0x0) {
        mpz_add(r,n,d);
      }
      if (q != (__mpz_struct *)0x0) {
        q->_mp_size = -1;
        if (q->_mp_alloc < 1) {
          pmVar11 = mpz_realloc(q,1);
        }
        else {
          pmVar11 = q->_mp_d;
        }
        *pmVar11 = 1;
        iVar13 = 1;
        goto LAB_00108991;
      }
    }
    else {
      if (r != (__mpz_struct *)0x0) {
        mpz_set(r,n);
      }
      if (q != (__mpz_struct *)0x0) {
        q->_mp_size = 0;
      }
    }
    iVar13 = 1;
    goto LAB_00108991;
  }
  tr[0]._mp_d = &dummy_limb_5449;
  tr[0]._0_8_ = 0;
  mpz_set(tr,n);
  pmVar5 = tr[0]._mp_d;
  local_d0 = (mp_ptr)0x0;
  lVar8 = (uVar14 - dn) + 1;
  if (q != (__mpz_struct *)0x0) {
    lVar9 = lVar8 * 0x40;
    tq[0]._mp_size = 0;
    lVar9 = (lVar9 - (ulong)(lVar9 != 0) >> 6) + 1;
    tq[0]._mp_alloc = (int)lVar9;
    local_d0 = (mp_ptr)(*gmp_allocate_func)(lVar9 * 8);
    tq[0]._mp_d = local_d0;
  }
  dp = d->_mp_d;
  mpn_div_qr_invert(&inv,dp,dn);
  if ((dn < 3) || (inv.shift == 0)) {
    mpn_div_qr_preinv(local_d0,pmVar5,uVar14,dp,dn,&inv);
  }
  else {
    pmVar11 = (mp_ptr)(*gmp_allocate_func)(dn * 8);
    mVar10 = mpn_lshift(pmVar11,dp,dn,inv.shift);
    if (mVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__cy == 0","lib/mini-gmp.c",0x483,"mpn_div_qr");
    }
    mpn_div_qr_preinv(local_d0,pmVar5,uVar14,pmVar11,dn,&inv);
    if (pmVar11 != (mp_ptr)0x0) {
      (*gmp_free_func)(pmVar11,dn * 8);
    }
  }
  if (local_d0 != (mp_ptr)0x0) {
    iVar13 = (int)lVar8;
    tq[0]._mp_size = (uint)(local_d0[uVar14 - dn] == 0) - iVar13;
    if (-1 < (int)uVar12) {
      tq[0]._mp_size = iVar13 - (uint)(local_d0[uVar14 - dn] == 0);
    }
  }
  do {
    if (pmVar5[dn - 1] != 0) {
      bVar6 = true;
      iVar13 = 1;
      goto LAB_001088f7;
    }
    dn = dn - 1;
  } while (dn != 0);
  bVar6 = false;
  iVar13 = 0;
LAB_001088f7:
  uVar7 = -(uint)dn;
  if (-1 < (int)uVar1) {
    uVar7 = (uint)dn;
  }
  uVar14 = tr[0]._0_8_ & 0xffffffff;
  tr[0]._0_8_ = uVar14 | (ulong)uVar7 << 0x20;
  if ((mode == GMP_DIV_FLOOR) && ((int)uVar12 < 0)) {
    if (dn == 0) {
LAB_00108a50:
      if (q != (__mpz_struct *)0x0) goto LAB_00108a55;
LAB_00108aa8:
      lVar8 = (long)tr[0]._mp_alloc;
      if (r != (__mpz_struct *)0x0) goto LAB_00108ab7;
    }
    else {
      if (q != (__mpz_struct *)0x0) {
        mpz_sub_ui(tq,tq,1);
        if (r != (__mpz_struct *)0x0) goto LAB_00108950;
        goto LAB_00108a55;
      }
      if (r != (__mpz_struct *)0x0) {
LAB_00108950:
        mpz_add(tr,tr,d);
        goto LAB_00108c28;
      }
LAB_00108c49:
      tr[0]._mp_alloc = (int)uVar14;
      lVar8 = (long)tr[0]._mp_alloc;
    }
  }
  else {
    if (((mode == GMP_DIV_CEIL & (byte)~(byte)((int)uVar12 >> 0x1f) >> 7) == 0) || (!bVar6))
    goto LAB_00108a50;
    if (q == (__mpz_struct *)0x0) {
      if (r == (__mpz_struct *)0x0) goto LAB_00108c49;
    }
    else {
      mpz_add_ui(tq,tq,1);
      if (r == (__mpz_struct *)0x0) goto LAB_00108a55;
    }
    mpz_sub(tr,tr,d);
LAB_00108c28:
    if (q != (__mpz_struct *)0x0) {
LAB_00108a55:
      iVar3 = q->_mp_alloc;
      pmVar5 = q->_mp_d;
      iVar2 = q->_mp_size;
      q->_mp_alloc = tq[0]._mp_alloc;
      q->_mp_d = tq[0]._mp_d;
      q->_mp_size = tq[0]._mp_size;
      tq[0]._mp_alloc = iVar3;
      tq[0]._mp_size = iVar2;
      tq[0]._mp_d = pmVar5;
      if (iVar3 != 0) {
        (*gmp_free_func)(pmVar5,(long)iVar3 * 8);
      }
      goto LAB_00108aa8;
    }
LAB_00108ab7:
    pmVar5 = r->_mp_d;
    iVar3 = r->_mp_alloc;
    lVar8 = (long)iVar3;
    r->_mp_alloc = tr[0]._mp_alloc;
    r->_mp_d = tr[0]._mp_d;
    tr[0]._0_8_ = CONCAT44(r->_mp_size,iVar3);
    r->_mp_size = tr[0]._mp_size;
    tr[0]._mp_d = pmVar5;
  }
  if ((int)lVar8 != 0) {
    (*gmp_free_func)(tr[0]._mp_d,lVar8 * 8);
  }
LAB_00108991:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar13;
}

