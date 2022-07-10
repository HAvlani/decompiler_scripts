
_Bool millerrabin(uintmax_t n,uintmax_t ni,uintmax_t b,uintmax_t q,uint k,uintmax_t one)

{
  bool bVar1;
  uintmax_t uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uintmax_t uVar6;
  
  uVar2 = powm(b,q,n,ni,one);
  uVar6 = n - one;
  bVar1 = one == uVar2 || uVar2 == uVar6;
  if ((one != uVar2 && uVar2 != uVar6) && (1 < k)) {
    uVar5 = 1;
    while( true ) {
      uVar3 = SUB168(ZEXT816(uVar2) * ZEXT816(uVar2) >> 0x40,0);
      uVar4 = SUB168(ZEXT816(SUB168(ZEXT816(uVar2) * ZEXT816(uVar2),0) * ni) * ZEXT816(n) >> 0x40,0)
      ;
      uVar2 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar2 = uVar2 + n;
      }
      if (uVar6 == uVar2) break;
      if (one == uVar2) {
        return bVar1;
      }
      uVar5 = uVar5 + 1;
      if (k == uVar5) {
        return bVar1;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}

