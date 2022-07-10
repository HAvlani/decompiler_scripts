
_Bool two_arguments(void)

{
  char *pcVar1;
  _Bool _Var2;
  long lVar3;
  
  lVar3 = (long)pos;
  pcVar1 = argv[lVar3];
  if ((*pcVar1 == '!') && (pcVar1[1] == '\0')) {
    pos = pos + 2;
    return *argv[lVar3 + 1] == '\0';
  }
  if ((*pcVar1 == '-') && ((pcVar1[1] != '\0' && (pcVar1[2] == '\0')))) {
    _Var2 = unary_operator();
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  beyond();
}

