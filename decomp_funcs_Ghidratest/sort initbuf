
void initbuf(buffer *buf,size_t line_bytes,size_t alloc)

{
  char *pcVar1;
  ulong __size;
  
  do {
    __size = (alloc & 0xffffffffffffffe0) + 0x20;
    pcVar1 = (char *)malloc(__size);
    buf->buf = pcVar1;
    if (pcVar1 != (char *)0x0) {
      buf->line_bytes = line_bytes;
      buf->alloc = __size;
      buf->nlines = 0;
      buf->left = 0;
      buf->used = 0;
      buf->eof = false;
      return;
    }
    alloc = __size >> 1;
  } while (line_bytes + 1 < alloc);
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

