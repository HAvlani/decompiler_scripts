
mp_bitcnt_t mpn_limb_size_in_base_2(mp_limb_t u)

{
  ulong uVar1;
  ulong uVar2;
  
  if (u != 0) {
    uVar2 = 0;
    uVar1 = u & 0xff00000000000000;
    while (uVar1 == 0) {
      u = u << 8;
      uVar2 = (ulong)((int)uVar2 + 8);
      uVar1 = u & 0xff00000000000000;
    }
    for (; -1 < (long)u; u = u * 2) {
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    return 0x40 - uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("u > 0","lib/mini-gmp.c",0x4ba,"mpn_limb_size_in_base_2");
}

