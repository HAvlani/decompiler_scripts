
mp_limb_t mpn_rshift(mp_ptr rp,mp_srcptr up,mp_size_t n,uint cnt)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 1","lib/mini-gmp.c",0x2b1,"mpn_rshift");
  }
  if (cnt != 0) {
    if (cnt < 0x40) {
      uVar1 = *up;
      bVar3 = (byte)cnt;
      uVar5 = uVar1 >> (bVar3 & 0x3f);
      if (n != 1) {
        lVar4 = 0;
        do {
          uVar2 = up[lVar4 + 1];
          rp[lVar4] = uVar2 << (0x40 - bVar3 & 0x3f) | uVar5;
          lVar4 = lVar4 + 1;
          uVar5 = uVar2 >> (bVar3 & 0x3f);
        } while (n + -1 != lVar4);
        rp = rp + n + -1;
      }
      *rp = uVar5;
      return uVar1 << (0x40 - bVar3 & 0x3f);
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("cnt < GMP_LIMB_BITS","lib/mini-gmp.c",0x2b3,"mpn_rshift");
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("cnt >= 1","lib/mini-gmp.c",0x2b2,"mpn_rshift");
}

