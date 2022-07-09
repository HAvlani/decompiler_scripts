
VALUE * eval4(_Bool evaluate)

{
  char cVar1;
  _Bool _Var2;
  int iVar3;
  VALUE *pVVar4;
  VALUE *v;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  
  pVVar4 = eval5(evaluate);
  do {
    _Var2 = nextarg("*");
    if (_Var2 == false) {
      iVar7 = 1;
      _Var2 = nextarg("/");
      if (_Var2 == false) {
        _Var2 = nextarg("%");
        if (_Var2 == false) {
          return pVVar4;
        }
        iVar7 = 2;
      }
    }
    else {
      iVar7 = 0;
    }
    v = eval5(evaluate);
    if (evaluate != false) {
      cVar1 = toarith(pVVar4);
      if (cVar1 == '\0') {
LAB_001043cb:
        uVar6 = dcgettext(0,"non-integer argument",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar6);
      }
      cVar1 = toarith(v);
      if (cVar1 == '\0') goto LAB_001043cb;
      if (iVar7 == 0) {
        pcVar5 = mpz_mul;
      }
      else {
        iVar3 = mpz_sgn((__mpz_struct *)&v->u);
        if (iVar3 == 0) {
          uVar6 = dcgettext(0,"division by zero",5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar6);
        }
        if (iVar7 == 1) {
          pcVar5 = mpz_tdiv_q;
        }
        else {
          pcVar5 = mpz_tdiv_r;
        }
      }
      (*pcVar5)(&pVVar4->u,&pVVar4->u,&v->u);
    }
    freev(v);
  } while( true );
}

