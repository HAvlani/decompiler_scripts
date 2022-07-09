
void xwrite_stdout(char *buffer,size_t n_bytes)

{
  size_t sVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint *puVar4;
  size_t sVar5;
  ulong uVar6;
  int fd;
  long in_FS_OFFSET;
  char acStack8272 [8200];
  long lStack72;
  size_t sStack56;
  
  sVar1 = fwrite_unlocked(buffer,1,n_bytes,stdout);
  if (n_bytes <= sVar1) {
    return;
  }
  clearerr_unlocked(stdout);
  pcVar2 = quotearg_style(shell_escape_always_quoting_style,"standard output");
  uVar3 = dcgettext(0,"error writing %s",5);
  puVar4 = (uint *)__errno_location();
  fd = 1;
  uVar6 = (ulong)*puVar4;
  error(1,uVar6,uVar3,pcVar2);
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  sStack56 = n_bytes;
  while (uVar6 != 0) {
    sVar5 = 0x2000;
    if (uVar6 < 0x2001) {
      sVar5 = uVar6;
    }
    sVar5 = safe_read(fd,acStack8272,sVar5);
    if ((sVar5 == 0xffffffffffffffff) || (uVar6 = uVar6 - sVar5, sVar5 == 0)) break;
    xwrite_stdout(acStack8272,sVar5);
  }
  if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

