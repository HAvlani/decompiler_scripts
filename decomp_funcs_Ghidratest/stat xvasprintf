
char * xvasprintf(char *format,__va_list_tag *args)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  size_t argcount;
  long in_FS_OFFSET;
  char *result;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *format;
  argcount = 0;
  do {
    if (cVar1 == '\0') {
      result = xstrcat(argcount,args);
LAB_0010cef0:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return result;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((cVar1 != '%') || (format[argcount * 2 + 1] != 's')) {
      iVar2 = rpl_vasprintf(&result,format,args);
      if (iVar2 < 0) {
        piVar3 = __errno_location();
        if (*piVar3 == 0xc) {
                    /* WARNING: Subroutine does not return */
          xalloc_die();
        }
        result = (char *)0x0;
      }
      goto LAB_0010cef0;
    }
    argcount = argcount + 1;
    cVar1 = format[argcount * 2];
  } while( true );
}

