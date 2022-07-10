
_Bool do_link(char *source,int destdir_fd,char *dest_base,char *dest,int link_errno)

{
  long lVar1;
  _Bool _Var2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  Hash_table *__dest;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *can_fname;
  char *pcVar10;
  int *piVar11;
  Hash_table *__new;
  char *pcVar12;
  int iVar13;
  Hash_table *p;
  size_t __n;
  long in_FS_OFFSET;
  bool bVar14;
  undefined8 uVar15;
  undefined local_188;
  stat source_stats;
  stat dest_stats;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = (uint)(logical == false) << 8;
  if (link_errno < 0) {
    link_errno = atomic_link(source,destdir_fd,dest_base);
  }
  if (link_errno == 0) {
    if (dest_set == (Hash_table *)0x0) {
      pcVar10 = (char *)0x0;
      __new = dest_set;
LAB_0010367a:
      if (symbolic_link == false) goto LAB_0010391e;
LAB_00103683:
      local_188 = 1;
      if (verbose == false) goto LAB_00103318;
      if (__new == (Hash_table *)0x0) goto LAB_00103770;
      __n = (long)dest_base - (long)dest;
      __dest = __new;
      p = (Hash_table *)0x0;
      if (0 < (long)__n) {
        sVar6 = strlen((char *)__new);
        __dest = (Hash_table *)xmalloc(__n + 1 + sVar6);
        memcpy(__dest,dest,__n);
        strcpy((char *)((long)__dest + __n),(char *)__new);
        p = __dest;
      }
      pcVar7 = (char *)quotearg_n_style(2,4,__dest);
      rpl_free(p);
      pcVar12 = " ~ ";
    }
    else {
      if (symbolic_link == false) {
        iVar13 = __fxstatat(1,-100,source,(stat *)&source_stats,iVar13);
        if (iVar13 != 0) goto LAB_00103940;
        pcVar10 = (char *)0x0;
        __new = (Hash_table *)0x0;
LAB_0010391e:
        record_file(dest_set,dest,&source_stats);
        goto LAB_00103683;
      }
      pcVar10 = (char *)0x0;
      __new = (Hash_table *)0x0;
      local_188 = symbolic_link;
      if (verbose == false) goto LAB_00103318;
LAB_00103770:
      pcVar12 = "";
      pcVar7 = pcVar12;
    }
    uVar8 = quotearg_n_style(1,4,source);
    bVar14 = symbolic_link == false;
    uVar15 = 0x103736;
    uVar9 = quotearg_n_style(0,4,dest);
    __printf_chk(1,"%s%s%s %c> %s\n",pcVar7,pcVar12,uVar9,(-bVar14 & 0x10U) + 0x2d,uVar8,uVar15);
    local_188 = 1;
  }
  else {
    iVar5 = 1;
    if (symbolic_link == false) {
      iVar5 = __fxstatat(1,-100,source,(stat *)&source_stats,iVar13);
      local_188 = hard_dir_link;
      if (iVar5 != 0) {
LAB_00103940:
        pcVar10 = quotearg_style(shell_escape_always_quoting_style,source);
        uVar8 = dcgettext(0,"failed to access %s",5);
        piVar11 = __errno_location();
        error(0,*piVar11,uVar8,pcVar10);
        local_188 = 0;
        goto LAB_00103331;
      }
      if ((hard_dir_link == false) && ((source_stats.st_mode & 0xf000) == 0x4000)) {
        uVar8 = quotearg_n_style_colon(0,3,source);
        uVar9 = dcgettext(0,"%s: hard link not allowed for directory",5);
        error(0,0,uVar9,uVar8);
        goto LAB_00103331;
      }
    }
    pcVar10 = (char *)0x0;
    if (relative != false) {
      pcVar7 = dir_name(dest);
      pcVar12 = canonicalize_filename_mode(pcVar7,CAN_MISSING);
      can_fname = canonicalize_filename_mode(source,CAN_MISSING);
      if ((pcVar12 != (char *)0x0) && (can_fname != (char *)0x0)) {
        pcVar10 = (char *)xmalloc(0x1000);
        _Var2 = relpath(can_fname,pcVar12,pcVar10,0x1000);
        if (_Var2 != false) {
          rpl_free(pcVar7);
          rpl_free(pcVar12);
          rpl_free(can_fname);
          source = pcVar10;
          goto LAB_0010337e;
        }
        rpl_free(pcVar10);
      }
      rpl_free(pcVar7);
      rpl_free(pcVar12);
      rpl_free(can_fname);
      pcVar10 = xstrdup(source);
      source = pcVar10;
    }
LAB_0010337e:
    if (((remove_existing_files == false) && (interactive == false)) && (backup_type == no_backups))
    {
LAB_0010348d:
      _Var2 = false;
      __new = (Hash_table *)0x0;
    }
    else {
      iVar13 = __fxstatat(1,destdir_fd,dest_base,(stat *)&dest_stats,0x100);
      if (iVar13 != 0) {
        piVar11 = __errno_location();
        if (*piVar11 != 2) {
          pcVar7 = quotearg_style(shell_escape_always_quoting_style,dest);
          uVar8 = dcgettext(0,"failed to access %s",5);
          error(0,*piVar11,uVar8,pcVar7);
          goto fail;
        }
        goto LAB_0010348d;
      }
      if ((dest_stats.st_mode & 0xf000) == 0x4000) {
        uVar8 = quotearg_n_style_colon(0,3,dest);
        uVar9 = dcgettext(0,"%s: cannot overwrite directory",5);
        error(0,0,uVar9,uVar8);
fail:
        rpl_free(pcVar10);
        local_188 = 0;
        goto LAB_00103331;
      }
      _Var2 = seen_file(dest_set,dest,&dest_stats);
      if (_Var2 != false) {
        uVar8 = quotearg_n_style(1,4,source);
        uVar9 = quotearg_n_style(0,4,dest);
        pcVar7 = "will not overwrite just-created %s with %s";
LAB_001039bb:
        uVar15 = dcgettext(0,pcVar7,5);
        error(0,0,uVar15,uVar9,uVar8);
        goto fail;
      }
      bVar3 = remove_existing_files;
      if (backup_type != no_backups) {
        bVar3 = symbolic_link ^ 1;
      }
      if ((((bVar3 != 0) &&
           ((iVar5 == 0 || (iVar13 = __xstat(1,source,(stat *)&source_stats), iVar13 == 0)))) &&
          (source_stats.st_ino == dest_stats.st_ino)) &&
         ((source_stats.st_dev == dest_stats.st_dev &&
          ((source_stats.st_nlink == 1 ||
           (_Var2 = same_nameat(-100,source,destdir_fd,dest_base), _Var2 != false)))))) {
        uVar8 = quotearg_n_style(1,4,dest);
        uVar9 = quotearg_n_style(0,4,source);
        pcVar7 = "%s and %s are the same file";
        goto LAB_001039bb;
      }
      local_188 = interactive;
      if ((link_errno < 0) || (link_errno == 0x11)) {
        if (interactive != false) {
          quotearg_style(shell_escape_always_quoting_style,dest);
          uVar8 = dcgettext(0,"%s: replace %s? ",5);
          __fprintf_chk(stderr,1,uVar8);
          _Var2 = yesno();
          if (_Var2 == false) {
            rpl_free(pcVar10);
            goto LAB_00103331;
          }
        }
        if (backup_type == no_backups) goto LAB_0010344c;
        __new = (Hash_table *)find_backup_file_name(destdir_fd,dest_base,backup_type);
        iVar13 = renameat(destdir_fd,dest_base,destdir_fd,(char *)__new);
        _Var2 = true;
        if (iVar13 != 0) {
          piVar11 = __errno_location();
          iVar13 = *piVar11;
          rpl_free(__new);
          if (iVar13 == 2) goto LAB_0010348d;
          pcVar7 = quotearg_style(shell_escape_always_quoting_style,dest);
          uVar8 = dcgettext(0,"cannot backup %s",5);
          error(0,iVar13,uVar8,pcVar7);
          goto fail;
        }
      }
      else {
LAB_0010344c:
        _Var2 = true;
        __new = (Hash_table *)0x0;
      }
    }
    if (symbolic_link == false) {
      uVar4 = force_linkat(-100,source,destdir_fd,dest_base,(uint)(logical != false) << 10,_Var2,
                           link_errno);
    }
    else {
      uVar4 = force_symlinkat(source,destdir_fd,dest_base,_Var2,link_errno);
    }
    if ((int)uVar4 < 1) goto LAB_0010367a;
    uVar8 = quotearg_n_style(1,4,source);
    uVar9 = quotearg_n_style(0,4,dest);
    if (symbolic_link == false) {
      if (uVar4 == 0x1f) {
        uVar4 = 0x1f;
        pcVar7 = "failed to create hard link to %.0s%s";
        goto LAB_0010353e;
      }
      if (((uVar4 == 0x7a) || (uVar4 == 0x11)) || ((uVar4 & 0xfffffffd) == 0x1c)) {
        pcVar7 = "failed to create hard link %s";
        goto LAB_0010353e;
      }
      uVar15 = dcgettext(0,"failed to create hard link %s => %s",5);
    }
    else {
      if ((uVar4 == 0x24) || (*source == '\0')) {
        pcVar7 = "failed to create symbolic link %s -> %s";
      }
      else {
        pcVar7 = "failed to create symbolic link %s";
      }
LAB_0010353e:
      uVar15 = dcgettext(0,pcVar7,5);
    }
    error(0,uVar4,uVar15,uVar9,uVar8);
    local_188 = 0;
    if (__new != (Hash_table *)0x0) {
      iVar13 = renameat(destdir_fd,(char *)__new,destdir_fd,dest_base);
      local_188 = 0;
      if (iVar13 != 0) {
        pcVar7 = quotearg_style(shell_escape_always_quoting_style,dest);
        uVar8 = dcgettext(0,"cannot un-backup %s",5);
        piVar11 = __errno_location();
        error(0,*piVar11,uVar8,pcVar7);
      }
    }
  }
LAB_00103318:
  rpl_free(__new);
  rpl_free(pcVar10);
LAB_00103331:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_Bool)local_188;
}

