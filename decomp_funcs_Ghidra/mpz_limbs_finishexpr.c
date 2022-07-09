
void mpz_limbs_finish(__mpz_struct *x,mp_size_t xs)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (xs >> 0x3f ^ xs) - (xs >> 0x3f);
  if (xs == 0) {
    iVar1 = 0;
  }
  else {
    do {
      if (x->_mp_d[lVar2 + -1] != 0) break;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar1 = (int)lVar2;
    if (xs < 0) {
      iVar1 = -iVar1;
    }
  }
  x->_mp_size = iVar1;
  return;
}

