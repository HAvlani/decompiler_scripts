
_Bool revert_tz(timezone_t tz)

{
  int iVar1;
  int *piVar2;
  char *tz_00;
  int iVar3;
  
  piVar2 = __errno_location();
  tz_00 = &tz->field_0x9;
  iVar3 = *piVar2;
  if (tz->tz_is_set == '\0') {
    tz_00 = (char *)0x0;
  }
  iVar1 = setenv_TZ(tz_00);
  if (iVar1 == 0) {
    tzset();
  }
  else {
    iVar3 = *piVar2;
  }
  tzfree(tz);
  *piVar2 = iVar3;
  return iVar1 == 0;
}

