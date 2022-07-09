
int mpn_zero_p(mp_srcptr rp,mp_size_t n)

{
  if (0 < n) {
    do {
      if (rp[n + -1] != 0) break;
      n = n + -1;
    } while (n != 0);
  }
  return (uint)(n == 0);
}

