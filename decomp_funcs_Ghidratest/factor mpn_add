
mp_limb_t mpn_add(mp_ptr rp,mp_srcptr ap,mp_size_t an,mp_srcptr bp,mp_size_t bn)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (an < bn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("an >= bn","lib/mini-gmp.c",0x1e0,"mpn_add");
  }
  uVar4 = 0;
  lVar5 = 0;
  if (0 < bn) {
    do {
      uVar1 = ap[lVar5];
      uVar3 = uVar4 + ap[lVar5];
      uVar2 = bp[lVar5];
      rp[lVar5] = uVar3 + bp[lVar5];
      uVar4 = (ulong)CARRY8(uVar4,uVar1) + (ulong)CARRY8(uVar3,uVar2);
      lVar5 = lVar5 + 1;
    } while (bn != lVar5);
  }
  if (bn < an) {
    lVar5 = bn * 8;
    do {
      uVar1 = *(ulong *)((long)ap + lVar5);
      *(ulong *)((long)rp + lVar5) = uVar4 + *(ulong *)((long)ap + lVar5);
      lVar5 = lVar5 + 8;
      uVar4 = (ulong)CARRY8(uVar4,uVar1);
    } while (an * 8 != lVar5);
  }
  return uVar4;
}

