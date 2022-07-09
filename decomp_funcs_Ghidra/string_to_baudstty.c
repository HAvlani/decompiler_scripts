
speed_t string_to_baud(char *arg)

{
  int iVar1;
  speed_map *psVar2;
  int iVar3;
  char *__s2;
  
  __s2 = "0";
  iVar3 = 0;
  psVar2 = speeds;
  do {
    psVar2 = psVar2 + 1;
    iVar1 = strcmp(arg,__s2);
    if (iVar1 == 0) {
      return speeds[iVar3].speed;
    }
    __s2 = psVar2->string;
    iVar3 = iVar3 + 1;
  } while (__s2 != (char *)0x0);
  return 0xffffffff;
}

