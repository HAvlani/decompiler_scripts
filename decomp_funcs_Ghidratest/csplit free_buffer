
void free_buffer(buffer_record *buf)

{
  line *plVar1;
  line *p;
  
  p = buf->line_start;
  while (p != (line *)0x0) {
    plVar1 = p->next;
    rpl_free(p);
    p = plVar1;
  }
  rpl_free(buf->buffer);
  rpl_free(buf);
  return;
}

