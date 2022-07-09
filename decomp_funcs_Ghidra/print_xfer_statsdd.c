
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_xfer_stats(xtime_t progress_time)

{
  long lVar1;
  char *pcVar2;
  intmax_t iVar3;
  int iVar4;
  char *pcVar5;
  char (*__s) [654];
  char (*__s_00) [654];
  size_t sVar6;
  undefined8 uVar7;
  xtime_t xVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  char (*pacVar10) [654];
  char (*pacVar11) [654];
  char hbuf [3] [654];
  char delta_s_buf [24];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xVar8 = progress_time;
  if (progress_time == 0) {
    xVar8 = gethrxtime();
  }
  pcVar5 = human_readable(w_bytes,(char *)hbuf,0x1d1,1,1);
  __s = (char (*) [654])human_readable(w_bytes,(char *)hbuf[1],0x1f1,1,1);
  if (start_time < xVar8) {
    __s_00 = (char (*) [654])
             human_readable(w_bytes,(char *)hbuf[2],0x1d1,1000000000,xVar8 - start_time);
    sVar6 = strlen((char *)__s_00);
    *(undefined2 *)(*__s_00 + sVar6) = print_xfer_stats::slash_s._0_2_;
    (*__s_00)[sVar6 + 2] = print_xfer_stats::slash_s[2];
  }
  else {
    uVar7 = dcgettext(0,"Infinity",5);
    __s_00 = hbuf[2];
    __snprintf_chk(__s_00,0x28e,1,0x28e,"%s B/s",uVar7);
  }
  pcVar9 = "%g s";
  if (progress_time != 0) {
    pcVar2 = stderr->_IO_write_ptr;
    if (pcVar2 < stderr->_IO_write_end) {
      pcVar9 = "%.0f s";
      stderr->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '\r';
    }
    else {
      __overflow(stderr,0xd);
      pcVar9 = "%.0f s";
    }
  }
  __snprintf_chk((char (*) [654])delta_s_buf,0x18,1,0x18,pcVar9);
  sVar6 = strlen(pcVar5);
  iVar3 = w_bytes;
  if (pcVar5[sVar6 - 2] == ' ') {
    uVar7 = dcngettext(0,"%ld byte copied, %s, %s","%ld bytes copied, %s, %s",w_bytes,5);
    iVar4 = __fprintf_chk(stderr,1,uVar7,iVar3,(char (*) [654])delta_s_buf,__s_00);
  }
  else {
    sVar6 = strlen((char *)__s);
    iVar3 = w_bytes;
    if (__s[-1][sVar6 + 0x28c] == ' ') {
      pacVar11 = (char (*) [654])0x104dd6;
      uVar7 = dcgettext(0,"%ld bytes (%s) copied, %s, %s",5);
      __s = (char (*) [654])delta_s_buf;
      pacVar10 = __s_00;
    }
    else {
      uVar7 = dcgettext(0,"%ld bytes (%s, %s) copied, %s, %s",5);
      pacVar10 = (char (*) [654])delta_s_buf;
      pacVar11 = __s_00;
    }
    iVar4 = __fprintf_chk(stderr,1,uVar7,iVar3,pcVar5,__s,pacVar10,pacVar11);
  }
  if (progress_time == 0) {
    pcVar5 = stderr->_IO_write_ptr;
    if (pcVar5 < stderr->_IO_write_end) {
      stderr->_IO_write_ptr = pcVar5 + 1;
      *pcVar5 = '\n';
      iVar4 = progress_len;
    }
    else {
      __overflow(stderr,10);
      iVar4 = progress_len;
    }
  }
  else if ((-1 < iVar4) && (iVar4 < progress_len)) {
    __fprintf_chk(stderr,1,&DAT_0010e06f,progress_len - iVar4,"");
  }
  progress_len = iVar4;
  reported_w_bytes = w_bytes;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

