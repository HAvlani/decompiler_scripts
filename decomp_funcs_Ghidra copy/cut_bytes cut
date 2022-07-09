
void cut_bytes(FILE *stream)

{
  uchar *puVar1;
  bool bVar2;
  uchar uVar3;
  byte *pbVar4;
  char *pcVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar2 = false;
  current_rp = frp;
  uVar6 = 0;
LAB_00103180:
  do {
    pbVar4 = (byte *)stream->_IO_read_ptr;
    if (stream->_IO_read_end < pbVar4 || (byte *)stream->_IO_read_end == pbVar4) goto LAB_0010321d;
LAB_0010318e:
    uVar7 = (uint)line_delim;
    stream->_IO_read_ptr = (char *)(pbVar4 + 1);
    uVar8 = (uint)*pbVar4;
    if (*pbVar4 != uVar7) {
      do {
        uVar6 = uVar6 + 1;
        if (current_rp->hi <= uVar6 && uVar6 != current_rp->hi) {
          current_rp = current_rp + 1;
        }
        if (uVar6 < current_rp->lo) goto LAB_00103180;
        if (output_delimiter_string == output_delimiter_default) {
LAB_001031f6:
          pcVar5 = stdout->_IO_write_ptr;
          if (stdout->_IO_write_end <= pcVar5) {
LAB_001032d0:
            __overflow(stdout,uVar8 & 0xff);
            goto LAB_00103180;
          }
        }
        else {
          bVar2 = (bool)(bVar2 & current_rp->lo == uVar6);
          if (!bVar2) {
            bVar2 = true;
            goto LAB_001031f6;
          }
          fwrite_unlocked(output_delimiter_string,1,output_delimiter_length,stdout);
          pcVar5 = stdout->_IO_write_ptr;
          if (stdout->_IO_write_end <= pcVar5) goto LAB_001032d0;
        }
        stdout->_IO_write_ptr = pcVar5 + 1;
        *pcVar5 = (char)uVar8;
        pbVar4 = (byte *)stream->_IO_read_ptr;
        if (pbVar4 <= stream->_IO_read_end && (byte *)stream->_IO_read_end != pbVar4)
        goto LAB_0010318e;
LAB_0010321d:
        uVar7 = __uflow((_IO_FILE *)stream);
        uVar3 = line_delim;
        if (line_delim == uVar7) break;
        uVar8 = uVar7;
        if (uVar7 == 0xffffffff) {
          if (uVar6 != 0) {
            puVar1 = (uchar *)stdout->_IO_write_ptr;
            if (stdout->_IO_write_end <= puVar1) {
              __overflow(stdout,(uint)line_delim);
              return;
            }
            stdout->_IO_write_ptr = (char *)(puVar1 + 1);
            *puVar1 = uVar3;
          }
          return;
        }
      } while( true );
    }
    pcVar5 = stdout->_IO_write_ptr;
    if (pcVar5 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar5 + 1;
      *pcVar5 = (char)uVar7;
    }
    else {
      __overflow(stdout,uVar7);
    }
    current_rp = frp;
    uVar6 = 0;
    bVar2 = false;
  } while( true );
}

