
mp_limb_t mpn_invert_3by2(mp_limb_t u1,mp_limb_t u0)

{
  int iVar1;
  mp_limb_t mVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  
  uVar5 = ~u1 / (u1 >> 0x20);
  iVar1 = (int)uVar5;
  uVar5 = uVar5 & 0xffffffff;
  uVar6 = ~u1 - (u1 >> 0x20) * uVar5 << 0x20 | 0xffffffff;
  uVar3 = (u1 & 0xffffffff) * uVar5;
  if (uVar6 < uVar3) {
    uVar5 = (ulong)(iVar1 - 1);
    bVar9 = CARRY8(uVar6,u1);
    uVar6 = uVar6 + u1;
    if ((!bVar9) && (uVar6 <= uVar3 && uVar3 - uVar6 != 0)) {
      uVar6 = uVar6 + u1;
      uVar5 = (ulong)(iVar1 - 2);
    }
  }
  uVar6 = uVar6 - uVar3;
  uVar4 = (uVar6 >> 0x20) * uVar5 + uVar6;
  uVar8 = uVar4 >> 0x20;
  uVar3 = uVar8 + 1;
  uVar6 = ((uVar6 << 0x20) + 0xffffffff) - u1 * uVar3;
  if (uVar4 << 0x20 <= uVar6) {
    uVar6 = uVar6 + u1;
    uVar3 = uVar8;
  }
  mVar2 = uVar3 + (uVar5 << 0x20);
  if (u1 <= uVar6) {
    mVar2 = mVar2 + 1;
    uVar6 = uVar6 - u1;
  }
  if (u0 != 0) {
    uVar3 = ~uVar6 + u0;
    uVar5 = uVar3;
    if (CARRY8(~uVar6,u0)) {
      uVar5 = uVar3 - u1;
      if (uVar3 < u1) {
        mVar2 = mVar2 - 1;
      }
      else {
        mVar2 = mVar2 - 2;
        uVar5 = uVar5 - u1;
      }
    }
    uVar4 = (u0 & 0xffffffff) * (mVar2 & 0xffffffff);
    uVar6 = (mVar2 & 0xffffffff) * (u0 >> 0x20);
    lVar7 = (u0 >> 0x20) * (mVar2 >> 0x20);
    uVar3 = (mVar2 >> 0x20) * (u0 & 0xffffffff) + uVar6 + (uVar4 >> 0x20);
    if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
      lVar7 = lVar7 + 0x100000000;
    }
    uVar8 = lVar7 + (uVar3 >> 0x20);
    uVar6 = uVar5 + uVar8;
    if (CARRY8(uVar5,uVar8)) {
      return (mVar2 - 1) -
             (ulong)(u1 < uVar6 || u0 < (uVar3 << 0x20) + (uVar4 & 0xffffffff) && u1 == uVar6);
    }
  }
  return mVar2;
}

