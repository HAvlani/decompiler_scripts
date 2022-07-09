
void mpz_set_si(__mpz_struct *r,long x)

{
  mp_ptr pmVar1;
  
  if (x < 0) {
    r->_mp_size = -1;
    if (r->_mp_alloc < 1) {
      pmVar1 = mpz_realloc(r,1);
    }
    else {
      pmVar1 = r->_mp_d;
    }
    *pmVar1 = -x;
    return;
  }
  if (x != 0) {
    mpz_set_ui(r,x);
    return;
  }
  r->_mp_size = 0;
  return;
}

