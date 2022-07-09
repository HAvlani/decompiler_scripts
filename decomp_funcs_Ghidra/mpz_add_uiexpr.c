
/* WARNING: Could not reconcile some variable overlaps */

void mpz_add_ui(__mpz_struct *r,__mpz_struct *a,ulong b)

{
  long lVar1;
  long in_FS_OFFSET;
  mpz_t bb;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bb[0]._0_8_ = 0;
  bb[0]._mp_d = &dummy_limb_5449;
  if (b != 0) {
    mpz_set_ui(bb,b);
  }
  mpz_add(r,a,bb);
  if (bb[0]._mp_alloc != 0) {
    (*gmp_free_func)(bb[0]._mp_d,(long)bb[0]._mp_alloc << 3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

