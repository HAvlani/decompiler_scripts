
strtol_error xstrtoumax(char *s,char **ptr,int strtol_base,uintmax_t *val,char *valid_suffixes)

{
  char cVar1;
  char cVar2;
  undefined auVar3 [16];
  int iVar4;
  int *piVar5;
  ushort **ppuVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  uintmax_t uVar13;
  strtol_error sVar14;
  strtol_error sVar15;
  strtol_error sVar16;
  byte bVar17;
  long in_FS_OFFSET;
  char *t_ptr;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x24 < (uint)strtol_base) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x55,"xstrtoumax");
  }
  if (ptr == (char **)0x0) {
    ptr = &t_ptr;
  }
  piVar5 = __errno_location();
  *piVar5 = 0;
  bVar17 = *s;
  ppuVar6 = __ctype_b_loc();
  pcVar7 = s;
  while ((*(byte *)((long)*ppuVar6 + (ulong)bVar17 * 2 + 1) & 0x20) != 0) {
    bVar17 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
  }
  if (bVar17 == 0x2d) {
LAB_0010a9db:
    sVar14 = LONGINT_INVALID;
    goto LAB_0010a9a2;
  }
  uVar8 = __strtoul_internal(s,ptr,strtol_base,0);
  pcVar7 = *ptr;
  if (pcVar7 == s) {
    if ((valid_suffixes != (char *)0x0) && (cVar1 = *s, cVar1 != '\0')) {
      sVar15 = LONGINT_OK;
      sVar16 = LONGINT_OK;
      pcVar9 = strchr(valid_suffixes,(int)cVar1);
      uVar13 = 1;
      if (pcVar9 != (char *)0x0) goto LAB_0010aa11;
    }
    goto LAB_0010a9db;
  }
  if (*piVar5 == 0) {
    sVar15 = LONGINT_OK;
    sVar16 = LONGINT_OK;
  }
  else {
    sVar15 = LONGINT_OVERFLOW;
    sVar16 = LONGINT_OVERFLOW;
    if (*piVar5 != 0x22) goto LAB_0010a9db;
  }
  sVar14 = sVar16;
  if ((valid_suffixes == (char *)0x0) || (cVar1 = *pcVar7, cVar1 == '\0')) goto LAB_0010a99f;
  pcVar9 = strchr(valid_suffixes,(int)cVar1);
  uVar13 = uVar8;
  if (pcVar9 == (char *)0x0) {
switchD_0010aa54_caseD_43:
    *val = uVar13;
    sVar14 = sVar16 | LONGINT_INVALID_SUFFIX_CHAR;
    goto LAB_0010a9a2;
  }
