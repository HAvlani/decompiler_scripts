
_Bool wc_lines(char *file,int fd,uintmax_t *lines_out,uintmax_t *bytes_out)

{
  _Bool _Var1;
  
  if ((lines_out != (uintmax_t *)0x0) && (bytes_out != (uintmax_t *)0x0)) {
    _Var1 = wc_lines(file,fd,lines_out,bytes_out);
    return _Var1;
  }
  return false;
}

