
char * time_string(STRUCT_UTMP *utmp_ent)

{
  tm *__tp;
  undefined1 *puVar1;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_18 = (long)(int)utmp_ent;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __tp = localtime(&local_18);
  if (__tp == (tm *)0x0) {
    puVar1 = imaxtostr(local_18,buf_8014);
  }
  else {
    strftime(buf_8014,0x21,time_format,__tp);
    puVar1 = buf_8014;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

