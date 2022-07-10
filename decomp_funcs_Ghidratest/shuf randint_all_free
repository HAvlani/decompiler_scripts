
int randint_all_free(randint_source *s)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = randread_free(s->source);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  __explicit_bzero_chk(s,0x18,0xffffffffffffffff);
  rpl_free(s);
  *piVar3 = iVar1;
  return iVar2;
}

