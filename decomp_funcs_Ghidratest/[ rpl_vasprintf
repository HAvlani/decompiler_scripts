
int rpl_vasprintf(char **resultp,char *format,__va_list_tag *args)

{
  int iVar1;
  char *p;
  int *piVar2;
  long in_FS_OFFSET;
  size_t length;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  p = (char *)vasnprintf(0,&length,format,args);
  if (p == (char *)0x0) {
    iVar1 = -1;
  }
  else if (length < 0x80000000) {
    *resultp = p;
    iVar1 = (int)length;
  }
  else {
    rpl_free(p);
    piVar2 = __errno_location();
    *piVar2 = 0x4b;
    iVar1 = -1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

