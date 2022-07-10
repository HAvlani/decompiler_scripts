
VALUE * eval5(_Bool evaluate)

{
  _Bool _Var1;
  VALUE *sv;
  VALUE *pv;
  VALUE *pVVar2;
  
  sv = eval6(evaluate);
  while( true ) {
    _Var1 = nextarg(":");
    if (_Var1 == false) break;
    pv = eval6(evaluate);
    pVVar2 = sv;
    if (evaluate != false) {
      pVVar2 = docolon(sv,pv);
      freev(sv);
    }
    freev(pv);
    sv = pVVar2;
  }
  return sv;
}

