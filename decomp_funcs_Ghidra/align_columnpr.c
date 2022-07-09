
void align_column(COLUMN *p)

{
  char cVar1;
  
  padding_not_printed = p->start_position;
  if (col_sep_length < padding_not_printed) {
    pad_across_to(padding_not_printed - col_sep_length);
    padding_not_printed = 0;
    if (use_col_separator != false) goto LAB_0010470a;
  }
  else if (use_col_separator != false) {
LAB_0010470a:
    print_sep_string();
    cVar1 = p->numbered;
    goto joined_r0x00104713;
  }
  cVar1 = p->numbered;
joined_r0x00104713:
  if (cVar1 == '\0') {
    return;
  }
  add_line_number((COLUMN *)&p->char_func);
  return;
}

