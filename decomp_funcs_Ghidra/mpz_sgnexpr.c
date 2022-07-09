
int mpz_sgn(__mpz_struct *u)

{
  return (uint)(0 < u->_mp_size) + (u->_mp_size >> 0x1f);
}

