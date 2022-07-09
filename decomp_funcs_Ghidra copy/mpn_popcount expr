
mp_bitcnt_t mpn_popcount(mp_srcptr p,mp_size_t n)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  mp_bitcnt_t mVar5;
  
  if (0 < n) {
    puVar1 = p + n;
    mVar5 = 0;
    do {
      uVar2 = *p;
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          uVar3 = (int)uVar2 - ((uint)(uVar2 >> 1) & 0x5555);
          uVar3 = (uVar3 >> 2 & 0x3333) + (uVar3 & 0x3333);
          uVar3 = uVar3 + (uVar3 >> 4);
          uVar4 = (ulong)((int)uVar4 + (uVar3 & 0xf) + (uVar3 >> 8 & 0xf));
          uVar2 = uVar2 >> 0x10;
        } while (uVar2 != 0);
        mVar5 = mVar5 + uVar4;
      }
      p = p + 1;
    } while (puVar1 != p);
    return mVar5;
  }
  return 0;
}

