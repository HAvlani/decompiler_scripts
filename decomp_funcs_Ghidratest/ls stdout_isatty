
_Bool stdout_isatty(void)

{
  int iVar1;
  
  if (-1 < stdout_isatty::out_tty) {
    return (_Bool)(stdout_isatty::out_tty & 1);
  }
  iVar1 = isatty(1);
  stdout_isatty::out_tty = (byte)iVar1;
  return (_Bool)((byte)iVar1 & 1);
}

