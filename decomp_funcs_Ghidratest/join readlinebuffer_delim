
linebuffer * readlinebuffer_delim(linebuffer *linebuffer,FILE *stream,char delimiter)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  char *pa;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  
  pcVar4 = linebuffer->buffer;
  pcVar5 = pcVar4 + linebuffer->size;
  pa = pcVar4;
  if ((*(byte *)&stream->_flags & 0x10) != 0) {
    return (linebuffer *)0x0;
  }
  do {
    pbVar1 = (byte *)stream->_IO_read_ptr;
    if (pbVar1 < stream->_IO_read_end) {
      stream->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar3 = (uint)*pbVar1;
LAB_00104dab:
      cVar6 = (char)uVar3;
      if (pcVar4 == pcVar5) goto LAB_00104e10;
    }
    else {
      uVar3 = __uflow((_IO_FILE *)stream);
      if (uVar3 != 0xffffffff) goto LAB_00104dab;
      if (pa == pcVar4) {
        return (linebuffer *)0x0;
      }
      if ((*(byte *)&stream->_flags & 0x20) != 0) {
        return (linebuffer *)0x0;
      }
      if (pcVar4[-1] == delimiter) goto LAB_00104e76;
      uVar3 = (int)delimiter;
      cVar6 = delimiter;
      if (pcVar4 != pcVar5) {
        *pcVar4 = delimiter;
        pcVar4 = pcVar4 + 1;
        goto LAB_00104e76;
      }
LAB_00104e10:
      lVar2 = linebuffer->size;
      pa = (char *)xpalloc(pa,&linebuffer->size,1,-1,1);
      pcVar4 = pa + lVar2;
      linebuffer->buffer = pa;
      pcVar5 = pa + linebuffer->size;
    }
    *pcVar4 = cVar6;
    pcVar4 = pcVar4 + 1;
    if ((int)delimiter == uVar3) {
LAB_00104e76:
      linebuffer->length = (long)pcVar4 - (long)pa;
      return linebuffer;
    }
  } while( true );
}

