
void mpz_combit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  uint uVar1;
  
  uVar1 = mpz_tstbit(d,bit_index);
  if (uVar1 != (uint)d->_mp_size >> 0x1f) {
    mpz_abs_sub_bit();
    return;
  }
  mpz_abs_add_bit(d,bit_index);
  return;
}

