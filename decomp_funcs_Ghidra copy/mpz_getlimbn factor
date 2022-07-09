
mp_limb_t mpz_getlimbn(__mpz_struct *u,mp_size_t n)

{
  int iVar1;
  int iVar2;
  mp_limb_t mVar3;
  
  mVar3 = 0;
  if (-1 < n) {
    iVar1 = u->_mp_size;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (n < iVar2) {
      mVar3 = u->_mp_d[n];
    }
  }
  return mVar3;
}

