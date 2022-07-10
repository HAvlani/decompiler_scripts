
ulong screen_columns(void)

{
  int iVar1;
  strtol_error sVar2;
  char *s;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_20;
  undefined local_18 [2];
  ushort local_16;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ioctl(1,0x5413,local_18);
  if ((iVar1 != 0) || (uVar3 = (ulong)local_16, local_16 == 0)) {
    s = getenv("COLUMNS");
    if (s != (char *)0x0) {
      sVar2 = xstrtol(s,(char **)0x0,0,(long *)&local_20,"");
      if ((sVar2 == LONGINT_OK) && (uVar3 = local_20, local_20 - 1 < 0x7fffffff)) goto LAB_001045ca;
    }
    uVar3 = 0x50;
  }
LAB_001045ca:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

