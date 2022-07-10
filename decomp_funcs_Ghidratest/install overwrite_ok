
_Bool overwrite_ok(cp_options *x,char *dst_name,int dst_dirfd,char *dst_relname,stat *dst_sb)

{
  uint uVar1;
  char *pcVar2;
  _Bool _Var3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  char local_3c;
  undefined local_3b [9];
  undefined local_32;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _Var3 = writable_destination(dst_dirfd,dst_relname,*(mode_t *)&dst_sb->st_dev);
  if (_Var3 == false) {
    strmode(*(mode_t *)&dst_sb->st_dev,&local_3c);
    uVar1 = *(uint *)&dst_sb->st_dev;
    local_32 = 0;
    pcVar4 = quotearg_style(shell_escape_always_quoting_style,dst_name);
    pcVar2 = program_name;
    if ((x->move_mode == false) && ((*(uint *)&x->copy_as_regular & 0xffff00) == 0)) {
      uVar6 = 0x10612e;
      uVar5 = dcgettext(0,"%s: unwritable %s (mode %04lo, %s); try anyway? ",5);
    }
    else {
      uVar6 = 0x106086;
      uVar5 = dcgettext(0,"%s: replace %s, overriding mode %04lo (%s)? ",5);
    }
    __fprintf_chk(stderr,1,uVar5,pcVar2,pcVar4,uVar1 & 0xfff,local_3b,uVar6);
  }
  else {
    pcVar4 = quotearg_style(shell_escape_always_quoting_style,dst_name);
    pcVar2 = program_name;
    uVar5 = dcgettext(0,"%s: overwrite %s? ",5);
    __fprintf_chk(stderr,1,uVar5,pcVar2,pcVar4);
  }
  _Var3 = yesno();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

