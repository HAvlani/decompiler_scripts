
/* WARNING: Could not reconcile some variable overlaps */

void mpz_ui_pow_ui(__mpz_struct *r,ulong blimb,ulong e)

{
  long lVar1;
  long in_FS_OFFSET;
  mpz_t b;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  b[0]._0_8_ = 0;
  b[0]._mp_d = &dummy_limb_5449;
  if (blimb != 0) {
    mpz_set_ui(b,blimb);
  }
  mpz_pow_ui(r,b,e);
  if (b[0]._mp_alloc != 0) {
    (*gmp_free_func)(b[0]._mp_d,(long)b[0]._mp_alloc << 3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

