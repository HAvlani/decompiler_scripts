
int mpz_cmpabs_ui(__mpz_struct *u,ulong v)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = u->_mp_size;
  if (1 < (int)(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f))) {
    return 1;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *u->_mp_d;
    uVar1 = (uint)(v < uVar2);
  }
  return uVar1 - (uVar2 < v);
}

