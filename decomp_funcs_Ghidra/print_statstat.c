
_Bool print_stat(char *pformat,size_t prefix_len,char mod,char m,int fd,char *filename,void *data)

{
  stat *file_stat;
  quoting_style qVar1;
  char *pcVar2;
  passwd *ppVar3;
  char *arg;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uintmax_t arg_00;
  __dev_t arg_01;
  _Bool _Var9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  
                    /* WARNING: Load size is inaccurate */
  file_stat = *data;
  switch(m) {
  case 'A':
    _Var9 = false;
    filemodestring(file_stat,modebuf_7642);
    modebuf_7642[10] = 0;
    out_string(pformat,prefix_len,modebuf_7642);
    break;
  case 'B':
    _Var9 = false;
    out_uint(pformat,prefix_len,0x200);
    break;
  case 'C':
    _Var9 = true;
    piVar6 = __errno_location();
    *piVar6 = 0x5f;
    pcVar2 = quotearg_style(shell_escape_always_quoting_style,filename);
    uVar5 = dcgettext(0,"failed to get security context of %s",5);
    error(0,*piVar6,uVar5,pcVar2);
    *(undefined2 *)(pformat + prefix_len) = 0x73;
    __printf_chk(1,pformat,&DAT_00111615);
    break;
  case 'D':
    _Var9 = false;
    out_uint_x(pformat,prefix_len,file_stat->st_dev);
    break;
  default:
    pcVar2 = stdout->_IO_write_ptr;
    if (pcVar2 < stdout->_IO_write_end) {
      _Var9 = false;
      stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = '?';
    }
    else {
      _Var9 = false;
      __overflow(stdout,0x3f);
    }
    break;
  case 'F':
    pcVar2 = file_type(file_stat);
    goto LAB_00104800;
  case 'G':
    ppVar3 = (passwd *)getgrgid(file_stat->st_gid);
    goto joined_r0x001048fb;
  case 'N':
    _Var9 = false;
    qVar1 = get_quoting_style((quoting_options *)0x0);
    pcVar2 = quotearg_style(qVar1,filename);
    out_string(pformat,prefix_len,pcVar2);
    if ((file_stat->st_mode & 0xf000) == 0xa000) {
      pcVar2 = areadlink_with_size(filename,file_stat->st_size);
      if (pcVar2 == (char *)0x0) {
        _Var9 = true;
        pcVar2 = quotearg_style(shell_escape_always_quoting_style,filename);
        uVar5 = dcgettext(0,"cannot read symbolic link %s",5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar5,pcVar2);
      }
      else {
        __printf_chk(1,&DAT_00111634);
        qVar1 = get_quoting_style((quoting_options *)0x0);
        pcVar4 = quotearg_style(qVar1,pcVar2);
        out_string(pformat,prefix_len,pcVar4);
        rpl_free(pcVar2);
      }
    }
    break;
  case 'R':
    _Var9 = false;
    out_uint_x(pformat,prefix_len,file_stat->st_rdev);
    break;
  case 'T':
    uVar7 = (uint)file_stat->st_rdev & 0xff;
    uVar8 = (uint)((file_stat->st_rdev >> 0x14) << 8);
    goto LAB_00104920;
  case 'U':
    ppVar3 = getpwuid(file_stat->st_uid);
joined_r0x001048fb:
    pcVar2 = "UNKNOWN";
    if (ppVar3 != (passwd *)0x0) {
      pcVar2 = ppVar3->pw_name;
    }
    goto LAB_00104800;
  case 'W':
    out_epoch_sec(pformat,prefix_len,
                  (timespec)CONCAT88(in_stack_ffffffffffffffc0,in_stack_ffffffffffffffb8));
    _Var9 = false;
    break;
  case 'X':
    _Var9 = false;
    out_epoch_sec(pformat,prefix_len,
                  (timespec)CONCAT88(in_stack_ffffffffffffffc0,in_stack_ffffffffffffffb8));
    break;
  case 'Y':
    _Var9 = false;
    out_epoch_sec(pformat,prefix_len,
                  (timespec)CONCAT88(in_stack_ffffffffffffffc0,in_stack_ffffffffffffffb8));
    break;
  case 'Z':
    _Var9 = false;
    out_epoch_sec(pformat,prefix_len,
                  (timespec)CONCAT88(in_stack_ffffffffffffffc0,in_stack_ffffffffffffffb8));
    break;
  case 'a':
    uVar7 = file_stat->st_mode;
    _Var9 = false;
    make_format(pformat,prefix_len,"-#0","lo");
    __printf_chk(1,pformat,uVar7 & 0xfff);
    break;
  case 'b':
    _Var9 = false;
    out_uint(pformat,prefix_len,file_stat->st_blocks);
    break;
  case 'd':
    arg_01 = file_stat->st_dev;
    if (mod == 'H') goto LAB_00104d25;
LAB_00104c4d:
    if (mod != 'L') {
      out_uint(pformat,prefix_len,arg_01);
      return false;
    }
    uVar7 = (uint)(byte)arg_01;
    uVar8 = (int)((arg_01 >> 0xc) >> 8) << 8;
    goto LAB_00104d40;
  case 'f':
    _Var9 = false;
    out_uint_x(pformat,prefix_len,(ulong)file_stat->st_mode);
    break;
  case 'g':
    _Var9 = false;
    out_uint(pformat,prefix_len,(ulong)file_stat->st_gid);
    break;
  case 'h':
    _Var9 = false;
    out_uint(pformat,prefix_len,file_stat->st_nlink);
    break;
  case 'i':
    _Var9 = false;
    out_uint(pformat,prefix_len,file_stat->st_ino);
    break;
  case 'm':
    if ((follow_links == false) && ((file_stat->st_mode & 0xf000) == 0xa000)) {
LAB_00104d70:
      pcVar4 = find_mount_point(filename,file_stat);
      if (pcVar4 == (char *)0x0) {
LAB_00104dd7:
        _Var9 = true;
        arg = "?";
      }
      else {
        arg = find_bind_mount(pcVar4);
        if (arg == (char *)0x0) {
          arg = pcVar4;
        }
        _Var9 = false;
      }
    }
    else {
      pcVar2 = canonicalize_file_name(filename);
      if (pcVar2 == (char *)0x0) {
        pcVar4 = quotearg_style(shell_escape_always_quoting_style,filename);
        uVar5 = dcgettext(0,"failed to canonicalize %s",5);
        piVar6 = __errno_location();
        error(0,*piVar6,uVar5,pcVar4);
        pcVar4 = pcVar2;
        goto LAB_00104dd7;
      }
      _Var9 = false;
      arg = find_bind_mount(pcVar2);
      pcVar4 = (char *)0x0;
      rpl_free(pcVar2);
      if (arg == (char *)0x0) goto LAB_00104d70;
    }
    out_string(pformat,prefix_len,arg);
    rpl_free(pcVar4);
    break;
  case 'n':
    _Var9 = false;
    out_string(pformat,prefix_len,filename);
    break;
  case 'o':
    arg_00 = file_stat->st_blksize;
    if (0x1fffffffffffffff < arg_00 - 1) {
      arg_00 = 0x200;
    }
    _Var9 = false;
    out_uint(pformat,prefix_len,arg_00);
    break;
  case 'r':
    arg_01 = file_stat->st_rdev;
    if (mod != 'H') goto LAB_00104c4d;
LAB_00104d25:
    uVar7 = (uint)(arg_01 >> 8) & 0xfff;
    uVar8 = (uint)(arg_01 >> 0x20) & 0xfffff000;
LAB_00104d40:
    _Var9 = false;
    out_uint(pformat,prefix_len,(ulong)(uVar8 | uVar7));
    break;
  case 's':
    _Var9 = false;
    out_int(pformat,prefix_len,file_stat->st_size);
    break;
  case 't':
    uVar7 = (uint)(file_stat->st_rdev >> 8) & 0xfff;
    uVar8 = (uint)(file_stat->st_rdev >> 0x20) & 0xfffff000;
LAB_00104920:
    _Var9 = false;
    out_uint_x(pformat,prefix_len,(ulong)(uVar8 | uVar7));
    break;
  case 'u':
    _Var9 = false;
    out_uint(pformat,prefix_len,(ulong)file_stat->st_uid);
    break;
  case 'w':
    if (*(long *)((long)data + 0x10) < 0) {
      out_string(pformat,prefix_len,"-");
      return false;
    }
    goto LAB_001047f8;
  case 'x':
    goto LAB_001047f8;
  case 'y':
    goto LAB_001047f8;
  case 'z':
LAB_001047f8:
    pcVar2 = human_time((timespec)CONCAT88(in_stack_ffffffffffffffc0,in_stack_ffffffffffffffb8));
LAB_00104800:
    _Var9 = false;
    out_string(pformat,prefix_len,pcVar2);
  }
  return _Var9;
}

