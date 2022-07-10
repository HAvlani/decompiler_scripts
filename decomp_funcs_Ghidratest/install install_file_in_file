
_Bool install_file_in_file(char *from,char *to,int to_dirfd,char *to_relname,cp_options *x)

{
  long lVar1;
  _Bool _Var2;
  int iVar3;
  int iVar4;
  __pid_t _Var5;
  uint fd;
  int iVar6;
  uid_t uVar7;
  gid_t gVar8;
  selabel_handle *psVar9;
  int *piVar10;
  size_t __n;
  size_t sVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  int *unaff_R14;
  long in_FS_OFFSET;
  _Bool copy_into_self;
  stat from_sb;
  stat src_sb;
  stat dest_sb;
  
  pcVar13 = (char *)(ulong)(uint)to_dirfd;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((x->preserve_timestamps != false) && (iVar3 = __xstat(1,from,(stat *)&from_sb), iVar3 != 0)) {
    pcVar13 = quotearg_style(shell_escape_always_quoting_style,from);
    pcVar14 = "cannot stat %s";
LAB_001051cc:
    uVar12 = dcgettext(0,pcVar14,5);
    piVar10 = __errno_location();
    error(0,*piVar10,uVar12,pcVar13);
LAB_001051ec:
    _Var2 = false;
LAB_001051ef:
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return _Var2;
  }
  if (((copy_only_if_needed != false) && (unaff_R14 = (int *)(ulong)mode, (mode & 0xffff0e00) == 0))
     && (iVar3 = __lxstat(1,from,(stat *)&src_sb), iVar3 == 0)) goto LAB_001052b0;
LAB_00105080:
  iVar3 = (int)pcVar13;
  _Var2 = copy(from,to,iVar3,to_relname,0,x,&copy_into_self,(_Bool *)0x0);
  if (_Var2 != false) {
    pcVar14 = pcVar13;
    if (strip_files != false) {
      do {
        iVar3 = (int)pcVar14;
        _Var5 = fork();
        pcVar13 = strip_program;
        if (_Var5 != -1) {
          if (_Var5 != 0) {
            _Var5 = waitpid(_Var5,(int *)&copy_into_self,0);
            if (_Var5 < 0) {
              pcVar13 = "waiting for strip";
              goto LAB_0010523c;
            }
            if ((_copy_into_self >> 8 & 0xff | _copy_into_self & 0x7f) != 0) {
              uVar12 = dcgettext(0,"strip process terminated abnormally",5);
              error(0,0,uVar12);
              goto LAB_00105259;
            }
            if (x->preserve_timestamps == false) goto LAB_0010511e;
            if (strip_files == false) goto LAB_001050bb;
            goto LAB_001050cb;
          }
          execlp(strip_program,strip_program,to,0);
          to = quotearg_style(shell_escape_always_quoting_style,pcVar13);
          to_relname = (char *)dcgettext(0,"cannot run %s",5);
          piVar10 = __errno_location();
          error(1,*piVar10,to_relname,to);
LAB_00105641:
          piVar10 = __errno_location();
          *piVar10 = 0x5f;
          goto LAB_00105080;
        }
        pcVar13 = "fork system call failed";
LAB_0010523c:
        unaff_R14 = (int *)dcgettext(0,pcVar13,5);
        piVar10 = __errno_location();
        error(0,*piVar10,unaff_R14);
LAB_00105259:
        iVar3 = unlinkat(iVar3,to_relname,0);
        if (iVar3 == 0) goto LAB_001051ec;
        to = quotearg_style(shell_escape_always_quoting_style,to);
        to_relname = (char *)dcgettext(0,"cannot unlink %s",5);
        piVar10 = __errno_location();
        error(1,*piVar10,to_relname,to);
        pcVar13 = pcVar14;
LAB_001052b0:
        iVar3 = (int)pcVar13;
        iVar4 = __fxstatat(1,iVar3,to_relname,(stat *)&dest_sb,0x100);
        if ((((iVar4 != 0) || ((src_sb.st_mode & 0xf000) != 0x8000)) ||
            (((dest_sb.st_mode & 0xf000) != 0x8000 ||
             ((((src_sb.st_mode | dest_sb.st_mode) & 0xffff0e00) != 0 ||
              (src_sb.st_size != dest_sb.st_size)))))) ||
           ((uint)unaff_R14 != (dest_sb.st_mode & 0xfff))) goto LAB_00105080;
        uVar7 = owner_id;
        if (owner_id == 0xffffffff) {
          unaff_R14 = __errno_location();
          *unaff_R14 = 0;
          uVar7 = getuid();
          if ((uVar7 == 0xffffffff) && (*unaff_R14 != 0)) goto LAB_00105080;
        }
        if (uVar7 != dest_sb.st_uid) goto LAB_00105080;
        gVar8 = group_id;
        if (group_id == 0xffffffff) {
          unaff_R14 = __errno_location();
          *unaff_R14 = 0;
          gVar8 = getgid();
          if ((gVar8 == 0xffffffff) && (*unaff_R14 != 0)) goto LAB_00105080;
        }
        if (gVar8 != dest_sb.st_gid) goto LAB_00105080;
        if ((selinux_enabled != 0) && (x->preserve_security_context != false)) goto LAB_00105641;
        iVar4 = open(from,0);
        if (iVar4 < 0) goto LAB_00105080;
        fd = openat(iVar3,to_relname,0);
        unaff_R14 = (int *)(ulong)fd;
        if ((int)fd < 0) goto LAB_001055dc;
        while (sVar11 = full_read(iVar4,a_buff_7794,0x1000), sVar11 != 0) {
          __n = full_read(fd,b_buff_7795,0x1000);
          if ((__n != sVar11) || (iVar6 = memcmp(a_buff_7794,b_buff_7795,__n), iVar6 != 0)) {
            close(iVar4);
            close(fd);
            goto LAB_00105080;
          }
        }
        close(iVar4);
        close(fd);
        pcVar14 = pcVar13;
        if (strip_files == false) break;
      } while( true );
    }
    if (x->preserve_timestamps != false) {
LAB_001050bb:
      if ((from_sb.st_mode & 0xf000) != 0x8000) {
LAB_001050cb:
        dest_sb.st_dev = from_sb.st_atim.tv_sec;
        dest_sb.st_ino = from_sb.st_atim.tv_nsec;
        dest_sb.st_nlink = from_sb.st_mtim.tv_sec;
        dest_sb._24_8_ = from_sb.st_mtim.tv_nsec;
        iVar4 = utimensat(iVar3,to_relname,(timespec *)&dest_sb,0);
        if (iVar4 != 0) {
          pcVar13 = quotearg_style(shell_escape_always_quoting_style,to);
          pcVar14 = "cannot set timestamps for %s";
          goto LAB_001051cc;
        }
      }
    }
LAB_0010511e:
    if (((owner_id & group_id) == 0xffffffff) ||
       (iVar4 = fchownat(iVar3,to_relname,owner_id,group_id,0x100), iVar4 == 0)) {
      _Var2 = true;
      iVar3 = rpl_fchmodat(iVar3,to_relname,mode,0);
      if (iVar3 != 0) {
        pcVar13 = quotearg_style(shell_escape_always_quoting_style,to);
        pcVar14 = "cannot change permissions of %s";
        goto LAB_001054cc;
      }
    }
    else {
      pcVar13 = quotearg_style(shell_escape_always_quoting_style,to);
      pcVar14 = "cannot change ownership of %s";
LAB_001054cc:
      uVar12 = dcgettext(0,pcVar14,5);
      piVar10 = __errno_location();
      _Var2 = false;
      error(0,*piVar10,uVar12,pcVar13);
    }
    if ((((use_default_selinux_context != false) && (selinux_enabled == 1)) &&
        (iVar3 = __lxstat(1,to,(stat *)&dest_sb), iVar3 == 0)) &&
       (psVar9 = get_labeling_handle(), psVar9 != (selabel_handle *)0x0)) {
      piVar10 = __errno_location();
      *piVar10 = 0x5f;
    }
    goto LAB_001051ef;
  }
  goto LAB_001051ec;
LAB_001055dc:
  close(iVar4);
  goto LAB_00105080;
}

