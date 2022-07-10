
/* WARNING: Could not reconcile some variable overlaps */

void mpz_bin_uiui(__mpz_struct *r,ulong n,ulong k)

{
  long lVar1;
  ulong v;
  ulong uVar2;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n < k) {
    r->_mp_size = 0;
    if (n >> 1 < k) {
      t[0]._0_8_ = 0;
      t[0]._mp_d = &dummy_limb_5449;
      mpz_mfac_uiui(t,0,1);
      goto LAB_0010a15f;
    }
  }
  else {
    mpz_set_ui(r,1);
    if (n >> 1 < k) {
      k = n - k;
    }
  }
  t[0]._0_8_ = 0;
  t[0]._mp_d = &dummy_limb_5449;
  mpz_mfac_uiui(t,k,1);
  v = n;
  if (k != 0) {
    do {
      uVar2 = v - 1;
      mpz_mul_ui(r,r,v);
      v = uVar2;
    } while (uVar2 != n - k);
  }
LAB_0010a15f:
  mpz_divexact(r,r,t);
  if (t[0]._mp_alloc != 0) {
    (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc * 8);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

