
/* WARNING: Unknown calling convention yet parameter storage is locked */

void mpz_abs_sub_bit(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  mp_ptr pmVar6;
  mp_ptr in_RDX;
  mp_srcptr ap;
  mp_limb_t in_RSI;
  __mpz_struct *in_RDI;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = in_RDI->_mp_alloc;
  uVar10 = (ulong)in_RDX >> 6;
  lVar8 = (long)(int)(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f));
  if (lVar8 <= (long)uVar10) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("limb_index < dn","lib/mini-gmp.c",0xea8,"mpz_abs_sub_bit");
  }
  ap = (mp_srcptr)(lVar8 - uVar10);
  if ((long)ap < 1) {
    mpn_sub_1((mp_limb_t)in_RDI,in_RSI,ap,in_RDX);
    in_RDI->_mp_size = 1;
    if (in_RDI->_mp_alloc < 1) {
      pmVar6 = mpz_realloc(in_RDI,1);
      *pmVar6 = in_RSI;
      return;
    }
    *in_RDI->_mp_d = in_RSI;
    return;
  }
  puVar4 = (ulong *)(in_RSI + uVar10 * 8);
  uVar3 = 1 << ((byte)in_RDX & 0x3f);
  do {
    uVar9 = uVar3;
    uVar2 = *puVar4;
    puVar5 = puVar4 + 1;
    *puVar4 = uVar2 - uVar9;
    puVar4 = puVar5;
    uVar3 = (ulong)(uVar2 < uVar9);
  } while ((ulong *)(in_RSI + ((long)ap + uVar10) * 8) != puVar5);
  if (uVar2 < uVar9) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__cy == 0","lib/mini-gmp.c",0xeaa,"mpz_abs_sub_bit");
  }
  do {
    if (*(long *)((in_RSI - 8) + lVar8 * 8) != 0) break;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar7 = (int)lVar8;
  if ((int)uVar1 < 0) {
    iVar7 = -(int)lVar8;
  }
  in_RDI->_mp_alloc = iVar7;
  return;
}

