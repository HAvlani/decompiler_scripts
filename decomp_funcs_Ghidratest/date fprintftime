
size_t fprintftime(FILE *s,char *format,tm *tp,timezone_t tz,int ns)

{
  size_t sVar1;
  long in_FS_OFFSET;
  _Bool tzset_called;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  tzset_called = false;
  sVar1 = __strftime_internal(s,format,tp,false,0,-1,&tzset_called,tz,ns);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

