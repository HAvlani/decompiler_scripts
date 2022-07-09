
int start_bytes(char *pretty_filename,int fd,uintmax_t n_bytes,uintmax_t *read_pos)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  long in_FS_OFFSET;
  char buffer [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n_bytes != 0) {
    do {
      sVar3 = safe_read(fd,buffer,0x2000);
      if (sVar3 == 0) {
        iVar2 = -1;
        goto LAB_00105723;
      }
      if (sVar3 == 0xffffffffffffffff) {
        pcVar4 = quotearg_style(shell_escape_always_quoting_style,pretty_filename);
        uVar5 = dcgettext(0,"error reading %s",5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar5,pcVar4);
        iVar2 = 1;
        goto LAB_00105723;
      }
      *read_pos = *read_pos + sVar3;
      if (n_bytes < sVar3) {
        if (sVar3 - n_bytes != 0) {
          xwrite_stdout(buffer + n_bytes,sVar3 - n_bytes);
        }
        break;
      }
      n_bytes = n_bytes - sVar3;
    } while (n_bytes != 0);
  }
  iVar2 = 0;
LAB_00105723:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

