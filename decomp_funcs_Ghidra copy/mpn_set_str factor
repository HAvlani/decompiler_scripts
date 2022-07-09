
mp_size_t mpn_set_str(mp_ptr rp,uchar *sp,size_t sn,int base)

{
  long lVar1;
  uint bits;
  mp_size_t mVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  mpn_base_info info;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mVar2 = 0;
  if (sn != 0) {
    bits = mpn_base_power_of_two_p(base);
    if (bits == 0) {
      uVar3 = (ulong)base;
      lVar4 = SUB168(ZEXT816(uVar3) * ZEXT816(uVar3) >> 0x40,0);
      uVar5 = uVar3;
      while (lVar4 == 0) {
        uVar5 = uVar5 * uVar3;
        lVar4 = SUB168(ZEXT816(uVar5) * ZEXT816(uVar3) >> 0x40,0);
      }
      mVar2 = mpn_set_str_other();
    }
    else {
      mVar2 = mpn_set_str_bits(rp,sp,sn,bits);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return mVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

