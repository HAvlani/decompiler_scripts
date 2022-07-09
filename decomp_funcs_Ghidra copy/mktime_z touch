
/* WARNING: Could not reconcile some variable overlaps */

time_t mktime_z(timezone_t tz,tm *tm)

{
  long lVar1;
  _Bool _Var2;
  timezone_t tz_00;
  time_t tVar3;
  long in_FS_OFFSET;
  tm tm_1;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (tz == (timezone_t)0x0) {
    tVar3 = timegm((tm *)tm);
  }
  else {
    tz_00 = set_tz(tz);
    if (tz_00 != (timezone_t)0x0) {
      tm_1._0_8_ = *(undefined8 *)tm;
      tm_1.tm_yday = -1;
      tm_1._8_8_ = *(undefined8 *)&tm->tm_hour;
      tm_1._16_8_ = *(undefined8 *)&tm->tm_mon;
      tm_1.tm_isdst = tm->tm_isdst;
      tVar3 = mktime((tm *)&tm_1);
      if ((tm_1.tm_yday < 0) || (_Var2 = save_abbr(tz,&tm_1), _Var2 == false)) {
        if (tz_00 != (timezone_t)0x1) {
          revert_tz(tz_00);
        }
      }
      else if ((tz_00 == (timezone_t)0x1) || (_Var2 = revert_tz(tz_00), _Var2 != false)) {
        tm->tm_sec = tm_1.tm_sec;
        tm->tm_min = tm_1.tm_min;
        tm->tm_hour = tm_1.tm_hour;
        tm->tm_mday = tm_1.tm_mday;
        tm->tm_zone = tm_1.tm_zone;
        tm->tm_mon = tm_1.tm_mon;
        tm->tm_year = tm_1.tm_year;
        tm->tm_wday = tm_1.tm_wday;
        tm->tm_yday = tm_1.tm_yday;
        tm->tm_isdst = tm_1.tm_isdst;
        *(undefined4 *)&tm->field_0x24 = tm_1._36_4_;
        *(undefined4 *)&tm->tm_gmtoff = (undefined4)tm_1.tm_gmtoff;
        *(undefined4 *)((long)&tm->tm_gmtoff + 4) = tm_1.tm_gmtoff._4_4_;
        goto LAB_0010c260;
      }
    }
    tVar3 = -1;
  }
LAB_0010c260:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return tVar3;
}

