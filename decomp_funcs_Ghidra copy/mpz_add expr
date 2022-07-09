
void mpz_add(__mpz_struct *r,__mpz_struct *a,__mpz_struct *b)

{
  mp_size_t mVar1;
  int iVar2;
  
  if ((a->_mp_size ^ b->_mp_size) < 0) {
    mVar1 = mpz_abs_sub();
    iVar2 = (int)mVar1;
  }
  else {
    mVar1 = mpz_abs_add(r,a,b);
    iVar2 = (int)mVar1;
  }
  if (a->_mp_size < 0) {
    iVar2 = -iVar2;
  }
  r->_mp_size = iVar2;
  return;
}

