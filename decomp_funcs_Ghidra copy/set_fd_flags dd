
void set_fd_flags(int fd,int add_flags,char *name)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((add_flags & 0xfffdfeffU) != 0) {
    uVar2 = rpl_fcntl(fd,3);
    pcVar4 = (char *)(ulong)uVar2;
    uVar6 = add_flags & 0xfffdfeffU | uVar2;
    if ((int)uVar2 < 0) goto LAB_00105ea3;
    if (uVar2 != uVar6) {
      if ((uVar6 & 0x10000) != 0) {
        iVar3 = ifstat(fd,&st);
        if (iVar3 != 0) goto LAB_00105ea3;
        if ((st.st_mode & 0xf000) == 0x4000) goto LAB_00105ee2;
        piVar5 = __errno_location();
        *piVar5 = 0x14;
        goto LAB_00105ea3;
      }
      do {
        iVar3 = rpl_fcntl(fd,4,(ulong)uVar6);
        if (iVar3 != -1) break;
LAB_00105ea3:
        pcVar4 = quotearg_style(shell_escape_always_quoting_style,name);
        name = (char *)dcgettext(0,"setting flags for %s",5);
        piVar5 = __errno_location();
        nl_error(1,*piVar5,name,pcVar4);
LAB_00105ee2:
        uVar6 = uVar6 & 0xfffeffff;
      } while (uVar6 != (uint)pcVar4);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

