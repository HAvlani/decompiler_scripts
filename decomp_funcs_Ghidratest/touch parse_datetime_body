
/* WARNING: Could not reconcile some variable overlaps */

_Bool parse_datetime_body(timespec *result,char *p,timespec *now,uint flags,timezone_t tzdefault,
                         char *tzstring)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  __time_t _Var5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  intmax_t iVar12;
  idx_t iVar13;
  byte bVar14;
  _Bool _Var15;
  char cVar16;
  size_t sVar17;
  tm *ptVar18;
  char *pcVar19;
  char *pcVar20;
  long lVar21;
  timezone_t tz;
  byte *pbVar22;
  tm *ptVar23;
  timezone_t tz_00;
  intmax_t iVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  uint n;
  int n_00;
  int iVar28;
  ulong uVar29;
  char *pcVar30;
  FILE *pFVar31;
  intmax_t iVar32;
  int extraout_EDX;
  int extraout_EDX_00;
  int n_01;
  int n_02;
  int extraout_EDX_01;
  long lVar33;
  char cVar34;
  byte *pbVar35;
  char *pcVar36;
  size_t __size;
  char *pcVar37;
  char *pcVar38;
  __syscall_slong_t _Var39;
  int iVar40;
  int iVar41;
  byte *pbVar42;
  long in_FS_OFFSET;
  bool bVar43;
  bool bVar44;
  byte bVar45;
  undefined8 uVar46;
  byte *local_488;
  byte *local_480;
  time_t local_478;
  ulong local_470;
  timespec gettime_buffer;
  tm tm;
  tm tm0;
  tm tmp;
  time_t probe;
  tm probe_tm;
  parser_control pc;
  char tm_year_buf [13];
  char time_zone_buf [27];
  char dbg_tm [100];
  char tz1buf [100];
  char cStack169;
  char dbg_ord [100];
  
  bVar45 = 0;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  sVar17 = strlen(p);
  if (now == (timespec *)0x0) {
    now = &gettime_buffer;
    gettime(now);
  }
  _Var39 = now->tv_nsec;
  lVar21 = now->tv_sec;
  pbVar42 = (byte *)p;
  do {
    bVar3 = *pbVar42;
    if ((char)bVar3 < '\x0e') {
      bVar43 = bVar3 < 8;
      bVar44 = bVar3 == 8;
      if ((char)bVar3 < '\t') goto LAB_00107b15;
    }
    else {
      bVar43 = bVar3 < 0x20;
      bVar44 = bVar3 == 0x20;
      if (!bVar44) goto LAB_00107b15;
    }
    pbVar42 = pbVar42 + 1;
  } while( true );
joined_r0x001083b8:
  while (bVar3 != 0x22) {
    pbVar42 = pbVar42 + (bVar3 == 0x5c);
    uVar29 = (ulong)*pbVar42;
    bVar3 = pbVar42[1];
    *pbVar22 = *pbVar42;
    pbVar42 = pbVar42 + 1;
    pbVar22 = pbVar22 + 1;
  }
  *pbVar22 = 0;
  tz = tzalloc((char *)local_480);
  if (tz == (timezone_t)0x0) {
    pc.timespec_seen = false;
    goto LAB_001082f0;
  }
  do {
    while( true ) {
      pbVar42 = pbVar42 + 1;
      bVar3 = *pbVar42;
      if ('\r' < (char)bVar3) break;
      if ((char)bVar3 < '\t') goto LAB_00108420;
    }
  } while (bVar3 == 0x20);
LAB_00108420:
  ptVar18 = localtime_rz(tz,&now->tv_sec,&tmp);
  if (ptVar18 != (tm *)0x0) goto LAB_00107baf;
  goto LAB_001082e0;
LAB_00107b15:
  uVar29 = 4;
  pbVar35 = pbVar42;
  pbVar22 = &DAT_00112bb3;
  do {
    if (uVar29 == 0) break;
    uVar29 = uVar29 - 1;
    bVar43 = *pbVar35 < *pbVar22;
    bVar44 = *pbVar35 == *pbVar22;
    pbVar35 = pbVar35 + (ulong)bVar45 * -2 + 1;
    pbVar22 = pbVar22 + (ulong)bVar45 * -2 + 1;
  } while (bVar44);
  if ((!bVar43 && !bVar44) == bVar43) {
    bVar3 = pbVar42[4];
    pbVar35 = pbVar42 + 4;
    if (bVar3 != 0) {
      __size = 1;
      pbVar22 = pbVar35;
      bVar14 = bVar3;
      do {
        if (bVar14 == 0x5c) {
          pbVar1 = pbVar22 + 1;
          pbVar2 = pbVar22 + 1;
          pbVar22 = pbVar1;
          if ((*pbVar2 != 0x5c) && (*pbVar2 != 0x22)) break;
        }
        else if (bVar14 == 0x22) {
          pbVar22 = (byte *)tz1buf;
          local_488 = (byte *)0x0;
          pbVar42 = pbVar35;
          local_480 = pbVar22;
          if (((long)__size < 0x65) ||
             (pbVar22 = (byte *)malloc(__size), local_480 = pbVar22, local_488 = pbVar22,
             pbVar22 != (byte *)0x0)) goto joined_r0x001083b8;
          goto LAB_00108570;
        }
        bVar14 = pbVar22[1];
        __size = __size + 1;
        pbVar22 = pbVar22 + 1;
      } while (bVar14 != 0);
    }
  }
  ptVar18 = localtime_rz(tzdefault,&now->tv_sec,&tmp);
  if (ptVar18 == (tm *)0x0) {
LAB_00108570:
    local_488 = (byte *)0x0;
    pc.timespec_seen = false;
    goto LAB_001082f0;
  }
  local_488 = (byte *)0x0;
  tz = tzdefault;
  local_480 = (byte *)tzstring;
