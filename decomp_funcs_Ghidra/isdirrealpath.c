
_Bool isdir(char *path)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  stat sb;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = __xstat(1,path,(stat *)&sb);
  if (iVar2 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (sb.st_mode & 0xf000) == 0x4000;
    }
  }
  else {
    pcVar3 = quotearg_style(shell_escape_always_quoting_style,path);
    uVar4 = dcgettext(0,"cannot stat %s",5);
    piVar5 = __errno_location();
    error(1,*piVar5,uVar4,pcVar3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

