
void debug_print_current_time(char *item,parser_control *pc)

{
  char cVar1;
  long lVar2;
  intmax_t iVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint n;
  uint extraout_EDX;
  int iVar6;
  __time_t _Var7;
  long in_FS_OFFSET;
  char tmp [100];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = (char *)dcgettext(0,"parsed %s part: ",5);
  dbg_printf(pcVar4,item);
  if ((pc->dates_seen == 0) || (pc->debug_dates_seen != false)) {
    n = 0;
    if (pc->year_seen != pc->debug_year_seen) goto LAB_00107ba8;
  }
  else {
    __fprintf_chk(stderr,1,"(Y-M-D) %04ld-%02ld-%02ld",(pc->year).value,pc->month,pc->day);
    pc->debug_dates_seen = true;
    n = 1;
    if (pc->year_seen != pc->debug_year_seen) {
      fputc(0x20,stderr);
LAB_00107ba8:
      iVar3 = (pc->year).value;
      uVar5 = dcgettext(0,"year: %04ld",5);
      __fprintf_chk(stderr,1,uVar5,iVar3);
      n = 1;
      pc->debug_year_seen = pc->year_seen;
    }
  }
  if ((pc->times_seen == 0) || (pc->debug_times_seen != false)) {
    if ((pc->days_seen != 0) && (pc->debug_days_seen == false)) {
      if ((char)n != '\0') goto LAB_00107e67;
      goto LAB_00107c1c;
    }
  }
  else {
    __fprintf_chk(stderr,1,(n ^ 1) + 0x115e51,pc->hour,pc->minutes,(pc->seconds).tv_sec);
    if ((pc->seconds).tv_nsec != 0) {
      __fprintf_chk(stderr,1,".%09d");
    }
    if (pc->meridian == 1) {
      fwrite(&DAT_00115e6a,1,2,stderr);
    }
    pc->debug_times_seen = true;
    n = 1;
    if ((pc->days_seen != 0) && (n = (uint)pc->debug_days_seen, pc->debug_days_seen == false)) {
LAB_00107e67:
      fputc(0x20,stderr);
      n = extraout_EDX;
LAB_00107c1c:
      iVar6 = pc->day_number;
      iVar3 = pc->day_ordinal;
      pcVar4 = str_days(pc,tmp,n);
      uVar5 = dcgettext(0,"%s (day ordinal=%ld number=%d)",5);
      __fprintf_chk(stderr,1,uVar5,pcVar4,iVar3,iVar6);
      pc->debug_days_seen = true;
      n = 1;
    }
  }
  if ((pc->local_zones_seen == 0) || (pc->debug_local_zones_seen != false)) {
    if ((pc->zones_seen != 0) && (pc->debug_zones_seen == false)) {
      iVar6 = (n ^ 1) + 0x115e24;
      goto LAB_00107e91;
    }
    if (pc->timespec_seen == false) goto LAB_00107d64;
    _Var7 = (pc->seconds).tv_sec;
    if ((char)n != '\0') goto LAB_00107cf6;
  }
  else {
    pcVar4 = " DST";
    if (pc->dsts_seen == 0) {
      pcVar4 = "";
    }
    __fprintf_chk(stderr,1,(n ^ 1) + 0x115e6d,pc->local_isdst,pcVar4);
    pc->debug_local_zones_seen = true;
    if ((pc->zones_seen == 0) || (pc->debug_zones_seen != false)) {
      cVar1 = pc->timespec_seen;
    }
    else {
      iVar6 = 0x115e24;
LAB_00107e91:
      pcVar4 = time_zone_str(pc->time_zone,tmp);
      __fprintf_chk(stderr,1,iVar6,pcVar4);
      cVar1 = pc->timespec_seen;
      pc->debug_zones_seen = true;
    }
    if (cVar1 == '\0') goto LAB_00107d64;
    _Var7 = (pc->seconds).tv_sec;
LAB_00107cf6:
    fputc(0x20,stderr);
  }
  uVar5 = dcgettext(0,"number of seconds: %ld",5);
  __fprintf_chk(stderr,1,uVar5,_Var7);
LAB_00107d64:
  fputc(10,stderr);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

