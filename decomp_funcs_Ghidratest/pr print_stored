
_Bool print_stored(COLUMN *p)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  COLUMN *pCVar4;
  COLUMN *pCVar5;
  COLUMN *pCVar6;
  char *pcVar7;
  
  pcVar3 = buff;
  iVar1 = p->current_line;
  pad_vertically = true;
  p->current_line = iVar1 + 1;
  iVar2 = line_vector[(long)iVar1 + 1];
  pcVar7 = pcVar3 + line_vector[iVar1];
  if (print_a_header != false) {
    print_header();
  }
  pCVar4 = column_vector;
  if (p->status == FADVISE_RANDOM) {
    if (0 < columns) {
      pCVar6 = column_vector + (ulong)(columns - 1) + 1;
      pCVar5 = column_vector;
      do {
        pCVar5->status = FADVISE_SEQUENTIAL;
        pCVar5 = pCVar5 + 1;
      } while (pCVar5 != pCVar6);
    }
    if (pCVar4->lines_to_print < 1) {
      if (extremities != false) {
        return true;
      }
      pad_vertically = false;
      return true;
    }
  }
  if (col_sep_length < padding_not_printed) {
    pad_across_to(padding_not_printed - col_sep_length);
    padding_not_printed = 0;
  }
  if (use_col_separator != false) {
    print_sep_string();
  }
  for (; pcVar7 != pcVar3 + iVar2; pcVar7 = pcVar7 + 1) {
    print_char(*pcVar7);
  }
  if ((spaces_not_printed == 0) &&
     (output_position = end_vector[iVar1] + p->start_position,
     p->start_position - col_sep_length == chars_per_margin)) {
    output_position = output_position - col_sep_length;
    return true;
  }
  return true;
}

