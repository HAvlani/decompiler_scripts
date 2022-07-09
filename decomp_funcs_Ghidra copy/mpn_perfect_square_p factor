
int mpn_perfect_square_p(mp_srcptr p,mp_size_t n)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n > 0","lib/mini-gmp.c",0xce5,"mpn_perfect_square_p");
  }
  if (p[n + -1] != 0) {
    t[0]._mp_size = (int)n;
    t[0]._mp_alloc = 0;
    t[0]._mp_d = p;
    iVar2 = mpz_root((__mpz_struct *)0x0,t,2);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("p [n-1] != 0","lib/mini-gmp.c",0xce6,"mpn_perfect_square_p");
}

