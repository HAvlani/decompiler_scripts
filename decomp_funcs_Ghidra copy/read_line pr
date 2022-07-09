
_Bool read_line(COLUMN *p)

{
  char *pcVar1;
  int iVar2;
  _Bool _Var3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  _IO_FILE *p_Var10;
  int unaff_R12D;
  COLUMN *p_00;
  COLUMN *pCVar11;
  COLUMN *pCVar12;
  
  p_Var10 = (_IO_FILE *)p->fp;
  pbVar6 = (byte *)p_Var10->_IO_read_ptr;
  if (pbVar6 < p_Var10->_IO_read_end) {
    p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
    uVar5 = (uint)*pbVar6;
  }
  else {
    uVar5 = __uflow(p_Var10);
  }
  iVar2 = input_position;
  if (uVar5 == 0xc) {
    p_Var10 = (_IO_FILE *)p->fp;
    pbVar6 = (byte *)p_Var10->_IO_read_ptr;
    pbVar7 = (byte *)p_Var10->_IO_read_end;
    if (p->full_page_printed == false) {
LAB_001049b0:
      if (pbVar6 < pbVar7) {
        p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
        uVar5 = (uint)*pbVar6;
      }
      else {
        uVar5 = __uflow(p_Var10);
      }
      if (uVar5 != 10) {
        ungetc(uVar5,(FILE *)p->fp);
      }
      FF_only = true;
      if ((print_a_header == false) || (FF_only = true, storing_columns != false)) {
LAB_001049e6:
        if (keep_FF != false) {
          print_a_FF = true;
        }
      }
      else {
        pad_vertically = true;
        print_header();
      }
      hold_file();
      return true;
    }
    if (pbVar6 < pbVar7) {
      p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
      uVar5 = (uint)*pbVar6;
    }
    else {
      uVar5 = __uflow(p_Var10);
    }
    if (uVar5 == 10) {
      p_Var10 = (_IO_FILE *)p->fp;
      pbVar6 = (byte *)p_Var10->_IO_read_ptr;
      if (pbVar6 < p_Var10->_IO_read_end) {
        p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
        uVar5 = (uint)*pbVar6;
      }
      else {
        uVar5 = __uflow(p_Var10);
      }
      p->full_page_printed = false;
      if (uVar5 == 10) goto LAB_00104778;
    }
    else {
      p->full_page_printed = false;
    }
    if (uVar5 == 0xc) {
      p_Var10 = (_IO_FILE *)p->fp;
      pbVar6 = (byte *)p_Var10->_IO_read_ptr;
      pbVar7 = (byte *)p_Var10->_IO_read_end;
      goto LAB_001049b0;
    }
  }
  else {
    p->full_page_printed = false;
    if (uVar5 == 10) goto LAB_00104778;
  }
  if (uVar5 == 0xffffffff) {
LAB_00104848:
    close_file(p);
    return true;
  }
  unaff_R12D = char_to_clump((char)uVar5);
LAB_00104778:
  if ((truncate_lines == false) || (input_position <= chars_per_column)) {
    if (p->char_func != store_char) {
      pad_vertically = true;
      if ((print_a_header != false) && (storing_columns == false)) {
        print_header();
      }
      iVar2 = separators_not_printed;
      if ((parallel_files != false) && (align_empty_cols != false)) {
        separators_not_printed = 0;
        if (0 < iVar2) {
          pCVar12 = column_vector + (ulong)(iVar2 - 1) + 1;
          p_00 = column_vector;
          do {
            pCVar11 = p_00 + 1;
            align_column(p_00);
            separators_not_printed = separators_not_printed + 1;
            p_00 = pCVar11;
          } while (pCVar12 != pCVar11);
        }
        align_empty_cols = false;
        padding_not_printed = p->start_position;
        spaces_not_printed = chars_per_column;
        if (truncate_lines == false) {
          spaces_not_printed = 0;
        }
      }
      if (col_sep_length < padding_not_printed) {
        pad_across_to(padding_not_printed - col_sep_length);
        padding_not_printed = 0;
      }
      if (use_col_separator != false) {
        print_sep_string();
      }
    }
    if (p->numbered != false) {
      add_line_number((COLUMN *)&p->char_func);
    }
    empty_line = false;
    _Var3 = true;
    if (uVar5 != 10) {
      pcVar1 = clump_buff + (ulong)(unaff_R12D - 1) + 1;
      pcVar9 = clump_buff;
      if (unaff_R12D != 0) {
        do {
          pcVar8 = pcVar9 + 1;
          (*p->char_func)(*pcVar9);
          pcVar9 = pcVar8;
        } while (pcVar1 != pcVar8);
      }
      while( true ) {
        p_Var10 = (_IO_FILE *)p->fp;
        pbVar6 = (byte *)p_Var10->_IO_read_ptr;
        if (pbVar6 < p_Var10->_IO_read_end) {
          p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
          uVar5 = (uint)*pbVar6;
        }
        else {
          uVar5 = __uflow(p_Var10);
        }
        iVar2 = input_position;
        if (uVar5 == 10) {
          return true;
        }
        if (uVar5 == 0xc) {
          p_Var10 = (_IO_FILE *)p->fp;
          pbVar6 = (byte *)p_Var10->_IO_read_ptr;
          if (pbVar6 < p_Var10->_IO_read_end) {
            p_Var10->_IO_read_ptr = (char *)(pbVar6 + 1);
            uVar5 = (uint)*pbVar6;
          }
          else {
            uVar5 = __uflow(p_Var10);
          }
          if (uVar5 != 10) {
            ungetc(uVar5,(FILE *)p->fp);
          }
          goto LAB_001049e6;
        }
        if (uVar5 == 0xffffffff) goto LAB_00104848;
        iVar4 = char_to_clump((char)uVar5);
        if ((truncate_lines != false) && (chars_per_column < input_position)) break;
        pcVar1 = clump_buff + (ulong)(iVar4 - 1) + 1;
        pcVar9 = clump_buff;
        if (iVar4 != 0) {
          do {
            pcVar8 = pcVar9 + 1;
            (*p->char_func)(*pcVar9);
            pcVar9 = pcVar8;
          } while (pcVar8 != pcVar1);
        }
      }
      _Var3 = false;
      input_position = iVar2;
    }
  }
  else {
    _Var3 = false;
    input_position = iVar2;
  }
  return _Var3;
}

