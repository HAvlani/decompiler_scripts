
void mpz_ior(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

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
  long lVar18;
  long lVar19;
  ulong uVar20;
  
  uVar3 = u->_mp_size >> 0x1f;
  lVar18 = (long)(int)((u->_mp_size ^ uVar3) - uVar3);
  uVar3 = v->_mp_size >> 0x1f;
  lVar19 = (long)(int)((v->_mp_size ^ uVar3) - uVar3);
  p_Var6 = v;
  lVar11 = lVar18;
  if (lVar18 < lVar19) {
    p_Var6 = u;
    u = v;
    lVar11 = lVar19;
    lVar19 = lVar18;
  }
  if (lVar19 == 0) {
    mpz_set(r,u);
    return;
  }
  uVar13 = (ulong)((uint)u->_mp_size >> 0x1f);
  uVar10 = (ulong)((uint)p_Var6->_mp_size >> 0x1f);
  uVar12 = (ulong)((uint)(p_Var6->_mp_size | u->_mp_size) >> 0x1f);
  uVar16 = -uVar13;
  uVar20 = -uVar12;
  uVar17 = -uVar10;
  if (uVar17 != 0) {
    lVar11 = lVar19;
  }
  if ((long)r->_mp_alloc < (long)(uVar12 + lVar11)) {
    pmVar4 = mpz_realloc(r,uVar12 + lVar11);
  }
  else {
    pmVar4 = r->_mp_d;
  }
  pmVar1 = u->_mp_d;
  pmVar2 = p_Var6->_mp_d;
  lVar18 = 0;
  do {
    uVar7 = pmVar1[lVar18] ^ uVar16;
    uVar8 = uVar7 + uVar13;
    uVar14 = pmVar2[lVar18] ^ uVar17;
    uVar15 = uVar14 + uVar10;
    uVar13 = (ulong)CARRY8(uVar7,uVar13);
    uVar10 = (ulong)CARRY8(uVar14,uVar10);
    uVar7 = (uVar8 | uVar15) ^ uVar20;
    mVar9 = uVar7 + uVar12;
    uVar12 = (ulong)CARRY8(uVar7,uVar12);
    pmVar4[lVar18] = mVar9;
    lVar18 = lVar18 + 1;
  } while (lVar19 != lVar18);
  if (uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xf56,"mpz_ior");
  }
  if (lVar19 < lVar11) {
    do {
      uVar10 = pmVar1[lVar18] ^ uVar16;
      uVar7 = (uVar10 + uVar13 | uVar17) ^ uVar20;
      uVar13 = (ulong)CARRY8(uVar10,uVar13);
      mVar9 = uVar7 + uVar12;
      uVar12 = (ulong)CARRY8(uVar7,uVar12);
      pmVar4[lVar18] = mVar9;
      lVar18 = lVar18 + 1;
    } while (lVar11 != lVar18);
    if (uVar12 != 0) {
LAB_0010d2f8:
      pmVar4[lVar11] = 1;
      lVar11 = lVar11 + 1;
      goto LAB_0010d304;
    }
  }
  else {
    if (uVar12 != 0) goto LAB_0010d2f8;
    if (lVar11 == 0) {
      lVar11 = 0;
      goto LAB_0010d304;
    }
  }
  do {
    if (pmVar4[lVar11 + -1] != 0) goto LAB_0010d304;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar11 = 0;
LAB_0010d304:
  iVar5 = (int)lVar11;
  if (uVar20 != 0) {
    iVar5 = -(int)lVar11;
  }
  r->_mp_size = iVar5;
  return;
}

