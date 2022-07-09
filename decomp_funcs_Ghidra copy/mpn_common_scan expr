
mp_bitcnt_t mpn_common_scan(mp_limb_t limb,mp_size_t i,mp_srcptr up,mp_size_t un,mp_limb_t ux)

{
  mp_bitcnt_t mVar1;
  int iVar2;
  ulong uVar3;
  
  if (un < i) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= i && i <= un","lib/mini-gmp.c",0x2cc,"mpn_common_scan");
  }
  if (limb == 0) {
    do {
      i = i + 1;
      if (un == i) {
        mVar1 = 0xffffffffffffffff;
        if (ux != 0) {
          mVar1 = un << 6;
        }
        return mVar1;
      }
    } while (ux == up[i]);
    limb = ux ^ up[i];
  }
  iVar2 = 0;
  for (uVar3 = -limb & limb; (uVar3 & 0xff00000000000000) == 0; uVar3 = uVar3 << 8) {
    iVar2 = iVar2 + 8;
  }
  for (; -1 < (long)uVar3; uVar3 = uVar3 * 2) {
    iVar2 = iVar2 + 1;
  }
  return (ulong)(0x3f - iVar2) + i * 0x40;
}

