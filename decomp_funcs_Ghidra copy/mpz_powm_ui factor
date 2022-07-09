
/* WARNING: Could not reconcile some variable overlaps */

void mpz_powm_ui(__mpz_struct *r,__mpz_struct *b,ulong elimb,__mpz_struct *m)

{
  long lVar1;
  long in_FS_OFFSET;
  mpz_t e;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  e[0]._0_8_ = 0;
  e[0]._mp_d = &dummy_limb_5449;
  if (elimb != 0) {
    mpz_set_ui(e,elimb);
  }
  mpz_powm(r,b,e,m);
  if (e[0]._mp_alloc != 0) {
    (*gmp_free_func)(e[0]._mp_d,(long)e[0]._mp_alloc << 3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

