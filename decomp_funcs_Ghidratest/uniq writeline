
void writeline(linebuffer *line,_Bool match,uintmax_t linecount)

{
  char cVar1;
  
  cVar1 = output_unique;
  if ((linecount == 0) || (cVar1 = output_later_repeated, match != false)) {
    if (cVar1 != '\x01') {
      return;
    }
  }
  else if (output_first_repeated != true) {
    return;
  }
  if (countmode == count_occurrences) {
    __printf_chk(1,"%7lu ",linecount + 1);
  }
  fwrite_unlocked(line->buffer,1,line->length,stdout);
  return;
}