LAB_00107baf:
  pc.year.digits = 0;
  pc.meridian = 2;
  if (*pbVar42 == 0) {
    pbVar42 = &DAT_00112c2b;
  }
  pc.rel.year = 0;
  local_470._0_4_ = (int)_Var39;
  pc.seconds.tv_nsec = (__syscall_slong_t)(int)local_470;
  pc.year.value = (long)tmp.tm_year + 0x76c;
  pc.parse_datetime_debug = (_Bool)((byte)flags & 1);
  pc.rel.month = 0;
  pc.rel.day = 0;
  pc.month = (intmax_t)(tmp.tm_mon + 1);
  pc.day = (intmax_t)tmp.tm_mday;
  pc.rel.hour = 0;
  pc.hour = (intmax_t)tmp.tm_hour;
  pc.rel.minutes = 0;
  pc.minutes = (intmax_t)tmp.tm_min;
  pc.rel.seconds = 0;
  pc.seconds.tv_sec = (__time_t)tmp.tm_sec;
  pc.rel.ns = 0;
  pc._160_2_ = 0;
  tm.tm_isdst = tmp.tm_isdst;
  pc.dates_seen = 0;
  pc.days_seen = 0;
  pc.times_seen = 0;
  pc.local_zones_seen = 0;
  pc.dsts_seen = 0;
  pc.zones_seen = 0;
  pc.year_seen = false;
  pc._220_4_ = 0;
  pc.debug_ordinal_day_seen = false;
  pc.local_time_zone_table[0].name = tmp.tm_zone;
  pc.local_time_zone_table[0].type = 0x10d;
  pc.local_time_zone_table[0].value = tmp.tm_isdst;
  pc.local_time_zone_table[1].name = (char *)0x0;
  pc._218_2_ = 0;
  iVar40 = 0x76a700;
  pc.input = (char *)pbVar42;
  do {
    iVar41 = (int)uVar29;
    probe = iVar40 + lVar21;
    if (SCARRY8((long)iVar40,lVar21)) break;
    ptVar18 = localtime_rz(tz,&probe,&probe_tm);
    iVar41 = (int)uVar29;
    if (((ptVar18 != (tm *)0x0) && (probe_tm.tm_zone != (char *)0x0)) &&
       (probe_tm.tm_isdst != pc.local_time_zone_table[0].value)) {
      pc.local_time_zone_table[1].type = 0x10d;
      pc.local_time_zone_table[2].name = (char *)0x0;
      pc.local_time_zone_table[1].name = probe_tm.tm_zone;
      break;
    }
    iVar40 = iVar40 + 0x76a700;
  } while (iVar40 != 0x1da9c00);
  if (((pc.local_time_zone_table[0].name != (char *)0x0) &&
      (pc.local_time_zone_table[1].name != (char *)0x0)) &&
     (iVar40 = strcmp(pc.local_time_zone_table[0].name,pc.local_time_zone_table[1].name),
     iVar40 == 0)) {
    pc.local_time_zone_table[0].value = -1;
    pc.local_time_zone_table[1].name = (char *)0x0;
  }
  iVar40 = yyparse(&pc);
  pcVar20 = pc.input;
  if (iVar40 == 0) {
    if (pc.parse_datetime_debug == false) {
      if (pc.timespec_seen != false) {
        *(undefined4 *)&result->tv_sec = (undefined4)pc.seconds.tv_sec;
        *(undefined4 *)((long)&result->tv_sec + 4) = pc.seconds.tv_sec._4_4_;
        *(undefined4 *)&result->tv_nsec = (undefined4)pc.seconds.tv_nsec;
        *(undefined4 *)((long)&result->tv_nsec + 4) = pc.seconds.tv_nsec._4_4_;
        goto fail;
      }
      if (1 < (pc.times_seen | pc.dates_seen | pc.days_seen | pc.dsts_seen |
              pc.zones_seen + pc.local_zones_seen)) goto LAB_001082e0;
LAB_00107e72:
      iVar24 = pc.year.value;
      uVar29 = pc.year.value;
      if (pc.year.value < 0) {
        lVar21 = -0x76c - pc.year.value;
        tm._16_8_ = tm._16_8_ & 0xffffffff | lVar21 << 0x20;
        cVar34 = lVar21 != (int)lVar21 || SBORROW8(-0x76c,pc.year.value);
      }
      else {
        if (pc.year.digits == 2) {
          lVar21 = 2000;
          if (0x44 < pc.year.value) {
            lVar21 = 0x76c;
          }
          uVar29 = lVar21 + pc.year.value;
          if (pc.timespec_seen != false) {
            pcVar19 = (char *)dcgettext(0,"warning: adjusting year value %ld to %ld\n",5);
            dbg_printf(pcVar19,iVar24,uVar29);
          }
        }
        cVar34 = false;
        lVar21 = uVar29 - 0x76c;
        if (uVar29 < 0x76c) {
          cVar34 = false;
          if (-1 < lVar21) {
LAB_0010890f:
            cVar34 = true;
          }
        }
        else if (lVar21 < 0) goto LAB_0010890f;
        tm._16_8_ = CONCAT44((int)lVar21,tm.tm_mon);
        if (lVar21 != (int)lVar21) {
          cVar34 = true;
        }
      }
      iVar24 = pc.hour;
      if ((bool)cVar34 == false) {
        uVar29 = pc.month - 1;
        tm.tm_mon = (int)uVar29;
        tm._16_8_ = tm._16_8_ & 0xffffffff00000000 | uVar29 & 0xffffffff;
        uVar26 = (ulong)pc.parse_datetime_debug;
        if (uVar29 != (long)tm.tm_mon || SCARRY8(pc.month,-1)) goto LAB_001089b1;
        tm.tm_mday = (int)pc.day;
        tm._8_8_ = tm._8_8_ & 0xffffffff | pc.day << 0x20;
        if (pc.day != tm.tm_mday) goto LAB_001089b1;
        if (pc.times_seen == 0) {
          if ((pc.rels_seen == false) || (pc.dates_seen != 0)) {
            tm._0_8_ = 0;
            tm._8_8_ = pc.day << 0x20;
            pc.seconds.tv_nsec = 0;
            if (pc.parse_datetime_debug != false) {
LAB_001095dd:
              tm._8_8_ = pc.day << 0x20;
              pc.seconds.tv_nsec = 0;
              tm._0_8_ = 0;
              dbg_printf("warning: using midnight as starting time: 00:00:00\n");
              goto LAB_001095eb;
            }
            tm.tm_hour = 0;
            tm.tm_min = 0;
            tm.tm_sec = 0;
            goto LAB_00108ca5;
          }
          if (pc.days_seen == 0) goto LAB_00108c43;
          tm._0_8_ = 0;
          tm._8_8_ = pc.day << 0x20;
          pc.seconds.tv_nsec = 0;
          if (pc.parse_datetime_debug != false) goto LAB_001095dd;
          tm.tm_hour = 0;
          tm.tm_min = 0;
          tm.tm_sec = 0;
LAB_00107f8d:
          tm.tm_isdst = -1;
        }
        else {
LAB_00108c43:
          uVar29 = (ulong)(uint)pc.meridian;
          if (pc.meridian != 0) {
            if (pc.meridian == 1) {
              uVar29 = (ulong)((int)pc.hour + 0xc);
              if (pc.hour - 1U < 0xb) goto LAB_00108c73;
              if (pc.hour == 0xc) {
                tm._8_8_ = CONCAT44(tm.tm_mday,0xc);
                uVar29 = 0xc;
                goto LAB_00108c78;
              }
              pcVar19 = "pm";
            }
            else {
              if ((ulong)pc.hour < 0x18) goto LAB_00108c70;
              pcVar19 = "";
            }
LAB_00109777:
            tm._8_8_ = CONCAT44(tm.tm_mday,0xffffffff);
            if (pc.parse_datetime_debug != false) {
              pcVar20 = (char *)dcgettext(0,"error: invalid hour %ld%s\n",5);
              dbg_printf(pcVar20,iVar24,pcVar19);
            }
            goto LAB_001082e0;
          }
          if (pc.hour - 1U < 0xb) {
LAB_00108c70:
            uVar29 = pc.hour & 0xffffffff;
LAB_00108c73:
            tm._8_8_ = pc.day << 0x20 | uVar29;
          }
          else {
            if (pc.hour != 0xc) {
              pcVar19 = "am";
              goto LAB_00109777;
            }
            tm._8_8_ = pc.day << 0x20;
          }
LAB_00108c78:
          tm.tm_min = (int)pc.minutes;
          tm.tm_sec = (int)pc.seconds.tv_sec;
          tm._0_8_ = pc.seconds.tv_sec & 0xffffffffU | pc.minutes << 0x20;
          if (pc.parse_datetime_debug == false) {
          }
          else {
            __snprintf_chk(dbg_tm,100,1,100,"%02d:%02d:%02d",uVar29,pc.minutes,pc.seconds.tv_sec);
            if (pc.times_seen == 0) {
              pcVar19 = (char *)dcgettext(0,"using current time as starting value: \'%s\'\n",5);
            }
            else {
              pcVar19 = (char *)dcgettext(0,"using specified time as starting value: \'%s\'\n",5);
            }
            dbg_printf(pcVar19);
LAB_001095eb:
          }
LAB_00108ca5:
          uVar26 = pc.dates_seen | pc.days_seen | pc.times_seen;
          if (uVar26 != 0) goto LAB_00107f8d;
        }
        iVar40 = (int)uVar26;
        if (pc.local_zones_seen != 0) {
          tm.tm_isdst = pc.local_isdst;
        }
        tm0.tm_year = tm.tm_year;
        tm.tm_wday = -1;
        tm0.tm_sec = tm.tm_sec;
        tm0.tm_min = tm.tm_min;
        tm0.tm_hour = tm.tm_hour;
        tm0.tm_mday = tm.tm_mday;
        tm0.tm_mon = tm.tm_mon;
        tm0.tm_isdst = tm.tm_isdst;
        local_478 = mktime_z(tz,&tm);
        _Var15 = mktime_ok(&tm0,&tm);
        iVar13 = pc.zones_seen;
        iVar41 = extraout_EDX;
        if (_Var15 == false) {
          if (pc.zones_seen != 0) {
            dbg_ord[2] = 'X';
            dbg_ord._0_2_ = 0x5858;
            time_zone_str(pc.time_zone,dbg_ord + 3);
            tz_00 = tzalloc(dbg_ord);
            if (tz_00 == (timezone_t)0x0) {
              if (pc.parse_datetime_debug != false) {
                pcVar19 = (char *)dcgettext(0,"error: tzalloc (\"%s\") failed\n",5);
                dbg_printf(pcVar19,dbg_ord);
              }
              goto LAB_001082e0;
            }
            tm._0_8_ = CONCAT44(tm0.tm_min,tm0.tm_sec);
            tm.tm_wday = -1;
            tm._8_8_ = CONCAT44(tm0.tm_mday,tm0.tm_hour);
            tm._16_8_ = CONCAT44(tm0.tm_year,tm0.tm_mon);
            tm.tm_isdst = tm0.tm_isdst;
            local_478 = mktime_z(tz_00,&tm);
            _Var15 = mktime_ok(&tm0,&tm);
            tzfree(tz_00);
            iVar41 = extraout_EDX_00;
            if (_Var15 != false) goto LAB_00108afc;
          }
          iVar11 = tm0.tm_year;
          iVar10 = tm0.tm_mon;
          iVar9 = tm0.tm_mday;
          iVar8 = tm0.tm_hour;
          iVar7 = tm0.tm_min;
          iVar28 = tm0.tm_sec;
          iVar27 = (int)tm._8_8_;
          iVar6 = (int)(tm._8_8_ >> 0x20);
          iVar41 = (int)tm._16_8_;
          iVar40 = (int)(tm._16_8_ >> 0x20);
          if ((tm0.tm_sec == tm.tm_sec) && (tm0.tm_min == tm.tm_min)) {
            if ((((tm0.tm_mday == iVar6) && (tm0.tm_hour != iVar27)) && (tm0.tm_mon == iVar41)) &&
               (tm0.tm_year == iVar40)) {
              if (pc.parse_datetime_debug != false) {
                iVar27 = tm0.tm_min;
                pcVar19 = (char *)dcgettext(0,"error: invalid date/time value:\n",5);
                dbg_printf(pcVar19);
                pcVar19 = debug_strfdatetime(&tm0,&pc,dbg_ord,iVar27);
                pcVar20 = (char *)dcgettext(0,"    user provided time: \'%s\'\n",5);
                dbg_printf(pcVar20,pcVar19);
                pcVar19 = debug_strfdatetime(&tm,&pc,dbg_ord,iVar27);
                pcVar20 = (char *)dcgettext(0,"       normalized time: \'%s\'\n",5);
                uVar46 = 0x10818b;
                dbg_printf(pcVar20,pcVar19);
                pcVar20 = "";
                pcVar36 = "--";
                pcVar19 = "";
                bVar44 = true;
LAB_0010819c:
                bVar43 = bVar44;
                pcVar30 = "";
                goto LAB_001081a3;
              }
            }
            else if (pc.parse_datetime_debug != false) {
              iVar28 = tm0.tm_min;
              pcVar19 = (char *)dcgettext(0,"error: invalid date/time value:\n",5);
              dbg_printf(pcVar19);
              pcVar19 = debug_strfdatetime(&tm0,&pc,dbg_ord,iVar28);
              pcVar20 = (char *)dcgettext(0,"    user provided time: \'%s\'\n",5);
              dbg_printf(pcVar20,pcVar19);
              pcVar19 = debug_strfdatetime(&tm,&pc,dbg_ord,iVar28);
              pcVar20 = (char *)dcgettext(0,"       normalized time: \'%s\'\n",5);
              uVar46 = 0x1099b7;
              dbg_printf(pcVar20,pcVar19);
              pcVar19 = "";
              pcVar20 = pcVar19;
              goto LAB_00109878;
            }
          }
          else if (pc.parse_datetime_debug != false) {
            n_00 = tm0.tm_min;
            pcVar19 = (char *)dcgettext(0,"error: invalid date/time value:\n",5);
            dbg_printf(pcVar19);
            pcVar19 = debug_strfdatetime(&tm0,&pc,dbg_ord,n_00);
            pcVar20 = (char *)dcgettext(0,"    user provided time: \'%s\'\n",5);
            dbg_printf(pcVar20,pcVar19);
            pcVar19 = debug_strfdatetime(&tm,&pc,dbg_ord,n_00);
            pcVar20 = (char *)dcgettext(0,"       normalized time: \'%s\'\n",5);
            uVar46 = 0x109849;
            dbg_printf(pcVar20,pcVar19);
            if (iVar28 == tm.tm_sec) {
              pcVar19 = "";
              pcVar20 = "--";
            }
            else {
              pcVar19 = "--";
              pcVar20 = pcVar19;
              if (iVar7 == tm.tm_min) {
                pcVar20 = "";
              }
            }
LAB_00109878:
            pcVar30 = "--";
            pcVar36 = "";
            if (iVar8 != iVar27) {
              pcVar36 = "--";
            }
            bVar43 = false;
            bVar44 = false;
            if (iVar9 == iVar6) goto LAB_0010819c;
LAB_001081a3:
            pcVar37 = "--";
            if (iVar10 == iVar41) {
              pcVar37 = "";
            }
            pcVar38 = "----";
            if (iVar11 == iVar40) {
              pcVar38 = "";
            }
            __snprintf_chk(dbg_ord,100,1,100,
                           "                                 %4s %2s %2s %2s %2s %2s",pcVar38,
                           pcVar37,pcVar30,pcVar36,pcVar20,pcVar19,uVar46);
            lVar21 = 0x34;
            do {
              lVar33 = (long)(int)lVar21;
              if (lVar21 == 0) {
                lVar33 = 0;
                break;
              }
              lVar21 = lVar21 + -1;
            } while (dbg_ord[lVar21] == ' ');
            dbg_ord[lVar33] = '\0';
            dbg_printf("%s\n",dbg_ord);
            pcVar19 = (char *)dcgettext(0,"     possible reasons:\n",5);
            dbg_printf(pcVar19);
            if (bVar43) {
              pcVar19 = (char *)dcgettext(0,"       non-existing due to daylight-saving time;\n",5);
              dbg_printf(pcVar19);
            }
            if ((iVar9 != iVar6) && (iVar10 != iVar41)) {
              pcVar19 = (char *)dcgettext(0,"       invalid day/month combination;\n",5);
              dbg_printf(pcVar19);
            }
            pcVar19 = (char *)dcgettext(0,"       numeric values overflow;\n",5);
            dbg_printf(pcVar19);
            if (iVar13 == 0) {
              uVar46 = dcgettext(0,"missing timezone",5);
            }
            else {
              uVar46 = dcgettext(0,"incorrect timezone",5);
            }
            dbg_printf("       %s\n",uVar46);
          }
          goto LAB_001082e0;
        }
LAB_00108afc:
        if (pc.days_seen != 0) {
          if (pc.dates_seen == 0) {
            tm.tm_yday = -1;
            iVar24 = pc.day_ordinal;
            if (0 < pc.day_ordinal) {
              iVar24 = pc.day_ordinal - (ulong)(tm.tm_wday != pc.day_number);
            }
            lVar21 = iVar24 * 7;
            if ((SEXT816(lVar21) == SEXT816(iVar24) * SEXT816(7)) &&
               (lVar33 = (long)(((pc.day_number - tm.tm_wday) + 7) % 7), lVar25 = lVar33 + lVar21,
               !SCARRY8(lVar33,lVar21))) {
              lVar33 = lVar25 + tm.tm_mday;
              tm._8_8_ = tm._8_8_ & 0xffffffff | lVar33 << 0x20;
              lVar21 = 1;
              if (lVar33 == (int)lVar33 && !SCARRY8(lVar25,(long)tm.tm_mday)) {
                tm.tm_isdst = -1;
                local_478 = mktime_z(tz,&tm);
                iVar40 = (int)lVar21;
                if (-1 < tm.tm_yday) {
                  if (pc.parse_datetime_debug != false) {
                    pcVar19 = debug_strfdatetime(&tm,&pc,dbg_tm,iVar40);
                    pcVar20 = str_days(&pc,dbg_ord,n_02);
                    pcVar30 = (char *)dcgettext(0,"new start date: \'%s\' is \'%s\'\n",5);
                    dbg_printf(pcVar30,pcVar20,pcVar19);
                    iVar41 = extraout_EDX_01;
                    goto LAB_00108d64;
                  }
                  goto LAB_00109147;
                }
              }
            }
            if (pc.parse_datetime_debug != false) {
              pcVar19 = debug_strfdatetime(&tm,&pc,dbg_tm,(int)lVar21);
              pcVar20 = str_days(&pc,dbg_ord,n_01);
              pcVar30 = (char *)dcgettext(0,
                                          "error: day \'%s\' (day ordinal=%ld number=%d) resulted in an invalid date: \'%s\'\n"
                                          ,5);
              dbg_printf(pcVar30,pcVar20,pc.day_ordinal,(ulong)(uint)pc.day_number,pcVar19);
            }
            goto LAB_001082e0;
          }
          if (pc.parse_datetime_debug == false) goto LAB_00109147;
LAB_00109567:
          pcVar19 = str_days(&pc,dbg_ord,iVar41);
          pcVar20 = (char *)dcgettext(0,"warning: day (%s) ignored when explicit dates are given\n",
                                      5);
          dbg_printf(pcVar20,pcVar19);
LAB_00108d9a:
          pcVar19 = debug_strfdatetime(&tm,&pc,dbg_tm,iVar40);
          pcVar20 = (char *)dcgettext(0,"starting date/time: \'%s\'\n",5);
          dbg_printf(pcVar20,pcVar19);
          uVar29 = pc.rel.day;
          if ((pc.rel.year | pc.rel.month | pc.rel.day) != 0) {
            if (pc.parse_datetime_debug == false) goto LAB_0010916b;
            if ((pc.rel.year | pc.rel.month) == 0) {
LAB_00109687:
              if (tm.tm_hour != 0xc) {
                pcVar19 = (char *)dcgettext(0,
                                            "warning: when adding relative days, it is recommended to specify noon\n"
                                            ,5);
                dbg_printf(pcVar19);
              }
            }
            else {
              if (tm.tm_mday != 0xf) {
                pcVar19 = (char *)dcgettext(0,
                                            "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n"
                                            ,5);
                dbg_printf(pcVar19);
              }
              if (pc.rel.day != 0) goto LAB_00109687;
            }
            local_470 = tm.tm_year + pc.rel.year;
            if ((local_470 == (long)(int)local_470) &&
               (SCARRY8((long)tm.tm_year,pc.rel.year) == false)) goto LAB_00108e78;
LAB_001091c4:
            if (pc.parse_datetime_debug != false) {
              pcVar19 = (char *)dcgettext(0,"error: %s:%d\n",5);
              dbg_printf(pcVar19,"parse-datetime.y",0x864);
            }
            goto LAB_001082e0;
          }
LAB_001094e6:
          n = (uint)uVar29;
          cVar16 = pc.parse_datetime_debug;
          if (pc.zones_seen != 0) {
LAB_001094f5:
            uVar29 = (ulong)pc.time_zone;
            bVar43 = SBORROW8(local_478,uVar29 - tm.tm_gmtoff);
            local_478 = local_478 - (uVar29 - tm.tm_gmtoff);
            bVar3 = SBORROW8(uVar29,tm.tm_gmtoff) | bVar43;
            if (bVar3 != 0) {
              if (cVar16 != '\0') {
                pcVar19 = (char *)dcgettext(0,"error: timezone %d caused time_t overflow\n",5);
                dbg_printf(pcVar19,uVar29 & 0xffffffff);
              }
              goto LAB_001082e0;
            }
LAB_00108f81:
            n = (uint)bVar3;
          }
          if (cVar16 == '\0') goto LAB_00109200;
          pcVar19 = debug_strfdatetime(&tm,&pc,dbg_tm,n);
          pcVar20 = (char *)dcgettext(0,"\'%s\' = %ld epoch-seconds\n",5);
          dbg_printf(pcVar20,pcVar19,local_478);
          lVar21 = pc.rel.hour * 0xe10;
          cVar34 = pc.parse_datetime_debug;
          if (SEXT816(lVar21) == SEXT816(pc.rel.hour) * SEXT416(0xe10)) {
            uVar29 = (ulong)pc.rel.ns;
            uVar26 = (long)(pc.seconds.tv_nsec + uVar29) % 1000000000 + 1000000000;
            _Var39 = uVar26 + ((uVar26 >> 9) / 0x1dcd65) * -1000000000;
            iVar40 = (int)((long)((pc.seconds.tv_nsec + uVar29) - _Var39) / 1000000000);
            lVar33 = local_478 + lVar21;
            if ((!SCARRY8(local_478,lVar21)) &&
               (lVar21 = pc.rel.minutes * 0x3c,
               SEXT816(lVar21) == SEXT816(pc.rel.minutes) * SEXT816(0x3c))) goto LAB_00109091;
          }
LAB_001095ae:
          if (cVar34 == '\0') goto LAB_001082e0;
          pcVar19 = "error: adding relative time caused an overflow\n";
          goto LAB_001089c5;
        }
LAB_00108d64:
        if (pc.parse_datetime_debug != false) {
          lVar21 = pc.days_seen;
          if (pc.dates_seen == 0) {
            if (pc.days_seen == 0) {
              iVar40 = (int)(tm._8_8_ >> 0x20);
              iVar41 = tm.tm_mon + 1;
              pcVar19 = tm_year_str(tm.tm_year,tm_year_buf);
              __snprintf_chk(dbg_tm,100,1,100,"(Y-M-D) %s-%02d-%02d",pcVar19);
              pcVar19 = (char *)dcgettext(0,"using current date as starting value: \'%s\'\n",5);
              dbg_printf(pcVar19,dbg_tm);
              lVar21 = pc.dates_seen;
              if (pc.days_seen != 0) goto joined_r0x00109614;
            }
          }
          else {
joined_r0x00109614:
            if (lVar21 != 0) goto LAB_00109567;
          }
          goto LAB_00108d9a;
        }
LAB_00109147:
        if ((pc.rel.month | pc.rel.year | pc.rel.day) != 0) {
LAB_0010916b:
          local_470 = tm.tm_year + pc.rel.year;
          if ((local_470 != (long)(int)local_470) ||
             (SCARRY8((long)tm.tm_year,pc.rel.year) != false)) goto LAB_001082e0;
LAB_00108e78:
          local_470 = local_470 & 0xffffffff;
          uVar26 = tm.tm_mon + pc.rel.month;
          iVar40 = (int)uVar26;
          if ((uVar26 == (long)iVar40) && (SCARRY8((long)tm.tm_mon,pc.rel.month) == false)) {
            lVar21 = tm.tm_mday + pc.rel.day;
            iVar41 = (int)lVar21;
            if ((lVar21 == iVar41) && (SCARRY8((long)tm.tm_mday,pc.rel.day) == false)) {
              tm.tm_wday = -1;
              tm._16_8_ = uVar26 & 0xffffffff | local_470 << 0x20;
              tm._0_8_ = CONCAT44(tm0.tm_min,tm0.tm_sec);
              tm._8_8_ = CONCAT44(iVar41,tm0.tm_hour);
              tm.tm_isdst = tm0.tm_isdst;
              local_478 = mktime_z(tz,&tm);
              uVar29 = pc.rel.day;
              iVar12 = pc.rel.month;
              iVar24 = pc.rel.year;
              if (tm.tm_wday < 0) {
                if (pc.parse_datetime_debug != false) {
                  pcVar19 = debug_strfdatetime(&tm,&pc,dbg_tm,(int)uVar26);
                  pcVar20 = (char *)dcgettext(0,
                                              "error: adding relative date resulted in an invalid date: \'%s\'\n"
                                              ,5);
                  dbg_printf(pcVar20,pcVar19);
                }
              }
              else {
                if (pc.parse_datetime_debug != false) {
                  pcVar19 = (char *)dcgettext(0,
                                              "after date adjustment (%+ld years, %+ld months, %+ld days),\n"
                                              ,5);
                  dbg_printf(pcVar19,iVar24,iVar12);
                  pcVar19 = debug_strfdatetime(&tm,&pc,dbg_tm,(int)uVar29);
                  pcVar20 = (char *)dcgettext(0,"    new date/time = \'%s\'\n",5);
                  dbg_printf(pcVar20,pcVar19);
                  if ((tm0.tm_isdst != -1) && (tm0.tm_isdst != tm.tm_isdst)) {
                    pcVar19 = (char *)dcgettext(0,
                                                "warning: daylight saving time changed after date adjustment\n"
                                                ,5);
                    dbg_printf(pcVar19);
                  }
                  if ((pc.rel.day == 0) &&
                     ((iVar41 != tm.tm_mday || ((pc.rel.month == 0 && (iVar40 != tm.tm_mon)))))) {
                    pcVar19 = (char *)dcgettext(0,
                                                "warning: month/year adjustment resulted in shifted dates:\n"
                                                ,5);
                    dbg_printf(pcVar19);
                    pcVar19 = tm_year_str((int)local_470,tm_year_buf);
                    pcVar20 = (char *)dcgettext(0,"     adjusted Y M D: %s %02d %02d\n",5);
                    dbg_printf(pcVar20,pcVar19,(ulong)(iVar40 + 1));
                    uVar29 = tm._8_8_ >> 0x20;
                    pcVar19 = tm_year_str(tm.tm_year,tm_year_buf);
                    pcVar20 = (char *)dcgettext(0,"   normalized Y M D: %s %02d %02d\n",5);
                    dbg_printf(pcVar20,pcVar19,tm.tm_mon + 1);
                  }
                  goto LAB_001094e6;
                }
                if (pc.zones_seen == 0) goto LAB_00109200;
                lVar21 = pc.time_zone - tm.tm_gmtoff;
                bVar43 = SBORROW8(local_478,lVar21);
                local_478 = local_478 - lVar21;
                bVar3 = SBORROW8((long)pc.time_zone,tm.tm_gmtoff) | bVar43;
                cVar16 = pc.parse_datetime_debug;
                if (bVar3 == 0) goto LAB_00108f81;
              }
              goto LAB_001082e0;
            }
          }
          goto LAB_001091c4;
        }
        if (pc.zones_seen != 0) {
          cVar16 = '\0';
          goto LAB_001094f5;
        }
LAB_00109200:
        lVar21 = pc.rel.hour * 0xe10;
        if (SEXT816(lVar21) == SEXT816(pc.rel.hour) * SEXT416(0xe10)) {
          uVar29 = (ulong)pc.rel.ns;
          uVar26 = (long)(pc.seconds.tv_nsec + uVar29) % 1000000000 + 1000000000;
          _Var39 = uVar26 + ((uVar26 >> 9) / 0x1dcd65) * -1000000000;
          iVar40 = (int)((long)((pc.seconds.tv_nsec + uVar29) - _Var39) / 1000000000);
          lVar33 = local_478 + lVar21;
          if ((!SCARRY8(local_478,lVar21)) &&
             (lVar21 = pc.rel.minutes * 0x3c,
             SEXT816(lVar21) == SEXT816(pc.rel.minutes) * SEXT816(0x3c))) {
LAB_00109091:
            iVar32 = pc.rel.seconds;
            iVar12 = pc.rel.minutes;
            iVar24 = pc.rel.hour;
            if ((!SCARRY8(lVar33,lVar21)) &&
               ((lVar25 = lVar33 + lVar21 + pc.rel.seconds, !SCARRY8(lVar33 + lVar21,pc.rel.seconds)
                && (lVar21 = lVar25 + iVar40, !SCARRY8(lVar25,(long)iVar40))))) {
              result->tv_sec = lVar21;
              result->tv_nsec = _Var39;
              if ((cVar34 != '\0') &&
                 ((pc.rel.seconds | pc.rel.minutes | pc.rel.hour | uVar29) != 0)) {
                pcVar19 = (char *)dcgettext(0,
                                            "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n"
                                            ,5);
                dbg_printf(pcVar19,iVar24,iVar12,iVar32,uVar29 & 0xffffffff);
                pcVar19 = (char *)dcgettext(0,"    new time = %ld epoch-seconds\n",5);
                dbg_printf(pcVar19,lVar21);
                _Var39 = iVar32;
                if (((tm.tm_isdst != -1) &&
                    (ptVar18 = localtime_rz(tz,&result->tv_sec,&probe_tm), _Var39 = iVar32,
                    ptVar18 != (tm *)0x0)) && (tm.tm_isdst != probe_tm.tm_isdst)) {
                  pcVar19 = (char *)dcgettext(0,
                                              "warning: daylight saving time changed after time adjustment\n"
                                              ,5);
                  dbg_printf(pcVar19);
                  _Var39 = iVar32;
                }
              }
              iVar41 = (int)_Var39;
              goto LAB_00108637;
            }
            goto LAB_001095ae;
          }
        }
      }
      else {
        if (pc.timespec_seen != false) {
          pcVar19 = (char *)dcgettext(0,"error: out-of-range year %ld\n",5);
          dbg_printf(pcVar19,uVar29);
        }
LAB_001089b1:
        pcVar19 = "error: year, month, or day overflow\n";
        if (pc.parse_datetime_debug != false) {
LAB_001089c5:
          pcVar19 = (char *)dcgettext(0,pcVar19,5);
          dbg_printf(pcVar19);
        }
      }
LAB_001082e0:
      pc.timespec_seen = false;
    }
    else {
      pcVar19 = (char *)dcgettext(0,"input timezone: ",5);
      dbg_printf(pcVar19);
      pcVar19 = "\'@timespec\' - always UTC";
      if ((pc.timespec_seen == false) && (pcVar19 = "parsed date/time string", pc.zones_seen == 0))
      {
        if (local_480 == (byte *)0x0) {
          pcVar19 = "system default";
          goto LAB_00108590;
        }
        bVar43 = tzdefault < tz;
        bVar44 = tzdefault == tz;
        if (bVar44) {
          lVar21 = 5;
          pbVar42 = local_480;
          pbVar35 = &DAT_00112c28;
          do {
            if (lVar21 == 0) break;
            lVar21 = lVar21 + -1;
            bVar43 = *pbVar42 < *pbVar35;
            bVar44 = *pbVar42 == *pbVar35;
            pbVar42 = pbVar42 + (ulong)bVar45 * -2 + 1;
            pbVar35 = pbVar35 + (ulong)bVar45 * -2 + 1;
          } while (bVar44);
          iVar41 = (int)lVar21;
          pcVar19 = "TZ=\"UTC0\" environment value or -u";
          if ((!bVar43 && !bVar44) == bVar43) goto LAB_00108590;
          uVar46 = dcgettext(0,"TZ=\"%s\" environment value",5);
          pbVar42 = local_480;
          __fprintf_chk(stderr,1,uVar46);
          iVar41 = (int)pbVar42;
        }
        else {
          uVar46 = dcgettext(0,"TZ=\"%s\" in date string",5);
          pbVar42 = local_480;
          __fprintf_chk(stderr,1,uVar46);
          iVar41 = (int)pbVar42;
        }
      }
      else {
LAB_00108590:
        uVar46 = dcgettext(0,pcVar19,5);
        __fprintf_chk(stderr,1,uVar46);
      }
      if (pc.local_zones_seen == 0) {
LAB_001087c0:
        if (pc.zones_seen != 0) {
LAB_001085cd:
          pcVar19 = time_zone_str(pc.time_zone,time_zone_buf);
          iVar41 = (int)pcVar19;
          __fprintf_chk(stderr,1," (%s)");
        }
      }
      else {
        if (pc.zones_seen != 0) goto LAB_001085cd;
        if (0 < pc.local_isdst) {
          pFVar31 = stderr;
          fwrite(", dst",1,5,stderr);
          iVar41 = (int)pFVar31;
          goto LAB_001087c0;
        }
      }
      fputc(10,stderr);
      if (pc.timespec_seen == false) {
        pc.timespec_seen = pc.parse_datetime_debug;
        if (1 < (pc.times_seen | pc.dates_seen | pc.days_seen | pc.dsts_seen |
                pc.zones_seen + pc.local_zones_seen)) {
          if (pc.parse_datetime_debug != false) {
            if (1 < pc.times_seen) {
              dbg_printf("error: seen multiple time parts\n");
            }
            if (1 < pc.dates_seen) {
              dbg_printf("error: seen multiple date parts\n");
            }
            if (1 < pc.days_seen) {
              dbg_printf("error: seen multiple days parts\n");
            }
            if (1 < pc.dsts_seen) {
              dbg_printf("error: seen multiple daylight-saving parts\n");
            }
            if (1 < pc.zones_seen + pc.local_zones_seen) {
              dbg_printf("error: seen multiple time-zone parts\n");
            }
          }
          goto LAB_001082e0;
        }
        goto LAB_00107e72;
      }
      *(undefined4 *)&result->tv_sec = (undefined4)pc.seconds.tv_sec;
      *(undefined4 *)((long)&result->tv_sec + 4) = pc.seconds.tv_sec._4_4_;
      *(undefined4 *)&result->tv_nsec = (undefined4)pc.seconds.tv_nsec;
      *(undefined4 *)((long)&result->tv_nsec + 4) = pc.seconds.tv_nsec._4_4_;
LAB_00108637:
      pc.timespec_seen = pc.parse_datetime_debug;
      if (pc.parse_datetime_debug == false) {
        pc.timespec_seen = true;
        goto fail;
      }
      bVar43 = false;
      bVar44 = local_480 == (byte *)0x0;
      pcVar19 = "timezone: system default\n";
      if (bVar44) {
LAB_00108680:
        pcVar19 = (char *)dcgettext(0,pcVar19,5);
        dbg_printf(pcVar19);
      }
      else {
        lVar21 = 5;
        pbVar42 = local_480;
        pbVar35 = &DAT_00112c28;
        do {
          if (lVar21 == 0) break;
          lVar21 = lVar21 + -1;
          bVar43 = *pbVar42 < *pbVar35;
          bVar44 = *pbVar42 == *pbVar35;
          pbVar42 = pbVar42 + (ulong)bVar45 * -2 + 1;
          pbVar35 = pbVar35 + (ulong)bVar45 * -2 + 1;
        } while (bVar44);
        iVar41 = (int)lVar21;
        if ((!bVar43 && !bVar44) == bVar43) {
          pcVar19 = "timezone: Universal Time\n";
          goto LAB_00108680;
        }
        pcVar19 = (char *)dcgettext(0,"timezone: TZ=\"%s\" environment value\n",5);
        dbg_printf(pcVar19,local_480);
      }
      _Var5 = result->tv_sec;
      uVar29 = result->tv_nsec;
      pcVar19 = (char *)dcgettext(0,"final: %ld.%09d (epoch-seconds)\n",5);
      dbg_printf(pcVar19,_Var5,uVar29 & 0xffffffff);
      ptVar23 = gmtime_r(&result->tv_sec,(tm *)(tm *)&probe);
      if (ptVar23 != (tm *)0x0) {
        pcVar19 = debug_strfdatetime((tm *)&probe,(parser_control *)0x0,dbg_tm,iVar41);
        pcVar20 = (char *)dcgettext(0,"final: %s (UTC)\n",5);
        dbg_printf(pcVar20,pcVar19);
      }
      ptVar18 = localtime_rz(tz,&result->tv_sec,&probe_tm);
      if (ptVar18 != (tm *)0x0) {
        pcVar19 = time_zone_str((int)probe_tm.tm_gmtoff,time_zone_buf);
        pcVar20 = debug_strfdatetime(&probe_tm,(parser_control *)0x0,dbg_tm,iVar41);
        pcVar30 = (char *)dcgettext(0,"final: %s (UTC%s)\n",5);
        dbg_printf(pcVar30,pcVar20,pcVar19);
      }
    }
  }
  else {
    pc.timespec_seen = pc.parse_datetime_debug;
    if (pc.parse_datetime_debug != false) {
      if (pc.input < p + sVar17) {
        pcVar19 = (char *)dcgettext(0,"error: parsing failed, stopped at \'%s\'\n",5);
      }
      else {
        pcVar19 = (char *)dcgettext(0,"error: parsing failed\n",5);
      }
      pc.timespec_seen = false;
      dbg_printf(pcVar19,pcVar20);
    }
  }
fail:
  if (tz != tzdefault) {
    tzfree(tz);
  }
LAB_001082f0:
  rpl_free(local_488);
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pc.timespec_seen;
}

