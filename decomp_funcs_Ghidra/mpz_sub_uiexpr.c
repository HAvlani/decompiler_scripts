
void mpz_sub_ui(__mpz_struct *r,__mpz_struct *a,ulong b)

{
  mpz_ui_sub(r,b,a);
  mpz_set(r,r);
  r->_mp_size = -r->_mp_size;
  return;
}

