
void mpn_copyi(mp_ptr d,mp_srcptr s,mp_size_t n)

{
  long lVar1;
  
  if (0 < n) {
    lVar1 = 0;
    do {
      d[lVar1] = s[lVar1];
      lVar1 = lVar1 + 1;
    } while (n != lVar1);
  }
  return;
}

