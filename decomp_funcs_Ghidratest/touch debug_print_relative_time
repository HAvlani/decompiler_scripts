
void debug_print_relative_time(char *item,parser_control *pc)

{
  FILE *pFVar1;
  undefined space;
  char *msg;
  undefined8 uVar2;
  intmax_t val;
  long lVar3;
  
  msg = (char *)dcgettext(0,"parsed %s part: ",5);
  dbg_printf(msg,item);
  pFVar1 = stderr;
  lVar3 = (pc->rel).year;
  if (lVar3 == 0) {
    lVar3 = (pc->rel).month;
    if (lVar3 != 0) {
      space = false;
LAB_001053c8:
      space = print_rel_part((_Bool)space,lVar3,"month(s)");
      val = (pc->rel).day;
      goto LAB_001053db;
    }
    val = (pc->rel).day;
    space = false;
    if (val == 0) {
      if (((((pc->rel).hour == 0) && ((pc->rel).minutes == 0)) && ((pc->rel).seconds == 0)) &&
         (space = false, (pc->rel).ns == 0)) {
        uVar2 = dcgettext(0,"today/this/now\n",5);
        (*(code *)PTR_fputs_00118e88)(uVar2,pFVar1);
        return;
      }
      goto LAB_001053ef;
    }
  }
  else {
    space = print_rel_part(false,lVar3,"year(s)");
    lVar3 = (pc->rel).month;
    if (lVar3 != 0) goto LAB_001053c8;
    val = (pc->rel).day;
LAB_001053db:
    if (val == 0) goto LAB_001053ef;
  }
  space = print_rel_part((_Bool)space,val,"day(s)");
LAB_001053ef:
  lVar3 = (pc->rel).hour;
  if (lVar3 != 0) {
    space = print_rel_part((_Bool)space,lVar3,"hour(s)");
  }
  lVar3 = (pc->rel).minutes;
  if (lVar3 != 0) {
    space = print_rel_part((_Bool)space,lVar3,"minutes");
  }
  lVar3 = (pc->rel).seconds;
  if (lVar3 != 0) {
    space = print_rel_part((_Bool)space,lVar3,"seconds");
  }
  lVar3 = (long)(pc->rel).ns;
  if (lVar3 != 0) {
    print_rel_part((_Bool)space,lVar3,"nanoseconds");
  }
  fputc(10,stderr);
  return;
}

