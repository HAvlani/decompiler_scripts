
_Bool star_digits_closebracket(E_string *es,size_t idx)

{
  byte bVar1;
  _Bool *p_Var2;
  ulong uVar3;
  
  if (es->s[idx] != '*') {
    return false;
  }
  p_Var2 = es->escaped;
  if (p_Var2[idx] == false) {
    uVar3 = idx + 1;
    if (es->len <= uVar3) {
      return false;
    }
    do {
      bVar1 = es->s[uVar3];
      if (9 < bVar1 - 0x30) {
        if (bVar1 != 0x5d) {
          return false;
        }
        return (_Bool)(p_Var2[uVar3] ^ 1);
      }
      if (p_Var2[uVar3] != false) {
        return false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < es->len);
  }
  return false;
}

