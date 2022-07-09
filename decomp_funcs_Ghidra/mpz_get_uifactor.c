
ulong mpz_get_ui(__mpz_struct *u)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (u->_mp_size != 0) {
    uVar1 = *u->_mp_d;
  }
  return uVar1;
}

