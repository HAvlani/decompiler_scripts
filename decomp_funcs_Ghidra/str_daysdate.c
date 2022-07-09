
char * str_days(parser_control *pc,char *buffer,int n)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  
  if (pc->debug_ordinal_day_seen == false) {
    *buffer = '\0';
    uVar1 = pc->day_number;
    if (6 < uVar1) {
      return buffer;
    }
    uVar3 = 1;
    lVar4 = 100;
    pcVar5 = buffer;
  }
  else {
    uVar3 = pc->day_ordinal + 1;
    if (uVar3 < 0xe) {
      uVar2 = snprintf(buffer,100,"%s",&ordinal_values_5230 + uVar3 * 0xb);
      uVar1 = pc->day_number;
      if ((6 < uVar1) || (99 < uVar2)) {
        return buffer;
      }
    }
    else {
      uVar2 = __snprintf_chk(buffer,100,1,0xffffffffffffffff,"%ld");
      uVar1 = pc->day_number;
      if (6 < uVar1) {
        return buffer;
      }
    }
    lVar4 = (long)(int)(100 - uVar2);
    uVar3 = (ulong)(uVar2 == 0);
    pcVar5 = buffer + (int)uVar2;
  }
  __snprintf_chk(pcVar5,lVar4,1,0xffffffffffffffff,&DAT_0011597e + uVar3,
                 days_values_5231 + (long)(int)uVar1 * 4);
  return buffer;
}

