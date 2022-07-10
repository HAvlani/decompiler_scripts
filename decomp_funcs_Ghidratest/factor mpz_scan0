
mp_bitcnt_t mpz_scan0(__mpz_struct *u,mp_bitcnt_t starting_bit)

{
  uint uVar1;
  mp_srcptr up;
  ulong uVar2;
  ulong uVar3;
  mp_bitcnt_t mVar4;
  long lVar5;
  ulong i;
  ulong uVar6;
  ulong un;
  
  uVar1 = u->_mp_size;
  uVar6 = (ulong)(int)uVar1;
  i = starting_bit >> 6;
  un = (ulong)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
  if (un <= i) {
    mVar4 = 0xffffffffffffffff;
    if (-1 < (long)uVar6) {
      mVar4 = starting_bit;
    }
    return mVar4;
  }
  up = u->_mp_d;
  uVar3 = up[i] ^ (long)~uVar6 >> 0x3f;
  uVar2 = i;
  if ((long)uVar6 < 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (up[uVar2 - 1] != 0) {
        lVar5 = 0;
        goto LAB_0010d9e8;
      }
    }
    lVar5 = 1;
LAB_0010d9e8:
    uVar3 = uVar3 - lVar5;
  }
  mVar4 = mpn_common_scan(-1 << ((byte)starting_bit & 0x3f) & uVar3,i,up,un,(long)~uVar6 >> 0x3f);
  return mVar4;
}

