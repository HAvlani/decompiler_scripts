
int mpz_cmp_ui(__mpz_struct *u,ulong v)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar1 = u->_mp_size;
  if ((int)uVar1 < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
    if ((int)uVar1 < 2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = *u->_mp_d;
        uVar1 = (uint)(v < uVar2);
      }
      return uVar1 - (uVar2 < v);
    }
  }
  return iVar3;
}

