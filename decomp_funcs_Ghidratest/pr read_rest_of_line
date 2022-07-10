
void read_rest_of_line(COLUMN *p)

{
  _IO_FILE *__stream;
  byte *pbVar1;
  uint uVar2;
  
  __stream = (_IO_FILE *)p->fp;
  while( true ) {
    pbVar1 = (byte *)__stream->_IO_read_ptr;
    if (pbVar1 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar2 = (uint)*pbVar1;
      if (*pbVar1 == 10) {
        return;
      }
    }
    else {
      uVar2 = __uflow(__stream);
      if (uVar2 == 10) {
        return;
      }
    }
    if (uVar2 == 0xc) break;
    if (uVar2 == 0xffffffff) {
      close_file(p);
      return;
    }
  }
  pbVar1 = (byte *)__stream->_IO_read_ptr;
  if (pbVar1 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
    uVar2 = (uint)*pbVar1;
  }
  else {
    uVar2 = __uflow(__stream);
  }
  if (uVar2 != 10) {
    ungetc(uVar2,__stream);
  }
  if (keep_FF != false) {
    print_a_FF = true;
  }
  hold_file();
  return;
}

