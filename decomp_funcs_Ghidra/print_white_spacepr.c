
void print_white_space(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = spaces_not_printed + output_position;
  iVar6 = output_position;
  if ((1 < spaces_not_printed) &&
     (iVar4 = chars_per_output_tab - output_position % chars_per_output_tab,
     iVar5 = output_position + iVar4, iVar4 <= spaces_not_printed)) {
    do {
      cVar3 = output_tab_char;
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = cVar3;
      }
      else {
        __overflow(stdout,(uint)(byte)output_tab_char);
      }
      iVar6 = iVar5;
    } while ((1 < iVar1 - iVar5) &&
            (iVar5 = (chars_per_output_tab - iVar5 % chars_per_output_tab) + iVar5, iVar5 <= iVar1))
    ;
  }
  iVar6 = iVar6 + 1;
  if (iVar6 <= iVar1) {
    do {
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = ' ';
      }
      else {
        __overflow(stdout,0x20);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar1 + 1);
  }
  output_position = iVar1;
  spaces_not_printed = 0;
  return;
}

