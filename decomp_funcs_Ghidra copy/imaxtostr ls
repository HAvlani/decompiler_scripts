
char * imaxtostr(intmax_t i,char *buf)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  
  buf[0x14] = '\0';
  pcVar3 = buf + 0x14;
  if (i < 0) {
    do {
      pcVar4 = pcVar3;
      lVar1 = i / 10;
      pcVar4[-1] = ((char)lVar1 * '\n' + '0') - (char)i;
      i = lVar1;
      pcVar3 = pcVar4 + -1;
    } while (lVar1 != 0);
    pcVar4[-2] = '-';
    return pcVar4 + -2;
  }
  do {
    pcVar3 = pcVar3 + -1;
    uVar2 = (ulong)i / 10;
    *pcVar3 = (char)i + (char)uVar2 * -10 + '0';
    i = uVar2;
  } while (uVar2 != 0);
  return pcVar3;
}

