
void store_char(char c)

{
  if (buff_current < buff_allocated) {
    buff[buff_current] = c;
    buff_current = buff_current + 1;
    return;
  }
  buff = (char *)x2realloc(buff,&buff_allocated);
  buff[buff_current] = c;
  buff_current = buff_current + 1;
  return;
}

