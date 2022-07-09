
void mpz_swap(__mpz_struct *u,__mpz_struct *v)

{
  int iVar1;
  mp_limb_t *pmVar2;
  
  iVar1 = u->_mp_alloc;
  u->_mp_alloc = v->_mp_alloc;
  v->_mp_alloc = iVar1;
  pmVar2 = u->_mp_d;
  u->_mp_d = v->_mp_d;
  v->_mp_d = pmVar2;
  iVar1 = u->_mp_size;
  u->_mp_size = v->_mp_size;
  v->_mp_size = iVar1;
  return;
}

