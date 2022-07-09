
_Bool paste_serial(size_t nfiles,char **fnamptr)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  FILE *__stream;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  bool bVar14;
  _Bool local_39;
  
  if (nfiles == 0) {
    local_39 = true;
  }
  else {
    piVar7 = __errno_location();
    local_39 = true;
    do {
      pbVar2 = (byte *)*fnamptr;
      uVar11 = *pbVar2 - 0x2d;
      if ((uVar11 == 0) && (uVar11 = (uint)pbVar2[1], pbVar2[1] == 0)) {
        have_read_stdin = true;
        __stream = stdin;
LAB_00102fe5:
        pbVar12 = (byte *)delims;
        pbVar2 = (byte *)__stream->_IO_read_ptr;
        pbVar10 = (byte *)__stream->_IO_read_end;
        if (pbVar2 < pbVar10) {
          pbVar8 = pbVar2 + 1;
          __stream->_IO_read_ptr = (char *)pbVar8;
          uVar4 = (uint)*pbVar2;
LAB_00103039:
          do {
            if (pbVar8 < pbVar10) {
              __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
              uVar13 = (uint)*pbVar8;
            }
            else {
              uVar13 = __uflow(__stream);
              if (uVar13 == 0xffffffff) {
                iVar6 = *piVar7;
                pcVar3 = stdout->_IO_write_ptr;
                if (pcVar3 < stdout->_IO_write_end) {
                  stdout->_IO_write_ptr = pcVar3 + 1;
                  *pcVar3 = (char)uVar4;
                }
                else {
                  iVar5 = __overflow(stdout,uVar4 & 0xff);
                  if (iVar5 < 0) goto LAB_00103268;
                }
                uVar13 = (uint)line_delim;
                if (uVar13 != uVar4) goto LAB_001030a1;
                goto LAB_001030c0;
              }
            }
            if (line_delim == uVar4) {
              bVar1 = *pbVar12;
              if (bVar1 == 0) {
LAB_0010301d:
                pbVar12 = pbVar12 + 1;
                if ((byte *)delim_end != pbVar12) goto LAB_0010302e;
              }
              else {
                pbVar2 = (byte *)stdout->_IO_write_ptr;
                if (stdout->_IO_write_end <= pbVar2) {
                  iVar6 = __overflow(stdout,(uint)bVar1);
                  if (-1 < iVar6) goto LAB_0010301d;
                  goto LAB_00103268;
                }
                pbVar12 = pbVar12 + 1;
                bVar14 = (byte *)delim_end != pbVar12;
                stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
                *pbVar2 = bVar1;
                if (bVar14) goto LAB_0010302e;
              }
              pbVar12 = (byte *)delims;
            }
            else {
              pcVar3 = stdout->_IO_write_ptr;
              if (pcVar3 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar3 + 1;
                *pcVar3 = (char)uVar4;
              }
              else {
                iVar6 = __overflow(stdout,uVar4 & 0xff);
                if (iVar6 < 0) goto LAB_00103268;
              }
            }
LAB_0010302e:
            pbVar8 = (byte *)__stream->_IO_read_ptr;
            pbVar10 = (byte *)__stream->_IO_read_end;
            uVar4 = uVar13;
          } while( true );
        }
        uVar4 = __uflow(__stream);
        iVar6 = *piVar7;
        if (uVar4 != 0xffffffff) {
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          pbVar10 = (byte *)__stream->_IO_read_end;
          goto LAB_00103039;
        }
        uVar13 = (uint)line_delim;
LAB_001030a1:
        pcVar3 = stdout->_IO_write_ptr;
        if (pcVar3 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar3 + 1;
          *pcVar3 = (char)uVar13;
        }
        else {
          iVar5 = __overflow(stdout,uVar13);
          if (iVar5 < 0) {
LAB_00103268:
            write_error();
            goto LAB_00103270;
          }
        }
LAB_001030c0:
        if ((*(byte *)&__stream->_flags & 0x20) == 0) {
          if (uVar11 == 0) {
            clearerr_unlocked(__stream);
          }
          else {
            iVar6 = rpl_fclose((FILE *)__stream);
            if (iVar6 != 0) {
              iVar6 = *piVar7;
              goto LAB_0010316d;
            }
          }
        }
        else {
          if (uVar11 == 0) {
            clearerr_unlocked(__stream);
LAB_0010316d:
            if (iVar6 == 0) goto LAB_001030da;
          }
          else {
            iVar5 = rpl_fclose((FILE *)__stream);
            if (iVar5 == 0) goto LAB_0010316d;
            if (iVar6 == 0) {
              iVar6 = *piVar7;
              goto LAB_0010316d;
            }
          }
          uVar9 = quotearg_n_style_colon(0,3,*fnamptr);
          error(0,iVar6,"%s",uVar9);
          local_39 = false;
        }
      }
      else {
        __stream = fopen((char *)pbVar2,"r");
        if (__stream != (FILE *)0x0) {
          fadvise((FILE *)__stream,FADVISE_SEQUENTIAL);
          goto LAB_00102fe5;
        }
LAB_00103270:
        uVar9 = quotearg_n_style_colon(0,3,*fnamptr);
        error(0,*piVar7,"%s",uVar9);
        local_39 = false;
      }
LAB_001030da:
      fnamptr = (char **)((byte **)fnamptr + 1);
      nfiles = nfiles - 1;
    } while (nfiles != 0);
  }
  return local_39;
}

