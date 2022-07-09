
int start_lines(char *pretty_filename,int fd,uintmax_t n_lines,uintmax_t *read_pos)

{
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  int __c;
  long in_FS_OFFSET;
  int local_2050;
  char cStack8265;
  char buffer [8192];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_2050 = 0;
  if (n_lines != 0) {
    while( true ) {
      sVar3 = safe_read(fd,buffer,0x2000);
      if (sVar3 == 0) break;
      if (sVar3 == 0xffffffffffffffff) {
        pcVar5 = quotearg_style(shell_escape_always_quoting_style,pretty_filename);
        uVar6 = dcgettext(0,"error reading %s",5);
        piVar7 = __errno_location();
        error(0,*piVar7,uVar6,pcVar5);
        local_2050 = 1;
        goto LAB_00105484;
      }
      *read_pos = *read_pos + sVar3;
      __c = (int)line_end;
      pcVar1 = buffer + sVar3;
      pcVar5 = buffer;
      while( true ) {
        pvVar4 = memchr(pcVar5,__c,(long)pcVar1 - (long)pcVar5);
        if (pvVar4 == (void *)0x0) break;
        pcVar5 = (char *)((long)pvVar4 + 1);
        n_lines = n_lines - 1;
        if (n_lines == 0) {
          local_2050 = 0;
          if ((pcVar5 < pcVar1) && (local_2050 = 0, (long)pcVar1 - (long)pcVar5 != 0)) {
            xwrite_stdout(pcVar5,(long)pcVar1 - (long)pcVar5);
            local_2050 = 0;
          }
          goto LAB_00105484;
        }
      }
    }
    local_2050 = -1;
  }
LAB_00105484:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_2050;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

