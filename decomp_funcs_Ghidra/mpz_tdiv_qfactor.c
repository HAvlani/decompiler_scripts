
void mpz_tdiv_q(__mpz_struct *q,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr(q,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
  return;
}

