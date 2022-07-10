
void print_uintmaxes(uintmax_t t1,uintmax_t t0)

{
  ulong uVar1;
  ulong uVar2;
  ulong t1_00;
  ulong uVar3;
  ulong uVar4;
  uintmax_t t0_00;
  int iVar5;
  bool bVar6;
  
  if (t1 != 0) {
    iVar5 = 0x40;
    t0_00 = 0;
    uVar2 = 1000000000;
    t1_00 = (t1 >> 9) / 0x1dcd65;
    uVar4 = t1 + t1_00 * -1000000000;
    uVar1 = 0;
    do {
      t0_00 = t0_00 * 2;
      uVar3 = uVar2 << 0x3f;
      uVar2 = uVar2 >> 1;
      uVar1 = uVar1 >> 1 | uVar3;
      if ((uVar2 < uVar4) || ((uVar2 == uVar4 && (uVar1 <= t0)))) {
        t0_00 = t0_00 + 1;
        bVar6 = t0 < uVar1;
        t0 = t0 - uVar1;
        uVar4 = (uVar4 - uVar2) - (ulong)bVar6;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    print_uintmaxes(t1_00,t0_00);
    lbuf_putint(t0,9);
    return;
  }
  lbuf_putint(t0,0);
  return;
}

