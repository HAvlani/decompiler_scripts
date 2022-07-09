
void print_spaces(ptrdiff_t number)

{
  char *pcVar1;
  
  if (number < 1) {
    return;
  }
  do {
    pcVar1 = stdout->_IO_write_ptr;
    if (pcVar1 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = ' ';
    }
    else {
      __overflow(stdout,0x20);
    }
    number = number + -1;
  } while (number != 0);
  return;
}

