
void mpz_init2(__mpz_struct *r,mp_bitcnt_t bits)

{
  long lVar1;
  mp_limb_t *pmVar2;
  
  r->_mp_size = 0;
  lVar1 = (bits - (bits != 0) >> 6) + 1;
  r->_mp_alloc = (int)lVar1;
  pmVar2 = (mp_limb_t *)(*gmp_allocate_func)(lVar1 * 8);
  r->_mp_d = pmVar2;
  return;
}

