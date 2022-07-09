
void lbuf_putc(char c)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *__src;
  void *pvVar4;
  
  pcVar1 = lbuf.end + 1;
  pcVar2 = pcVar1;
  *lbuf.end = c;
  lbuf.end = pcVar2;
  pcVar2 = lbuf.buf;
  if (c == '\n') {
    if (line_buffered_8470 == 0xffffffff) {
      iVar3 = isatty(0);
      if (iVar3 != 0) {
        line_buffered_8470 = 1;
        goto LAB_00103915;
      }
      iVar3 = isatty(1);
      line_buffered_8470 = (uint)(iVar3 != 0);
    }
    if (line_buffered_8470 != 0) {
LAB_00103915:
      lbuf_flush();
      return;
    }
    if (0x1ff < (ulong)((long)pcVar1 - (long)pcVar2)) {
      pcVar2 = pcVar2 + 0x200;
      do {
        __src = pcVar2;
        pcVar2 = __src + -1;
      } while (__src[-1] != '\n');
      lbuf.end = __src;
      lbuf_flush();
      pvVar4 = memcpy(lbuf.buf,__src,(long)pcVar1 - (long)__src);
      lbuf.end = (char *)(((long)pcVar1 - (long)__src) + (long)pvVar4);
      return;
    }
  }
  return;
}

