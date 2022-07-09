
void add_line_number(COLUMN *p)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = __sprintf_chk(number_buff,1,0xffffffffffffffff,&DAT_0010d071,chars_per_number,line_number)
  ;
  line_number = line_number + 1;
  pcVar3 = number_buff + (iVar2 - chars_per_number);
  pcVar1 = pcVar3 + (ulong)(chars_per_number - 1) + 1;
  if (0 < chars_per_number) {
    do {
      pcVar3 = pcVar3 + 1;
      (*(code *)p->fp)();
    } while (pcVar3 != pcVar1);
  }
  if (columns < 2) {
    (*(code *)p->fp)();
    if (number_separator == '\t') {
      output_position =
           (chars_per_output_tab - output_position % chars_per_output_tab) + output_position;
    }
  }
  else if (number_separator == '\t') {
    iVar2 = (number_width - chars_per_number) + -1;
    if (0 < number_width - chars_per_number) {
      do {
        (*(code *)p->fp)(0x20);
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -2;
        (*(code *)p->fp)(0x20);
      } while (iVar2 != -1);
    }
  }
  else {
    (*(code *)p->fp)();
  }
  if ((truncate_lines != false) && (parallel_files == false)) {
    input_position = input_position + number_width;
  }
  return;
}

