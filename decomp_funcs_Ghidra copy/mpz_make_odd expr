
mp_bitcnt_t mpz_make_odd(__mpz_struct *r)

{
  mp_bitcnt_t mVar1;
  
  if (0 < r->_mp_size) {
    mVar1 = mpn_common_scan(*r->_mp_d,0,r->_mp_d,0,0);
    mpz_div_q_2exp();
    return mVar1;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("r->_mp_size > 0","lib/mini-gmp.c",0xaa2,"mpz_make_odd");
}

