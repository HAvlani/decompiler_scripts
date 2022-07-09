
/* WARNING: Unknown calling convention yet parameter storage is locked */

mp_size_t mpz_abs_sub(void)

{
  ulong uVar1;
  mp_limb_t mVar2;
  long lVar3;
  mp_ptr rp;
  mp_limb_t *rp_00;
  uint in_ECX;
  int iVar4;
  int iVar5;
  mp_srcptr *in_RDX;
  long bn;
  uint in_ESI;
  mp_srcptr ap;
  __mpz_struct *in_RDI;
  mp_srcptr *in_R8;
  mp_srcptr bp;
  long size;
  bool bVar6;
  
  iVar5 = ((int)in_ESI >> 0x1f ^ in_ESI) - ((int)in_ESI >> 0x1f);
  size = (long)iVar5;
  iVar4 = ((int)in_ECX >> 0x1f ^ in_ECX) - ((int)in_ECX >> 0x1f);
  bp = *in_R8;
  ap = *in_RDX;
  bn = (long)iVar4;
  lVar3 = size;
  if (size == bn) {
    do {
      lVar3 = lVar3 + -1;
      if (lVar3 == -1) {
        return 0;
      }
      uVar1 = bp[lVar3];
      bVar6 = ap[lVar3] == uVar1;
    } while (bVar6);
    if (uVar1 <= ap[lVar3] && !bVar6) goto LAB_001059d2;
  }
  else if (bn <= size) {
LAB_001059d2:
    if (in_RDI->_mp_alloc < iVar5) {
      rp = mpz_realloc(in_RDI,size);
      bp = *in_R8;
      ap = *in_RDX;
    }
    else {
      rp = in_RDI->_mp_d;
    }
    mVar2 = mpn_sub(rp,ap,size,bp,bn);
    if (mVar2 == 0) {
      if (in_ESI == 0) {
        return 0;
      }
      do {
        if (rp[size + -1] != 0) {
          return size;
        }
        size = size + -1;
      } while (size != 0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("__cy == 0","lib/mini-gmp.c",0x7d5,"mpz_abs_sub");
  }
  if (in_RDI->_mp_alloc < iVar4) {
    rp_00 = mpz_realloc(in_RDI,bn);
    ap = *in_RDX;
    bp = *in_R8;
  }
  else {
    rp_00 = in_RDI->_mp_d;
  }
  mVar2 = mpn_sub(rp_00,bp,bn,ap,size);
  if (mVar2 == 0) {
    if (in_ECX != 0) {
      do {
        if (rp_00[bn + -1] != 0) {
          return -bn;
        }
        bn = bn + -1;
      } while (bn != 0);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("__cy == 0","lib/mini-gmp.c",0x7db,"mpz_abs_sub");
}

