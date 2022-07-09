
int mpz_fits_sint_p(__mpz_struct *u)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  iVar1 = u->_mp_size;
  uVar3 = 0;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      uVar2 = *u->_mp_d;
      uVar3 = (uint)((uint)(0x80000000 < uVar2) - (uint)(uVar2 < 0x80000000) != 1);
    }
  }
  else if ((iVar1 < 2) && (uVar3 = 1, iVar1 != 0)) {
    uVar2 = *u->_mp_d;
    return (int)((uint)(0x7fffffff < uVar2) - (uint)(uVar2 < 0x7fffffff) != 1);
  }
  return uVar3;
}

