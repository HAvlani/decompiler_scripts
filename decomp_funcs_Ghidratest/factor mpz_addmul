
/* WARNING: Could not reconcile some variable overlaps */

void mpz_addmul(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  long lVar1;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  t[0]._0_8_ = 0;
  t[0]._mp_d = &dummy_limb_5449;
  mpz_mul(t,u,v);
  mpz_add(r,r,t);
  if (t[0]._mp_alloc != 0) {
    (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc << 3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

