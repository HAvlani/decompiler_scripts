
char * time_zone_str(int time_zone,char *time_zone_buf)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = time_zone / 0xe10 >> 0x1f;
  iVar2 = __sprintf_chk(time_zone_buf,1,0xffffffffffffffff,"%c%02d",(time_zone >> 0x1f & 2U) + 0x2b,
                        (uVar4 ^ time_zone / 0xe10) - uVar4);
  uVar4 = time_zone % 0xe10;
  if (uVar4 != 0) {
    pcVar1 = time_zone_buf + iVar2;
    *pcVar1 = ':';
    uVar4 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
    pcVar1[1] = (char)((uVar4 / 0x3c) / 10) + '0';
    pcVar3 = pcVar1 + 3;
    uVar5 = uVar4 % 0x3c;
    pcVar1[2] = (char)(uVar4 / 0x3c) + (char)((uVar4 / 0x3c) / 10) * -10 + '0';
    if (uVar5 != 0) {
      pcVar1[3] = ':';
      pcVar1[4] = (char)(uVar5 / 10) + '0';
      pcVar3 = pcVar1 + 6;
      pcVar1[5] = (char)uVar5 + (char)(uVar5 / 10) * -10 + '0';
    }
    *pcVar3 = '\0';
  }
  return time_zone_buf;
}

