
int gmp_millerrabin(__mpz_struct *n,__mpz_struct *nm1,__mpz_struct *y,__mpz_struct *q,mp_bitcnt_t k)

{
  int iVar1;
  
  if (k == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("k > 0","lib/mini-gmp.c",0xddd,"gmp_millerrabin");
  }
  mpz_powm(y,y,q,n);
  if (((y->_mp_size < 1) || (1 < y->_mp_size)) || (1 < *y->_mp_d != (*y->_mp_d == 0))) {
    while (iVar1 = mpz_cmp(y,nm1), iVar1 != 0) {
      k = k - 1;
      if (k == 0) {
        return 0;
      }
      mpz_powm_ui(y,y,2,n);
    }
  }
  return 1;
}

