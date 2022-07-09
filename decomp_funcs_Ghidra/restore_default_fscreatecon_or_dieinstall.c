
void restore_default_fscreatecon_or_die(void)

{
  uint *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *arg;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = (uint *)__errno_location();
  *puVar1 = 0x5f;
  uVar2 = dcgettext(0,"failed to restore the default file creation context",5);
  uVar4 = (ulong)*puVar1;
  uVar5 = 1;
  error(1,uVar4,uVar2);
  uVar2 = quotearg_n_style(1,4,uVar4);
  uVar5 = quotearg_n_style(0,4,uVar5);
  __printf_chk(1,"%s -> %s",uVar5,uVar2);
  if (arg != (char *)0x0) {
    pcVar3 = quotearg_style(shell_escape_always_quoting_style,arg);
    uVar2 = dcgettext(0," (backup: %s)",5);
    __printf_chk(1,uVar2,pcVar3);
  }
  pcVar3 = stdout->_IO_write_ptr;
  if (pcVar3 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar3 + 1;
    *pcVar3 = '\n';
    return;
  }
  __overflow(stdout,10);
  return;
}

