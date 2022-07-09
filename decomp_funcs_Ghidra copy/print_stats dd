
void print_stats(void)

{
  char *pcVar1;
  intmax_t iVar2;
  intmax_t iVar3;
  intmax_t iVar4;
  intmax_t iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (status_level == 1) {
    return;
  }
  if (0 < progress_len) {
    pcVar1 = stderr->_IO_write_ptr;
    if (pcVar1 < stderr->_IO_write_end) {
      stderr->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __overflow(stderr,10);
    }
    progress_len = 0;
  }
  iVar5 = w_partial;
  iVar4 = w_full;
  iVar3 = r_partial;
  iVar2 = r_full;
  uVar7 = 0x104f2a;
  uVar6 = dcgettext(0,"%ld+%ld records in\n%ld+%ld records out\n",5);
  __fprintf_chk(stderr,1,uVar6,iVar2,iVar3,iVar4,iVar5,uVar7);
  iVar2 = r_truncate;
  if (r_truncate != 0) {
    uVar6 = dcngettext(0,"%ld truncated record\n","%ld truncated records\n",r_truncate,5);
    __fprintf_chk(stderr,1,uVar6,iVar2);
  }
  if (status_level != 2) {
    print_xfer_stats(0);
    return;
  }
  return;
}

