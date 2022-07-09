
void mpz_tdiv_qr(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr(q,r,n,d,GMP_DIV_TRUNC);
  return;
}

