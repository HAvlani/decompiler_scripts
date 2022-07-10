
quoting_options * clone_quoting_options(quoting_options *o)

{
  int iVar1;
  int *piVar2;
  quoting_options *pqVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (o == (quoting_options *)0x0) {
    o = &default_quoting_options;
  }
  pqVar3 = (quoting_options *)xmemdup(o,0x38);
  *piVar2 = iVar1;
  return pqVar3;
}

