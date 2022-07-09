
undefined posixtest(int param_1)

{
  char *pcVar1;
  _Bool _Var2;
  long lVar3;
  
  if (param_1 == 3) {
    _Var2 = three_arguments();
    return _Var2;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      lVar3 = (long)pos;
      pos = pos + 1;
      return *argv[lVar3] != '\0';
    }
    if (param_1 == 2) {
      _Var2 = two_arguments();
      return _Var2;
    }
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else if (param_1 == 4) {
    pcVar1 = argv[pos];
    if ((*pcVar1 == '!') && (pcVar1[1] == '\0')) {
      pos = pos + 1;
      if (pos < argc) {
        _Var2 = three_arguments();
        return _Var2 ^ 1;
      }
      goto LAB_00103922;
    }
    if ((((*pcVar1 == '(') && (pcVar1[1] == '\0')) && (*argv[(long)pos + 3] == ')')) &&
       (argv[(long)pos + 3][1] == '\0')) {
      pos = pos + 1;
      _Var2 = two_arguments();
      pos = pos + 1;
      return _Var2;
    }
  }
  if (pos < argc) {
    _Var2 = or();
    return _Var2;
  }
LAB_00103922:
                    /* WARNING: Subroutine does not return */
  beyond();
}

