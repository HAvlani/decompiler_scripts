
void mpn_sqr(mp_ptr rp,mp_srcptr ap,mp_size_t n)

{
  mpn_mul(rp,ap,n,ap,n);
  return;
}

