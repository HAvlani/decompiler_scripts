
VALUE * eval3(_Bool evaluate)

{
  bool bVar1;
  char cVar2;
  _Bool _Var3;
  VALUE *pVVar4;
  VALUE *v;
  code *pcVar5;
  undefined8 uVar6;
  
  pVVar4 = eval4(evaluate);
  do {
    _Var3 = nextarg("+");
    if (_Var3 == false) {
      _Var3 = nextarg("-");
      if (_Var3 == false) {
        return pVVar4;
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    v = eval4(evaluate);
    if (evaluate != false) {
      cVar2 = toarith(pVVar4);
      if (cVar2 == '\0') {
LAB_001044d4:
        uVar6 = dcgettext(0,"non-integer argument",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar6);
      }
      cVar2 = toarith(v);
      if (cVar2 == '\0') goto LAB_001044d4;
      if (bVar1) {
        pcVar5 = mpz_sub;
      }
      else {
        pcVar5 = mpz_add;
      }
      (*pcVar5)(&pVVar4->u,&pVVar4->u,&v->u);
    }
    freev(v);
  } while( true );
}

