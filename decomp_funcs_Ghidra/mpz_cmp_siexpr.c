
int mpz_cmp_si(__mpz_struct *u,long v)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = u->_mp_size;
  if (v < 0) {
    iVar1 = 1;
    if (((int)uVar3 < 0) && (iVar1 = -1, uVar3 == 0xffffffff)) {
      uVar2 = *u->_mp_d;
      return (uint)((ulong)-v >= uVar2 && -uVar2 != v) - (uint)((ulong)-v < uVar2);
    }
  }
  else {
    if ((int)uVar3 < 0) {
      return -1;
    }
    iVar1 = 1;
    if ((int)uVar3 < 2) {
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = *u->_mp_d;
        uVar3 = (uint)((ulong)v < uVar2);
      }
      return uVar3 - (uVar2 < (ulong)v);
    }
  }
  return iVar1;
}

