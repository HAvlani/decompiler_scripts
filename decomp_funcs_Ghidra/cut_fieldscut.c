
void cut_fields(FILE *stream)

{
  byte *pbVar1;
  char *pcVar2;
  uchar *puVar3;
  byte bVar4;
  uint uVar5;
  size_t __n;
  uint uVar6;
  uint uVar7;
  uchar uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  bool bVar13;
  
  current_rp = frp;
  pbVar1 = (byte *)stream->_IO_read_ptr;
  if (stream->_IO_read_end < pbVar1 || (byte *)stream->_IO_read_end == pbVar1) {
    uVar5 = __uflow((_IO_FILE *)stream);
    if (uVar5 == 0xffffffff) {
      return;
    }
  }
  else {
    stream->_IO_read_ptr = (char *)(pbVar1 + 1);
    uVar5 = (uint)*pbVar1;
  }
  uVar12 = 1;
  ungetc(uVar5,(FILE *)stream);
  uVar5 = 0;
  bVar9 = 1 < current_rp->lo ^ suppress_non_delimited;
  bVar10 = 0;
  do {
    while (bVar4 = uVar12 == 1 & bVar9, bVar11 = bVar10, bVar4 != 0) {
      __n = getndelim2(&field_1_buffer,&field_1_bufsize,0,0xffffffffffffffff,(uint)delim,
                       (uint)line_delim,stream);
      if ((long)__n < 0) {
        rpl_free(field_1_buffer);
        field_1_buffer = (char *)0x0;
        if ((*(byte *)&stream->_flags & 0x30) != 0) {
          field_1_buffer = (char *)0x0;
          return;
        }
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
      if (__n == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("n_bytes != 0","src/cut.c",0x13b,"cut_fields");
      }
      if (delim == field_1_buffer[__n - 1]) {
        if ((current_rp->lo < 2) &&
           (fwrite_unlocked(field_1_buffer,1,__n - 1,stdout), bVar11 = bVar4, delim == line_delim))
        {
          pbVar1 = (byte *)stream->_IO_read_ptr;
          if (pbVar1 < stream->_IO_read_end) {
            stream->_IO_read_ptr = (char *)(pbVar1 + 1);
            uVar5 = (uint)*pbVar1;
          }
          else {
            uVar5 = __uflow((_IO_FILE *)stream);
            bVar11 = bVar10;
            if (uVar5 == 0xffffffff) goto LAB_00102fb1;
          }
          ungetc(uVar5,(FILE *)stream);
          bVar11 = bVar4;
        }
LAB_00102fb1:
        if (current_rp->hi < 2) {
          current_rp = current_rp + 1;
          uVar12 = 2;
          uVar5 = 0;
        }
        else {
          uVar12 = 2;
          uVar5 = 0;
        }
        break;
      }
      if (suppress_non_delimited == false) {
        fwrite_unlocked(field_1_buffer,1,__n,stdout);
        uVar8 = line_delim;
        uVar5 = (uint)line_delim;
        if ((int)field_1_buffer[__n - 1] != uVar5) {
          puVar3 = (uchar *)stdout->_IO_write_ptr;
          if (puVar3 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(puVar3 + 1);
            *puVar3 = uVar8;
          }
          else {
            __overflow(stdout,uVar5);
            uVar5 = (uint)line_delim;
          }
        }
LAB_00102eb0:
        uVar12 = 1;
      }
      else {
        uVar12 = 1;
        uVar5 = 0;
      }
    }
    if (uVar12 <= current_rp->lo && current_rp->lo != uVar12) {
      do {
        uVar7 = uVar5;
        pbVar1 = (byte *)stream->_IO_read_ptr;
        if (pbVar1 < stream->_IO_read_end) {
          stream->_IO_read_ptr = (char *)(pbVar1 + 1);
          uVar5 = (uint)*pbVar1;
        }
        else {
          uVar5 = __uflow((_IO_FILE *)stream);
        }
        uVar6 = (uint)delim;
        if (uVar6 == uVar5) goto LAB_00102d46;
        if (line_delim == uVar5) goto LAB_00102f66;
        uVar8 = delim;
      } while (uVar5 != 0xffffffff);
LAB_00102ed8:
      uVar6 = (uint)line_delim;
      bVar13 = false;
      uVar5 = 0xffffffff;
      bVar10 = 1;
LAB_00102ef5:
      if (((bVar11 != 0) || (suppress_non_delimited != true)) || (uVar12 != 1)) {
        if ((uVar7 == uVar6 && uVar8 != (uchar)uVar6) && (!bVar13)) {
          return;
        }
        puVar3 = (uchar *)stdout->_IO_write_ptr;
        if (puVar3 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = (char *)(puVar3 + 1);
          *puVar3 = (uchar)uVar6;
        }
        else {
          __overflow(stdout,uVar6);
        }
      }
      if (bVar10 != 0) {
        return;
      }
      current_rp = frp;
      goto LAB_00102eb0;
    }
    uVar7 = uVar5;
    if (bVar11 != 0) {
      fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,stdout);
    }
LAB_00102d14:
    pbVar1 = (byte *)stream->_IO_read_ptr;
    if (pbVar1 < stream->_IO_read_end) {
      uVar6 = (uint)delim;
      stream->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar5 = (uint)*pbVar1;
      if (uVar6 != *pbVar1) goto LAB_00102cda;
LAB_00102d40:
      bVar11 = 1;
LAB_00102d46:
      uVar8 = (uchar)uVar6;
      if (line_delim != uVar8) goto LAB_00102d5d;
      pbVar1 = (byte *)stream->_IO_read_ptr;
      if (pbVar1 < stream->_IO_read_end) {
        stream->_IO_read_ptr = (char *)(pbVar1 + 1);
        uVar6 = (uint)*pbVar1;
LAB_00103019:
        ungetc(uVar6,(FILE *)stream);
        uVar6 = (uint)delim;
        uVar8 = delim;
        goto LAB_00102d5d;
      }
      uVar6 = __uflow((_IO_FILE *)stream);
      uVar8 = delim;
      if (uVar6 != 0xffffffff) goto LAB_00103019;
      goto LAB_00102ed8;
    }
    uVar5 = __uflow((_IO_FILE *)stream);
    uVar6 = (uint)delim;
    if (uVar6 == uVar5) goto LAB_00102d40;
LAB_00102cda:
    if (line_delim != uVar5) {
      if (uVar5 != 0xffffffff) break;
      bVar11 = 1;
      uVar8 = (uchar)uVar6;
      goto LAB_00102ed8;
    }
    bVar11 = 1;
LAB_00102f66:
    uVar8 = (uchar)uVar6;
    if (line_delim == uVar8) {
LAB_00102f77:
      uVar6 = (uint)line_delim;
      bVar13 = uVar6 == uVar5;
      bVar10 = bVar11;
      if (bVar13) {
        bVar10 = 0;
        goto LAB_00102ef5;
      }
    }
    else {
LAB_00102d5d:
      if (uVar5 != uVar6) goto LAB_00102f77;
      uVar12 = uVar12 + 1;
      bVar10 = bVar11;
      if (current_rp->hi <= uVar12 && uVar12 != current_rp->hi) {
        current_rp = current_rp + 1;
      }
    }
  } while( true );
  pcVar2 = stdout->_IO_write_ptr;
  uVar7 = uVar5;
  if (pcVar2 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = (char)uVar5;
  }
  else {
    __overflow(stdout,uVar5 & 0xff);
  }
  goto LAB_00102d14;
}

