
char * gid_to_name(gid_t gid)

{
  long lVar1;
  group *pgVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char buf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pgVar2 = getgrgid(gid);
  if (pgVar2 == (group *)0x0) {
    pcVar3 = umaxtostr((ulong)gid,buf);
    pcVar3 = xstrdup(pcVar3);
  }
  else {
    pcVar3 = xstrdup(pgVar2->gr_name);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

