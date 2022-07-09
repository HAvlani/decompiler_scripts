
void print_char(char c)

{
  char *pcVar1;
  ushort **ppuVar2;
  
  if (tabify_output != false) {
    if (c == ' ') {
      spaces_not_printed = spaces_not_printed + 1;
      return;
    }
    if (0 < spaces_not_printed) {
      print_white_space();
    }
    ppuVar2 = __ctype_b_loc();
    if ((*(byte *)((long)*ppuVar2 + (ulong)(byte)c * 2 + 1) & 0x40) == 0) {
      if (c == '\b') {
        output_position = output_position + -1;
      }
    }
    else {
      output_position = output_position + 1;
    }
  }
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = c;
    return;
  }
  __overflow(stdout,(uint)(byte)c);
  return;
}

