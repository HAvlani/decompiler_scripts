
VALUE * eval(_Bool evaluate)

{
  char cVar1;
  undefined evaluate_00;
  VALUE *v;
  VALUE *v_00;
  
  v = eval1(evaluate);
LAB_00104848:
  do {
    cVar1 = nextarg("|");
    while( true ) {
      if (cVar1 == '\0') {
        return v;
      }
      evaluate_00 = false;
      if (evaluate != false) {
        evaluate_00 = null();
      }
      v_00 = eval1((_Bool)evaluate_00);
      cVar1 = null(v);
      if (cVar1 == '\0') break;
      freev(v);
      cVar1 = null(v_00);
      v = v_00;
      if (cVar1 == '\0') goto LAB_00104848;
      freev(v_00);
      v = (VALUE *)xmalloc(0x18);
      v->type = integer;
      mpz_init_set_ui((__mpz_struct *)&v->u,0);
      cVar1 = nextarg("|");
    }
    freev(v_00);
  } while( true );
}

