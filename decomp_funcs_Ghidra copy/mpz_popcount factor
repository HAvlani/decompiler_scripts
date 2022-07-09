
mp_bitcnt_t mpz_popcount(__mpz_struct *u)

{
  mp_bitcnt_t mVar1;
  
  if (-1 < (long)u->_mp_size) {
    mVar1 = mpn_popcount(u->_mp_d,(long)u->_mp_size);
    return mVar1;
  }
  return 0xffffffffffffffff;
}

