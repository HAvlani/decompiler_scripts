
mp_limb_t mpn_sub(mp_ptr rp,mp_srcptr ap,mp_size_t an,mp_srcptr bp,mp_size_t bn)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (an < bn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("an >= bn","lib/mini-gmp.c",0x214,"mpn_sub");
  }
  uVar2 = 0;
  lVar3 = 0;
  if (0 < bn) {
    do {
      uVar1 = uVar2 + bp[lVar3];
      uVar2 = (ulong)CARRY8(uVar2,bp[lVar3]) + (ulong)(ap[lVar3] < uVar1);
      rp[lVar3] = ap[lVar3] - uVar1;
      lVar3 = lVar3 + 1;
    } while (bn != lVar3);
  }
  if (bn < an) {
    lVar3 = bn * 8;
    uVar1 = uVar2;
    do {
      uVar2 = (ulong)(*(ulong *)((long)ap + lVar3) < uVar1);
      *(ulong *)((long)rp + lVar3) = *(ulong *)((long)ap + lVar3) - uVar1;
      lVar3 = lVar3 + 8;
      uVar1 = uVar2;
    } while (an * 8 - lVar3 != 0);
  }
  return uVar2;
}

