
_Bool mktime_ok(tm *tm0,tm *tm1)

{
  _Bool _Var1;
  
  _Var1 = false;
  if (-1 < tm1->tm_wday) {
    _Var1 = (tm0->tm_sec ^ tm1->tm_sec | tm0->tm_min ^ tm1->tm_min | tm0->tm_hour ^ tm1->tm_hour |
             tm0->tm_mday ^ tm1->tm_mday | tm0->tm_mon ^ tm1->tm_mon | tm0->tm_year ^ tm1->tm_year)
            == 0;
  }
  return _Var1;
}

