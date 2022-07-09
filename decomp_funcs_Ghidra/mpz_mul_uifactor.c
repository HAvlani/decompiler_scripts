
/* WARNING: Could not reconcile some variable overlaps */

void mpz_mul_ui(__mpz_struct *r,__mpz_struct *u,ulong v)

{
  long lVar1;
  long in_FS_OFFSET;
  mpz_t vv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  vv[0]._0_8_ = 0;
  vv[0]._mp_d = &dummy_limb_5449;
  if (v != 0) {
    mpz_set_ui(vv,v);
  }
  mpz_mul(r,u,vv);
  if (vv[0]._mp_alloc != 0) {
    (*gmp_free_func)(vv[0]._mp_d,(long)vv[0]._mp_alloc << 3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

