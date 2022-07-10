
void recheck(File_spec *f,_Bool blocking)

{
  byte *file;
  long lVar1;
  _Bool _Var2;
  _Bool _Var3;
  _Bool _Var4;
  int __fildes;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  File_spec *pFVar14;
  long in_FS_OFFSET;
  stat new_stats;
  
  file = (byte *)f->name;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = *file - 0x2d;
  if (uVar11 == 0) {
    uVar11 = (uint)file[1];
  }
  _Var4 = f->tailable;
  uVar13 = f->errnum;
  if (uVar11 == 0) {
    __fildes = 0;
    uVar5 = uVar13;
  }
  else {
    __fildes = open_safer((char *)file,(uint)(blocking == false) << 0xb);
    uVar5 = f->errnum;
  }
  _Var3 = reopen_inaccessible_files;
  _Var2 = disable_inotify;
  if ((f->fd == -1) == (uVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("valid_file_spec (f)","src/tail.c",0x3e2,"recheck");
  }
  if (reopen_inaccessible_files == false) {
    f->tailable = true;
    if (((_Var2 == false) && (iVar6 = __lxstat(1,f->name,(stat *)&new_stats), iVar6 == 0)) &&
       ((new_stats.st_mode & 0xf000) == 0xa000)) goto LAB_00106960;
    if (__fildes == -1) {
LAB_001064d8:
      puVar7 = (uint *)__errno_location();
      pFVar14 = (File_spec *)f->name;
      uVar11 = *puVar7;
      f->errnum = uVar11;
      if (f->tailable == false) goto LAB_001066d1;
      if (uVar11 != uVar13) {
        pcVar8 = pretty_name(pFVar14);
        uVar10 = quotearg_n_style_colon(0,3,pcVar8);
        error(0,*puVar7,&DAT_0010e51b,uVar10);
        pFVar14 = (File_spec *)f->name;
      }
    }
    else {
LAB_00106583:
      iVar6 = __fxstat(1,__fildes,(stat *)&new_stats);
      if (iVar6 < 0) goto LAB_001064d8;
      if ((((new_stats.st_mode & 0xf000) - 0x1000 & 0xffffe000) == 0) ||
         ((new_stats.st_mode & 0xb000) == 0x8000)) {
        pcVar8 = pretty_name((File_spec *)f->name);
        _Var4 = fremote(__fildes,pcVar8);
        f->remote = _Var4;
        if ((_Var4 == false) || (disable_inotify != false)) {
          f->errnum = 0;
          if ((uVar13 & 0xfffffffd) == 0) {
            pFVar14 = (File_spec *)f->name;
            if (f->fd == -1) {
              pcVar8 = pretty_name(pFVar14);
              pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
              pcVar12 = "%s has appeared;  following new file";
              goto LAB_00106629;
            }
            if ((f->ino == new_stats.st_ino) && (f->dev == new_stats.st_dev)) {
              pcVar8 = pretty_name(pFVar14);
              close_fd(__fildes,pcVar8);
              goto LAB_0010652c;
            }
            pcVar8 = pretty_name(pFVar14);
            pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
            uVar10 = dcgettext(0,"%s has been replaced;  following new file",5);
            error(0,0,uVar10,pcVar8);
            pcVar8 = pretty_name((File_spec *)f->name);
            close_fd(f->fd,pcVar8);
          }
          else {
            if (f->fd != -1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("f->fd == -1","src/tail.c",0x42f,"recheck");
            }
            pcVar8 = pretty_name((File_spec *)f->name);
            pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
            pcVar12 = "%s has become accessible";
LAB_00106629:
            uVar10 = dcgettext(0,pcVar12,5);
            error(0,0,uVar10,pcVar8);
          }
          uVar13 = (uint)blocking;
          f->fd = __fildes;
          if (uVar11 == 0) {
            uVar13 = 0xffffffff;
          }
          pFVar14 = (File_spec *)f->name;
          f->ignore = false;
          f->size = 0;
          (f->mtime).tv_sec = new_stats.st_mtim.tv_sec;
          f->blocking = uVar13;
          (f->mtime).tv_nsec = new_stats.st_mtim.tv_nsec;
          f->n_unchanged_stats = 0;
          f->dev = new_stats.st_dev;
          f->ino = new_stats.st_ino;
          f->mode = new_stats.st_mode;
          pcVar8 = pretty_name(pFVar14);
          xlseek(__fildes,0,0,pcVar8);
          goto LAB_0010652c;
        }
        f->errnum = -1;
        pcVar8 = pretty_name((File_spec *)f->name);
        pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
        uVar10 = dcgettext(0,"%s has been replaced with an untailable remote file",5);
        error(0,0,uVar10,pcVar8);
        pFVar14 = (File_spec *)f->name;
        *(undefined2 *)&f->ignore = 0x101;
      }
      else {
        f->errnum = -1;
        f->tailable = false;
        if ((_Var3 == false) || (follow_mode != Follow_name)) {
          f->ignore = true;
          if ((_Var4 != false) || (uVar13 != 0xffffffff)) {
            pcVar8 = (char *)dcgettext(0,"; giving up on this name",5);
            pFVar14 = (File_spec *)f->name;
            goto LAB_001068da;
          }
        }
        else {
          pFVar14 = (File_spec *)f->name;
          f->ignore = false;
          if (_Var4 == false) {
            pcVar8 = "";
            if (uVar13 == 0xffffffff) goto LAB_001064ff;
          }
          else {
            pcVar8 = "";
          }
LAB_001068da:
          pcVar12 = pretty_name(pFVar14);
          pcVar12 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
          uVar10 = dcgettext(0,"%s has been replaced with an untailable file%s",5);
          error(0,0,uVar10,pcVar12,pcVar8);
        }
        pFVar14 = (File_spec *)f->name;
      }
    }
  }
  else {
    if (__fildes == -1) {
      f->tailable = false;
      pFVar14 = (File_spec *)f->name;
      if (_Var2 != false) {
        piVar9 = __errno_location();
        f->errnum = *piVar9;
LAB_001066d1:
        if (_Var4 != false) {
          pcVar8 = pretty_name(pFVar14);
          pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
          uVar10 = dcgettext(0,"%s has become inaccessible",5);
          error(0,f->errnum,uVar10,pcVar8);
          pFVar14 = (File_spec *)f->name;
        }
        goto LAB_001064ff;
      }
      iVar6 = __lxstat(1,(char *)pFVar14,(stat *)&new_stats);
      if ((iVar6 != 0) || ((new_stats.st_mode & 0xf000) != 0xa000)) goto LAB_001064d8;
    }
    else {
      f->tailable = true;
      if (((_Var2 != false) || (iVar6 = __lxstat(1,f->name,(stat *)&new_stats), iVar6 != 0)) ||
         ((new_stats.st_mode & 0xf000) != 0xa000)) goto LAB_00106583;
    }
LAB_00106960:
    f->errnum = -1;
    f->ignore = true;
    pcVar8 = pretty_name((File_spec *)f->name);
    pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
    uVar10 = dcgettext(0,"%s has been replaced with an untailable symbolic link",5);
    error(0,0,uVar10,pcVar8);
    pFVar14 = (File_spec *)f->name;
  }
LAB_001064ff:
  pcVar8 = pretty_name(pFVar14);
  close_fd(__fildes,pcVar8);
  pcVar8 = pretty_name((File_spec *)f->name);
  close_fd(f->fd,pcVar8);
  f->fd = -1;
LAB_0010652c:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

