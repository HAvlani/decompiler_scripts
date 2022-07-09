
int mpz_fits_uint_p(__mpz_struct *u)

{
  int iVar1;
  
  iVar1 = 0;
  if (((uint)u->_mp_size < 2) && (iVar1 = 1, u->_mp_size != 0)) {
    return (int)((uint)(0xffffffff < *u->_mp_d) - (uint)(*u->_mp_d < 0xffffffff) != 1);
  }
  return iVar1;
}

