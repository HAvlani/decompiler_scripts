
tm * localtime_rz(timezone_t tz,time_t *t,tm *tm)

{
  _Bool _Var1;
  tm *ptVar2;
  timezone_t tz_00;
  tm *ptVar3;
  
  if (tz == (timezone_t)0x0) {
    ptVar2 = (tm *)(*(code *)PTR_gmtime_r_00116e28)(t,tm);
    return ptVar2;
  }
  tz_00 = set_tz(tz);
  if (tz_00 != (timezone_t)0x0) {
    ptVar3 = localtime_r(t,(tm *)tm);
    if ((ptVar3 == (tm *)0x0) || (_Var1 = save_abbr(tz,tm), _Var1 == false)) {
      if (tz_00 != (timezone_t)0x1) {
        revert_tz(tz_00);
      }
    }
    else if ((tz_00 == (timezone_t)0x1) || (_Var1 = revert_tz(tz_00), _Var1 != false)) {
      return tm;
    }
  }
  return (tm *)0x0;
}

