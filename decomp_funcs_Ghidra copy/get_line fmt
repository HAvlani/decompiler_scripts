
int get_line(FILE *f,int c)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  ushort **ppuVar5;
  int *piVar6;
  char *pcVar7;
  WORD *pWVar8;
  byte *pbVar9;
  int iVar10;
  
  ppuVar5 = __ctype_b_loc();
LAB_00103488:
  do {
    piVar6 = (int *)wptr;
    word_limit->text = wptr;
    pcVar7 = wptr;
    do {
      while( true ) {
        wptr = (char *)piVar6;
        if ((int *)wptr == &out_column) {
          wptr = pcVar7;
          set_other_indent(true);
          flush_paragraph();
        }
        piVar6 = (int *)((long)wptr + 1);
        *wptr = (char)c;
        pbVar1 = (byte *)f->_IO_read_ptr;
        wptr = (char *)piVar6;
        if (pbVar1 < f->_IO_read_end) {
          f->_IO_read_ptr = (char *)(pbVar1 + 1);
          c = (int)*pbVar1;
        }
        else {
          c = __uflow((_IO_FILE *)f);
          piVar6 = (int *)wptr;
          if (c == 0xffffffff) goto LAB_001034dd;
        }
        pcVar7 = wptr;
        if (c < 0xe) break;
        if (c == 0x20) goto LAB_001034dd;
      }
    } while (c < 9);
LAB_001034dd:
    pWVar8 = word_limit;
    pbVar2 = (byte *)word_limit->text;
    iVar4 = (int)piVar6 - (int)pbVar2;
    word_limit->length = iVar4;
    iVar10 = in_column + iVar4;
    pbVar1 = pbVar2 + (long)iVar4 + -1;
    in_column = iVar10;
    pcVar7 = strchr("([\'`\"",(int)(char)*pbVar2);
    pWVar8->field_0x10 =
         *(byte *)(*ppuVar5 + *pbVar1) & 4 | pcVar7 != (char *)0x0 | pWVar8->field_0x10 & 0xfa;
    if (pbVar2 < pbVar1) {
      do {
        pbVar9 = pbVar1;
        iVar4 = (int)(char)*pbVar9;
        pcVar7 = strchr(")]\'\"",iVar4);
        if (pcVar7 == (char *)0x0) goto LAB_00103578;
        pbVar1 = pbVar9 + -1;
      } while (pbVar2 != pbVar9 + -1);
      iVar4 = (int)(char)pbVar9[-1];
    }
    else {
      iVar4 = (int)(char)*pbVar1;
    }
LAB_00103578:
    pcVar7 = strchr(".?!",iVar4);
    pWVar8->field_0x10 = pWVar8->field_0x10 & 0xfd | (pcVar7 != (char *)0x0) * '\x02';
    c = get_space(f,c);
    pWVar8 = word_limit;
    iVar10 = in_column - iVar10;
    word_limit->space = iVar10;
    if (c == 0xffffffff) {
      pWVar8->field_0x10 = pWVar8->field_0x10 | 8;
LAB_0010366c:
      pWVar8->space = ((pWVar8->field_0x10 & 8) != 0) + 1;
      if (pWVar8 == unused_word_type + 0x3e6) goto LAB_00103708;
    }
    else {
      if ((pWVar8->field_0x10 & 2) == 0) {
        bVar3 = false;
LAB_001035ee:
        pWVar8->field_0x10 = pWVar8->field_0x10 & 0xf7 | bVar3 * '\b';
        if (c == 10) goto LAB_0010366c;
      }
      else {
        bVar3 = 1 < iVar10 || c == 10U;
        if (1 < iVar10 || c == 10U) goto LAB_001035ee;
        pWVar8->field_0x10 = pWVar8->field_0x10 & 0xf7;
      }
      if (uniform != false) goto LAB_0010366c;
      if (pWVar8 != unused_word_type + 0x3e6) {
        word_limit = pWVar8 + 1;
        goto LAB_00103488;
      }
LAB_00103708:
      set_other_indent(true);
      flush_paragraph();
      pWVar8 = word_limit;
    }
    word_limit = pWVar8 + 1;
    if ((c == 10) || (c == 0xffffffff)) {
      iVar4 = get_prefix(f);
      return iVar4;
    }
  } while( true );
}

