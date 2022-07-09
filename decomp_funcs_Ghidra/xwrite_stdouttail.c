
void xwrite_stdout(char *buffer,size_t n_bytes)

{
  char *pcVar1;
  size_t sVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  size_t sVar6;
  void *pvVar7;
  long extraout_RDX;
  long lVar8;
  int fd;
  char *pcVar9;
  char *buffer_00;
  int __c;
  long in_FS_OFFSET;
  char acStack8289 [8201];
  long lStack88;
  size_t sStack72;
  
  sVar2 = fwrite_unlocked(buffer,1,n_bytes,stdout);
  if (n_bytes <= sVar2) {
    return;
  }
  clearerr_unlocked(stdout);
  plVar3 = (long *)quotearg_style(shell_escape_always_quoting_style,"standard output");
  uVar4 = dcgettext(0,"error writing %s",5);
  piVar5 = __errno_location();
  pcVar9 = (char *)0x1;
  fd = *piVar5;
  error(1,fd,uVar4);
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  sStack72 = n_bytes;
  if (extraout_RDX != 0) {
    lVar8 = extraout_RDX;
    while (sVar6 = safe_read(fd,(char *)((long)register0x00000020 + -0x2060),0x2000), sVar6 != 0) {
      if (sVar6 == 0xffffffffffffffff) {
        pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
        uVar4 = dcgettext(0,"error reading %s",5);
        piVar5 = __errno_location();
        error(0,*piVar5,uVar4,pcVar9);
        break;
      }
      *plVar3 = *plVar3 + sVar6;
      __c = (int)line_end;
      pcVar1 = (char *)((long)register0x00000020 + -0x2060) + sVar6;
      buffer_00 = (char *)((long)register0x00000020 + -0x2060);
      while (pvVar7 = memchr(buffer_00,__c,(long)pcVar1 - (long)buffer_00), pvVar7 != (void *)0x0) {
        buffer_00 = (char *)((long)pvVar7 + 1);
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) {
          if ((buffer_00 < pcVar1) && ((long)pcVar1 - (long)buffer_00 != 0)) {
            xwrite_stdout(buffer_00,(long)pcVar1 - (long)buffer_00);
          }
          goto LAB_00105484;
        }
      }
    }
  }
LAB_00105484:
  if (lStack88 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

