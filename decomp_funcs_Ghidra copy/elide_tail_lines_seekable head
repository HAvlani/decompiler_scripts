
_Bool elide_tail_lines_seekable
                (char *pretty_filename,int fd,uintmax_t n_lines,off_t start_pos,off_t size)

{
  long lVar1;
  size_t offset;
  _Bool _Var2;
  Copy_fd_status CVar3;
  long lVar4;
  size_t sVar5;
  off_t oVar6;
  size_t sVar7;
  void *pvVar8;
  uintmax_t uVar9;
  char *pcVar10;
  undefined8 uVar11;
  int *piVar12;
  size_t sVar13;
  size_t offset_00;
  int __c;
  long in_FS_OFFSET;
  undefined8 local_2050;
  char buffer [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = size - start_pos;
  sVar5 = (ulong)((int)lVar4 + ((uint)(lVar4 >> 0x5f) >> 0x13) & 0x1fff) -
          ((ulong)(lVar4 >> 0x3f) >> 0x33);
  sVar13 = 0x2000;
  if (sVar5 != 0) {
    sVar13 = sVar5;
  }
  offset_00 = size - sVar13;
  local_2050 = start_pos;
  oVar6 = elseek(fd,offset_00,0,pretty_filename);
  if (-1 < oVar6) {
    sVar7 = safe_read(fd,buffer,sVar13);
    if (sVar7 != 0xffffffffffffffff) {
      __c = (int)line_end;
      uVar9 = n_lines;
      if (((n_lines != 0) && (sVar7 != 0)) && (buffer[sVar7 - 1] != line_end)) {
        uVar9 = n_lines - 1;
      }
joined_r0x00103ec3:
      do {
        if (sVar7 == 0) {
LAB_00103ec8:
          if (offset_00 != local_2050) {
            offset_00 = offset_00 - 0x2000;
            oVar6 = elseek(fd,offset_00,0,pretty_filename);
            if (oVar6 < 0) goto LAB_00103fe0;
            sVar7 = safe_read(fd,buffer,0x2000);
            if (sVar7 == 0xffffffffffffffff) break;
            if (sVar7 != 0) {
              __c = (int)line_end;
              goto joined_r0x00103ec3;
            }
          }
          _Var2 = true;
          goto LAB_00103fe2;
        }
        if (n_lines == 0) {
          sVar7 = sVar7 - 1;
          offset = local_2050;
        }
        else {
          pvVar8 = memrchr(buffer,__c,sVar7);
          if (pvVar8 == (void *)0x0) goto LAB_00103ec8;
          sVar7 = (long)pvVar8 - (long)buffer;
          offset = local_2050;
        }
        local_2050 = sVar7;
        if (uVar9 == 0) goto LAB_00103f68;
        uVar9 = uVar9 - 1;
        sVar7 = local_2050;
        local_2050 = offset;
      } while( true );
    }
    pcVar10 = quotearg_style(shell_escape_always_quoting_style,pretty_filename);
    uVar11 = dcgettext(0,"error reading %s",5);
    piVar12 = __errno_location();
    error(0,*piVar12,uVar11,pcVar10);
    _Var2 = false;
    goto LAB_00103fe2;
  }
LAB_00103fe0:
  _Var2 = false;
LAB_00103fe2:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var2;
LAB_00103f68:
  sVar7 = local_2050;
  if ((long)offset < (long)offset_00) {
    oVar6 = elseek(fd,offset,0,pretty_filename);
    if (oVar6 < 0) goto LAB_00103fe0;
    CVar3 = copy_fd(fd,offset_00 - offset);
    sVar7 = local_2050;
    offset = local_2050;
    if (CVar3 != COPY_FD_OK) {
      diagnose_copy_fd_failure(CVar3,pretty_filename);
      _Var2 = false;
      goto LAB_00103fe2;
    }
  }
  local_2050 = offset;
  sVar13 = sVar7 + 1;
  if (sVar13 != 0) {
    xwrite_stdout(buffer,sVar13);
  }
  oVar6 = elseek(fd,offset_00 + sVar13,0,pretty_filename);
  _Var2 = (_Bool)((byte)~(byte)((ulong)oVar6 >> 0x38) >> 7);
  goto LAB_00103fe2;
}

