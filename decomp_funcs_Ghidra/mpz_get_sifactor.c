
long mpz_get_si(__mpz_struct *u)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (u->_mp_size != 0) {
    if (-1 < u->_mp_size) {
      return *u->_mp_d & 0x7fffffffffffffff;
    }
    uVar1 = -*u->_mp_d | 0x8000000000000000;
  }
  return uVar1;
}

