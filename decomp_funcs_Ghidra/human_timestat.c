
char * human_time(timespec t)

{
  tm *ptVar1;
  char *pcVar2;
  ulong in_RSI;
  intmax_t in_RDI;
  long in_FS_OFFSET;
  intmax_t local_88;
  ulong local_80;
  tm local_78;
  char local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = in_RDI;
  local_80 = in_RSI;
  if (human_time::tz == (timezone_t)0x0) {
    pcVar2 = getenv("TZ");
    human_time::tz = tzalloc(pcVar2);
  }
  ptVar1 = localtime_rz(human_time::tz,&local_88,&local_78);
  if (ptVar1 == (tm *)0x0) {
    pcVar2 = imaxtostr(local_88,local_38);
    __sprintf_chk(human_time::str,1,0x3d,"%s.%09d",pcVar2,local_80 & 0xffffffff);
  }
  else {
    nstrftime(human_time::str,0x3d,"%Y-%m-%d %H:%M:%S.%N %z",&local_78,human_time::tz,(int)local_80)
    ;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return human_time::str;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

