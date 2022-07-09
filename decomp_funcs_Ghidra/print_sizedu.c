
void print_size(duinfo *pdui,char *string)

{
  long lVar1;
  timezone_t tz;
  tm *ptVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  uintmax_t n_bytes;
  long in_FS_OFFSET;
  undefined4 local_98;
  undefined4 uStack148;
  int iStack144;
  undefined4 uStack140;
  tm tm;
  char buf [21];
  
  n_bytes = pdui->inodes;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (opt_inodes == false) {
    n_bytes = pdui->size;
  }
  print_only_size(n_bytes);
  if (opt_time != false) {
    pcVar3 = stdout->_IO_write_ptr;
    if (pcVar3 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = '\t';
    }
    else {
      __overflow(stdout,9);
    }
    pcVar3 = time_format;
    tz = localtz;
    local_98 = *(undefined4 *)&(pdui->tmax).tv_sec;
    uStack148 = *(undefined4 *)((long)&(pdui->tmax).tv_sec + 4);
    iStack144 = *(int *)&(pdui->tmax).tv_nsec;
    uStack140 = *(undefined4 *)((long)&(pdui->tmax).tv_nsec + 4);
    ptVar2 = localtime_rz(localtz,(time_t *)&local_98,&tm);
    if (ptVar2 == (tm *)0x0) {
      pcVar3 = imaxtostr(CONCAT44(uStack148,local_98),buf);
      pcVar4 = quote(pcVar3);
      uVar5 = dcgettext(0,"time %s is out of range",5);
      error(0,0,uVar5,pcVar4);
      fputs_unlocked(pcVar3,stdout);
    }
    else {
      fprintftime((FILE *)stdout,pcVar3,&tm,tz,iStack144);
    }
  }
  __printf_chk(1,"\t%s%c",string,-(opt_nul_terminate_output == false) & 10);
  fflush_unlocked(stdout);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