LAB_0010aa11:
  switch(cVar1) {
  case 'E':
  case 'G':
  case 'K':
  case 'M':
  case 'P':
  case 'T':
  case 'Y':
  case 'Z':
  case 'g':
  case 'k':
  case 'm':
  case 't':
    pcVar9 = strchr(valid_suffixes,0x30);
    if (pcVar9 == (char *)0x0) goto switchD_0010aa2b_caseD_46;
    cVar2 = pcVar7[1];
    if (cVar2 == 'D') {
      iVar11 = 2;
      iVar4 = 1000;
    }
    else if (cVar2 == 'i') {
      iVar4 = 0x400;
      iVar11 = (pcVar7[2] == 'B') + 1 + (uint)(pcVar7[2] == 'B');
    }
    else {
      iVar11 = (cVar2 == 'B') + 1;
      iVar4 = 1000;
      if (cVar2 != 'B') {
        iVar4 = 0x400;
      }
    }
    break;
  default:
switchD_0010aa2b_caseD_46:
    iVar11 = 1;
    iVar4 = 0x400;
  }
  uVar8 = uVar13;
  switch(cVar1) {
  case 'B':
    uVar8 = uVar13 << 10;
    sVar15 = sVar16;
    if (uVar13 >> 0x36 != 0) {
      sVar16 = LONGINT_OVERFLOW;
      uVar8 = 0xffffffffffffffff;
      sVar15 = sVar16;
    }
    break;
  default:
    goto switchD_0010aa54_caseD_43;
  case 'E':
    iVar12 = 6;
    sVar15 = LONGINT_OK;
    do {
      auVar3 = ZEXT816(uVar13);
      uVar13 = SUB168(auVar3 * ZEXT816((ulong)(long)iVar4),0);
      if (SUB168(auVar3 * ZEXT816((ulong)(long)iVar4) >> 0x40,0) != 0) {
        sVar15 = LONGINT_OVERFLOW;
        uVar13 = 0xffffffffffffffff;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    goto LAB_0010ab84;
  case 'G':
  case 'g':
    auVar3 = ZEXT816(uVar13) * ZEXT816((ulong)(long)iVar4);
    if ((SUB168(auVar3 >> 0x40,0) == 0) &&
       (auVar3 = (auVar3 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar4),
       uVar10 = SUB168(auVar3,0), SUB168(auVar3 >> 0x40,0) == 0)) goto LAB_0010ab1a;
LAB_0010ab4c:
    sVar16 = LONGINT_OVERFLOW;
    uVar8 = 0xffffffffffffffff;
    sVar15 = LONGINT_OVERFLOW;
    break;
  case 'K':
  case 'k':
    uVar8 = SUB168(ZEXT816(uVar13) * ZEXT816((ulong)(long)iVar4),0);
    if (SUB168(ZEXT816(uVar13) * ZEXT816((ulong)(long)iVar4) >> 0x40,0) != 0) goto LAB_0010ab4c;
    break;
  case 'M':
  case 'm':
    uVar10 = SUB168(ZEXT816(uVar13) * ZEXT816((ulong)(long)iVar4),0);
    if (SUB168(ZEXT816(uVar13) * ZEXT816((ulong)(long)iVar4) >> 0x40,0) != 0) goto LAB_0010ab4c;
LAB_0010ab1a:
    uVar8 = SUB168(ZEXT816(uVar10) * ZEXT816((ulong)(long)iVar4),0);
    sVar15 = sVar16;
    if (SUB168(ZEXT816(uVar10) * ZEXT816((ulong)(long)iVar4) >> 0x40,0) != 0) {
      sVar16 = LONGINT_OVERFLOW;
      uVar8 = 0xffffffffffffffff;
      sVar15 = sVar16;
    }
    break;
  case 'P':
    iVar12 = 5;
    sVar15 = LONGINT_OK;
    do {
      auVar3 = ZEXT816(uVar13);
      uVar13 = SUB168(auVar3 * ZEXT816((ulong)(long)iVar4),0);
      if (SUB168(auVar3 * ZEXT816((ulong)(long)iVar4) >> 0x40,0) != 0) {
        sVar15 = LONGINT_OVERFLOW;
        uVar13 = 0xffffffffffffffff;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    goto LAB_0010ab84;
  case 'T':
  case 't':
    iVar12 = 4;
    sVar15 = LONGINT_OK;
    do {
      auVar3 = ZEXT816(uVar13);
      uVar13 = SUB168(auVar3 * ZEXT816((ulong)(long)iVar4),0);
      if (SUB168(auVar3 * ZEXT816((ulong)(long)iVar4) >> 0x40,0) != 0) {
        sVar15 = LONGINT_OVERFLOW;
        uVar13 = 0xffffffffffffffff;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    goto LAB_0010ab84;
  case 'Y':
    iVar12 = 8;
    sVar15 = LONGINT_OK;
    do {
      auVar3 = ZEXT816(uVar13);
      uVar13 = SUB168(auVar3 * ZEXT816((ulong)(long)iVar4),0);
      if (SUB168(auVar3 * ZEXT816((ulong)(long)iVar4) >> 0x40,0) != 0) {
        sVar15 = LONGINT_OVERFLOW;
        uVar13 = 0xffffffffffffffff;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    goto LAB_0010ab84;
  case 'Z':
    iVar12 = 7;
    sVar15 = LONGINT_OK;
    do {
      auVar3 = ZEXT816(uVar13);
      uVar13 = SUB168(auVar3 * ZEXT816((ulong)(long)iVar4),0);
      if (SUB168(auVar3 * ZEXT816((ulong)(long)iVar4) >> 0x40,0) != 0) {
        sVar15 = LONGINT_OVERFLOW;
        uVar13 = 0xffffffffffffffff;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
LAB_0010ab84:
    sVar16 = sVar16 | sVar15;
    uVar8 = uVar13;
    sVar15 = sVar16;
    break;
  case 'b':
    uVar8 = uVar13 << 9;
    sVar15 = sVar16;
    if (uVar13 >> 0x37 != 0) {
      sVar16 = LONGINT_OVERFLOW;
      uVar8 = 0xffffffffffffffff;
      sVar15 = sVar16;
    }
    break;
  case 'c':
    break;
  case 'w':
    uVar8 = uVar13 * 2;
    sVar15 = sVar16;
    if ((long)uVar13 < 0) {
      sVar16 = LONGINT_OVERFLOW;
      uVar8 = 0xffffffffffffffff;
      sVar15 = sVar16;
    }
  }
  *ptr = pcVar7 + iVar11;
  sVar14 = sVar15;
  if (pcVar7[iVar11] != '\0') {
    sVar14 = sVar16 | LONGINT_INVALID_SUFFIX_CHAR;
  }
LAB_0010a99f:
  *val = uVar8;
LAB_0010a9a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar14;
}

