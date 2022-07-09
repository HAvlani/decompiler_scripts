
cstring * remove_line(void)

{
  long lVar1;
  line *plVar2;
  long lVar3;
  line *plVar4;
  buffer_record *pbVar5;
  _Bool _Var6;
  
  if (remove_line::prev_buf != (buffer_record *)0x0) {
    free_buffer(remove_line::prev_buf);
    remove_line::prev_buf = (buffer_record *)0x0;
  }
  if ((head == (buffer_record *)0x0) &&
     ((have_read_eof != false || (_Var6 = load_buffer(), _Var6 == false)))) {
    return (cstring *)0x0;
  }
  pbVar5 = head;
  lVar1 = head->first_available;
  if (current_line < lVar1) {
    current_line = lVar1;
  }
  plVar2 = head->curr_line;
  head->first_available = lVar1 + 1;
  lVar3 = plVar2->retrieve_index;
  lVar1 = lVar3 + 1;
  plVar2->retrieve_index = lVar1;
  if (lVar1 == plVar2->used) {
    plVar4 = plVar2->next;
    pbVar5->curr_line = plVar4;
    if ((plVar4 == (line *)0x0) || (plVar4->used == 0)) {
      remove_line::prev_buf = pbVar5;
      head = pbVar5->next;
      return plVar2->starts + lVar3;
    }
  }
  return plVar2->starts + lVar3;
}

