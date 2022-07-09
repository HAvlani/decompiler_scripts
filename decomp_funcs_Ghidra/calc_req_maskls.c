
uint calc_req_mask(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (-(uint)(print_inode == false) & 0xffffff00) + 0x102;
  if (print_block_size != false) {
    uVar1 = uVar1 | 0x400;
  }
  if (format == long_format) {
    if (time_btime < time_type) {
calc_req_mask_cold:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = *(uint *)(CSWTCH_898 + (ulong)time_type * 4);
    if ((print_owner == false) && (print_author == false)) {
      uVar1 = uVar1 | uVar2 | 0x204;
    }
    else {
      uVar1 = uVar1 | uVar2 | 0x20c;
    }
    if (print_group != false) {
      uVar1 = uVar1 | 0x10;
    }
    switch(sort_type) {
    case sort_name:
    case sort_extension:
    case sort_width:
    case sort_version:
    case sort_none:
      goto switchD_00107091_caseD_0;
    case sort_size:
      goto switchD_00107091_caseD_3;
    case sort_time:
      goto switchD_00107024_caseD_5;
    default:
      goto calc_req_mask_cold;
    }
  }
  switch(sort_type) {
  case sort_name:
  case sort_extension:
  case sort_width:
  case sort_version:
  case sort_none:
    goto switchD_00107091_caseD_0;
  case sort_size:
switchD_00107091_caseD_3:
    return uVar1 | 0x200;
  case sort_time:
    if (time_btime < time_type) goto calc_req_mask_cold;
    uVar2 = *(uint *)(CSWTCH_898 + (ulong)time_type * 4);
switchD_00107024_caseD_5:
    uVar1 = uVar1 | uVar2;
switchD_00107091_caseD_0:
    return uVar1;
  default:
    goto calc_req_mask_cold;
  }
}

