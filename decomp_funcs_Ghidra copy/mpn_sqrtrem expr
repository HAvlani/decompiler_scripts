
/* WARNING: Could not reconcile some variable overlaps */

mp_size_t mpn_sqrtrem(mp_ptr sp,mp_ptr rp,mp_srcptr p,mp_size_t n)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  mpz_t s;
  mpz_t r;
  mpz_t u;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n > 0","lib/mini-gmp.c",0xcf0,"mpn_sqrtrem");
  }
  if (p[n + -1] == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("p [n-1] != 0","lib/mini-gmp.c",0xcf1,"mpn_sqrtrem");
  }
  u[0]._mp_size = (int)n;
  r[0]._0_8_ = 0;
  r[0]._mp_d = &dummy_limb_5449;
  s[0]._mp_d = &dummy_limb_5449;
  s[0]._0_8_ = 0;
  u[0]._mp_alloc = 0;
  u[0]._mp_d = p;
  mpz_rootrem(s,r,u,2);
  if ((long)s[0]._mp_size != n + 1 >> 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("s->_mp_size == (n+1)/2","lib/mini-gmp.c",0xcf7,"mpn_sqrtrem");
  }
  lVar2 = (long)s[0]._mp_size + -1;
  do {
    sp[lVar2] = s[0]._mp_d[lVar2];
    lVar2 = lVar2 + -1;
  } while (lVar2 != -1);
  if (s[0]._mp_alloc != 0) {
    (*gmp_free_func)(s[0]._mp_d,(long)s[0]._mp_alloc * 8);
  }
  if ((rp != (mp_ptr)0x0) && (lVar2 = (long)r[0]._mp_size + -1, -1 < lVar2)) {
    do {
      rp[lVar2] = r[0]._mp_d[lVar2];
      lVar2 = lVar2 + -1;
    } while (lVar2 != -1);
  }
  if (r[0]._mp_alloc != 0) {
    (*gmp_free_func)(r[0]._mp_d,(long)r[0]._mp_alloc * 8);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)r[0]._mp_size;
}

