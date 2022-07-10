
uintmax_t powm(uintmax_t b,uintmax_t e,uintmax_t n,uintmax_t ni,uintmax_t one)

{
  ulong uVar1;
  ulong uVar2;
  uintmax_t uVar3;
  
  uVar3 = b;
  if ((e & 1) == 0) goto LAB_00102c70;
  do {
    while( true ) {
      uVar1 = SUB168(ZEXT816(b) * ZEXT816(b) >> 0x40,0);
      uVar2 = SUB168(ZEXT816(SUB168(ZEXT816(b) * ZEXT816(b),0) * ni) * ZEXT816(n) >> 0x40,0);
      b = uVar1 - uVar2;
      if (uVar1 < uVar2) {
        b = b + n;
      }
      e = e >> 1;
      one = uVar3;
      if ((e & 1) == 0) break;
      uVar1 = SUB168(ZEXT816(uVar3) * ZEXT816(b) >> 0x40,0);
      uVar2 = SUB168(ZEXT816(SUB168(ZEXT816(uVar3) * ZEXT816(b),0) * ni) * ZEXT816(n) >> 0x40,0);
      uVar3 = uVar1 - uVar2;
      if (uVar1 < uVar2) {
        uVar3 = uVar3 + n;
      }
    }
LAB_00102c70:
    uVar3 = one;
  } while (e != 0);
  return one;
}

