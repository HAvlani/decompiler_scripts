
void factor_using_pollard_rho2(uintmax_t n1,uintmax_t n0,ulong a,factors *factors)

{
  _Bool _Var1;
  uintmax_t uVar2;
  ulong a0;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uintmax_t mi;
  uintmax_t b0;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_98;
  uintmax_t x1;
  uintmax_t z1;
  uintmax_t y1;
  uintmax_t g1;
  uintmax_t r1m;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (ulong)(n1 >= 2);
  lVar4 = (ulong)(-(uint)(n1 < 2) & 0x40) + 0x3f;
  uVar5 = (ulong)(n1 < 2);
  do {
    local_b0 = uVar5 * 2;
    local_a8 = local_a8 * 2 | uVar5 >> 0x3f;
    if ((n1 < local_a8) || ((n1 == local_a8 && (n0 <= local_b0)))) {
      bVar8 = local_b0 < n0;
      local_b0 = local_b0 - n0;
      local_a8 = (local_a8 - n1) - (ulong)bVar8;
    }
    lVar4 = lVar4 + -1;
    uVar5 = local_b0;
  } while (lVar4 != -1);
  uVar5 = local_b0 * 2;
  x1 = local_a8 * 2 + (ulong)CARRY8(local_b0,local_b0);
  if ((n1 < x1) || ((x1 == n1 && (n0 <= uVar5)))) {
    bVar8 = uVar5 < n0;
    uVar5 = uVar5 - n0;
    x1 = (x1 - n1) - (ulong)bVar8;
  }
  z1 = x1;
  y1 = x1;
  if ((n1 != 0) || (n0 != 1)) {
    lVar4 = 1;
    local_b8 = 1;
    a0 = uVar5;
    local_98 = uVar5;
LAB_00104780:
    uVar3 = (ulong)binvert_table[(uint)(n0 >> 1) & 0x7f];
    lVar6 = uVar3 * 2 - uVar3 * uVar3 * n0;
    lVar6 = lVar6 * 2 - lVar6 * lVar6 * n0;
    mi = lVar6 * 2 - lVar6 * lVar6 * n0;
    lVar6 = local_b8;
    uVar2 = y1;
    do {
      y1 = uVar2;
      local_b8 = lVar6;
      uVar2 = mulredc2(&r1m,x1,uVar5,x1,uVar5,n1,n0,mi);
      uVar5 = uVar2 + a;
      x1 = r1m + CARRY8(uVar2,a);
      if ((n1 < x1) || ((x1 == n1 && (n0 <= uVar5)))) {
        bVar8 = uVar5 < n0;
        uVar5 = uVar5 - n0;
        x1 = (x1 - n1) - (ulong)bVar8;
      }
      b0 = local_98 - uVar5;
      uVar2 = (z1 - x1) - (ulong)(local_98 < uVar5);
      if ((long)uVar2 < 0) {
        bVar8 = CARRY8(b0,n0);
        b0 = b0 + n0;
        uVar2 = uVar2 + n1 + (ulong)bVar8;
      }
      local_b0 = mulredc2(&r1m,local_a8,local_b0,uVar2,b0,n1,n0,mi);
      local_a8 = r1m;
      if (((uint)lVar4 & 0x1f) == 1) {
        uVar2 = gcd2_odd(&g1,r1m,local_b0,n1,n0);
        if ((g1 != 0) || (uVar2 != 1)) goto LAB_001049ca;
        y1 = x1;
        a0 = uVar5;
      }
      lVar7 = lVar4 + -1;
      lVar4 = lVar7;
      lVar6 = local_b8;
      uVar2 = y1;
      if (lVar7 == 0) {
        z1 = x1;
        lVar4 = local_b8;
        a0 = uVar5;
        lVar6 = local_b8 * 2;
        local_98 = uVar5;
        uVar2 = x1;
        if (local_b8 != 0) {
          do {
            uVar2 = mulredc2(&r1m,x1,uVar5,x1,uVar5,n1,n0,mi);
            uVar5 = uVar2 + a;
            x1 = r1m + CARRY8(uVar2,a);
            if ((n1 < x1) || ((x1 == n1 && (n0 <= uVar5)))) {
              bVar8 = uVar5 < n0;
              uVar5 = uVar5 - n0;
              x1 = (x1 - n1) - (ulong)bVar8;
            }
            lVar7 = lVar7 + 1;
            a0 = uVar5;
            uVar2 = x1;
          } while (local_b8 != lVar7);
        }
      }
    } while( true );
  }
LAB_00104b1c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while (uVar2 == 1) {
LAB_001049ca:
    uVar2 = mulredc2(&r1m,y1,a0,y1,a0,n1,n0,mi);
    a0 = uVar2 + a;
    y1 = r1m + CARRY8(uVar2,a);
    if ((n1 < y1) || ((y1 == n1 && (n0 <= a0)))) {
      bVar8 = a0 < n0;
      a0 = a0 - n0;
      y1 = (y1 - n1) - (ulong)bVar8;
    }
    uVar3 = local_98 - a0;
    uVar2 = (z1 - y1) - (ulong)(local_98 < a0);
    if ((long)uVar2 < 0) {
      bVar8 = CARRY8(uVar3,n0);
      uVar3 = uVar3 + n0;
      uVar2 = uVar2 + n1 + (ulong)bVar8;
    }
    uVar2 = gcd2_odd(&g1,uVar2,uVar3,n1,n0);
    if (g1 != 0) {
      if ((uVar2 == n0) && (g1 == n1)) {
        factor_using_pollard_rho2(n1,n0,a + 1,factors);
        goto LAB_00104b1c;
      }
      uVar5 = (ulong)binvert_table[(uint)(uVar2 >> 1) & 0x7f];
      lVar4 = uVar5 * 2 - uVar5 * uVar5 * uVar2;
      lVar4 = lVar4 * 2 - lVar4 * lVar4 * uVar2;
      n0 = n0 * (lVar4 * 2 - lVar4 * lVar4 * uVar2);
      _Var1 = prime2_p(g1,uVar2);
      if (_Var1 == false) {
        factor_using_pollard_rho2(g1,uVar2,a + 1,factors);
      }
      else {
        factor_insert_large(factors,g1,uVar2);
      }
      goto LAB_00104ae7;
    }
  }
  uVar3 = (ulong)binvert_table[(uint)(uVar2 >> 1) & 0x7f];
  lVar6 = uVar3 * 2 - uVar3 * uVar3 * uVar2;
  lVar6 = lVar6 * 2 - lVar6 * lVar6 * uVar2;
  lVar6 = lVar6 * 2 - lVar6 * lVar6 * uVar2;
  n0 = n0 * lVar6;
  if (n1 < uVar2) {
    n1 = 0;
  }
  else {
    n1 = (n1 - SUB168(ZEXT816(n0) * ZEXT816(uVar2) >> 0x40,0)) * lVar6;
  }
  if ((uVar2 < 2) || ((0x17ded78 < uVar2 && (_Var1 = prime_p(uVar2), _Var1 == false)))) {
    factor_using_pollard_rho(uVar2,a + 1,factors);
  }
  else {
    factor_insert_multiplicity(factors,uVar2,1);
  }
  if (n1 == 0) {
LAB_00104ae7:
    if ((n0 < 2) || ((0x17ded78 < n0 && (_Var1 = prime_p(n0), _Var1 == false)))) {
      factor_using_pollard_rho(n0,a,factors);
    }
    else {
      factor_insert_multiplicity(factors,n0,1);
    }
    goto LAB_00104b1c;
  }
  _Var1 = prime2_p(n1,n0);
  if (_Var1 != false) goto LAB_00104cb2;
  uVar5 = mod2(&x1,x1,uVar5,n1,n0);
  local_98 = mod2(&z1,z1,local_98,n1,n0);
  a0 = mod2(&y1,y1,a0,n1,n0);
  goto LAB_00104780;
LAB_00104cb2:
  factor_insert_large(factors,n1,n0);
  goto LAB_00104b1c;
}

