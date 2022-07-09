
char * find_int(char *string)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  ushort **ppuVar4;
  char *pcVar5;
  char *format;
  byte *pbVar6;
  byte *pbVar7;
  
  ppuVar4 = __ctype_b_loc();
  puVar3 = *ppuVar4;
  pbVar7 = (byte *)string;
  while (bVar1 = *pbVar7, (*(byte *)(puVar3 + bVar1) & 1) != 0) {
    pbVar7 = pbVar7 + 1;
  }
  if (bVar1 == 0x2b) {
    pbVar6 = pbVar7 + 1;
    pbVar7 = pbVar6;
  }
  else {
    pbVar6 = pbVar7 + (bVar1 == 0x2d);
  }
  if ((int)(char)*pbVar6 - 0x30U < 10) {
    bVar1 = pbVar6[1];
    while( true ) {
      pbVar6 = pbVar6 + 1;
      if (9 < (int)(char)bVar1 - 0x30U) break;
      bVar1 = pbVar6[1];
    }
    bVar2 = *(byte *)(puVar3 + ((ulong)(uint)(int)(char)bVar1 & 0xff));
    while ((bVar2 & 1) != 0) {
      bVar1 = pbVar6[1];
      pbVar6 = pbVar6 + 1;
      bVar2 = *(byte *)(puVar3 + bVar1);
    }
    if (bVar1 == 0) {
      return (char *)pbVar7;
    }
  }
  pcVar5 = quote(string);
  format = (char *)dcgettext(0,"invalid integer %s",5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(format,pcVar5);
}

