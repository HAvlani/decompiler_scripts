
void digits_to_date_time(parser_control *pc,textint text_int)

{
  long lVar1;
  
  lVar1 = SUB248(text_int >> 0x40,0);
  if (((pc->dates_seen == 0) || ((pc->year).digits != 0)) || (pc->rels_seen != false)) {
    if (4 < text_int.digits) {
      pc->dates_seen = pc->dates_seen + 1;
      (pc->year).digits = text_int.digits + -4;
      pc->day = lVar1 % 100;
      pc->month = (lVar1 / 100) % 100;
      (pc->year).value = lVar1 / 10000;
      return;
    }
    pc->times_seen = pc->times_seen + 1;
    if (2 < text_int.digits) {
      pc->hour = lVar1 / 100;
      pc->minutes = lVar1 % 100;
      goto LAB_001073fe;
    }
  }
  else {
    if ((pc->times_seen != 0) || (2 < text_int.digits)) {
      pc->year_seen = true;
      (pc->year).digits = text_int.digits;
      *(undefined4 *)&pc->year = text_int._0_4_;
      *(undefined4 *)&(pc->year).field_0x4 = text_int._4_4_;
      *(undefined4 *)&(pc->year).value = (undefined4)text_int.value;
      *(undefined4 *)((long)&(pc->year).value + 4) = text_int.value._4_4_;
      return;
    }
    pc->times_seen = 1;
  }
  pc->hour = lVar1;
  pc->minutes = 0;
LAB_001073fe:
  (pc->seconds).tv_sec = 0;
  (pc->seconds).tv_nsec = 0;
  pc->meridian = 2;
  return;
}

