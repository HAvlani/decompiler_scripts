
mp_ptr mpz_realloc(__mpz_struct *r,mp_size_t size)

{
  int iVar1;
  int iVar2;
  mp_ptr pmVar3;
  long lVar4;
  
  lVar4 = 1;
  if (0 < size) {
    lVar4 = size;
  }
  if (r->_mp_alloc == 0) {
    pmVar3 = (mp_ptr)(*gmp_allocate_func)(lVar4 * 8);
    r->_mp_d = pmVar3;
  }
  else {
    pmVar3 = (mp_ptr)(*gmp_reallocate_func)(r->_mp_d,(long)r->_mp_alloc << 3,lVar4 * 8);
    r->_mp_d = pmVar3;
  }
  iVar1 = r->_mp_size;
  r->_mp_alloc = (int)lVar4;
  iVar2 = -iVar1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (lVar4 < iVar2) {
    r->_mp_size = 0;
  }
  return pmVar3;
}

