
void mpz_xor(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  mp_limb_t *pmVar1;
  mp_limb_t *pmVar2;
  uint uVar3;
  mp_ptr pmVar4;
  int iVar5;
  __mpz_struct *p_Var6;
  ulong uVar7;
  ulong uVar8;
  mp_limb_t mVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  
  uVar3 = u->_mp_size >> 0x1f;
  lVar19 = (long)(int)((u->_mp_size ^ uVar3) - uVar3);
  uVar3 = v->_mp_size >> 0x1f;
  lVar20 = (long)(int)((v->_mp_size ^ uVar3) - uVar3);
  p_Var6 = v;
  lVar11 = lVar19;
  if (lVar19 < lVar20) {
    p_Var6 = u;
    u = v;
    lVar11 = lVar20;
    lVar20 = lVar19;
  }
  if (lVar20 == 0) {
    mpz_set(r,u);
    return;
  }
  uVar12 = (ulong)((uint)(p_Var6->_mp_size ^ u->_mp_size) >> 0x1f);
  uVar13 = (ulong)((uint)u->_mp_size >> 0x1f);
  uVar10 = (ulong)((uint)p_Var6->_mp_size >> 0x1f);
  uVar18 = -uVar13;
  uVar17 = -uVar10;
  uVar16 = -uVar12;
  if ((long)r->_mp_alloc < (long)(uVar12 + lVar11)) {
    pmVar4 = mpz_realloc(r,uVar12 + lVar11);
  }
  else {
    pmVar4 = r->_mp_d;
  }
  pmVar1 = u->_mp_d;
  pmVar2 = p_Var6->_mp_d;
  lVar19 = 0;
  do {
    uVar7 = pmVar1[lVar19] ^ uVar18;
    uVar8 = uVar7 + uVar13;
    uVar14 = pmVar2[lVar19] ^ uVar17;
    uVar15 = uVar14 + uVar10;
    uVar13 = (ulong)CARRY8(uVar7,uVar13);
    uVar10 = (ulong)CARRY8(uVar14,uVar10);
    uVar7 = uVar8 ^ uVar15 ^ uVar16;
    mVar9 = uVar7 + uVar12;
    uVar12 = (ulong)CARRY8(uVar7,uVar12);
    pmVar4[lVar19] = mVar9;
    lVar19 = lVar19 + 1;
  } while (lVar20 != lVar19);
  if (uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xf9b,"mpz_xor");
  }
  if (lVar20 < lVar11) {
    do {
      uVar10 = pmVar1[lVar19] ^ uVar18;
      uVar17 = uVar10 + uVar13 ^ uVar18;
      mVar9 = uVar17 + uVar12;
      uVar13 = (ulong)CARRY8(uVar10,uVar13);
      uVar12 = (ulong)CARRY8(uVar17,uVar12);
      pmVar4[lVar19] = mVar9;
      lVar19 = lVar19 + 1;
    } while (lVar11 != lVar19);
    if (uVar12 != 0) {
LAB_0010d528:
      pmVar4[lVar11] = 1;
      lVar11 = lVar11 + 1;
      goto LAB_0010d534;
    }
  }
  else {
    if (uVar12 != 0) goto LAB_0010d528;
    if (lVar11 == 0) {
      lVar11 = 0;
      goto LAB_0010d534;
    }
  }
  do {
    if (pmVar4[lVar11 + -1] != 0) goto LAB_0010d534;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar11 = 0;
LAB_0010d534:
  iVar5 = (int)lVar11;
  if (uVar16 != 0) {
    iVar5 = -(int)lVar11;
  }
  r->_mp_size = iVar5;
  return;
}

