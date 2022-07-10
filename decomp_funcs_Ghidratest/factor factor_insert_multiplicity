
void factor_insert_multiplicity(factors *factors,uintmax_t prime,uint m)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uchar *puVar5;
  uintmax_t *puVar6;
  bool bVar7;
  
  bVar1 = factors->nfactors;
  puVar6 = factors->p;
  puVar5 = factors->e;
  if (bVar1 != 0) {
    uVar3 = (ulong)(int)(bVar1 - 1);
    uVar2 = uVar3;
    do {
      uVar4 = uVar2 & 0xffffffff;
      bVar7 = factors->p[uVar2] == prime;
      if (factors->p[uVar2] < prime || bVar7) {
        if (bVar7) {
          puVar5[uVar2] = puVar5[uVar2] + (uchar)m;
          return;
        }
        puVar6 = puVar6 + uVar2 + 1;
        puVar5 = puVar5 + uVar2 + 1;
        if ((int)(bVar1 - 1) <= (int)uVar4) goto LAB_00102bf2;
        break;
      }
      uVar2 = uVar2 - 1;
      uVar4 = uVar2 & 0xffffffff;
    } while ((int)uVar2 != -1);
    do {
      factors->p[uVar3 + 1] = factors->p[uVar3];
      factors->e[uVar3 + 1] = factors->e[uVar3];
      uVar3 = uVar3 - 1;
    } while ((int)uVar4 < (int)uVar3);
  }
LAB_00102bf2:
  *puVar6 = prime;
  *puVar5 = (uchar)m;
  factors->nfactors = bVar1 + 1;
  return;
}

