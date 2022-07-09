
void indent(size_t from,size_t to)

{
  ulong uVar1;
  char *pcVar2;
  size_t sVar3;
  
  if (to <= from) {
    return;
  }
  do {
    while( true ) {
      sVar3 = tabsize;
      uVar1 = from + 1;
      pcVar2 = stdout->_IO_write_ptr;
      if ((tabsize == 0) || (to / tabsize <= uVar1 / tabsize)) break;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = '\t';
      }
      else {
        __overflow(stdout,9);
        sVar3 = tabsize;
      }
      from = (sVar3 + from) - from % sVar3;
      if (to <= from) {
        return;
      }
    }
    if (pcVar2 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = ' ';
    }
    else {
      __overflow(stdout,0x20);
    }
    from = uVar1;
  } while (uVar1 < to);
  return;
}

