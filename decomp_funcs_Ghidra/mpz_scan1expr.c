
mp_bitcnt_t mpz_scan1(__mpz_struct *u,mp_bitcnt_t starting_bit)

{
  uint uVar1;
  mp_srcptr up;
  mp_bitcnt_t mVar2;
  ulong uVar3;
  ulong i;
  ulong limb;
  ulong uVar4;
  ulong un;
  
  uVar1 = u->_mp_size;
  i = starting_bit >> 6;
  un = (ulong)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
  if (un <= i) {
    mVar2 = 0xffffffffffffffff;
    if ((int)uVar1 < 0) {
      mVar2 = starting_bit;
    }
    return mVar2;
  }
  up = u->_mp_d;
  limb = up[i];
  mVar2 = starting_bit;
  if (starting_bit != 0) {
    mVar2 = 0;
    uVar3 = i;
    if ((int)uVar1 < 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        if (up[uVar3 - 1] != 0) {
          uVar3 = 0;
          goto LAB_0010bd50;
        }
      }
      uVar3 = 1;
LAB_0010bd50:
      uVar4 = ~limb;
      limb = uVar4 + uVar3;
      mVar2 = -(ulong)!CARRY8(uVar4,uVar3);
    }
    limb = limb & -1 << ((byte)starting_bit & 0x3f);
  }
  mVar2 = mpn_common_scan(limb,i,up,un,mVar2);
  return mVar2;
}

