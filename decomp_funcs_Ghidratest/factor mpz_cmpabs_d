
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int mpz_cmpabs_d(__mpz_struct *x,double d)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  
  uVar2 = x->_mp_size;
  if (d < 0.0) {
    d = (double)((ulong)d ^ _DAT_0011aff0);
  }
  if (uVar2 != 0) {
    uVar2 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    if (uVar2 != 1) {
      uVar3 = 1;
      do {
        d = d * DAT_0011afd8;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    if (DAT_0011afd0 <= d) {
      return -1;
    }
    lVar4 = (ulong)uVar2 - 1;
    do {
      if (d < DAT_0011afe0) {
        uVar3 = (ulong)d;
        puVar1 = x->_mp_d + lVar4;
        bVar5 = uVar3 < *puVar1;
        bVar6 = uVar3 == *puVar1;
        if (bVar5) {
          return 1;
        }
      }
      else {
        uVar3 = (long)(d - DAT_0011afe0) ^ 0x8000000000000000;
        puVar1 = x->_mp_d + lVar4;
        bVar5 = uVar3 < *puVar1;
        bVar6 = uVar3 == *puVar1;
        if (bVar5) {
          return 1;
        }
      }
      if (!bVar5 && !bVar6) {
        return -1;
      }
      if ((long)uVar3 < 0) {
        dVar7 = (double)(uVar3 >> 1 | (ulong)((uint)uVar3 & 1));
        dVar7 = dVar7 + dVar7;
      }
      else {
        dVar7 = (double)uVar3;
      }
      lVar4 = lVar4 + -1;
      d = (d - dVar7) * DAT_0011afd0;
    } while (lVar4 != -1);
  }
  return -(uint)(0.0 < d);
}

