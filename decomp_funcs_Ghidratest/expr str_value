
VALUE * str_value(char *s)

{
  VALUE *pVVar1;
  char *pcVar2;
  
  pVVar1 = (VALUE *)xmalloc(0x18);
  pVVar1->type = string;
  pcVar2 = xstrdup(s);
  *(char **)&pVVar1->u = pcVar2;
  return pVVar1;
}

