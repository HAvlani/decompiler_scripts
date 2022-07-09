
/* WARNING: Could not reconcile some variable overlaps */

void print_long_format(fileinfo *param_1)

{
  uintmax_t i;
  ulong uVar1;
  __dev_t _Var2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  tm *ptVar10;
  char cVar11;
  uint uVar12;
  char (*pacVar13) [128];
  char *pcVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  time_t local_1340;
  ulong local_1338;
  ulong local_1330;
  tm local_1328;
  tm local_12e8;
  char local_12a4;
  undefined8 local_12a3;
  ushort local_129b;
  undefined local_1299;
  char local_1298 [32];
  char local_1278 [1008];
  char local_e88 [3656];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1->stat_ok == false) {
    local_1299 = 0;
    local_129b = 0x3f3f;
    local_12a4 = "?pcdb-lswd"[param_1->filetype];
    local_12a3 = 0x3f3f3f3f3f3f3f3f;
  }
  else {
    filemodestring(&param_1->stat,&local_12a4);
  }
  if (any_has_acl == false) {
    local_129b = local_129b & 0xff;
LAB_00109f96:
    if (time_type != time_atime) goto LAB_00109fa5;
LAB_0010a220:
    local_1330 = (param_1->stat).st_atim.tv_nsec;
    local_1338 = (param_1->stat).st_atim.tv_sec;
    bVar18 = true;
  }
  else {
    if (param_1->acl_type == ACL_T_LSM_CONTEXT_ONLY) {
      local_129b = CONCAT11(0x2e,(undefined)local_129b);
      goto LAB_00109f96;
    }
    if (param_1->acl_type != ACL_T_YES) goto LAB_00109f96;
    local_129b = CONCAT11(0x2b,(undefined)local_129b);
    if (time_type == time_atime) goto LAB_0010a220;
LAB_00109fa5:
    if (time_type < time_btime) {
      if (time_type == time_mtime) {
        local_1330 = (param_1->stat).st_mtim.tv_nsec;
        local_1338 = (param_1->stat).st_mtim.tv_sec;
        bVar18 = true;
      }
      else {
        local_1330 = (param_1->stat).st_ctim.tv_nsec;
        local_1338 = (param_1->stat).st_ctim.tv_sec;
        bVar18 = true;
      }
    }
    else {
      if (time_type != time_btime) {
        print_long_format_cold();
        return;
      }
      local_1338 = (param_1->stat).st_mtim.tv_sec;
      local_1330 = (param_1->stat).st_mtim.tv_nsec;
      bVar18 = (local_1338 & local_1330) != 0xffffffffffffffff;
    }
  }
  cVar11 = param_1->stat_ok;
  if (print_inode == false) {
    pcVar14 = local_e88;
  }
  else {
    if (((_Bool)cVar11 != false) && (i = (param_1->stat).st_ino, i != 0)) {
      umaxtostr(i,local_1278);
    }
    iVar3 = __sprintf_chk(local_e88,1,0xe3b,&DAT_00118ad7,inode_number_width);
    cVar11 = param_1->stat_ok;
    pcVar14 = local_e88 + iVar3;
  }
  if (print_block_size != false) {
    pcVar17 = "?";
    if (cVar11 != '\0') {
      pcVar17 = human_readable((param_1->stat).st_blocks,local_1278,human_output_opts,0x200,
                               output_block_size);
    }
    iVar3 = block_size_width;
    iVar4 = gnu_mbswidth(pcVar17,0);
    if (0 < iVar3 - iVar4) {
      uVar5 = (iVar3 - iVar4) - 1;
      pcVar9 = pcVar14;
      do {
        pcVar6 = pcVar9 + 1;
        *pcVar9 = ' ';
        pcVar9 = pcVar6;
      } while (pcVar6 != pcVar14 + (ulong)uVar5 + 1);
      pcVar14 = pcVar14 + (long)(int)uVar5 + 1;
    }
    do {
      pcVar9 = pcVar14;
      cVar11 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar14 = pcVar9 + 1;
      *pcVar9 = cVar11;
    } while (cVar11 != '\0');
    *pcVar9 = ' ';
    cVar11 = param_1->stat_ok;
  }
  pcVar17 = "?";
  if (cVar11 != '\0') {
    pcVar17 = umaxtostr((param_1->stat).st_nlink,local_1278);
  }
  iVar3 = __sprintf_chk(pcVar14,1,0xffffffffffffffff,"%s %*s ",&local_12a4,nlink_width,pcVar17);
  pcVar14 = pcVar14 + iVar3;
  if (dired != false) {
    dired_outbuf("  ",2);
  }
  if ((((print_owner != false) || (print_group != false)) || (print_author != false)) ||
     (print_scontext != false)) {
    dired_outbuf(local_e88,(long)pcVar14 - (long)local_e88);
    if (print_owner != false) {
      format_user((param_1->stat).st_uid,owner_width,param_1->stat_ok);
    }
    iVar3 = group_width;
    if (print_group != false) {
      pcVar14 = "?";
      uVar5 = (param_1->stat).st_gid;
      if ((param_1->stat_ok != false) && (pcVar14 = (char *)0x0, numeric_ids == false)) {
        pcVar14 = getgroup(uVar5);
      }
      format_user_or_group(pcVar14,(ulong)uVar5,iVar3);
    }
    if (print_author != false) {
      format_user((param_1->stat).st_uid,author_width,param_1->stat_ok);
    }
    pcVar14 = local_e88;
    if (print_scontext != false) {
      format_user_or_group(param_1->scontext,0,scontext_width);
    }
  }
  if (param_1->stat_ok == false) {
    pcVar17 = "?";
LAB_0010a297:
    iVar3 = file_size_width;
    iVar4 = gnu_mbswidth(pcVar17,0);
    if (0 < iVar3 - iVar4) {
      uVar5 = (iVar3 - iVar4) - 1;
      pcVar9 = pcVar14;
      do {
        pcVar6 = pcVar9 + 1;
        *pcVar9 = ' ';
        pcVar9 = pcVar6;
      } while (pcVar6 != pcVar14 + (ulong)uVar5 + 1);
      pcVar14 = pcVar14 + (long)(int)uVar5 + 1;
    }
    do {
      pcVar9 = pcVar14;
      cVar11 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar14 = pcVar9 + 1;
      *pcVar9 = cVar11;
    } while (cVar11 != '\0');
    *pcVar9 = ' ';
  }
  else {
    if (((param_1->stat).st_mode & 0xb000) != 0x2000) {
      pcVar17 = human_readable((param_1->stat).st_size,local_1278,file_human_output_opts,1,
                               file_output_block_size);
      goto LAB_0010a297;
    }
    iVar16 = file_size_width - (major_device_number_width + 2 + minor_device_number_width);
    uVar1 = (param_1->stat).st_rdev;
    pcVar17 = umaxtostr((ulong)((uint)((uVar1 >> 0x14) << 8) | (uint)uVar1 & 0xff),local_1278);
    iVar3 = minor_device_number_width;
    _Var2 = (param_1->stat).st_rdev;
    pcVar9 = umaxtostr((ulong)((uint)(_Var2 >> 0x20) & 0xfffff000 | (uint)(_Var2 >> 8) & 0xfff),
                       local_1298);
    iVar4 = 0;
    if (-1 < iVar16) {
      iVar4 = iVar16;
    }
    iVar3 = __sprintf_chk(pcVar14,1,0xffffffffffffffff,&DAT_00118ad2,
                          iVar4 + major_device_number_width,pcVar9,iVar3,pcVar17);
    pcVar14 = pcVar14 + iVar3;
  }
  *pcVar14 = '\x01';
  if ((param_1->stat_ok == false) || (!bVar18)) {
LAB_0010a30a:
    pcVar17 = "?";
LAB_0010a311:
    if (width_11264 < 0) {
      local_1340 = 0;
      ptVar10 = localtime_rz(localtz,&local_1340,&local_12e8);
      if (ptVar10 != (tm *)0x0) {
        pacVar13 = (char (*) [128])long_time_format[0];
        if (use_abformat != false) {
          pacVar13 = abformat[local_12e8.tm_mon];
        }
        sVar7 = nstrftime(local_1278,0x3e9,(char *)pacVar13,&local_12e8,localtz,0);
        if (sVar7 != 0) {
          width_11264 = mbsnwidth(local_1278,sVar7,0);
        }
      }
      if (width_11264 < 0) {
        width_11264 = 0;
      }
    }
    iVar3 = __sprintf_chk(pcVar14,1,0xffffffffffffffff,&DAT_00118ad7,width_11264,pcVar17);
    pcVar14 = pcVar14 + iVar3;
  }
  else {
    ptVar10 = localtime_rz(localtz,(time_t *)&local_1338,&local_1328);
    if (ptVar10 == (tm *)0x0) {
LAB_0010a840:
      if (*pcVar14 != '\0') {
        if (param_1->stat_ok == false) goto LAB_0010a30a;
        pcVar17 = imaxtostr(local_1338,local_1298);
        goto LAB_0010a311;
      }
    }
    else {
      uVar5 = (uint)(current_time.tv_nsec < (long)local_1330);
      uVar15 = (uint)((long)local_1330 < current_time.tv_nsec);
      iVar3 = uVar15 - (current_time.tv_nsec < (long)local_1330);
      if ((int)(iVar3 + ((uint)((long)local_1338 < current_time.tv_sec) -
                        (uint)(current_time.tv_sec < (long)local_1338)) * 2) < 0) {
        gettime(&current_time);
        uVar15 = (uint)((long)local_1330 < current_time.tv_nsec);
        uVar5 = (uint)(current_time.tv_nsec < (long)local_1330);
        iVar3 = uVar15 - uVar5;
      }
      uVar12 = 0;
      if ((int)(iVar3 + ((uint)((long)local_1338 < current_time.tv_sec + -0xf0c2ac) -
                        (uint)(current_time.tv_sec + -0xf0c2ac < (long)local_1338)) * 2) < 0) {
        uVar12 = (uVar5 - uVar15) +
                 ((uint)(current_time.tv_sec < (long)local_1338) -
                 (uint)((long)local_1338 < current_time.tv_sec)) * 2 >> 0x1f;
      }
      if (use_abformat == false) {
        pacVar13 = (char (*) [128])long_time_format[uVar12];
      }
      else {
        pacVar13 = abformat[uVar12][local_1328.tm_mon];
      }
      sVar7 = nstrftime(pcVar14,0x3e9,(char *)pacVar13,&local_1328,localtz,(int)local_1330);
      if (sVar7 == 0) goto LAB_0010a840;
      pcVar14 = pcVar14 + sVar7;
    }
    *pcVar14 = ' ';
    pcVar14 = pcVar14 + 1;
  }
  sVar7 = (long)pcVar14 - (long)local_e88;
  dired_outbuf(local_e88,sVar7);
  sVar8 = print_name_with_quoting(param_1,false,&dired_obstack,sVar7);
  if (param_1->filetype == symbolic_link) {
    if (param_1->linkname != (char *)0x0) {
      dired_outbuf(" -> ",4);
      print_name_with_quoting(param_1,true,(obstack *)0x0,sVar7 + 4 + sVar8);
      if (indicator_style != none) {
        print_type_indicator(true,param_1->linkmode,unknown);
      }
    }
  }
  else if (indicator_style != none) {
    print_type_indicator(param_1->stat_ok,(param_1->stat).st_mode,param_1->filetype);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

