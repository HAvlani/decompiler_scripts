
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int mpz_cmp_d(__mpz_struct *x,double d)

{
  int iVar1;
  
  if (x->_mp_size < 0) {
    if (d < _DAT_001215c0) {
      iVar1 = mpz_cmpabs_d(x,d);
      return -iVar1;
    }
    return -1;
  }
  if (0.0 <= d) {
    iVar1 = mpz_cmpabs_d(x,d);
    return iVar1;
  }
  return 1;
}

