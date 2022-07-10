
mp_limb_t mpn_lshift(mp_ptr rp,mp_srcptr up,mp_size_t n,uint cnt)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  mp_ptr pmVar5;
  mp_limb_t mVar6;
  
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 1","lib/mini-gmp.c",0x293,"mpn_lshift");
  }
  if (cnt == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cnt >= 1","lib/mini-gmp.c",0x294,"mpn_lshift");
  }
  if (0x3f < cnt) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cnt < GMP_LIMB_BITS","lib/mini-gmp.c",0x295,"mpn_lshift");
  }
  bVar3 = (byte)cnt;
  pmVar5 = rp + n;
  uVar1 = up[n + -1];
  mVar6 = uVar1 << (bVar3 & 0x3f);
  lVar4 = n + -1;
  if (lVar4 != 0) {
    do {
      uVar2 = up[lVar4 + -1];
      pmVar5[lVar4 - n] = uVar2 >> (0x40 - bVar3 & 0x3f) | mVar6;
      mVar6 = uVar2 << (bVar3 & 0x3f);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    pmVar5 = pmVar5 + (1 - n);
  }
  pmVar5[-1] = mVar6;
  return uVar1 >> (0x40 - bVar3 & 0x3f);
}

