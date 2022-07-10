
void mpn_com(mp_ptr rp,mp_srcptr up,mp_size_t n)

{
  long lVar1;
  
  if (0 < n) {
    lVar1 = 0;
    do {
      rp[lVar1] = ~up[lVar1];
      lVar1 = lVar1 + 1;
    } while (n != lVar1);
  }
  return;
}

