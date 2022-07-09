
_Bool protect_fd(int fd)

{
  int __fd;
  int *piVar1;
  _Bool _Var2;
  
  _Var2 = true;
  __fd = open("/dev/null",0);
  if ((fd != __fd) && (_Var2 = false, -1 < __fd)) {
    close(__fd);
    piVar1 = __errno_location();
    *piVar1 = 9;
    return false;
  }
  return _Var2;
}

