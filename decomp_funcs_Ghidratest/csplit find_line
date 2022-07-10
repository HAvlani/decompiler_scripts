
cstring * find_line(intmax_t linenum)

{
  line *plVar1;
  _Bool _Var2;
  buffer_record *pbVar3;
  buffer_record *pbVar4;
  long lVar5;
  
  if (((head == (buffer_record *)0x0) &&
      ((have_read_eof != false || (_Var2 = load_buffer(), _Var2 == false)))) ||
     (lVar5 = head->start_line, pbVar4 = head, linenum < lVar5)) {
    return (cstring *)0x0;
  }
  do {
    if (linenum < pbVar4->num_lines + lVar5) {
      plVar1 = pbVar4->line_start;
      for (lVar5 = linenum - lVar5; 0x4f < lVar5; lVar5 = lVar5 + -0x50) {
        plVar1 = plVar1->next;
      }
      return plVar1->starts + lVar5;
    }
    pbVar3 = pbVar4->next;
    if (pbVar3 == (buffer_record *)0x0) {
      if (have_read_eof != false) {
        return (cstring *)0x0;
      }
      _Var2 = load_buffer();
      if (_Var2 == false) {
        return (cstring *)0x0;
      }
      pbVar3 = pbVar4->next;
      if (pbVar3 == (buffer_record *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("b","src/csplit.c",0x247,"find_line");
      }
    }
    lVar5 = pbVar3->start_line;
    pbVar4 = pbVar3;
  } while( true );
}

