
void async_safe_die(int errnum,char *errstr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *__buf;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  char *pcVar7;
  bool bVar8;
  byte bVar9;
  char errbuf [12];
  
  bVar9 = 0;
  puVar6 = (uint *)errstr;
  do {
    puVar5 = puVar6;
    uVar2 = *puVar5 + 0xfefefeff & ~*puVar5;
    uVar3 = uVar2 & 0x80808080;
    puVar6 = puVar5 + 1;
  } while (uVar3 == 0);
  bVar8 = (uVar2 & 0x8080) == 0;
  if (bVar8) {
    uVar3 = uVar3 >> 0x10;
  }
  if (bVar8) {
    puVar6 = (uint *)((long)puVar5 + 6);
  }
  write(2,errstr,(long)puVar6 + ((-3 - (ulong)CARRY1((byte)uVar3,(byte)uVar3)) - (long)errstr));
  if (errnum != 0) {
    __buf = inttostr(errnum,errbuf);
    write(2,": errno ",8);
    uVar4 = 0xffffffffffffffff;
    pcVar7 = __buf;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (ulong)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    write(2,__buf,~uVar4 - 1);
  }
  write(2,"\n",1);
                    /* WARNING: Subroutine does not return */
  _exit(2);
}

