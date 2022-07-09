
void format_address_paren(uintmax_t address,char c)

{
  char *pcVar1;
  
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '(';
  }
  else {
    __overflow(stdout,0x28);
  }
  format_address_std(address,')');
  if (c != '\0') {
    pcVar1 = stdout->_IO_write_ptr;
    if (stdout->_IO_write_end <= pcVar1) {
      __overflow(stdout,(uint)(byte)c);
      return;
    }
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = c;
  }
  return;
}

