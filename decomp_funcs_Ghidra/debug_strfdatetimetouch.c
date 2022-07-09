
char * debug_strfdatetime(tm *tm,parser_control *pc,char *buf,int n)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char acStack72 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = nstrftime(buf,100,"(Y-M-D) %Y-%m-%d %H:%M:%S",tm,(timezone_t)0x0,0);
  if (((pc != (parser_control *)0x0) && (iVar1 = (int)sVar2, iVar1 < 100)) && (pc->zones_seen != 0))
  {
    pcVar3 = time_zone_str(pc->time_zone,acStack72);
    __snprintf_chk(buf + iVar1,(long)(100 - iVar1),1,0xffffffffffffffff," TZ=%s",pcVar3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return buf;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

