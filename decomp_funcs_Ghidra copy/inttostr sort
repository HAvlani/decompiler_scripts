
char * inttostr(int i,char *buf)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = (ulong)(uint)i;
  buf[0xb] = '\0';
  pcVar4 = buf + 0xb;
  if (i < 0) {
    do {
      pcVar5 = pcVar4;
      uVar1 = (int)uVar3 / 10;
      cVar2 = (char)uVar3;
      uVar3 = (ulong)uVar1;
      pcVar5[-1] = ((char)uVar1 * '\n' + '0') - cVar2;
      pcVar4 = pcVar5 + -1;
    } while (uVar1 != 0);
    pcVar5[-2] = '-';
    return pcVar5 + -2;
  }
  do {
    pcVar4 = pcVar4 + -1;
    *pcVar4 = (char)uVar3 + (char)(uVar3 / 10) * -10 + '0';
    uVar3 = uVar3 / 10;
  } while ((int)uVar3 != 0);
  return pcVar4;
}

