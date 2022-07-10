
_Bool get_line(FILE *fp,line **linep,int which)

{
  byte *pbVar1;
  line *plVar2;
  ulong uVar3;
  char *pcVar4;
  uintmax_t uVar5;
  char *pcVar6;
  int iVar7;
  linebuffer *plVar8;
  void *pvVar9;
  undefined8 uVar10;
  line *line;
  ushort **ppuVar11;
  ulong uVar12;
  int *piVar13;
  ushort *puVar14;
  size_t __n;
  int iVar15;
  byte *field;
  undefined4 uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  
  iVar15 = which + -1;
  plVar2 = *linep;
  if (prevline[iVar15] == plVar2) {
    line = spareline[iVar15];
    spareline[iVar15] = plVar2;
    *linep = line;
    if (line != (line *)0x0) goto LAB_00103f5c;
LAB_00104176:
    line = (line *)xcalloc(1,0x30);
    *linep = line;
  }
  else {
    line = plVar2;
    if (plVar2 == (line *)0x0) goto LAB_00104176;
LAB_00103f5c:
    line->nfields = 0;
  }
  plVar8 = readlinebuffer_delim(&line->buf,fp,eolchar);
  if (plVar8 == (linebuffer *)0x0) {
    if ((*(byte *)&fp->_flags & 0x20) != 0) {
      uVar10 = dcgettext(0,"read error",5);
      piVar13 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar13,uVar10);
    }
    freeline(line);
    return false;
  }
  field = (byte *)(line->buf).buffer;
  line_no[iVar15] = line_no[iVar15] + 1;
  __n = (line->buf).length - 1;
  pbVar1 = field + __n;
  if (field == pbVar1) goto LAB_00104004;
  if (tab < 0) {
    ppuVar11 = __ctype_b_loc();
    puVar14 = *ppuVar11;
    do {
      pbVar17 = field + 1;
      if (((*(byte *)(puVar14 + *field) & 1) == 0) && (*field != 10)) goto LAB_001041c6;
      field = pbVar17;
    } while (pbVar1 != pbVar17);
    goto LAB_00104004;
  }
  if (tab != 10) {
    while( true ) {
      __n = (long)pbVar1 - (long)field;
      pvVar9 = memchr(field,tab,__n);
      if (pvVar9 == (void *)0x0) break;
      extract_field(line,(char *)field,(long)pvVar9 - (long)field);
      field = (byte *)((long)pvVar9 + 1);
    }
  }
  goto LAB_00103ffc;
  while( true ) {
    puVar14 = *ppuVar11;
    while (((*(byte *)(puVar14 + *field) & 1) != 0 || (*field == 10))) {
      field = field + 1;
      if (pbVar1 == field) goto LAB_0010424a;
    }
    if (pbVar1 == field) break;
LAB_001041c6:
    pbVar17 = field + 1;
    if (pbVar1 == pbVar17) {
      __n = 1;
      goto LAB_00103ffc;
    }
    while (((*(byte *)(puVar14 + *pbVar17) & 1) == 0 && (*pbVar17 != 10))) {
      pbVar17 = pbVar17 + 1;
      if (pbVar1 == pbVar17) {
        __n = (long)pbVar1 - (long)field;
        goto LAB_00103ffc;
      }
    }
    extract_field(line,(char *)field,(long)pbVar17 - (long)field);
    if (pbVar1 == pbVar17) goto LAB_00104004;
    field = pbVar17 + 1;
    if (pbVar1 == field) {
LAB_0010424a:
      __n = 0;
      field = pbVar1;
      goto LAB_00103ffc;
    }
  }
  __n = 0;
  field = pbVar1;
LAB_00103ffc:
  extract_field(line,(char *)field,__n);
LAB_00104004:
  if ((((prevline[iVar15] != (line *)0x0) && (check_input_order != CHECK_ORDER_DISABLED)) &&
      ((check_input_order == CHECK_ORDER_ENABLED || (seen_unpairable != false)))) &&
     ((issued_disorder_warning[iVar15] == false && (iVar7 = keycmp(), 0 < iVar7)))) {
    uVar3 = (line->buf).length;
    pcVar4 = (line->buf).buffer;
    uVar16 = 0;
    if (uVar3 != 0) {
      if (pcVar4[uVar3 - 1] == '\n') {
        uVar12 = 0x7fffffff;
        if (uVar3 - 1 < 0x80000000) {
          uVar12 = uVar3 - 1;
        }
        uVar16 = (undefined4)uVar12;
      }
      else {
        uVar12 = 0x7fffffff;
        if (uVar3 < 0x80000000) {
          uVar12 = uVar3;
        }
        uVar16 = (undefined4)uVar12;
      }
    }
    uVar5 = line_no[iVar15];
    pcVar6 = g_names[iVar15];
    uVar18 = 0x1040e1;
    uVar10 = dcgettext(0,"%s:%lu: is not sorted: %.*s",5);
                    /* WARNING: Subroutine does not return */
    error(check_input_order == CHECK_ORDER_ENABLED,0,uVar10,pcVar6,uVar5,uVar16,pcVar4,uVar18);
  }
  prevline[iVar15] = line;
  return true;
}

