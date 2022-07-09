
uintmax_t mulredc2(uintmax_t *r1p,uintmax_t a1,uintmax_t a0,uintmax_t b1,uintmax_t b0,uintmax_t m1,
                  uintmax_t m0,uintmax_t mi)

{
  undefined auVar1 [16];
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uintmax_t uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  
  if ((long)a1 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(a1 >> (W_TYPE_SIZE - 1)) == 0","src/factor.c",0x3e1,"mulredc2");
  }
  if (-1 < (long)b1) {
    if (-1 < (long)m1) {
      uVar3 = SUB168(ZEXT816(a0) * ZEXT816(b0) >> 0x40,0);
      lVar2 = SUB168(ZEXT816(a0) * ZEXT816(b0),0);
      uVar11 = -mi * lVar2;
      uVar4 = SUB168(ZEXT816(uVar11) * ZEXT816(m0) >> 0x40,0);
      auVar1 = ZEXT816(uVar11) * ZEXT816(m1);
      uVar11 = SUB168(auVar1,0);
      uVar5 = SUB168(ZEXT816(a0) * ZEXT816(b1),0) + (ulong)(lVar2 != 0);
      uVar6 = uVar5 + uVar4;
      uVar7 = uVar6 + uVar3;
      uVar8 = uVar7 + uVar11;
      uVar10 = SUB168(ZEXT816(a0) * ZEXT816(b1) >> 0x40,0) + (ulong)CARRY8(uVar5,uVar4) +
               (ulong)CARRY8(uVar6,uVar3) + SUB168(auVar1 >> 0x40,0) + (ulong)CARRY8(uVar7,uVar11);
      uVar11 = SUB168(ZEXT816(a1) * ZEXT816(b0),0);
      lVar2 = uVar11 + uVar8;
      uVar8 = SUB168(ZEXT816(a1) * ZEXT816(b0) >> 0x40,0) + (ulong)CARRY8(uVar11,uVar8);
      uVar3 = -mi * lVar2;
      uVar11 = SUB168(ZEXT816(a1) * ZEXT816(b1),0);
      uVar4 = SUB168(ZEXT816(uVar3) * ZEXT816(m0) >> 0x40,0);
      auVar1 = ZEXT816(uVar3) * ZEXT816(m1);
      uVar3 = SUB168(auVar1,0);
      uVar5 = (ulong)(lVar2 != 0) + uVar11 + uVar10;
      uVar6 = uVar5 + uVar4;
      uVar7 = uVar6 + uVar8;
      uVar9 = uVar7 + uVar3;
      uVar11 = SUB168(ZEXT816(a1) * ZEXT816(b1) >> 0x40,0) + (ulong)CARRY8(uVar11,uVar10) +
               (ulong)CARRY8(uVar5,uVar4) + (ulong)CARRY8(uVar6,uVar8) + SUB168(auVar1 >> 0x40,0) +
               (ulong)CARRY8(uVar7,uVar3);
      if ((m1 < uVar11) || ((m1 == uVar11 && (m0 <= uVar9)))) {
        bVar12 = uVar9 < m0;
        uVar9 = uVar9 - m0;
        uVar11 = (uVar11 - m1) - (ulong)bVar12;
      }
      *r1p = uVar11;
      return uVar9;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("(m1 >> (W_TYPE_SIZE - 1)) == 0","src/factor.c",0x3e3,"mulredc2");
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(b1 >> (W_TYPE_SIZE - 1)) == 0","src/factor.c",0x3e2,"mulredc2");
}

