
uintmax_t gcd_odd(uintmax_t a,uintmax_t b)

{
  uintmax_t uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = b;
  if ((b & 1) == 0) {
    uVar1 = a;
    a = b;
  }
  if (a == 0) {
    return uVar1;
  }
  uVar2 = uVar1 >> 1;
  while( true ) {
    do {
      uVar3 = a;
      a = uVar3 >> 1;
    } while ((uVar3 & 1) == 0);
    uVar4 = (uVar3 >> 1) - uVar2;
    if (uVar4 == 0) break;
    uVar3 = (long)uVar4 >> 0x3f;
    uVar2 = uVar2 + (uVar4 & uVar3);
    a = (uVar4 ^ uVar3) - uVar3;
  }
  return uVar3 | 1;
}

