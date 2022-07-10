
void mpz_mfac_uiui(__mpz_struct *x,ulong n,ulong m)

{
  ulong x_00;
  
  x_00 = (n == 0) + n;
  if (x_00 == 0) {
    x->_mp_size = 0;
  }
  else {
    mpz_set_ui(x,x_00);
  }
  if (1 < m + 1) {
    while (m + 1 < n) {
      n = n - m;
      mpz_mul_ui(x,x,n);
    }
  }
  return;
}

