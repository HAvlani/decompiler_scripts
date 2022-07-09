
_Bool isbase64url(char ch)

{
  _Bool _Var1;
  
  if ((ch != '-' && ch != '_') && ((ch & 0xfbU) != 0x2b)) {
    _Var1 = isbase64(ch);
    return _Var1;
  }
  return ch == '-' || ch == '_';
}

