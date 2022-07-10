
_Bool writable_destination(int dst_dirfd,char *dst_relname,mode_t mode)

{
  _Bool _Var1;
  int iVar2;
  
  if ((mode & 0xf000) == 0xa000) {
    return true;
  }
  _Var1 = can_write_any_file();
  if (_Var1 != false) {
    return true;
  }
  iVar2 = faccessat(dst_dirfd,dst_relname,2,0x200);
  return iVar2 == 0;
}

