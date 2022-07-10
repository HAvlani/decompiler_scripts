
/* WARNING: Could not reconcile some variable overlaps */

int mpz_root(__mpz_struct *x,__mpz_struct *y,ulong z)

{
  long lVar1;
  long in_FS_OFFSET;
  mpz_t r;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  r[0]._0_8_ = 0;
  r[0]._mp_d = &dummy_limb_5449;
  mpz_rootrem(x,r,y,z);
  if (r[0]._mp_alloc != 0) {
    (*gmp_free_func)(r[0]._mp_d,(long)r[0]._mp_alloc << 3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(r[0]._mp_size == 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

