
_Bool head_lines(char *filename,int fd,uintmax_t lines_to_write)

{
  long lVar1;
  _Bool _Var2;
  int iVar3;
  size_t n_bytes;
  __off_t _Var4;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  size_t n_bytes_00;
  long in_FS_OFFSET;
  stat st;
  char buffer [8192];
  size_t sVar8;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (lines_to_write == 0) {
LAB_00103b8b:
    _Var2 = true;
  }
  else {
    while( true ) {
      n_bytes = safe_read(fd,buffer,0x2000);
      if (n_bytes == 0xffffffffffffffff) break;
      if (n_bytes == 0) goto LAB_00103b8b;
      sVar8 = 0;
      do {
        n_bytes_00 = sVar8 + 1;
        if ((buffer[sVar8] == line_end) &&
           (lines_to_write = lines_to_write - 1, lines_to_write == 0)) {
          _Var4 = lseek(fd,n_bytes_00 - n_bytes,1);
          if (_Var4 < 0) {
            iVar3 = __fxstat(1,fd,(stat *)&st);
            if ((iVar3 != 0) || ((st.st_mode & 0xf000) == 0x8000)) {
              elseek(fd,n_bytes_00 - n_bytes,1,filename);
            }
          }
          xwrite_stdout(buffer,n_bytes_00);
          goto LAB_00103b8b;
        }
        sVar8 = n_bytes_00;
      } while (n_bytes != n_bytes_00);
      xwrite_stdout(buffer,n_bytes);
    }
    pcVar5 = quotearg_style(shell_escape_always_quoting_style,filename);
    uVar6 = dcgettext(0,"error reading %s",5);
    piVar7 = __errno_location();
    error(0,*piVar7,uVar6,pcVar5);
    _Var2 = false;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

