
size_t mpn_get_str(uchar *sp,int base,mp_ptr up,mp_size_t un)

{
  long lVar1;
  uint bits;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  mpn_base_info info;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (un < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("un > 0","lib/mini-gmp.c",0x524,"mpn_get_str");
  }
  if (up[un + -1] != 0) {
    bits = mpn_base_power_of_two_p(base);
    if (bits == 0) {
      uVar5 = (ulong)base;
      lVar3 = SUB168(ZEXT816(uVar5) * ZEXT816(uVar5) >> 0x40,0);
      uVar4 = uVar5;
      while (lVar3 == 0) {
        uVar4 = uVar4 * uVar5;
        lVar3 = SUB168(ZEXT816(uVar4) * ZEXT816(uVar5) >> 0x40,0);
      }
      sVar2 = mpn_get_str_other();
    }
    else {
      sVar2 = mpn_get_str_bits(sp,bits,up,un);
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return sVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("up[un-1] > 0","lib/mini-gmp.c",0x525,"mpn_get_str");
}

