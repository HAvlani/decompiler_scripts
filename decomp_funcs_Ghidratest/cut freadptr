
char * freadptr(FILE *fp,size_t *sizep)

{
  char *pcVar1;
  size_t sVar2;
  
  if (fp->_IO_write_ptr < fp->_IO_write_base || fp->_IO_write_ptr == fp->_IO_write_base) {
    pcVar1 = fp->_IO_read_ptr;
    sVar2 = (long)fp->_IO_read_end - (long)pcVar1;
    if (sVar2 != 0) {
      *sizep = sVar2;
      return pcVar1;
    }
  }
  return (char *)0x0;
}

