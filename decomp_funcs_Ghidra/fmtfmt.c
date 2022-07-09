
_Bool fmt(FILE *f,char *file)

{
  byte bVar1;
  byte *pbVar2;
  WORD *finish;
  _Bool _Var3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  _Bool _Var13;
  bool bVar14;
  
  fadvise(f,FADVISE_SEQUENTIAL);
  tabs = false;
  other_indent = 0;
  next_char = get_prefix(f);
LAB_001037a0:
  last_line_length = 0;
  uVar4 = next_char;
  do {
    if ((uVar4 == 10) || (uVar4 == 0xffffffff)) {
      out_column = 0;
      bVar14 = uVar4 != 0xffffffff && uVar4 != 10;
      if (next_prefix_indent < in_column) goto LAB_001037fe;
      if (bVar14) goto LAB_00103920;
LAB_00103a03:
      if (uVar4 == 0xffffffff) {
LAB_0010389c:
        next_char = -1;
        if ((*(byte *)&f->_flags & 0x20) == 0) {
          if (f == stdin) {
            clearerr_unlocked((FILE *)f);
            return true;
          }
          iVar11 = rpl_fclose(f);
          if (iVar11 == 0) {
            return true;
          }
          piVar8 = __errno_location();
          iVar11 = *piVar8;
          bVar1 = (byte)((uint)iVar11 >> 0x18);
          _Var13 = (_Bool)(bVar1 >> 7);
          if (iVar11 < 0) {
            return (_Bool)(bVar1 >> 7);
          }
          uVar5 = quotearg_n_style_colon(0,3,file);
          _Var3 = (_Bool)(bVar1 >> 7);
          if (iVar11 != 0) {
            pcVar6 = "%s";
            goto LAB_001038f8;
          }
        }
        else {
          if (f == stdin) {
            clearerr_unlocked((FILE *)f);
          }
          else {
            rpl_fclose(f);
          }
          uVar5 = quotearg_n_style_colon(0,3,file);
          _Var3 = false;
        }
        _Var13 = _Var3;
        iVar11 = 0;
        pcVar6 = (char *)dcgettext(0,"read error",5);
LAB_001038f8:
        error(0,iVar11,pcVar6,uVar5);
        return _Var13;
      }
    }
    else {
      if ((prefix_lead_space <= next_prefix_indent) &&
         (prefix_full_length + next_prefix_indent <= in_column)) break;
      if (in_column <= next_prefix_indent) {
LAB_00103920:
        out_column = 0;
        put_space(next_prefix_indent);
        bVar14 = true;
        pbVar7 = (byte *)prefix;
        iVar11 = in_column;
        if (out_column != in_column) {
LAB_00103840:
          do {
            bVar1 = *pbVar7;
            iVar9 = out_column;
            if (bVar1 == 0) break;
            pbVar2 = (byte *)stdout->_IO_write_ptr;
            if (pbVar2 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
              *pbVar2 = bVar1;
            }
            else {
              __overflow(stdout,(uint)bVar1);
              iVar11 = in_column;
            }
            out_column = out_column + 1;
            pbVar7 = pbVar7 + 1;
            iVar9 = iVar11;
          } while (out_column != iVar11);
          goto LAB_00103872;
        }
        iVar11 = 0;
LAB_00103950:
        put_space(iVar11);
        do {
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = (char)uVar4;
            pbVar7 = (byte *)f->_IO_read_ptr;
            if (pbVar7 < f->_IO_read_end) goto LAB_00103977;
LAB_001039c0:
            uVar4 = __uflow((_IO_FILE *)f);
            bVar14 = uVar4 != 0xffffffff;
          }
          else {
            __overflow(stdout,uVar4 & 0xff);
            pbVar7 = (byte *)f->_IO_read_ptr;
            if (f->_IO_read_end <= pbVar7) goto LAB_001039c0;
LAB_00103977:
            f->_IO_read_ptr = (char *)(pbVar7 + 1);
            uVar4 = (uint)*pbVar7;
            bVar14 = true;
          }
        } while ((uVar4 != 10) && (bVar14));
        goto LAB_00103a03;
      }
      bVar14 = true;
LAB_001037fe:
      out_column = 0;
      put_space(next_prefix_indent);
      pbVar7 = (byte *)prefix;
      iVar11 = in_column;
      iVar9 = in_column;
      if (out_column != in_column) goto LAB_00103840;
LAB_00103872:
      if (bVar14) {
        iVar11 = iVar11 - iVar9;
        goto LAB_00103950;
      }
      if (uVar4 == 0xffffffff) {
        if (prefix_length + next_prefix_indent <= in_column) {
          pcVar6 = stdout->_IO_write_ptr;
          if (pcVar6 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\n';
          }
          else {
            __overflow(stdout,10);
          }
        }
        goto LAB_0010389c;
      }
    }
    pcVar6 = stdout->_IO_write_ptr;
    if (pcVar6 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar6 + 1;
      *pcVar6 = '\n';
    }
    else {
      __overflow(stdout,10);
    }
    uVar4 = get_prefix(f);
  } while( true );
  prefix_indent = next_prefix_indent;
  first_indent = in_column;
  wptr = parabuf;
  word_limit = unused_word_type;
  uVar4 = get_line(f,uVar4);
  uVar10 = (ulong)(uint)next_prefix_indent;
  _Var13 = false;
  uVar12 = (ulong)uVar4;
  if ((next_prefix_indent == prefix_indent) &&
     (prefix_full_length + next_prefix_indent <= in_column)) {
    _Var13 = uVar4 != 0xffffffff && uVar4 != 10;
  }
  iVar11 = prefix_indent;
  set_other_indent(_Var13);
  uVar4 = (uint)uVar12;
  if (split == false) {
    iVar9 = (int)uVar10;
    if (crown == false) {
      if (tagged == false) {
        if (iVar9 == iVar11) {
          do {
            uVar4 = (uint)uVar12;
            if ((((in_column < (int)uVar10 + prefix_full_length) || (uVar4 == 10)) ||
                (uVar4 == 0xffffffff)) || (in_column != other_indent)) break;
            uVar4 = get_line(f,uVar4);
            uVar10 = (ulong)(uint)next_prefix_indent;
            uVar12 = (ulong)uVar4;
          } while (next_prefix_indent == prefix_indent);
        }
      }
      else if (((iVar9 == iVar11) && (iVar9 + prefix_full_length <= in_column)) &&
              ((uVar4 != 10 && ((uVar4 != 0xffffffff && (in_column != first_indent)))))) {
        while( true ) {
          uVar4 = get_line(f,(int)uVar12);
          uVar12 = (ulong)uVar4;
          if (next_prefix_indent != prefix_indent) break;
          if ((((in_column < next_prefix_indent + prefix_full_length) || (uVar4 == 10)) ||
              (uVar4 == 0xffffffff)) || (in_column != other_indent)) break;
        }
      }
    }
    else if (((iVar9 == iVar11) && (iVar9 + prefix_full_length <= in_column)) &&
            ((uVar4 != 10 && (uVar4 != 0xffffffff)))) {
      while( true ) {
        uVar4 = get_line(f,(int)uVar12);
        uVar12 = (ulong)uVar4;
        if (((next_prefix_indent != prefix_indent) ||
            (in_column < next_prefix_indent + prefix_full_length)) || (uVar4 == 10)) break;
        if ((uVar4 == 0xffffffff) || (in_column != other_indent)) break;
      }
    }
  }
  finish = word_limit;
  if (word_limit < (WORD *)((long)&unused_word_type[0].text + 1)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("word < word_limit","src/fmt.c",0x270,"get_paragraph");
  }
  word_limit[-1].field_0x10 = word_limit[-1].field_0x10 | 10;
  next_char = uVar4;
  fmt_paragraph();
  put_paragraph(finish);
  goto LAB_001037a0;
}

