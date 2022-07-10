
void set_initialize(Spec_list *s,_Bool complement_this_set,_Bool *in_set)

{
  _Bool *p_Var1;
  int iVar2;
  
  s->state = 0xfffffffffffffffe;
  while( true ) {
    iVar2 = get_next(s,0);
    if (iVar2 == -1) break;
    in_set[iVar2] = true;
  }
  if (complement_this_set != false) {
    p_Var1 = in_set + 0x100;
    do {
      *in_set = (_Bool)(*in_set ^ 1);
      in_set = in_set + 1;
    } while (in_set != p_Var1);
  }
  return;
}

