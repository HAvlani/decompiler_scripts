
mp_limb_t mpn_sub_n(mp_ptr rp,mp_srcptr ap,mp_srcptr bp,mp_size_t n)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (0 < n) {
    lVar3 = 0;
    do {
      uVar1 = uVar2 + bp[lVar3];
      uVar2 = (ulong)CARRY8(uVar2,bp[lVar3]) + (ulong)(ap[lVar3] < uVar1);
      rp[lVar3] = ap[lVar3] - uVar1;
      lVar3 = lVar3 + 1;
    } while (n != lVar3);
    return uVar2;
  }
  return 0;
}

