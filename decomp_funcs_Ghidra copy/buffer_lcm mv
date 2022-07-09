
size_t buffer_lcm(size_t a,size_t b,size_t lcm_max)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (a == 0) {
    a = 0x2000;
    if (b != 0) {
      a = b;
    }
  }
  else {
    sVar1 = a;
    sVar2 = b;
    if (b != 0) {
      do {
        uVar3 = sVar2;
        sVar2 = sVar1 % uVar3;
        sVar1 = uVar3;
      } while (sVar2 != 0);
      uVar4 = b * (a / uVar3);
      if ((uVar4 < lcm_max || uVar4 - lcm_max == 0) && (uVar4 / b == a / uVar3)) {
        return uVar4;
      }
    }
  }
  if (a <= lcm_max) {
    lcm_max = a;
  }
  return lcm_max;
}

