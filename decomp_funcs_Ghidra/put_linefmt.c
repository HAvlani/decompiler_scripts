
void put_line(WORD *w,int indent)

{
  WORD *pWVar1;
  char *pcVar2;
  WORD *pWVar3;
  
  out_column = 0;
  put_space(prefix_indent);
  fputs_unlocked(prefix,stdout);
  out_column = prefix_length + out_column;
  put_space(indent - out_column);
  pWVar1 = w->next_break;
  if (w != pWVar1 + -1) {
    do {
      pWVar3 = w + 1;
      put_word();
      put_space(w->space);
      w = pWVar3;
    } while (pWVar1 + -1 != pWVar3);
  }
  put_word();
  last_line_length = out_column;
  pcVar2 = stdout->_IO_write_ptr;
  if (stdout->_IO_write_end <= pcVar2) {
    __overflow(stdout,10);
    return;
  }
  stdout->_IO_write_ptr = pcVar2 + 1;
  *pcVar2 = '\n';
  return;
}

