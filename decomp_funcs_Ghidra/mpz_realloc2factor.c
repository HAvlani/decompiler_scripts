
void mpz_realloc2(__mpz_struct *x,mp_bitcnt_t n)

{
  mpz_realloc(x,(n - (n != 0) >> 6) + 1);
  return;
}

