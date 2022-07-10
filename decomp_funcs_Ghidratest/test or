
_Bool or(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  _Bool _Var4;
  char *pcVar5;
  char *pcVar6;
  char *format;
  int iVar7;
  long lVar8;
  byte bVar9;
  char **ppcVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  _Bool local_39;
  
  local_39 = false;
  iVar12 = argc;
LAB_00103950:
  bVar9 = 1;
  if (iVar12 <= pos) {
LAB_00103ba6:
                    /* WARNING: Subroutine does not return */
    beyond();
  }
  do {
    ppcVar10 = argv;
    lVar8 = (long)pos;
    bVar2 = false;
    bVar13 = 0;
    while( true ) {
      pcVar5 = argv[lVar8];
      iVar7 = (int)lVar8;
      cVar1 = *pcVar5;
      if (cVar1 != '!') break;
      if (pcVar5[1] != '\0') {
        if (bVar2) {
          pos = iVar7;
        }
        goto LAB_00103aca;
      }
      lVar8 = lVar8 + 1;
      if (iVar12 <= (int)lVar8) {
        pos = iVar7 + 1;
                    /* WARNING: Subroutine does not return */
        beyond();
      }
      bVar13 = bVar13 ^ 1;
      bVar2 = true;
    }
    if (bVar2) {
      pos = iVar7;
    }
    if ((cVar1 == '(') && (pcVar5[1] == '\0')) {
      pos = iVar7 + 1;
      if (iVar12 <= pos) goto LAB_00103ba6;
      if (iVar7 + 2 < iVar12) {
        iVar11 = 1;
        ppcVar10 = argv + (iVar7 + 2);
        do {
          if (((**ppcVar10 == ')') && ((*ppcVar10)[1] == '\0')) || (iVar11 == 4)) break;
          iVar11 = iVar11 + 1;
          ppcVar10 = ppcVar10 + 1;
        } while (iVar11 != (iVar12 + -1) - iVar7);
      }
      bVar3 = posixtest();
      pcVar5 = argv[pos];
      if (pcVar5 == (char *)0x0) {
        pcVar5 = quote(")");
        pcVar6 = (char *)dcgettext(0,"%s expected",5);
                    /* WARNING: Subroutine does not return */
        test_syntax_error(pcVar6,pcVar5);
      }
      if ((*pcVar5 != ')') || (pcVar5[1] != '\0')) {
        pcVar5 = quote_n(1,pcVar5);
        pcVar6 = quote_n(0,")");
        format = (char *)dcgettext(0,"%s expected, found %s",5);
                    /* WARNING: Subroutine does not return */
        test_syntax_error(format,pcVar6,pcVar5);
      }
      pos = pos + 1;
LAB_00103a6e:
      bVar9 = bVar9 & (bVar3 ^ bVar13);
      iVar12 = argc;
      if (argc <= pos) {
LAB_00103b43:
        return (_Bool)(local_39 | bVar9);
      }
    }
    else {
LAB_00103aca:
      if (3 < iVar12 - iVar7) {
        if (((*pcVar5 != '-') || (pcVar5[1] != 'l')) ||
           ((pcVar5[2] != '\0' || (_Var4 = binop(argv[lVar8 + 2]), _Var4 == false))))
        goto LAB_00103b0e;
        bVar3 = binary_operator();
        goto LAB_00103a6e;
      }
      if (iVar12 - iVar7 == 3) {
LAB_00103b0e:
        _Var4 = binop(ppcVar10[lVar8 + 1]);
        if (_Var4 != false) {
          bVar3 = binary_operator();
          goto LAB_00103a6e;
        }
      }
      if (((cVar1 == '-') && (pcVar5[1] != '\0')) && (pcVar5[2] == '\0')) {
        bVar3 = unary_operator();
        goto LAB_00103a6e;
      }
      pos = iVar7 + 1;
      bVar9 = bVar9 & (cVar1 != '\0' ^ bVar13);
      if (iVar12 <= pos) goto LAB_00103b43;
    }
    pcVar5 = argv[pos];
    if (((*pcVar5 != '-') || (pcVar5[1] != 'a')) || (pcVar5[2] != '\0')) break;
    pos = pos + 1;
    if (iVar12 <= pos) goto LAB_00103ba6;
  } while( true );
  local_39 = (_Bool)(local_39 | bVar9);
  if (((*pcVar5 != '-') || (pcVar5[1] != 'o')) || (pcVar5[2] != '\0')) {
    return local_39;
  }
  pos = pos + 1;
  goto LAB_00103950;
}

