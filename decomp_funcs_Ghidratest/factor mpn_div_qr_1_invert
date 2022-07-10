
void mpn_div_qr_1_invert(gmp_div_inverse *inv,mp_limb_t d)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  mp_limb_t mVar4;
  
  if (d != 0) {
    uVar3 = 0;
    uVar1 = d & 0xff00000000000000;
    uVar2 = d;
    while (uVar1 == 0) {
      uVar2 = uVar2 << 8;
      uVar3 = uVar3 + 8;
      uVar1 = uVar2 & 0xff00000000000000;
    }
    for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
      uVar3 = uVar3 + 1;
    }
    mVar4 = d << ((byte)uVar3 & 0x3f);
    inv->shift = uVar3;
    inv->d1 = mVar4;
    mVar4 = mpn_invert_3by2(mVar4,0);
    inv->di = mVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("d > 0","lib/mini-gmp.c",0x386,"mpn_div_qr_1_invert");
}

