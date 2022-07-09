
void dired_outbyte(char c)

{
  char *pcVar1;
  
  dired_pos = dired_pos + 1;
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = c;
    return;
  }
  __overflow(stdout,(uint)(byte)c);
  return;
}

