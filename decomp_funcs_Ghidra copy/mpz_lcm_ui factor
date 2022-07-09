
void mpz_lcm_ui(__mpz_struct *r,__mpz_struct *u,ulong v)

{
  uint uVar1;
  ulong uVar2;
  
  if ((v != 0) && (u->_mp_size != 0)) {
    uVar2 = mpz_gcd_ui((__mpz_struct *)0x0,u,v);
    mpz_mul_ui(r,u,v / uVar2);
    mpz_set(r,r);
    uVar1 = r->_mp_size >> 0x1f;
    r->_mp_size = r->_mp_size ^ uVar1;
    r->_mp_size = r->_mp_size - uVar1;
    return;
  }
  r->_mp_size = 0;
  return;
}

