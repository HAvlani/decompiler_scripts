
mp_bitcnt_t mpn_scan0(mp_srcptr ptr,mp_bitcnt_t bit)

{
  mp_bitcnt_t mVar1;
  ulong i;
  
  i = bit >> 6;
  mVar1 = mpn_common_scan(~ptr[i] & -1 << ((byte)bit & 0x3f),i,ptr,i,0xffffffffffffffff);
  return mVar1;
}

