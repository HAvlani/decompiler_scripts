
uintmax_t gcd2_odd(uintmax_t *r1,uintmax_t a1,uintmax_t a0,uintmax_t b1,uintmax_t b0)

{
  ulong uVar1;
  uintmax_t uVar2;
  ulong uVar3;
  bool bVar4;
  
  if ((b0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b0 & 1","src/factor.c",0x1dc,__PRETTY_FUNCTION___7909);
  }
  if ((a0 | a1) == 0) {
    *r1 = b1;
    return b0;
  }
  for (uVar3 = a0 & 1; uVar3 == 0; uVar3 = uVar3 & 1) {
    uVar3 = a0 >> 1;
    a0 = a1 << 0x3f | uVar3;
    a1 = a1 >> 1;
  }
  uVar3 = b1 | a1;
  while (uVar3 != 0) {
    while ((a1 <= b1 && ((a0 <= b0 || (a1 != b1))))) {
      if ((b1 <= a1) && ((b0 <= a0 || (a1 != b1)))) {
        *r1 = a1;
        return a0;
      }
      bVar4 = b0 < a0;
      b0 = b0 - a0;
      uVar3 = (b1 - a1) - (ulong)bVar4;
      do {
        b1 = uVar3 >> 1;
        uVar1 = b0 >> 1;
        b0 = uVar3 << 0x3f | uVar1;
        uVar3 = b1;
      } while ((uVar1 & 1) == 0);
      if ((a1 | b1) == 0) goto LAB_0010367f;
    }
    bVar4 = a0 < b0;
    a0 = a0 - b0;
    uVar3 = (a1 - b1) - (ulong)bVar4;
    do {
      uVar1 = a0 >> 1;
      a1 = uVar3 >> 1;
      a0 = uVar3 << 0x3f | uVar1;
      uVar3 = a1;
    } while ((uVar1 & 1) == 0);
    uVar3 = a1 | b1;
  }
LAB_0010367f:
  *r1 = 0;
  uVar2 = gcd_odd(b0,a0);
  return uVar2;
}

