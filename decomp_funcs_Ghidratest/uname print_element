
void print_element(char *element)

{
  char *pcVar1;
  
  if (print_element::printed != false) {
    pcVar1 = stdout->_IO_write_ptr;
    if (pcVar1 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = ' ';
    }
    else {
      __overflow(stdout,0x20);
    }
  }
  print_element::printed = true;
  fputs_unlocked(element,stdout);
  return;
}

