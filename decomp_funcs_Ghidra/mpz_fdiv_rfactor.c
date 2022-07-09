
void mpz_fdiv_r(__mpz_struct *r,__mpz_struct *n,__mpz_struct *d)

{
  mpz_div_qr((__mpz_struct *)0x0,r,n,d,GMP_DIV_FLOOR);
  return;
}

