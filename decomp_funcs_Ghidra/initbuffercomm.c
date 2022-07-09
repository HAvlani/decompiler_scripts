
void initbuffer(linebuffer *linebuffer)

{
  linebuffer->buffer = (char *)0x0;
  *(undefined (*) [16])linebuffer = (undefined  [16])0x0;
  return;
}

