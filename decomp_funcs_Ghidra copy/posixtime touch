
_Bool posixtime(time_t *p,char *s,uint syntax_bits)

{
  _Bool _Var1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  time_t tVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  tm tm0;
  tm tm1;
  int aiStack96 [2];
  int pair [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(s);
  sVar4 = sVar2;
  if ((syntax_bits & 4) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = strchr(s,0x2e);
    if ((pcVar3 != (char *)0x0) && (sVar4 = (long)pcVar3 - (long)s, sVar2 - sVar4 != 3))
    goto LAB_00109cb0;
  }
  if ((sVar4 - 8 < 5) && ((sVar4 & 1) == 0)) {
    lVar7 = 0;
    do {
      if (9 < (int)s[lVar7] - 0x30U) goto LAB_00109cb0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (long)sVar4);
    lVar8 = (long)sVar4 >> 1;
    lVar7 = 0;
    do {
      pair[lVar7] = s[lVar7 * 2 + 1] + -0x30 + (s[lVar7 * 2] * 5 + -0xf0) * 2;
      lVar7 = lVar7 + 1;
    } while (lVar8 != lVar7);
    uVar6 = (int)lVar8 - 4;
    if ((syntax_bits & 1) == 0) {
      _Var1 = year(&tm0.tm_year,(idx_t)pair,uVar6,(tm *)(ulong)syntax_bits);
      if (_Var1 == false) goto LAB_00109cb0;
      tm0.tm_mon = aiStack96[lVar8 + -2] + -1;
      tm0.tm_mday = aiStack96[lVar8 + -1];
      tm0.tm_hour = aiStack96[lVar8];
      tm0.tm_min = aiStack96[lVar8 + 1];
    }
    else {
      tm0.tm_mon = pair[0] + -1;
      tm0.tm_mday = pair[1];
      tm0.tm_hour = pair[2];
      tm0.tm_min = pair[3];
      _Var1 = year(&tm0.tm_year,(idx_t)(pair + 4),uVar6,(tm *)(ulong)syntax_bits);
      if (_Var1 == false) goto LAB_00109cb0;
    }
    if (pcVar3 == (char *)0x0) {
      tm0.tm_sec = 0;
    }
    else {
      if ((9 < (int)pcVar3[1] - 0x30U) || (9 < (int)pcVar3[2] - 0x30U)) goto LAB_00109cb0;
      tm0.tm_sec = pcVar3[2] + -0x30 + ((int)pcVar3[1] - 0x30U) * 10;
    }
    uVar6 = 0;
    while( true ) {
      tm1.tm_mday = tm0.tm_mday;
      tm1.tm_min = tm0.tm_min;
      tm1.tm_hour = tm0.tm_hour;
      tm1.tm_mon = tm0.tm_mon;
      tm1.tm_year = tm0.tm_year;
      tm1.tm_wday = -1;
      tm1.tm_isdst = -1;
      tm1.tm_sec = tm0.tm_sec;
      tVar5 = mktime((tm *)&tm1);
      if (tm1.tm_wday < 0) break;
      if ((tm1.tm_year ^ tm0.tm_year | tm1.tm_mon ^ tm0.tm_mon | tm1.tm_mday ^ tm0.tm_mday |
           tm1.tm_hour ^ tm0.tm_hour | tm1.tm_min ^ tm0.tm_min | tm1.tm_sec ^ tm0.tm_sec) == 0) {
        if (!SCARRY8(tVar5,(ulong)uVar6)) {
          *p = tVar5 + (ulong)uVar6;
          _Var1 = true;
          goto LAB_00109cb2;
        }
        break;
      }
      if (tm0.tm_sec != 0x3c) break;
      tm0.tm_sec = 0x3b;
      uVar6 = 1;
    }
  }
LAB_00109cb0:
  _Var1 = false;
LAB_00109cb2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var1;
}

