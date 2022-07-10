
mp_limb_t mpn_neg(mp_ptr rp,mp_srcptr up,mp_size_t n)

{
  mp_limb_t mVar1;
  long lVar2;
  long lVar3;
  
  mVar1 = *up;
  lVar3 = n + -1;
  while( true ) {
    lVar2 = lVar3;
    if (mVar1 != 0) {
      lVar3 = 0;
      *rp = -mVar1;
      if (1 < n) {
        do {
          rp[lVar3 + 1] = ~up[lVar3 + 1];
          lVar3 = lVar3 + 1;
        } while (n + -1 != lVar3);
      }
      return 1;
    }
    *rp = 0;
    if (lVar2 == 0) break;
    mVar1 = up[1];
    up = up + 1;
    rp = rp + 1;
    lVar3 = lVar2 + -1;
    n = lVar2;
  }
  return 0;
}

