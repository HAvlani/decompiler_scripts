
char * umaxtostr(uintmax_t i,char *buf)

{
  bool bVar1;
  char *pcVar2;
  
  buf[0x14] = '\0';
  pcVar2 = buf + 0x14;
  do {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = (char)i + (char)(i / 10) * -10 + '0';
    bVar1 = 9 < i;
    i = i / 10;
  } while (bVar1);
  return pcVar2;
}

