
void closeout(FILE *fp,int fd,pid_t pid,char *name)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  __pid_t _Var4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  size_t sVar9;
  uint signum;
  long in_FS_OFFSET;
  int wstatus;
  char signame [19];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (fp == (FILE *)0x0) {
    if (fd < 0) goto LAB_001052b1;
    iVar3 = close(fd);
    if (iVar3 < 0) {
      uVar6 = quotearg_n_style_colon(0,3,name);
      piVar5 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar5,"%s",uVar6);
    }
  }
  else {
    iVar3 = rpl_fclose(fp);
    if (iVar3 != 0) {
      piVar5 = __errno_location();
      if ((filter_command == (char *)0x0) || (*piVar5 != 0x20)) {
        uVar6 = quotearg_n_style_colon(0,3,name);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar5,"%s",uVar6);
      }
    }
    if (fd < 0) goto LAB_001052b1;
  }
  if (n_open_pipes != 0) {
    sVar9 = 0;
    piVar5 = open_pipes;
    do {
      if (*piVar5 == fd) {
        n_open_pipes = n_open_pipes - 1;
        *piVar5 = open_pipes[n_open_pipes];
        break;
      }
      sVar9 = sVar9 + 1;
      piVar5 = piVar5 + 1;
    } while (sVar9 != n_open_pipes);
  }
LAB_001052b1:
  if (0 < pid) {
    wstatus = 0;
    _Var4 = waitpid(pid,&wstatus,0);
    if (_Var4 == -1) {
      piVar5 = __errno_location();
      if (*piVar5 != 10) {
        uVar6 = dcgettext(0,"waiting for child process",5);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar5,uVar6);
      }
    }
    iVar3 = wstatus;
    pcVar2 = filter_command;
    signum = wstatus & 0x7f;
    if ((char)((char)signum + '\x01') < '\x02') {
      if (signum != 0) {
        uVar6 = dcgettext(0,"unknown status from command (0x%X)",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar6,iVar3);
      }
      cVar8 = (char)((uint)wstatus >> 8);
      if (cVar8 != '\0') {
        uVar6 = quotearg_n_style_colon(0,3,name);
        uVar7 = dcgettext(0,"with FILE=%s, exit %d from command: %s",5);
                    /* WARNING: Subroutine does not return */
        error(cVar8,0,uVar7,uVar6,cVar8,pcVar2);
      }
    }
    else if (signum != 0xd) {
      iVar3 = sig2str(signum,signame);
      if (iVar3 != 0) {
        __sprintf_chk(signame,1,0x13,&DAT_0010a130,signum);
      }
      pcVar2 = filter_command;
      uVar6 = quotearg_n_style_colon(0,3,name);
      uVar7 = dcgettext(0,"with FILE=%s, signal %s from command: %s",5);
                    /* WARNING: Subroutine does not return */
      error(signum + 0x80,0,uVar7,uVar6,signame,pcVar2);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

