
_Bool head_bytes(char *filename,int fd,uintmax_t bytes_to_write)

{
  long lVar1;
  _Bool _Var2;
  size_t n_bytes;
  char *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong count;
  long in_FS_OFFSET;
  char buffer [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (bytes_to_write != 0) {
    count = 0x2000;
    do {
      if (bytes_to_write < count) {
        count = bytes_to_write;
      }
      n_bytes = safe_read(fd,buffer,count);
      if (n_bytes == 0xffffffffffffffff) {
        pcVar3 = quotearg_style(shell_escape_always_quoting_style,filename);
        uVar4 = dcgettext(0,"error reading %s",5);
        piVar5 = __errno_location();
        error(0,*piVar5,uVar4,pcVar3);
        _Var2 = false;
        goto LAB_00103d3d;
      }
      if (n_bytes == 0) break;
      xwrite_stdout(buffer,n_bytes);
      bytes_to_write = bytes_to_write - n_bytes;
    } while (bytes_to_write != 0);
  }
  _Var2 = true;
LAB_00103d3d:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

