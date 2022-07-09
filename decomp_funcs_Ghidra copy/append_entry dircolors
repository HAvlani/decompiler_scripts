
void append_entry(char prefix,char *item,char *arg)

{
  char *pcVar1;
  char cVar2;
  
  if (print_ls_colors != false) {
    append_quoted("\x1b[");
    append_quoted(arg);
    if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
      _obstack_newchunk(&lsc_obstack,1);
    }
    pcVar1 = lsc_obstack.next_free + 1;
    *lsc_obstack.next_free = 'm';
    lsc_obstack.next_free = pcVar1;
  }
  if (prefix != '\0') {
    if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
      _obstack_newchunk(&lsc_obstack,1);
    }
    pcVar1 = lsc_obstack.next_free + 1;
    *lsc_obstack.next_free = prefix;
    lsc_obstack.next_free = pcVar1;
  }
  append_quoted(item);
  if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
    _obstack_newchunk(&lsc_obstack,1);
  }
  pcVar1 = lsc_obstack.next_free + 1;
  *lsc_obstack.next_free = (-(print_ls_colors == false) & 0x34U) + 9;
  lsc_obstack.next_free = pcVar1;
  append_quoted(arg);
  if (print_ls_colors == false) {
    cVar2 = ':';
    if (lsc_obstack.chunk_limit != lsc_obstack.next_free) goto LAB_00102f30;
LAB_00102fc0:
    _obstack_newchunk(&lsc_obstack,1);
  }
  else {
    append_quoted("\x1b[0m");
    if (lsc_obstack.chunk_limit == lsc_obstack.next_free) goto LAB_00102fc0;
  }
  cVar2 = (-(print_ls_colors == false) & 0x30U) + 10;
LAB_00102f30:
  pcVar1 = lsc_obstack.next_free + 1;
  *lsc_obstack.next_free = cVar2;
  lsc_obstack.next_free = pcVar1;
  return;
}

