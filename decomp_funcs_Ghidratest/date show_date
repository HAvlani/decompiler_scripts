
_Bool show_date(char *format,timespec when,timezone_t tz)

{
  _Bool _Var1;
  tm *ptVar2;
  char *pcVar3;
  undefined8 uVar4;
  timezone_t in_RCX;
  int in_EDX;
  long in_FS_OFFSET;
  timezone_t local_88;
  int local_80;
  tm local_78;
  char local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = tz;
  local_80 = in_EDX;
  if (((byte)parse_datetime_flags & 1) != 0) {
    pcVar3 = quote(format);
    uVar4 = dcgettext(0,"output format: %s",5);
    error(0,0,uVar4,pcVar3);
  }
  ptVar2 = localtime_rz(in_RCX,(time_t *)&local_88,&local_78);
  if (ptVar2 == (tm *)0x0) {
    pcVar3 = imaxtostr((intmax_t)local_88,local_38);
    pcVar3 = quote(pcVar3);
    uVar4 = dcgettext(0,"time %s is out of range",5);
    error(0,0,uVar4,pcVar3);
    _Var1 = false;
  }
  else {
    if (format == "%a, %d %b %Y %H:%M:%S %z") {
      setlocale(2,"C");
      fprintftime((FILE *)stdout,"%a, %d %b %Y %H:%M:%S %z",&local_78,in_RCX,local_80);
      setlocale(2,"");
    }
    else {
      fprintftime((FILE *)stdout,format,&local_78,in_RCX,local_80);
    }
    pcVar3 = stdout->_IO_write_ptr;
    if (pcVar3 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = '\n';
      _Var1 = true;
    }
    else {
      __overflow(stdout,10);
      _Var1 = true;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

