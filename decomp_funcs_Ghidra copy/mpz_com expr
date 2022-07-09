
void mpz_com(__mpz_struct *r,__mpz_struct *u)

{
  mpz_add_ui(r,u,1);
  mpz_set(r,r);
  r->_mp_size = -r->_mp_size;
  return;
}

