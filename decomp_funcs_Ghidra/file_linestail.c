
_Bool file_lines(char *pretty_filename,int fd,uintmax_t n_lines,off_t start_pos,off_t end_pos,
                uintmax_t *read_pos)

{
  long lVar1;
  char cVar2;
  _Bool _Var3;
  void *pvVar4;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  uintmax_t uVar8;
  int __c;
  long lVar9;
  size_t sVar10;
  size_t sVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_2050;
  char buffer [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_2050 = end_pos;
  if (n_lines == 0) {
LAB_00105a60:
    _Var3 = true;
  }
  else {
    lVar9 = end_pos - start_pos;
    sVar10 = (ulong)((int)lVar9 + ((uint)(lVar9 >> 0x5f) >> 0x13) & 0x1fff) -
             ((ulong)(lVar9 >> 0x3f) >> 0x33);
    if (sVar10 == 0) {
      sVar10 = 0x2000;
    }
    lVar9 = end_pos - sVar10;
    xlseek(fd,lVar9,0,pretty_filename);
    sVar10 = safe_read(fd,buffer,sVar10);
    cVar2 = line_end;
    if (sVar10 == 0xffffffffffffffff) {
LAB_00105a67:
      pcVar5 = quotearg_style(shell_escape_always_quoting_style,pretty_filename);
      uVar6 = dcgettext(0,"error reading %s",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar6,pcVar5);
      _Var3 = false;
    }
    else {
      __c = (int)line_end;
      *read_pos = lVar9 + sVar10;
      sVar11 = sVar10;
      if ((sVar10 != 0) && (buffer[sVar10 - 1] != cVar2)) {
        n_lines = n_lines - 1;
      }
      do {
        while ((sVar10 == 0 || (pvVar4 = memrchr(buffer,__c,sVar10), pvVar4 == (void *)0x0))) {
          if (lVar9 == start_pos) {
            xlseek(fd,lVar9,0,pretty_filename);
            uVar8 = dump_remainder(false,pretty_filename,fd,local_2050);
            *read_pos = lVar9 + uVar8;
            _Var3 = true;
            goto LAB_00105a30;
          }
          lVar9 = lVar9 + -0x2000;
          xlseek(fd,lVar9,0,pretty_filename);
          sVar10 = safe_read(fd,buffer,0x2000);
          if (sVar10 == 0xffffffffffffffff) goto LAB_00105a67;
          *read_pos = lVar9 + sVar10;
          if (sVar10 == 0) goto LAB_00105a60;
          __c = (int)line_end;
          sVar11 = sVar10;
        }
        sVar10 = (long)pvVar4 - (long)buffer;
        bVar12 = n_lines != 0;
        n_lines = n_lines - 1;
      } while (bVar12);
      sVar10 = (sVar11 - 1) - sVar10;
      if (sVar10 != 0) {
        xwrite_stdout((char *)((long)pvVar4 + 1),sVar10);
      }
      uVar8 = dump_remainder(false,pretty_filename,fd,(local_2050 - sVar11) - lVar9);
      *read_pos = *read_pos + uVar8;
      _Var3 = true;
    }
  }
LAB_00105a30:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var3;
}

