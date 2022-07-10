
void emit_verbose(char *src,char *dst,char *backup_dst_name)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar1 = quotearg_n_style(1,4,dst);
  uVar2 = quotearg_n_style(0,4,src);
  __printf_chk(1,"%s -> %s",uVar2,uVar1);
  if (backup_dst_name != (char *)0x0) {
    pcVar3 = quotearg_style(shell_escape_always_quoting_style,backup_dst_name);
    uVar1 = dcgettext(0," (backup: %s)",5);
    __printf_chk(1,uVar1,pcVar3);
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

