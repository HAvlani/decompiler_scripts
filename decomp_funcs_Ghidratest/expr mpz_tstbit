
int mpz_tstbit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  mp_limb_t mVar4;
  uint uVar5;
  
  uVar1 = d->_mp_size;
  uVar3 = bit_index >> 6;
  uVar5 = (int)uVar1 >> 0x1f;
  if ((uVar1 ^ uVar5) - uVar5 <= uVar3) {
    return uVar5 >> 0x1f;
  }
  uVar2 = d->_mp_d[uVar3];
  uVar5 = (uint)(uVar2 >> ((byte)bit_index & 0x3f)) & 1;
  if ((int)uVar1 < 0) {
    if ((bit_index & 0x3f) == 0) goto LAB_0010a25f;
    mVar4 = uVar2 << (0x40 - ((byte)bit_index & 0x3f) & 0x3f);
    while( true ) {
      if (mVar4 != 0) {
        return uVar5 ^ 1;
      }
LAB_0010a25f:
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffffffffffff) break;
      mVar4 = d->_mp_d[uVar3];
    }
    return uVar5;
  }
  return uVar5;
}

