
size_t freadahead(FILE *fp)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if ((fp->_IO_write_ptr < fp->_IO_write_base || fp->_IO_write_ptr == fp->_IO_write_base) &&
     (pcVar1 = fp->_IO_read_end + -(long)fp->_IO_read_ptr, (fp->_flags & 0x100U) != 0)) {
    pcVar1 = fp->_IO_save_end + ((long)pcVar1 - (long)fp->_IO_save_base);
  }
  return (size_t)pcVar1;
}

