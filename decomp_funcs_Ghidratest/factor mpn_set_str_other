
/* WARNING: Unknown calling convention yet parameter storage is locked */

mp_size_t mpn_set_str_other(void)

{
  byte bVar1;
  uint uVar2;
  undefined auVar3 [16];
  ulong uVar4;
  mp_limb_t mVar5;
  long in_RCX;
  ulong uVar6;
  ulong in_RDX;
  mp_ptr pmVar7;
  ulong uVar8;
  byte *in_RSI;
  byte *pbVar9;
  mp_ptr in_RDI;
  uint *in_R8;
  mp_limb_t *in_R9;
  ulong uVar10;
  long n;
  
  if (in_RDX == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("sn > 0","lib/mini-gmp.c",0x55a,"mpn_set_str_other");
  }
  uVar2 = *in_R8;
  uVar6 = (ulong)uVar2;
  auVar3 = ZEXT816(in_RDX - 1) % ZEXT816(uVar6);
  uVar4 = (ulong)*in_RSI;
  if (SUB168(auVar3,0) == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = (ulong)(SUB164(auVar3,0) - 1);
    pbVar9 = in_RSI + 1;
    do {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      uVar4 = uVar4 * in_RCX + (ulong)bVar1;
    } while (pbVar9 != in_RSI + uVar10 + 2);
    uVar10 = uVar10 + 2;
  }
  *in_RDI = uVar4;
  n = 1;
  if (uVar10 < in_RDX) {
    bVar1 = in_RSI[uVar10];
    uVar4 = uVar10;
    while( true ) {
      uVar8 = (ulong)bVar1;
      uVar10 = uVar4 + 1;
      if (1 < uVar2) {
        uVar6 = (ulong)((int)uVar6 - 2);
        pbVar9 = in_RSI + uVar10;
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar8 = uVar8 * in_RCX + (ulong)bVar1;
        } while (pbVar9 != in_RSI + uVar6 + uVar4 + 2);
        uVar10 = uVar4 + 2 + uVar6;
      }
      mVar5 = mpn_mul_1(in_RDI,in_RDI,n,*in_R9);
      pmVar7 = in_RDI;
      do {
        uVar6 = *pmVar7;
        *pmVar7 = uVar8 + *pmVar7;
        uVar8 = (ulong)CARRY8(uVar8,uVar6);
        pmVar7 = pmVar7 + 1;
      } while (in_RDI + n != pmVar7);
      if (mVar5 + uVar8 != 0) {
        in_RDI[n] = mVar5 + uVar8;
        n = n + 1;
      }
      if (in_RDX <= uVar10) break;
      bVar1 = in_RSI[uVar10];
      uVar2 = *in_R8;
      uVar6 = (ulong)uVar2;
      uVar4 = uVar10;
    }
  }
  if (in_RDX == uVar10) {
    return n;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("j == sn","lib/mini-gmp.c",0x572,"mpn_set_str_other");
}

