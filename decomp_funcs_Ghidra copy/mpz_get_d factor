
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double mpz_get_d(__mpz_struct *u)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = u->_mp_size;
  if (uVar1 == 0) {
    return 0.0;
  }
  iVar4 = 0;
  iVar6 = 0;
  lVar7 = (long)(int)(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f));
  uVar3 = u->_mp_d[lVar7 + -1];
  uVar2 = uVar3;
  if ((uVar3 & 0xff00000000000000) == 0) {
    do {
      uVar2 = uVar2 << 8;
      iVar4 = iVar4 + 8;
      iVar6 = iVar4;
    } while ((uVar2 & 0xff00000000000000) == 0);
    for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00109988:
      iVar6 = iVar6 + 1;
    }
    iVar6 = iVar6 + -0xb;
    if (-1 < iVar6) goto joined_r0x00109a74;
    uVar2 = -1 << (-(char)iVar6 & 0x3fU);
  }
  else {
    if (-1 < (long)uVar3) goto LAB_00109988;
    uVar2 = 0xfffffffffffff800;
    iVar6 = -0xb;
  }
  uVar3 = uVar3 & uVar2;
joined_r0x00109a74:
  if ((long)uVar3 < 0) {
    dVar8 = (double)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
    dVar8 = dVar8 + dVar8;
  }
  else {
    dVar8 = (double)uVar3;
  }
  lVar5 = lVar7 + -2;
  if (lVar7 != 1) {
    do {
      dVar8 = dVar8 * DAT_0011afd0;
      if (0 < iVar6) {
        uVar3 = u->_mp_d[lVar5];
        iVar6 = iVar6 + -0x40;
        if (iVar6 < 0) {
          uVar3 = uVar3 & -1 << (-(char)iVar6 & 0x3fU);
        }
        if ((long)uVar3 < 0) {
          dVar9 = (double)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
          dVar9 = dVar9 + dVar9;
        }
        else {
          dVar9 = (double)uVar3;
        }
        dVar8 = dVar8 + dVar9;
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != -1);
  }
  if (-1 < (int)uVar1) {
    return dVar8;
  }
  return (double)((ulong)dVar8 ^ _DAT_0011aff0);
}

