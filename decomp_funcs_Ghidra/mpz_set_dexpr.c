
void mpz_set_d(__mpz_struct *r,double x)

{
  if (DAT_001215e8 * x == x) {
    r->_mp_size = 0;
    return;
  }
  mpz_set_d(r,x);
  return;
}
