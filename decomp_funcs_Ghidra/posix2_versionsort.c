
int posix2_version(void)

{
  char *__nptr;
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  char *e;
  long local_10;
  
  iVar2 = 0x31069;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __nptr = getenv("_POSIX2_VERSION");
  if ((__nptr != (char *)0x0) && (*__nptr != '\0')) {
    lVar1 = strtol(__nptr,&e,10);
    if (*e == '\0') {
      if (lVar1 < -0x80000000) {
        iVar2 = -0x80000000;
      }
      else {
        lVar3 = 0x7fffffff;
        if (lVar1 < 0x80000000) {
          lVar3 = lVar1;
        }
        iVar2 = (int)lVar3;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

