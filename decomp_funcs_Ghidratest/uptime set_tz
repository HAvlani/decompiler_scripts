
timezone_t set_tz(timezone_t tz)

{
  int iVar1;
  char *pcVar2;
  timezone_t tz_00;
  int *piVar3;
  
  pcVar2 = getenv("TZ");
  if (pcVar2 == (char *)0x0) {
    if (tz->tz_is_set == '\0') {
      return (timezone_t)0x1;
    }
  }
  else if (tz->tz_is_set != '\0') {
    iVar1 = strcmp(&tz->field_0x9,pcVar2);
    if (iVar1 == 0) {
      return (timezone_t)0x1;
    }
  }
  tz_00 = tzalloc(pcVar2);
  if (tz_00 != (timezone_t)0x0) {
    pcVar2 = (char *)0x0;
    if (tz->tz_is_set != '\0') {
      pcVar2 = &tz->field_0x9;
    }
    iVar1 = setenv_TZ(pcVar2);
    if (iVar1 == 0) {
      tzset();
      return tz_00;
    }
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    if (tz_00 != (timezone_t)0x1) {
      tzfree(tz_00);
    }
    *piVar3 = iVar1;
    tz_00 = (timezone_t)0x0;
  }
  return tz_00;
}

