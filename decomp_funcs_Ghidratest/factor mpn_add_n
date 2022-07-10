
mp_limb_t mpn_add_n(mp_ptr rp,mp_srcptr ap,mp_srcptr bp,mp_size_t n)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = 0;
  if (0 < n) {
    lVar5 = 0;
    do {
      uVar1 = ap[lVar5];
      uVar3 = uVar4 + ap[lVar5];
      uVar2 = bp[lVar5];
      rp[lVar5] = uVar3 + bp[lVar5];
      uVar4 = (ulong)CARRY8(uVar4,uVar1) + (ulong)CARRY8(uVar3,uVar2);
      lVar5 = lVar5 + 1;
    } while (n != lVar5);
    return uVar4;
  }
  return 0;
}

