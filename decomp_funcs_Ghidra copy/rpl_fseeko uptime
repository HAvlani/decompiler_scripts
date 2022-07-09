
int rpl_fseeko(FILE *fp,off_t offset,int whence)

{
  int iVar1;
  __off_t _Var2;
  
  if (((fp->_IO_read_end == fp->_IO_read_ptr) && (fp->_IO_write_ptr == fp->_IO_write_base)) &&
     (fp->_IO_save_base == (char *)0x0)) {
    iVar1 = fileno((FILE *)fp);
    _Var2 = lseek(iVar1,offset,whence);
    if (_Var2 == -1) {
      iVar1 = -1;
    }
    else {
      fp->_flags = fp->_flags & 0xffffffef;
      fp->_offset = _Var2;
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = (*(code *)PTR_fseeko_0010cf68)(fp);
  return iVar1;
}

