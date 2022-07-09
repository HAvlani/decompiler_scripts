
_Bool three_arguments(void)

{
  char **ppcVar1;
  int iVar2;
  _Bool _Var3;
  undefined uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  
  iVar2 = pos;
  ppcVar1 = argv;
  lVar7 = (long)pos;
  pcVar5 = argv[lVar7 + 1];
  _Var3 = binop(pcVar5);
  if (_Var3 != false) {
    uVar4 = binary_operator(0);
    return (_Bool)uVar4;
  }
  pcVar6 = ppcVar1[lVar7];
  if ((*pcVar6 == '!') && (pcVar6[1] == '\0')) {
    pos = iVar2 + 1;
    if (pos < argc) {
      _Var3 = two_arguments();
      return (_Bool)(_Var3 ^ 1);
    }
  }
  else {
    if ((*pcVar6 == '(') &&
       (((pcVar6[1] == '\0' && (*ppcVar1[lVar7 + 2] == ')')) && (ppcVar1[lVar7 + 2][1] == '\0')))) {
      pos = iVar2 + 3;
      return *ppcVar1[lVar7 + 1] != '\0';
    }
    if ((*pcVar5 != '-') ||
       (((pcVar5[1] != 'a' || (pcVar5[2] != '\0')) && ((pcVar5[1] != 'o' || (pcVar5[2] != '\0'))))))
    {
      pcVar5 = quote(pcVar5);
      pcVar6 = (char *)dcgettext(0,"%s: binary operator expected",5);
                    /* WARNING: Subroutine does not return */
      test_syntax_error(pcVar6,pcVar5);
    }
    if (iVar2 < argc) {
      _Var3 = or();
      return _Var3;
    }
  }
                    /* WARNING: Subroutine does not return */
  beyond();
}

