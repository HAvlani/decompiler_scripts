
_Bool chown_failure_ok(cp_options *x)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  bVar2 = iVar1 == 1 || iVar1 == 0x16;
  if (iVar1 == 1 || iVar1 == 0x16) {
    bVar2 = x->chown_privileges ^ 1;
  }
  return (_Bool)bVar2;
}

