
void factor_using_pollard_rho(uintmax_t n,ulong a,factors *factors)

{
  undefined auVar1 [16];
  _Bool _Var2;
  ulong uVar3;
  long lVar4;
  uintmax_t uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uintmax_t a_00;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  long local_68;
  ulong local_60;
  ulong local_40;
  
  if (n < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(1) < (n)","src/factor.c",0x5ba,"factor_using_pollard_rho");
  }
  local_40 = a + 1;
  local_60 = a;
  do {
    a_00 = 0;
    iVar11 = 0x40;
    uVar3 = 1;
    uVar7 = 0;
    uVar6 = n;
    do {
      uVar12 = uVar6 << 0x3f;
      uVar6 = uVar6 >> 1;
      uVar7 = uVar7 >> 1 | uVar12;
      if ((uVar6 < uVar3) || ((uVar6 == uVar3 && (uVar7 <= a_00)))) {
        bVar16 = a_00 < uVar7;
        a_00 = a_00 - uVar7;
        uVar3 = (uVar3 - uVar6) - (ulong)bVar16;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    local_68 = 1;
    lVar14 = 1;
    uVar6 = (-(ulong)(a_00 < n - a_00) & n) + (a_00 * 2 - n);
    uVar3 = uVar6;
    uVar7 = uVar6;
    while( true ) {
      if (n <= local_60) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("a < n","src/factor.c",0x5c0,"factor_using_pollard_rho");
      }
      uVar12 = (ulong)binvert_table[(uint)(n >> 1) & 0x7f];
      lVar8 = uVar12 * 2 - uVar12 * uVar12 * n;
      lVar8 = lVar8 * 2 - lVar8 * lVar8 * n;
      lVar13 = lVar8 * 2 - lVar8 * lVar8 * n;
      uVar12 = n - local_60;
      lVar4 = local_60 - n;
      lVar8 = local_68;
      while( true ) {
        local_68 = lVar8;
        uVar9 = SUB168(ZEXT816(uVar3) * ZEXT816(uVar3) >> 0x40,0);
        uVar10 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar3) * ZEXT816(uVar3),0) * lVar13)) *
                        ZEXT816(n) >> 0x40,0);
        uVar3 = uVar9 - uVar10;
        if (uVar9 < uVar10) {
          uVar3 = uVar3 + n;
        }
        uVar3 = (-(ulong)(uVar3 < uVar12) & n) + uVar3 + lVar4;
        auVar1 = ZEXT816(a_00) * ZEXT816((-(ulong)(uVar7 < uVar3) & n) + (uVar7 - uVar3));
        uVar9 = SUB168(auVar1 >> 0x40,0);
        uVar10 = SUB168(ZEXT816((ulong)(SUB168(auVar1,0) * lVar13)) * ZEXT816(n) >> 0x40,0);
        a_00 = uVar9 - uVar10;
        if (uVar9 < uVar10) {
          a_00 = a_00 + n;
        }
        uVar9 = uVar6;
        if ((((uint)lVar14 & 0x1f) == 1) && (uVar5 = gcd_odd(a_00,n), uVar9 = uVar3, uVar5 != 1))
        break;
        lVar15 = lVar14 + -1;
        uVar6 = uVar9;
        lVar14 = lVar15;
        lVar8 = local_68;
        if ((lVar15 == 0) &&
           (uVar6 = uVar3, lVar14 = local_68, uVar7 = uVar3, lVar8 = local_68 * 2, local_68 != 0)) {
          do {
            uVar3 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar6) >> 0x40,0);
            uVar9 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar6) * ZEXT816(uVar6),0) * lVar13)) *
                           ZEXT816(n) >> 0x40,0);
            uVar6 = uVar3 - uVar9;
            if (uVar3 < uVar9) {
              uVar6 = uVar6 + n;
            }
            lVar15 = lVar15 + 1;
            uVar6 = (-(ulong)(uVar6 < uVar12) & n) + uVar6 + lVar4;
            uVar3 = uVar6;
            lVar14 = lVar15;
          } while (local_68 != lVar15);
        }
      }
      do {
        uVar9 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar6) >> 0x40,0);
        uVar10 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar6) * ZEXT816(uVar6),0) * lVar13)) *
                        ZEXT816(n) >> 0x40,0);
        uVar6 = uVar9 - uVar10;
        if (uVar9 < uVar10) {
          uVar6 = uVar6 + n;
        }
        uVar6 = (-(ulong)(uVar6 < uVar12) & n) + uVar6 + lVar4;
        uVar5 = gcd_odd((-(ulong)(uVar7 < uVar6) & n) + (uVar7 - uVar6),n);
      } while (uVar5 == 1);
      if (uVar5 == n) break;
      n = n / uVar5;
      if ((uVar5 < 2) || ((0x17ded78 < uVar5 && (_Var2 = prime_p(uVar5), _Var2 == false)))) {
        factor_using_pollard_rho(uVar5,local_40,factors);
      }
      else {
        factor_insert_multiplicity(factors,uVar5,1);
      }
      if (n < 2) {
        if (n == 1) {
          return;
        }
        uVar6 = 0;
        uVar7 = 0;
        uVar3 = 0;
      }
      else {
        if ((n < 0x17ded79) || (_Var2 = prime_p(n), _Var2 != false)) {
          factor_insert_multiplicity(factors,n,1);
          return;
        }
        uVar3 = uVar3 % n;
        uVar7 = uVar7 % n;
        uVar6 = uVar6 % n;
      }
    }
    local_60 = local_60 + 1;
    local_40 = local_40 + 1;
  } while( true );
}

