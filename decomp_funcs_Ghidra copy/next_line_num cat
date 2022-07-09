
void next_line_num(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = line_num_start;
  pcVar2 = line_buf + 0x11;
  do {
    if (*pcVar2 < '9') {
      *pcVar2 = *pcVar2 + '\x01';
      return;
    }
    pcVar1 = pcVar2 + -1;
    *pcVar2 = '0';
    pcVar2 = pcVar1;
  } while (pcVar3 <= pcVar1);
  if (pcVar3 < line_buf + 1) {
    line_buf[0] = '>';
  }
  else {
    line_num_start = pcVar3 + -1;
    pcVar3[-1] = '1';
    pcVar3 = line_num_start;
  }
  if (pcVar3 < line_num_print) {
    line_num_print = line_num_print + -1;
  }
  return;
}

