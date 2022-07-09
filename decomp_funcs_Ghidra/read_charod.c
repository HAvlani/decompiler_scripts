
_Bool read_char(int *c)

{
  _Bool _Var1;
  _Bool _Var2;
  int iVar3;
  int *piVar4;
  _Bool _Var5;
  
  _Var5 = true;
  *c = -1;
  while( true ) {
    if ((FILE *)in_stream == (FILE *)0x0) {
      return _Var5;
    }
    iVar3 = fgetc((FILE *)in_stream);
    *c = iVar3;
    if (iVar3 != -1) break;
    piVar4 = __errno_location();
    _Var1 = check_and_close(*piVar4);
    _Var2 = open_next_file();
    _Var5 = (_Bool)(_Var5 & _Var1 & _Var2);
  }
  return _Var5;
}

