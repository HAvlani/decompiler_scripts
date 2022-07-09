
_Bool prime2_p(uintmax_t n1,uintmax_t n0)

{
  _Bool _Var1;
  
  if (n1 != 0) {
    _Var1 = prime2_p(n1,n0);
    return _Var1;
  }
  if (1 < n0) {
    if (0x17ded78 < n0) {
      _Var1 = prime_p(n0);
      return _Var1;
    }
    return true;
  }
  return false;
}

