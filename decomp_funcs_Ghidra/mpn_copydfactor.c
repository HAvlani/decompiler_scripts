
void mpn_copyd(mp_ptr d,mp_srcptr s,mp_size_t n)

{
  long lVar1;
  
  lVar1 = n + -1;
  if (-1 < lVar1) {
    do {
      d[lVar1] = s[lVar1];
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  return;
}

