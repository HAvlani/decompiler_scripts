
void mpz_tdiv_r_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t cnt)

{
  mpz_div_r_2exp(r,u,cnt,GMP_DIV_TRUNC);
  return;
}
