
void mpz_ui_sub(__mpz_struct *r,ulong a,__mpz_struct *b)

{
  mpz_set(r,b);
  r->_mp_size = -r->_mp_size;
  mpz_add_ui(r,r,a);
  return;
}

