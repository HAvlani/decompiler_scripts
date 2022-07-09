
_Bool print_group(gid_t gid,_Bool use_name)

{
  undefined uVar1;
  group *pgVar2;
  undefined8 uVar3;
  char *__s;
  
  uVar1 = 1;
  if (use_name != false) {
    pgVar2 = getgrgid(gid);
    if (pgVar2 != (group *)0x0) {
      __s = pgVar2->gr_name;
      goto LAB_001037d2;
    }
    uVar3 = dcgettext(0,"cannot find name for group ID %lu",5);
    error(0,0,uVar3,(ulong)gid);
    uVar1 = 0;
  }
  use_name = (_Bool)uVar1;
  __s = umaxtostr((ulong)gid,buf_7272);
LAB_001037d2:
  fputs_unlocked(__s,stdout);
  return use_name;
}

