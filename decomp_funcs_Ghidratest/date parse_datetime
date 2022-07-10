
_Bool parse_datetime(timespec *result,char *p,timespec *now)

{
  undefined uVar1;
  char *name;
  timezone_t tzdefault;
  
  uVar1 = 0;
  name = getenv("TZ");
  tzdefault = tzalloc(name);
  if (tzdefault != (timezone_t)0x0) {
    uVar1 = parse_datetime_body(result,p,now,0,tzdefault,name);
    tzfree(tzdefault);
  }
  return (_Bool)uVar1;
}

