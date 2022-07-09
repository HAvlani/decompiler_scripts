
_Bool nextarg(char *str)

{
  char **ppcVar1;
  int iVar2;
  _Bool _Var3;
  
  ppcVar1 = args;
  _Var3 = false;
  if (*args != (char *)0x0) {
    iVar2 = strcmp(*args,str);
    _Var3 = iVar2 == 0;
    args = ppcVar1 + _Var3;
  }
  return _Var3;
}

