
void freeline(line *line)

{
  rpl_free(line->fields);
  line->fields = (field *)0x0;
  rpl_free((line->buf).buffer);
  (line->buf).buffer = (char *)0x0;
  return;
}

