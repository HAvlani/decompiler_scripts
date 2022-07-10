
void print_line(int userlen,char *user,char state,int linelen,char *line,char *time_str,char *idle,
               char *pid,char *comment,char *exitstr)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined *p;
  char *pcVar4;
  char cVar5;
  size_t s;
  char *pcVar6;
  long in_FS_OFFSET;
  undefined8 uVar7;
  char *local_78;
  char *buf;
  char x_idle [8];
  char x_pid [13];
  
  cVar5 = short_output;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  print_line::mesg[1] = state;
  if ((include_idle == false) || (short_output != false)) {
LAB_00102cb4:
    x_idle[0] = '\0';
  }
  else {
    sVar3 = strlen(idle);
    if (6 < sVar3) goto LAB_00102cb4;
    __sprintf_chk(x_idle,1,8," %-6s",idle);
    cVar5 = short_output;
  }
  local_78 = x_idle;
  if (cVar5 == '\0') {
    sVar3 = strlen(pid);
    if (sVar3 < 0xc) {
      __sprintf_chk(x_pid,1,0xd," %10s",pid);
      goto LAB_00102cee;
    }
  }
  x_pid[0] = '\0';
LAB_00102cee:
  s = 1;
  if (include_exit != false) {
    sVar3 = strlen(exitstr);
    s = sVar3 + 2;
    if (sVar3 < 0xc) {
      s = 0xe;
    }
  }
  uVar7 = 0x102d1a;
  p = (undefined *)xmalloc(s);
  if (include_exit == false) {
    *p = 0;
  }
  else {
    uVar7 = 0x102e80;
    __sprintf_chk(p,1,0xffffffffffffffff," %-12s",exitstr);
  }
  pcVar6 = print_line::mesg;
  if (include_mesg == false) {
    pcVar6 = "";
  }
  if (user == (char *)0x0) {
    user = "   .";
  }
  iVar2 = rpl_asprintf(&buf,"%-8.*s%s %-12.*s %-*s%s%s %-8s%s",(ulong)(uint)userlen,user,pcVar6,
                       (ulong)(uint)linelen,line,(ulong)(uint)time_format_width,time_str,local_78,
                       x_pid,comment,p,uVar7);
  pcVar6 = buf;
  if (iVar2 != -1) {
    sVar3 = strlen(buf);
    pcVar6 = pcVar6 + sVar3;
    do {
      pcVar4 = pcVar6;
      pcVar6 = pcVar4 + -1;
    } while (*pcVar6 == ' ');
    *pcVar4 = '\0';
    puts(buf);
    rpl_free(buf);
    rpl_free(p);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

