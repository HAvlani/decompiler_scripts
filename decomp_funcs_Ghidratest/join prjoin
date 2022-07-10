
void prjoin(line *line1,line *line2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  outlist *poVar4;
  
  uVar3 = tab;
  if (tab < 0) {
    uVar3 = 0x20;
  }
  poVar4 = outlist_head.next;
  if (outlist_head.next == (outlist *)0x0) {
    prfield();
    prfields(line1,join_field_1,autocount_1);
    prfields(line2,join_field_2,autocount_2);
  }
  else {
    while( true ) {
      prfield();
      poVar4 = poVar4->next;
      if (poVar4 == (outlist *)0x0) break;
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = (char)uVar3;
      }
      else {
        __overflow(stdout,uVar3 & 0xff);
      }
    }
  }
  cVar2 = eolchar;
  pcVar1 = stdout->_IO_write_ptr;
  if (pcVar1 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = cVar2;
    return;
  }
  __overflow(stdout,(uint)(byte)eolchar);
  return;
}

