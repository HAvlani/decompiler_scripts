
mp_limb_t mpn_sub_1(mp_ptr rp,mp_srcptr ap,mp_size_t n,mp_limb_t b)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_RDX;
  long lVar4;
  mp_limb_t mVar5;
  
  if (0 < n) {
    lVar4 = 0;
    do {
      uVar3 = (ulong)(ap[lVar4] < b);
      rp[lVar4] = ap[lVar4] - b;
      lVar4 = lVar4 + 1;
      b = uVar3;
    } while (n != lVar4);
    return uVar3;
  }
  mpn_sub_1((mp_limb_t)rp,(mp_size_t)ap,(mp_srcptr)n,(mp_ptr)b);
  uVar3 = 0;
  if (0 < (long)b) {
    mVar5 = 0;
    do {
      puVar1 = (ulong *)(extraout_RDX + mVar5 * 8);
      uVar2 = uVar3 + *puVar1;
      uVar3 = (ulong)CARRY8(uVar3,*puVar1) + (ulong)(ap[mVar5] < uVar2);
      rp[mVar5] = ap[mVar5] - uVar2;
      mVar5 = mVar5 + 1;
    } while (b != mVar5);
    return uVar3;
  }
  return 0;
}

