
void mpz_abs(__mpz_struct *r,__mpz_struct *u)

{
  uint uVar1;
  
  mpz_set(r,u);
  uVar1 = r->_mp_size >> 0x1f;
  r->_mp_size = r->_mp_size ^ uVar1;
  r->_mp_size = r->_mp_size - uVar1;
  return;
}

