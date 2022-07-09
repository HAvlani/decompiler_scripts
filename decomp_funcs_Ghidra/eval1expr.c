
VALUE * eval1(_Bool evaluate)

{
  char cVar1;
  byte bVar2;
  VALUE *v;
  VALUE *v_00;
  
  v = eval2(evaluate);
  do {
    cVar1 = nextarg("&");
    while( true ) {
      if (cVar1 == '\0') {
        return v;
      }
      bVar2 = false;
      if (evaluate != false) {
        bVar2 = null();
        bVar2 = bVar2 ^ 1;
      }
      v_00 = eval2((_Bool)bVar2);
      cVar1 = null(v);
      if ((cVar1 == '\0') && (cVar1 = null(v_00), cVar1 == '\0')) break;
      freev(v);
      freev(v_00);
      v = (VALUE *)xmalloc(0x18);
      v->type = integer;
      mpz_init_set_ui((__mpz_struct *)&v->u,0);
      cVar1 = nextarg("&");
    }
    freev(v_00);
  } while( true );
}

