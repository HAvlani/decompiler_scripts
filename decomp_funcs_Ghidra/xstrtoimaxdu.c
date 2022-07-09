
strtol_error xstrtoimax(char *s,char **ptr,int strtol_base,intmax_t *val,char *valid_suffixes)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  strtol_error sVar12;
  strtol_error sVar13;
  strtol_error sVar14;
  long in_FS_OFFSET;
  char *t_ptr;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x24 < (uint)strtol_base) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x55,"xstrtoimax");
  }
  if (ptr == (char **)0x0) {
    ptr = &t_ptr;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  lVar5 = __strtol_internal(s,ptr,strtol_base);
  pcVar3 = *ptr;
  if (pcVar3 == s) {
    if (valid_suffixes != (char *)0x0) {
      cVar1 = *pcVar3;
      sVar14 = LONGINT_INVALID;
      if (cVar1 == '\0') goto LAB_00120633;
      sVar12 = LONGINT_OK;
      pcVar7 = strchr(valid_suffixes,(int)cVar1);
      lVar5 = 1;
      sVar13 = sVar12;
      if (pcVar7 != (char *)0x0) goto LAB_001206b4;
    }
    sVar14 = LONGINT_INVALID;
    goto LAB_00120633;
  }
  if (*piVar4 == 0) {
    sVar13 = LONGINT_OK;
    sVar12 = LONGINT_OK;
  }
  else {
    sVar14 = LONGINT_INVALID;
    if (*piVar4 != 0x22) goto LAB_00120633;
    sVar13 = LONGINT_OVERFLOW;
    sVar12 = LONGINT_OVERFLOW;
  }
  lVar8 = lVar5;
  sVar14 = sVar12;
  if ((valid_suffixes == (char *)0x0) || (cVar1 = *pcVar3, cVar1 == '\0')) goto LAB_0012062c;
  pcVar7 = strchr(valid_suffixes,(int)cVar1);
  if (pcVar7 == (char *)0x0) {
switchD_001206f6_caseD_43:
    sVar14 = sVar12 | LONGINT_INVALID_SUFFIX_CHAR;
    *val = lVar5;
    goto LAB_00120633;
  }
LAB_001206b4:
  lVar8 = lVar5;
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
    pcVar7 = strchr(valid_suffixes,0x30);
    if (pcVar7 == (char *)0x0) goto switchD_001206cc_caseD_46;
    cVar2 = pcVar3[1];
    if (cVar2 == 'D') {
LAB_00120a50:
      iVar9 = 2;
      lVar6 = 1000;
      break;
    }
    if (cVar2 == 'i') {
      lVar6 = 0x400;
      iVar9 = (pcVar3[2] == 'B') + 1 + (uint)(pcVar3[2] == 'B');
      break;
    }
    if (cVar2 == 'B') goto LAB_00120a50;
    switch(cVar1) {
    case 'E':
      lVar11 = 1;
      lVar6 = 0x400;
      goto LAB_00120944;
    default:
      goto switchD_001206f6_caseD_43;
    case 'G':
    case 'g':
      lVar11 = 1;
      lVar6 = 0x400;
      goto LAB_00120904;
    case 'K':
    case 'k':
      lVar11 = 1;
      lVar6 = 0x400;
      goto LAB_001208d4;
    case 'M':
    case 'm':
      lVar11 = 1;
      lVar6 = 0x400;
      goto LAB_0012084c;
    case 'P':
      lVar11 = 1;
      lVar6 = 0x400;
      goto LAB_0012088c;
    case 'T':
    case 't':
      lVar11 = 1;
      lVar6 = 0x400;
      goto LAB_00120809;
    case 'Y':
      lVar11 = 1;
      lVar6 = 0x400;
      goto LAB_001207ca;
    case 'Z':
      lVar11 = 1;
      lVar6 = 0x400;
      goto LAB_00120781;
    case 'b':
      lVar11 = 1;
      goto LAB_00120756;
    case 'c':
      lVar11 = 1;
    }
    goto LAB_001208e1;
  default:
switchD_001206cc_caseD_46:
    iVar9 = 1;
    lVar6 = 0x400;
  }
  switch(cVar1) {
  case 'B':
    lVar8 = lVar5 * 0x400;
    lVar11 = (long)iVar9;
    if (SEXT816(lVar8) != SEXT816(lVar5) * SEXT416(0x400)) {
LAB_001209f3:
      lVar11 = (long)iVar9;
      if (-1 < lVar5) goto LAB_001209fe;
LAB_00120a7e:
      sVar12 = LONGINT_OVERFLOW;
      lVar8 = -0x8000000000000000;
      sVar13 = LONGINT_OVERFLOW;
    }
    break;
  default:
    goto switchD_001206f6_caseD_43;
  case 'E':
    lVar11 = (long)iVar9;
LAB_00120944:
    iVar9 = 6;
    sVar14 = LONGINT_OK;
    do {
      lVar8 = lVar5 * lVar6;
      if (SEXT816(lVar8) != SEXT816(lVar5) * SEXT816(lVar6)) {
        sVar14 = LONGINT_OVERFLOW;
        if (lVar5 < 0) {
          lVar8 = -0x8000000000000000;
        }
        else {
          lVar8 = 0x7fffffffffffffff;
        }
      }
      iVar9 = iVar9 + -1;
      lVar5 = lVar8;
    } while (iVar9 != 0);
    goto LAB_001207b8;
  case 'G':
  case 'g':
    lVar11 = (long)iVar9;
LAB_00120904:
    iVar9 = 3;
    sVar14 = LONGINT_OK;
    do {
      lVar8 = lVar5 * lVar6;
      if (SEXT816(lVar8) != SEXT816(lVar5) * SEXT816(lVar6)) {
        sVar14 = LONGINT_OVERFLOW;
        if (lVar5 < 0) {
          lVar8 = -0x8000000000000000;
        }
        else {
          lVar8 = 0x7fffffffffffffff;
        }
      }
      iVar9 = iVar9 + -1;
      lVar5 = lVar8;
    } while (iVar9 != 0);
    goto LAB_001207b8;
  case 'K':
  case 'k':
    lVar11 = (long)iVar9;
LAB_001208d4:
    lVar8 = lVar6 * lVar5;
    if (SEXT816(lVar8) != SEXT816(lVar6) * SEXT816(lVar5)) {
LAB_00120763:
      if (lVar5 < 0) goto LAB_00120a7e;
LAB_001209fe:
      sVar12 = LONGINT_OVERFLOW;
      lVar8 = 0x7fffffffffffffff;
      sVar13 = LONGINT_OVERFLOW;
    }
    break;
  case 'M':
  case 'm':
    lVar11 = (long)iVar9;
LAB_0012084c:
    lVar10 = lVar5 * lVar6;
    if (SEXT816(lVar10) != SEXT816(lVar5) * SEXT816(lVar6)) goto LAB_00120763;
    lVar8 = lVar6 * lVar10;
    if (SEXT816(lVar8) != SEXT816(lVar6) * SEXT816(lVar10)) {
      sVar13 = LONGINT_OVERFLOW;
      sVar12 = LONGINT_OVERFLOW;
      lVar8 = -0x8000000000000000;
      if (-1 < lVar10) {
        lVar8 = 0x7fffffffffffffff;
      }
    }
    break;
  case 'P':
    lVar11 = (long)iVar9;
LAB_0012088c:
    iVar9 = 5;
    sVar14 = LONGINT_OK;
    do {
      lVar8 = lVar5 * lVar6;
      if (SEXT816(lVar8) != SEXT816(lVar5) * SEXT816(lVar6)) {
        sVar14 = LONGINT_OVERFLOW;
        if (lVar5 < 0) {
          lVar8 = -0x8000000000000000;
        }
        else {
          lVar8 = 0x7fffffffffffffff;
        }
      }
      iVar9 = iVar9 + -1;
      lVar5 = lVar8;
    } while (iVar9 != 0);
    goto LAB_001207b8;
  case 'T':
  case 't':
    lVar11 = (long)iVar9;
LAB_00120809:
    iVar9 = 4;
    sVar14 = LONGINT_OK;
    do {
      lVar8 = lVar5 * lVar6;
      if (SEXT816(lVar8) != SEXT816(lVar5) * SEXT816(lVar6)) {
        sVar14 = LONGINT_OVERFLOW;
        if (lVar5 < 0) {
          lVar8 = -0x8000000000000000;
        }
        else {
          lVar8 = 0x7fffffffffffffff;
        }
      }
      iVar9 = iVar9 + -1;
      lVar5 = lVar8;
    } while (iVar9 != 0);
    goto LAB_001207b8;
  case 'Y':
    lVar11 = (long)iVar9;
LAB_001207ca:
    iVar9 = 8;
    sVar14 = LONGINT_OK;
    do {
      lVar8 = lVar5 * lVar6;
      if (SEXT816(lVar8) != SEXT816(lVar5) * SEXT816(lVar6)) {
        sVar14 = LONGINT_OVERFLOW;
        if (lVar5 < 0) {
          lVar8 = -0x8000000000000000;
        }
        else {
          lVar8 = 0x7fffffffffffffff;
        }
      }
      iVar9 = iVar9 + -1;
      lVar5 = lVar8;
    } while (iVar9 != 0);
    goto LAB_001207b8;
  case 'Z':
    lVar11 = (long)iVar9;
LAB_00120781:
    iVar9 = 7;
    sVar14 = LONGINT_OK;
    do {
      lVar8 = lVar5 * lVar6;
      if (SEXT816(lVar8) != SEXT816(lVar5) * SEXT816(lVar6)) {
        sVar14 = LONGINT_OVERFLOW;
        if (lVar5 < 0) {
          lVar8 = -0x8000000000000000;
        }
        else {
          lVar8 = 0x7fffffffffffffff;
        }
      }
      iVar9 = iVar9 + -1;
      lVar5 = lVar8;
    } while (iVar9 != 0);
LAB_001207b8:
    sVar12 = sVar12 | sVar14;
    sVar13 = sVar12;
    break;
  case 'b':
    lVar11 = (long)iVar9;
LAB_00120756:
    lVar8 = lVar5 * 0x200;
    if (SEXT816(lVar8) != SEXT816(lVar5) * SEXT416(0x200)) goto LAB_00120763;
    break;
  case 'c':
    lVar11 = (long)iVar9;
    break;
  case 'w':
    lVar8 = lVar5 * 2;
    lVar11 = (long)iVar9;
    if (SEXT816(lVar8) != SEXT816(lVar5) * SEXT816(2)) goto LAB_001209f3;
  }
LAB_001208e1:
  *ptr = pcVar3 + lVar11;
  sVar14 = sVar13;
  if (pcVar3[lVar11] != '\0') {
    sVar14 = sVar12 | LONGINT_INVALID_SUFFIX_CHAR;
  }
LAB_0012062c:
  *val = lVar8;
LAB_00120633:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
