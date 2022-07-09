
VALUE * eval2(_Bool evaluate)

{
  char cVar1;
  char *a;
  _Bool _Var2;
  int iVar3;
  VALUE *v;
  VALUE *v_00;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong x;
  
  v = eval3(evaluate);
LAB_001045da:
  _Var2 = nextarg("<");
  if (_Var2 == false) {
    _Var2 = nextarg("<=");
    if (_Var2 == false) {
      _Var2 = nextarg("=");
      if ((_Var2 == false) && (_Var2 = nextarg("=="), _Var2 == false)) {
        _Var2 = nextarg("!=");
        if (_Var2 == false) {
          _Var2 = nextarg(">=");
          if (_Var2 == false) {
            _Var2 = nextarg(">");
            if (_Var2 == false) {
              return v;
            }
            uVar7 = 5;
          }
          else {
            uVar7 = 4;
          }
        }
        else {
          uVar7 = 3;
        }
      }
      else {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
  x = 0;
  v_00 = eval3(evaluate);
  if (evaluate != false) {
    tostring(v);
    tostring(v_00);
    a = *(char **)&v->u;
    pcVar5 = a + (*a == '-');
    cVar1 = *pcVar5;
    do {
      if (9 < (int)cVar1 - 0x30U) goto LAB_00104660;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = *(char **)&v_00->u;
    pcVar6 = pcVar5 + (*pcVar5 == '-');
    cVar1 = *pcVar6;
    do {
      if (9 < (int)cVar1 - 0x30U) goto LAB_00104660;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar3 = strintcmp(a,pcVar5);
    goto LAB_00104678;
  }
  goto LAB_001045ab;
LAB_00104660:
  piVar4 = __errno_location();
  *piVar4 = 0;
  iVar3 = strcoll(*(char **)&v->u,*(char **)&v_00->u);
LAB_00104678:
  switch(uVar7) {
  default:
    x = (ulong)(long)iVar3 >> 0x3f;
    break;
  case 1:
    x = (ulong)(iVar3 < 1);
    break;
  case 2:
    x = (ulong)(iVar3 == 0);
    break;
  case 3:
    x = (ulong)(iVar3 != 0);
    break;
  case 4:
    x = (ulong)~(long)iVar3 >> 0x3f;
    break;
  case 5:
    x = (ulong)(0 < iVar3);
  }
LAB_001045ab:
  freev(v);
  freev(v_00);
  v = (VALUE *)xmalloc(0x18);
  v->type = integer;
  mpz_init_set_ui((__mpz_struct *)&v->u,x);
  goto LAB_001045da;
}

