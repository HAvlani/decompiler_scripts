
char * tm_year_str(int tm_year,char *buf)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = tm_year / 100 + 0x13;
  uVar1 = (int)uVar3 >> 0x1f;
  uVar2 = tm_year % 100 >> 0x1f;
  __sprintf_chk(buf,1,0xffffffffffffffff,"-%02d%02d" + (-0x76d < tm_year),(uVar3 ^ uVar1) - uVar1,
                (tm_year % 100 ^ uVar2) - uVar2);
  return buf;
}

