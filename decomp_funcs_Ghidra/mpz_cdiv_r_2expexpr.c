
void mpz_cdiv_r_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t cnt)

{
  mpz_div_r_2exp(r,u,cnt,GMP_DIV_CEIL);
  return;
}

