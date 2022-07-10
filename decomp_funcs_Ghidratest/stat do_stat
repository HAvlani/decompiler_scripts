
_Bool do_stat(char *filename,char *format,char *format2)

{
  char cVar1;
  _Bool _Var2;
  int fd;
  size_t sVar3;
  char *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  ushort uVar7;
  long lVar8;
  byte bVar9;
  char *pcVar10;
  statx *psVar11;
  char *directive;
  uint uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  print_args pa;
  stat st;
  statx stx;
  long local_40;
  
  lVar8 = 0x20;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*filename == '-') && (uVar13 = (ulong)(byte)filename[1], filename[1] == 0)) {
    pcVar10 = "";
    uVar12 = 0x1000;
    psVar11 = &stx;
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined8 *)psVar11 = 0;
      psVar11 = (statx *)&psVar11->stx_attributes;
    }
  }
  else {
    psVar11 = &stx;
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined8 *)psVar11 = 0;
      psVar11 = (statx *)&psVar11->stx_attributes;
    }
    uVar13 = 0xffffff9c;
    uVar12 = -(uint)(follow_links == false) & 0x100;
    pcVar10 = filename;
  }
  pa.st = &st;
  pa.btime.tv_nsec = -1;
  pa.btime.tv_sec = -1;
  if (dont_sync == false) {
    if (force_sync != false) {
      uVar12 = uVar12 | 0x2000;
      goto LAB_00105473;
    }
  }
  else {
    uVar12 = uVar12 | 0x4000;
    if (force_sync != false) goto LAB_00105473;
  }
  uVar12 = uVar12 | 0x800;
LAB_00105473:
  cVar1 = *format;
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    directive = format;
    do {
      while (cVar1 == '%') {
        sVar3 = format_code_offset(directive);
        pcVar4 = directive + sVar3;
        if (*pcVar4 == '\0') goto LAB_001054ed;
        bVar9 = *pcVar4 + 0xbf;
        if (bVar9 < 0x3a) {
          uVar7 = uVar7 | *(ushort *)(CSWTCH_124 + (ulong)bVar9 * 2);
        }
        directive = pcVar4 + 1;
        cVar1 = pcVar4[1];
        if (cVar1 == '\0') goto LAB_001054ed;
      }
      cVar1 = directive[1];
      directive = directive + 1;
    } while (cVar1 != '\0');
  }
LAB_001054ed:
  fd = statx(uVar13,pcVar10,uVar12,uVar7);
  if (fd < 0) {
    piVar5 = __errno_location();
    if ((uVar12 & 0x1000) == 0) {
      pcVar10 = quotearg_style(shell_escape_always_quoting_style,filename);
      uVar6 = dcgettext(0,"cannot statx %s",5);
      error(0,*piVar5,uVar6,pcVar10);
      bVar9 = 0;
    }
    else {
      uVar6 = dcgettext(0,"cannot stat standard input",5);
      error(0,*piVar5,uVar6);
      bVar9 = 0;
    }
  }
  else {
    st.st_mode = (__mode_t)stx.stx_mode;
    if ((stx.stx_mode & 0xb000) != 0x2000) {
      format2 = format;
    }
    st.st_dev = ((ulong)stx.stx_dev_minor & 0xffffff00) << 0xc |
                ((ulong)stx.stx_dev_major & 0xfffff000) << 0x20 |
                (ulong)((stx.stx_dev_major & 0xfff) << 8) | (ulong)(byte)stx.stx_dev_minor;
    st.st_ino = stx.stx_ino;
    st.st_nlink = (__nlink_t)stx.stx_nlink;
    st._28_8_ = stx._20_8_;
    st.st_rdev = ((ulong)stx.stx_rdev_minor & 0xffffff00) << 0xc |
                 ((ulong)stx.stx_rdev_major & 0xfffff000) << 0x20 |
                 (ulong)((stx.stx_rdev_major & 0xfff) << 8) | (ulong)stx.stx_rdev_minor & 0xff;
    st.st_size = stx.stx_size;
    st.st_blksize = (__blksize_t)stx.stx_blksize;
    st.st_blocks = stx.stx_blocks;
    st.st_atim.tv_sec = stx.stx_atime.tv_sec;
    st.st_atim.tv_nsec = (__syscall_slong_t)stx.stx_atime.tv_nsec;
    st.st_mtim.tv_sec = stx.stx_mtime.tv_sec;
    st.st_mtim.tv_nsec = (__syscall_slong_t)stx.stx_mtime.tv_nsec;
    st.st_ctim.tv_sec = stx.stx_ctime.tv_sec;
    st.st_ctim.tv_nsec = (__syscall_slong_t)stx.stx_ctime.tv_nsec;
    if ((stx.stx_mask._1_1_ & 8) != 0) {
      pa.btime.tv_sec = stx.stx_btime.tv_sec;
      pa.btime.tv_nsec = (__syscall_slong_t)stx.stx_btime.tv_nsec;
    }
    _Var2 = print_it(format2,fd,filename,print_stat,&pa);
    bVar9 = _Var2 ^ 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_Bool)bVar9;
}

