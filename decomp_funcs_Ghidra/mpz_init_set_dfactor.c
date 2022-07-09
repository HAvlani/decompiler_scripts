
void mpz_init_set_d(__mpz_struct *r,double x)

{
  *(undefined8 *)r = 0;
  r->_mp_d = &dummy_limb_5449;
  if (x == DAT_0011afe8 * x) {
    return;
  }
  mpz_set_d(r,x);
  return;
}

