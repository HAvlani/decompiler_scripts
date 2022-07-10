
mp_limb_t mpn_add_1(mp_ptr rp,mp_srcptr ap,mp_size_t n,mp_limb_t b)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_RDX;
  long lVar6;
  mp_limb_t mVar7;
  
  if (0 < n) {
    lVar6 = 0;
    do {
      uVar5 = ap[lVar6];
      rp[lVar6] = b + ap[lVar6];
      lVar6 = lVar6 + 1;
      b = (mp_limb_t)CARRY8(b,uVar5);
    } while (n != lVar6);
    return b;
  }
  mpn_add_1((mp_limb_t)rp,(mp_size_t)ap,(mp_srcptr)n,(mp_ptr)b);
  uVar5 = 0;
  if (0 < (long)b) {
    mVar7 = 0;
    do {
      uVar2 = ap[mVar7];
      uVar4 = uVar5 + ap[mVar7];
      puVar1 = (ulong *)(extraout_RDX + mVar7 * 8);
      uVar3 = *puVar1;
      rp[mVar7] = uVar4 + *puVar1;
      uVar5 = (ulong)CARRY8(uVar5,uVar2) + (ulong)CARRY8(uVar4,uVar3);
      mVar7 = mVar7 + 1;
    } while (b != mVar7);
    return uVar5;
  }
  return 0;
}

