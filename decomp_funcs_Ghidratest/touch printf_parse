
int printf_parse(char *format,char_directives *d,arguments *a)

{
  char_directive *pcVar1;
  argument *paVar2;
  arg_type aVar3;
  uint uVar4;
  int iVar5;
  argument *paVar6;
  ulong uVar7;
  char_directive *pcVar8;
  int *piVar9;
  argument *__ptr;
  argument *paVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte bVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  char_directive *__ptr_00;
  size_t sVar20;
  arg_type aVar21;
  bool bVar22;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  
  pcVar1 = d->direct_alloc_dir;
  paVar2 = a->direct_alloc_arg;
  uVar18 = 7;
  uVar12 = 0;
  d->count = 0;
  d->dir = pcVar1;
  a->count = 0;
  a->arg = paVar2;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  pcVar8 = pcVar1;
  uVar19 = 7;
LAB_001104db:
  do {
    pbVar17 = (byte *)format;
    if (*pbVar17 == 0) {
      pcVar8[uVar12].dir_start = (char *)pbVar17;
      d->max_width_length = local_80;
      d->max_precision_length = local_78;
      return 0;
    }
    format = (char *)(pbVar17 + 1);
  } while (*pbVar17 != 0x25);
  sVar20 = 0xffffffffffffffff;
  pcVar8 = pcVar8 + uVar12;
  pcVar8->dir_start = (char *)pbVar17;
  pcVar8->flags = 0;
  pcVar8->width_start = (char *)0x0;
  pcVar8->width_end = (char *)0x0;
  pcVar8->width_arg_index = 0xffffffffffffffff;
  pcVar8->precision_start = (char *)0x0;
  pcVar8->precision_end = (char *)0x0;
  pcVar8->precision_arg_index = 0xffffffffffffffff;
  pcVar8->arg_index = 0xffffffffffffffff;
  bVar15 = pbVar17[1];
  pbVar17 = (byte *)format;
  if (9 < (byte)(bVar15 - 0x30)) {
LAB_001105b6:
    do {
      pbVar17 = (byte *)format + 1;
      if (bVar15 == 0x27) {
        pcVar8->flags = pcVar8->flags | 1;
      }
      else if (bVar15 == 0x2d) {
        pcVar8->flags = pcVar8->flags | 2;
      }
      else if (bVar15 == 0x2b) {
        pcVar8->flags = pcVar8->flags | 4;
      }
      else if (bVar15 == 0x20) {
        pcVar8->flags = pcVar8->flags | 8;
      }
      else if (bVar15 == 0x23) {
        pcVar8->flags = pcVar8->flags | 0x10;
      }
      else if (bVar15 == 0x30) {
        pcVar8->flags = pcVar8->flags | 0x20;
      }
      else {
        if (bVar15 != 0x49) goto LAB_00110618;
        pcVar8->flags = pcVar8->flags | 0x40;
      }
      bVar15 = *pbVar17;
      format = (char *)pbVar17;
    } while( true );
  }
  do {
    pbVar16 = pbVar17 + 1;
    pbVar17 = pbVar17 + 1;
  } while ((byte)(*pbVar16 - 0x30) < 10);
  sVar20 = 0xffffffffffffffff;
  if (*pbVar16 != 0x24) goto LAB_001105b6;
  uVar12 = 0;
  do {
    pbVar17 = (byte *)format;
    uVar11 = (ulong)((char)bVar15 + -0x30);
    if (uVar12 < 0x199999999999999a) {
      uVar14 = uVar12 * 10;
    }
    else {
      uVar14 = 0xffffffffffffffff;
    }
    while( true ) {
      uVar12 = uVar11 + uVar14;
      bVar15 = pbVar17[1];
      if (!CARRY8(uVar11,uVar14)) break;
      if (9 < (byte)(bVar15 - 0x30)) goto switchD_00110895_caseD_26;
      pbVar17 = pbVar17 + 1;
      uVar14 = 0xffffffffffffffff;
      uVar11 = (ulong)((char)bVar15 + -0x30);
    }
    format = (char *)(pbVar17 + 1);
  } while ((byte)(bVar15 - 0x30) < 10);
  sVar20 = uVar12 - 1;
  if (sVar20 < 0xfffffffffffffffe) {
    bVar15 = pbVar17[2];
    format = (char *)(pbVar17 + 2);
    goto LAB_001105b6;
  }
  goto switchD_00110895_caseD_26;
LAB_00110618:
  if (bVar15 != 0x2a) {
    uVar11 = local_80;
    pbVar16 = (byte *)format;
    uVar12 = local_70;
    if ((byte)(bVar15 - 0x30) < 10) {
      pcVar8->width_start = format;
      if ((byte)(*format - 0x30U) < 10) {
        do {
          pbVar17 = pbVar16;
          pbVar16 = pbVar17 + 1;
        } while ((byte)(pbVar17[1] - 0x30) < 10);
        pbVar17 = pbVar17 + 2;
      }
      pcVar8->width_end = (char *)pbVar16;
      bVar15 = *pbVar16;
      uVar11 = (long)pbVar16 - (long)format;
      if ((ulong)((long)pbVar16 - (long)format) <= local_80) {
        uVar11 = local_80;
      }
    }
joined_r0x001107b6:
    local_80 = uVar11;
    uVar11 = local_78;
    local_70 = uVar12;
    if (bVar15 != 0x2e) goto LAB_00110632;
    bVar15 = pbVar16[1];
    pcVar8->precision_start = (char *)pbVar16;
    if (bVar15 != 0x2a) {
      if ((byte)(pbVar16[1] - 0x30) < 10) {
        do {
          pbVar13 = pbVar17 + 1;
          pbVar17 = pbVar17 + 1;
        } while ((byte)(*pbVar13 - 0x30) < 10);
        uVar11 = (long)pbVar17 - (long)pbVar16;
      }
      else {
        uVar11 = 1;
      }
      pcVar8->precision_end = (char *)pbVar17;
      bVar15 = *pbVar17;
      pbVar16 = pbVar17;
      if (uVar11 <= local_78) {
        uVar11 = local_78;
      }
      goto LAB_00110632;
    }
    pbVar17 = pbVar16 + 2;
    pcVar8->precision_end = (char *)pbVar17;
    uVar11 = 2;
    if (1 < local_78) {
      uVar11 = local_78;
    }
    iVar5 = (int)(char)pbVar16[2];
    pbVar13 = pbVar17;
    if ((byte)(pbVar16[2] - 0x30) < 10) {
      do {
        pbVar16 = pbVar13 + 1;
        pbVar13 = pbVar13 + 1;
      } while ((byte)(*pbVar16 - 0x30) < 10);
      if (*pbVar16 != 0x24) goto LAB_001107fe;
      uVar14 = 0;
      do {
        uVar12 = (ulong)(iVar5 + -0x30);
        pbVar16 = pbVar17;
        if (uVar14 < 0x199999999999999a) {
          uVar7 = uVar14 * 10;
        }
        else {
          uVar7 = 0xffffffffffffffff;
        }
        while( true ) {
          uVar14 = uVar12 + uVar7;
          bVar15 = pbVar16[1];
          iVar5 = (int)(char)bVar15;
          if (!CARRY8(uVar12,uVar7)) break;
          if (9 < (byte)(bVar15 - 0x30)) goto switchD_00110895_caseD_26;
          uVar7 = 0xffffffffffffffff;
          uVar12 = (ulong)(iVar5 + -0x30);
          pbVar16 = pbVar16 + 1;
        }
        pbVar17 = pbVar16 + 1;
      } while ((byte)(bVar15 - 0x30) < 10);
      uVar14 = uVar14 - 1;
      if (0xfffffffffffffffd < uVar14) goto switchD_00110895_caseD_26;
      pcVar8->precision_arg_index = uVar14;
      pbVar17 = pbVar16 + 2;
    }
    else {
LAB_001107fe:
      uVar14 = pcVar8->precision_arg_index;
      if (pcVar8->precision_arg_index == 0xffffffffffffffff) {
        pcVar8->precision_arg_index = uVar12;
        local_70 = uVar12 + 1;
        uVar14 = uVar12;
        if (uVar12 == 0xffffffffffffffff) goto switchD_00110895_caseD_26;
      }
    }
    __ptr = a->arg;
    if (uVar14 < uVar18) {
LAB_0011081a:
      uVar12 = a->count;
      if (uVar12 <= uVar14) {
        do {
          uVar7 = uVar12 + 1;
          __ptr[uVar12].type = TYPE_NONE;
          uVar12 = uVar7;
        } while (uVar7 <= uVar14);
        a->count = uVar7;
      }
      aVar21 = __ptr[uVar14].type;
      pbVar16 = pbVar17;
      if (aVar21 == TYPE_NONE) {
        __ptr[uVar14].type = TYPE_INT;
        bVar15 = *pbVar17;
LAB_00110632:
        local_78 = uVar11;
        uVar4 = 0;
        do {
          pbVar16 = pbVar16 + 1;
          if (bVar15 == 0x68) {
            uVar4 = uVar4 | 1 << ((byte)uVar4 & 1);
          }
          else if (bVar15 == 0x4c) {
            uVar4 = uVar4 | 4;
          }
          else {
            if ((((bVar15 != 0x6c) && (bVar15 != 0x6a)) && ((bVar15 & 0xdf) != 0x5a)) &&
               (bVar15 != 0x74)) goto code_r0x00110884;
            uVar4 = uVar4 + 8;
          }
          bVar15 = *pbVar16;
        } while( true );
      }
      if (aVar21 == TYPE_INT) {
        bVar15 = *pbVar17;
        goto LAB_00110632;
      }
      goto error;
    }
    uVar18 = uVar18 * 2;
    if (uVar18 <= uVar14) {
      uVar18 = uVar14 + 1;
    }
    if (uVar18 < 0x800000000000000) {
      if (paVar2 == __ptr) {
        paVar10 = (argument *)malloc(uVar18 << 5);
        paVar6 = __ptr;
        __ptr = paVar10;
        if (paVar10 == (argument *)0x0) goto LAB_00110e88;
LAB_00111130:
        __ptr = (argument *)memcpy(__ptr,paVar6,a->count << 5);
LAB_00110f4b:
        a->arg = __ptr;
        goto LAB_0011081a;
      }
      __ptr = (argument *)realloc(__ptr,uVar18 << 5);
      if (__ptr != (argument *)0x0) {
        paVar6 = paVar2;
        if (paVar2 == a->arg) goto LAB_00111130;
        goto LAB_00110f4b;
      }
      goto LAB_001110a9;
    }
    goto out_of_memory;
  }
  pcVar8->width_start = format;
  pcVar8->width_end = (char *)pbVar17;
  uVar11 = 1;
  if (local_80 != 0) {
    uVar11 = local_80;
  }
  iVar5 = (int)(char)((byte *)format)[1];
  pbVar16 = pbVar17;
  if ((byte)(((byte *)format)[1] - 0x30) < 10) {
    do {
      pbVar13 = pbVar16 + 1;
      pbVar16 = pbVar16 + 1;
    } while ((byte)(*pbVar13 - 0x30) < 10);
    if (*pbVar13 != 0x24) goto LAB_001106bd;
    uVar14 = 0;
    do {
      uVar12 = (ulong)(iVar5 + -0x30);
      pbVar16 = pbVar17;
      if (uVar14 < 0x199999999999999a) {
        uVar7 = uVar14 * 10;
      }
      else {
        uVar7 = 0xffffffffffffffff;
      }
      while( true ) {
        uVar14 = uVar12 + uVar7;
        bVar15 = pbVar16[1];
        iVar5 = (int)(char)bVar15;
        if (!CARRY8(uVar12,uVar7)) break;
        if (9 < (byte)(bVar15 - 0x30)) goto switchD_00110895_caseD_26;
        uVar7 = 0xffffffffffffffff;
        uVar12 = (ulong)(iVar5 + -0x30);
        pbVar16 = pbVar16 + 1;
      }
      pbVar17 = pbVar16 + 1;
    } while ((byte)(bVar15 - 0x30) < 10);
    uVar14 = uVar14 - 1;
    if (0xfffffffffffffffd < uVar14) goto switchD_00110895_caseD_26;
    pcVar8->width_arg_index = uVar14;
    pbVar17 = pbVar16 + 2;
  }
  else {
LAB_001106bd:
    pcVar8->width_arg_index = local_70;
    bVar22 = local_70 == 0xffffffffffffffff;
    uVar14 = local_70;
    local_70 = local_70 + 1;
    if (bVar22) goto switchD_00110895_caseD_26;
  }
  __ptr = a->arg;
  if (uVar14 < uVar18) {
    uVar12 = a->count;
LAB_00110770:
    if (uVar12 <= uVar14) {
      do {
        uVar7 = uVar12 + 1;
        __ptr[uVar12].type = TYPE_NONE;
        uVar12 = uVar7;
      } while (uVar7 <= uVar14);
      a->count = uVar7;
    }
    aVar21 = __ptr[uVar14].type;
    pbVar16 = pbVar17;
    uVar12 = local_70;
    if (aVar21 == TYPE_NONE) {
      __ptr[uVar14].type = TYPE_INT;
      bVar15 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    }
    else {
      if (aVar21 != TYPE_INT) goto error;
      bVar15 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    }
    goto joined_r0x001107b6;
  }
  uVar18 = uVar18 * 2;
  if (uVar18 <= uVar14) {
    uVar18 = uVar14 + 1;
  }
  if (0x7ffffffffffffff < uVar18) goto out_of_memory;
  if (paVar2 != __ptr) {
    paVar6 = (argument *)realloc(__ptr,uVar18 << 5);
    __ptr = a->arg;
    if (paVar6 != (argument *)0x0) {
      uVar12 = a->count;
      paVar10 = paVar2;
      if (paVar2 == __ptr) goto LAB_00110f9d;
      goto LAB_0011076c;
    }
    goto out_of_memory;
  }
  paVar6 = (argument *)malloc(uVar18 << 5);
  if (paVar6 != (argument *)0x0) {
    uVar12 = a->count;
    paVar10 = __ptr;
LAB_00110f9d:
    paVar6 = (argument *)memcpy(paVar6,paVar10,uVar12 << 5);
    uVar12 = a->count;
LAB_0011076c:
    a->arg = paVar6;
    __ptr = paVar6;
    goto LAB_00110770;
  }
  goto LAB_00110e88;
code_r0x00110884:
  switch(bVar15) {
  case 0x25:
    goto switchD_00110895_caseD_25;
  default:
    goto switchD_00110895_caseD_26;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    aVar21 = TYPE_LONGDOUBLE;
    if ((int)uVar4 < 0x10) {
      aVar21 = ((uVar4 & 4) != 0) + TYPE_DOUBLE;
    }
    break;
  case 0x43:
    aVar21 = TYPE_WIDE_CHAR;
    bVar15 = 99;
    break;
  case 0x53:
    aVar21 = TYPE_WIDE_STRING;
    bVar15 = 0x73;
    break;
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x78:
    aVar21 = TYPE_ULONGLONGINT;
    if (((((int)uVar4 < 0x10) && ((uVar4 & 4) == 0)) && (aVar21 = TYPE_ULONGINT, (int)uVar4 < 8)) &&
       (aVar21 = TYPE_UCHAR, (uVar4 & 2) == 0)) {
      aVar21 = (-(uint)((uVar4 & 1) == 0) & 2) + TYPE_USHORT;
    }
    break;
  case 99:
    aVar21 = (7 < (int)uVar4) + TYPE_CHAR;
    break;
  case 100:
  case 0x69:
    aVar21 = TYPE_LONGLONGINT;
    if ((((int)uVar4 < 0x10) && ((uVar4 & 4) == 0)) &&
       ((aVar21 = TYPE_LONGINT, (int)uVar4 < 8 && (aVar21 = TYPE_SCHAR, (uVar4 & 2) == 0)))) {
      aVar21 = (-(uint)((uVar4 & 1) == 0) & 2) + TYPE_SHORT;
    }
    break;
  case 0x6e:
    aVar21 = TYPE_COUNT_LONGLONGINT_POINTER;
    if ((((int)uVar4 < 0x10) && ((uVar4 & 4) == 0)) &&
       ((aVar21 = TYPE_COUNT_LONGINT_POINTER, (int)uVar4 < 8 &&
        (aVar21 = TYPE_COUNT_SCHAR_POINTER, (uVar4 & 2) == 0)))) {
      aVar21 = TYPE_COUNT_INT_POINTER - (uVar4 & 1);
    }
    break;
  case 0x70:
    aVar21 = TYPE_POINTER;
    break;
  case 0x73:
    aVar21 = (7 < (int)uVar4) + TYPE_STRING;
  }
  if (sVar20 == 0xffffffffffffffff) {
    pcVar8->arg_index = local_70;
    bVar22 = local_70 == 0xffffffffffffffff;
    sVar20 = local_70;
    local_70 = local_70 + 1;
    if (bVar22) {
switchD_00110895_caseD_26:
      __ptr = a->arg;
      goto error;
    }
  }
  else {
    pcVar8->arg_index = sVar20;
  }
  __ptr = a->arg;
  if (sVar20 < uVar18) {
LAB_001108e4:
    uVar12 = a->count;
    if (a->count <= sVar20) {
      do {
        uVar11 = uVar12 + 1;
        __ptr[uVar12].type = TYPE_NONE;
        uVar12 = uVar11;
      } while (uVar11 <= sVar20);
      a->count = uVar11;
    }
    aVar3 = __ptr[sVar20].type;
    if (aVar3 == TYPE_NONE) {
      __ptr[sVar20].type = aVar21;
    }
    else if (aVar3 != aVar21) {
error:
      if (paVar2 != __ptr) {
        rpl_free(__ptr);
      }
      if (pcVar1 != d->dir) {
        rpl_free(d->dir);
      }
      piVar9 = __errno_location();
      *piVar9 = 0x16;
      return -1;
    }
switchD_00110895_caseD_25:
    pcVar8->conversion = bVar15;
    sVar20 = d->count;
    pcVar8->dir_end = (char *)pbVar16;
    uVar12 = sVar20 + 1;
    d->count = uVar12;
    format = (char *)pbVar16;
    if (uVar12 < uVar19) {
      pcVar8 = d->dir;
      goto LAB_001104db;
    }
    if (((long)uVar19 < 0) || (0x2e8ba2e8ba2e8ba < uVar19 * 2)) {
LAB_001110a9:
      __ptr = a->arg;
      goto out_of_memory;
    }
    __ptr_00 = d->dir;
    if (pcVar1 != __ptr_00) {
      pcVar8 = (char_directive *)realloc(__ptr_00,uVar19 * 0xb0);
      if (pcVar8 != (char_directive *)0x0) {
        __ptr_00 = d->dir;
        uVar12 = d->count;
        if (pcVar1 != __ptr_00) goto LAB_001109c1;
        goto LAB_00110b0a;
      }
      goto LAB_001110a9;
    }
    pcVar8 = (char_directive *)malloc(uVar19 * 0xb0);
    if (pcVar8 != (char_directive *)0x0) {
LAB_00110b0a:
      pcVar8 = (char_directive *)memcpy(pcVar8,__ptr_00,uVar12 * 0x58);
      uVar12 = d->count;
LAB_001109c1:
      d->dir = pcVar8;
      uVar19 = uVar19 * 2;
      goto LAB_001104db;
    }
    __ptr = a->arg;
    if (paVar2 == __ptr) goto LAB_00110e98;
  }
  else {
    uVar18 = uVar18 * 2;
    if (uVar18 <= sVar20) {
      uVar18 = sVar20 + 1;
    }
    if (uVar18 < 0x800000000000000) {
      if (paVar2 == __ptr) {
        paVar10 = (argument *)malloc(uVar18 << 5);
        paVar6 = __ptr;
        __ptr = paVar10;
        if (paVar10 == (argument *)0x0) goto LAB_00110e88;
LAB_00110e2e:
        __ptr = (argument *)memcpy(__ptr,paVar6,a->count << 5);
LAB_00110d4f:
        a->arg = __ptr;
        goto LAB_001108e4;
      }
      __ptr = (argument *)realloc(__ptr,uVar18 << 5);
      if (__ptr != (argument *)0x0) {
        paVar6 = paVar2;
        if (paVar2 == a->arg) goto LAB_00110e2e;
        goto LAB_00110d4f;
      }
      goto LAB_001110a9;
    }
out_of_memory:
    if (paVar2 == __ptr) goto LAB_00110e88;
  }
  rpl_free(__ptr);
LAB_00110e88:
  if (pcVar1 != d->dir) {
    rpl_free(d->dir);
  }
LAB_00110e98:
  piVar9 = __errno_location();
  *piVar9 = 0xc;
  return -1;
}

