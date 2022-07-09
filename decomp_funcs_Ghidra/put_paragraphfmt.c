
void put_paragraph(WORD *finish)

{
  WORD *w;
  
  put_line(unused_word_type,first_indent);
  for (w = unused_word_type[0].next_break; w != finish; w = w->next_break) {
    put_line(w,other_indent);
  }
  return;
}

