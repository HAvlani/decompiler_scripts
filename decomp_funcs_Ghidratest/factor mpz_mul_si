
void mpz_mul_si(__mpz_struct *r,__mpz_struct *u,long v)

{
  if (-1 < v) {
    mpz_mul_ui(r,u,v);
    return;
  }
  mpz_mul_ui(r,u,-v);
  mpz_set(r,r);
  r->_mp_size = -r->_mp_size;
  return;
}

