
int mpz_fits_slong_p(__mpz_struct *u)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  iVar1 = u->_mp_size;
  uVar3 = 0;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      uVar2 = *u->_mp_d;
      uVar3 = (uint)((uint)(0x8000000000000000 < uVar2) + ((int)~(uint)(uVar2 >> 0x20) >> 0x1f) != 1
                    );
    }
  }
  else if ((iVar1 < 2) && (uVar3 = 1, iVar1 != 0)) {
    uVar2 = *u->_mp_d;
    return (int)(-(uint)(uVar2 < 0x7fffffffffffffff) - (int)((long)uVar2 >> 0x3f) != 1);
  }
  return uVar3;
}

