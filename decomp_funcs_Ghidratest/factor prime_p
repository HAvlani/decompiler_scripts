
_Bool prime_p(uintmax_t n)

{
  uintmax_t t0;
  long lVar1;
  undefined auVar2 [16];
  _Bool _Var3;
  ulong uVar4;
  undefined8 uVar5;
  uintmax_t uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  factors *pfVar13;
  uintmax_t ni;
  uchar *puVar14;
  ulong q;
  ulong one;
  long in_FS_OFFSET;
  bool bVar15;
  uint local_164;
  undefined local_149;
  factors factors;
  
  t0 = n - 1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_164 = 0;
  q = t0;
  if ((n & 1) == 0) {
    local_164 = 0;
  }
  else {
    do {
      q = q >> 1;
      local_164 = local_164 + 1;
    } while ((q & 1) == 0);
  }
  one = 0;
  iVar10 = 0x40;
  uVar4 = (ulong)binvert_table[(uint)(n >> 1) & 0x7f];
  lVar7 = uVar4 * 2 - uVar4 * uVar4 * n;
  lVar7 = lVar7 * 2 - lVar7 * lVar7 * n;
  uVar8 = 0;
  ni = lVar7 * 2 - lVar7 * lVar7 * n;
  uVar4 = 1;
  uVar6 = n;
  do {
    uVar11 = uVar6 << 0x3f;
    uVar6 = uVar6 >> 1;
    uVar8 = uVar8 >> 1 | uVar11;
    if ((uVar6 < uVar4) || ((uVar6 == uVar4 && (uVar8 <= one)))) {
      bVar15 = one < uVar8;
      one = one - uVar8;
      uVar4 = (uVar4 - uVar6) - (ulong)bVar15;
    }
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  uVar4 = (one * 2 - n) + (-(ulong)(one < n - one) & n);
  local_149 = millerrabin(n,ni,uVar4,q,local_164,one);
  if ((_Bool)local_149 == false) {
LAB_0010566c:
    local_149 = 0;
  }
  else {
    factor(0,t0,&factors);
    puVar14 = 
    "\x01\x02\x02\x04\x02\x04\x02\x04\x06\x02\x06\x04\x02\x04\x06\x06\x02\x06\x04\x02\x06\x04\x06\b\x04\x02\x04\x02\x04\x0e\x04\x06\x02\n\x02\x06\x06\x04\x06\x06\x02\n\x02\x04\x02\f\f\x04\x02\x04\x06\x02\n\x06\x06\x06\x02\x06\x04\x02\n\x0e\x04\x02\x04\x0e\x06\n\x02\x04\x06\b\x06\x06\x04\x06\b\x04\b\n\x02\n\x02\x06\x04\x06\b\x04\x02\x04\f\b\x04\b\x04\x06\f\x02\x12\x06\n\x06\x06\x02\x06\n\x06\x06\x02\x06\x06\x04\x02\f\n\x02\x04\x06\x06\x02\f\x04\x06\b\n\b\n\b\x06\x06\x04\b\x06\x04\b\x04\x0e\n\f\x02\n\x02\x04\x02\n\x0e\x04\x02\x04\x0e\x04\x02\x04\x14\x04\b\n\b\x04\x06\x06\x0e\x04\x06\x06\b\x06\f\x04\x06\x02\n\x02\x06\n\x02\n\x02\x06\x12\x04\x02\x04\x06\x06\b\x06\x06\x16\x02\n\b\n\x06\x06\b\f\x04\x06\x06\x02\x06\f\n\x12\x02\x04\x06\x02\x06\x04\x02\x04\f\x02\x06\"\x06\x06\b\x12\n\x0e\x04\x02\x04\x06\b\x04\x02\x06\f\n\x02\x04\x02\x04\x06\f\f\b\f\x06\x04\x06\b\x04\b\x04\x0e\x04\x06\x02\x04\x06\x02\x06\n\x14\x06\x04\x02\x18\x04\x02\n\f\x02\n\b\x06\x06\x06\x12\x06\x04\x02\f\n\f\b\x10\x0e\x06\x04\x02\x04\x02\n\f\x06\x06\x12\x02\x10\x02\x16\x06\b\x06\x04\x02\x04\b\x06\n\x02\n\x0e\n\x06\f\x02\x04\x02\n\f\x02\x10\x02\x06\x04\x02\n\b\x12\x18\x04\x06\b\x10\x02\x04\b\x10\x02\x04\b\x06\x06\x04\f\x02\x16\x06\x02\x06\x04\x06\x0e\x06\x04\x02\x06\x04\x06\f\x06\x06\x0e\x04\x06\f\b\x06\x04\x1a\x12\n\b\x04\x06\x02\x06\x16\f\x02\x10\b\x04\f\x0e\n\x02\x04\b\x06\x06\x04\x02\x04\x06\b\x04\x02\x06\n\x02\n\b\x04\x0e\n\f\x02\x06\x04\x02\x10\x0e\x04\x06\b\x06\x04\x12\b\n\x06\x06\b\n\f\x0e\x04\x06\x06\x02\x1c\x02\n\b\x04\x0e\x04\b\f\x06\f\x04\x06\x14\n\x02\x10\x1a\x04\x02\f\x06\x04\f\x06\b\x04\b\x16\x02\x04\x02\f\x1c\x02\x06\x06\x06\x04\x06\x02\f\x04\f\x02\n\x02\x10\x02\x10\x06\x14\x10\b\x04\x02\x04\x02\x16\b\f\x06\n\x02\x04\x06\x02\x06\n\x02\f\n\x02\n\x0e\x06\x04\x06\b\x06\x06\x10\f\x02\x04\x0e\x06\x04\b\n\b\x06\x06\x16\x06\x02\n\x0e\x04\x06\x12\x02\n\x0e\x04\x02\n\x0e\x04\b\x12\x04\x06\x02\x04\x06\x02\f\x04\x14\x16\f\x02\x04\x06\x06\x02\x06\x16\x02\x06\x10\x06\f\x02\x06\f\x10\x02\x04\x06\x0e\x04\x02\x12\x18\n\x06\x02\n\x02\n\x02\n\x06\x02\n\x02\n\x06\b\x1e\n\x02\n\b\x06\n\x12\x06\f\f\x02\x12\x06\x04\x06\x06\x12\x02\n\x0e\x06\x04\x02\x04\x18\x02\f\x06\x10\b\x06\x06\x12\x10\x02\x04\x06\x02\x06\x06\n\x06\f\f\x12\x02\x06\x04\x12\b\x18\x04\x02\x04\x06\x02\f\x04\x0e\x1e\n\x06\f\x0e\x06\n\f\x02\x04\x06\b\x06\n\x02\x04\x0e\x06\x06"
    ;
    uVar8 = 2;
    while (pfVar13 = &factors, factors.nfactors != 0) {
      do {
        uVar6 = powm(uVar4,t0 / pfVar13->p[0],n,ni,one);
        if ((factors *)(factors.plarge + (factors.nfactors - 1)) == pfVar13) {
          if (uVar6 != one) goto LAB_00105600;
          break;
        }
        pfVar13 = (factors *)(pfVar13->plarge + 1);
      } while (uVar6 != one);
      uVar8 = uVar8 + *puVar14;
      auVar2 = ZEXT816(one) * ZEXT816(uVar8);
      uVar11 = SUB168(auVar2 >> 0x40,0);
      uVar4 = SUB168(auVar2,0);
      if (uVar11 == 0) {
        uVar4 = SUB168((ZEXT816(0) << 0x40 | auVar2 & (undefined  [16])0xffffffffffffffff) %
                       ZEXT816(n),0);
      }
      else {
        if (n <= uVar11) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(s1) < (n)","src/factor.c",0x4ee,"prime_p");
        }
        iVar10 = 0x40;
        uVar9 = 0;
        uVar6 = n;
        do {
          uVar12 = uVar6 << 0x3f;
          uVar6 = uVar6 >> 1;
          uVar9 = uVar9 >> 1 | uVar12;
          if ((uVar6 < uVar11) || ((uVar6 == uVar11 && (uVar9 <= uVar4)))) {
            bVar15 = uVar4 < uVar9;
            uVar4 = uVar4 - uVar9;
            uVar11 = (uVar11 - uVar6) - (ulong)bVar15;
          }
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      _Var3 = millerrabin(n,ni,uVar4,q,local_164,one);
      if (_Var3 == false) goto LAB_0010566c;
      puVar14 = puVar14 + 1;
      if (puVar14 == "") {
        uVar5 = dcgettext(0,"Lucas prime test failure.  This should not happen",5);
        error(0,0,uVar5);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
LAB_00105600:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_Bool)local_149;
}

