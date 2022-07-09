
void pad_across_to(int position)

{
  char *pcVar1;
  int iVar2;
  
  if (tabify_output == false) {
    iVar2 = output_position + 1;
    if (iVar2 <= position) {
      do {
        pcVar1 = stdout->_IO_write_ptr;
        if (pcVar1 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = ' ';
        }
        else {
          __overflow(stdout,0x20);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != position + 1);
    }
    output_position = position;
    return;
  }
  spaces_not_printed = position - output_position;
  return;
}

