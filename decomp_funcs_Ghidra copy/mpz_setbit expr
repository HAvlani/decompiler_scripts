
void mpz_setbit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  int iVar1;
  
  iVar1 = mpz_tstbit(d,bit_index);
  if (iVar1 != 0) {
    return;
  }
  if (-1 < d->_mp_size) {
    mpz_abs_add_bit(d,bit_index);
    return;
  }
  mpz_abs_sub_bit();
  return;
}

