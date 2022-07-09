
void close_fd(int fd,char *filename)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if (fd + 1U < 2) {
    return;
  }
  iVar1 = close(fd);
  if (iVar1 == 0) {
    return;
  }
  pcVar2 = quotearg_style(shell_escape_always_quoting_style,filename);
  uVar3 = dcgettext(0,"closing %s (fd=%d)",5);
  piVar4 = __errno_location();
  error(0,*piVar4,uVar3,pcVar2,fd);
  return;
}

