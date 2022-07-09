
RM_status prompt(FTS *fts,FTSENT *ent,_Bool is_dir,rm_options *x,Prompt_action mode,
                Ternary *is_empty_p)

{
  long lVar1;
  bool bVar2;
  _Bool _Var3;
  int iVar4;
  Ternary TVar5;
  int iVar6;
  int iVar7;
  rm_interactive rVar8;
  RM_status RVar9;
  DIR *__dirp;
  int *piVar10;
  dirent *pdVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  char *pcVar15;
  rm_options *prVar16;
  uint uVar17;
  long in_FS_OFFSET;
  stat st;
  
  iVar7 = fts->fts_cwd_fd;
  pcVar13 = ent->fts_accpath;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar15 = ent->fts_path;
  prVar16 = x;
  if (is_empty_p == (Ternary *)0x0) {
    st.st_size = -1;
    uVar17 = ~-(uint)(is_dir == false) & 4;
    if (is_dir != false) {
      is_dir = false;
    }
  }
  else {
    *is_empty_p = T_UNKNOWN;
    st.st_size = -1;
    uVar17 = (uint)(is_dir != false) << 2;
    iVar4 = openat(iVar7,pcVar13,0x30900);
    if (iVar4 < 0) {
LAB_001037a3:
      is_dir = false;
      TVar5 = T_NO;
    }
    else {
      __dirp = fdopendir(iVar4);
      if (__dirp != (DIR *)0x0) {
        piVar10 = __errno_location();
        *piVar10 = 0;
        do {
          pdVar11 = readdir(__dirp);
          if (pdVar11 == (dirent *)0x0) {
            iVar4 = *piVar10;
            closedir(__dirp);
            *piVar10 = iVar4;
            if (iVar4 != 0) goto LAB_001037a3;
            is_dir = true;
            TVar5 = T_YES;
            goto LAB_001037ab;
          }
        } while ((pdVar11->d_name[0] == '.') &&
                ((pdVar11->d_name[(ulong)(pdVar11->d_name[1] == '.') + 1] == '\0' ||
                 (pdVar11->d_name[(ulong)(pdVar11->d_name[1] == '.') + 1] == '/'))));
        iVar4 = *piVar10;
        closedir(__dirp);
        *piVar10 = iVar4;
        goto LAB_001037a3;
      }
      close(iVar4);
      is_dir = false;
      TVar5 = T_NO;
    }
LAB_001037ab:
    *is_empty_p = TVar5;
  }
  iVar4 = (int)prVar16;
  if (ent->fts_number == 0) {
    rVar8 = x->interactive;
    if (rVar8 != RMI_NEVER) {
      if (x->ignore_missing_files == false) {
        if ((rVar8 != RMI_ALWAYS) && (x->stdin_tty == false)) goto LAB_001038f8;
        _Var3 = can_write_any_file();
        if (_Var3 != false) goto LAB_00103940;
        iVar6 = cache_fstatat(iVar7,pcVar13,&st,iVar4);
        if (iVar6 != 0) goto LAB_00103b30;
        if ((st.st_mode & 0xf000) == 0xa000) {
LAB_00103940:
          rVar8 = x->interactive;
          goto LAB_00103943;
        }
        iVar4 = 0x200;
        iVar6 = faccessat(iVar7,pcVar13,2,0x200);
        if (iVar6 == 0) goto LAB_00103940;
        piVar10 = __errno_location();
        iVar6 = *piVar10;
        if (iVar6 == 0xd) {
          bVar2 = true;
          goto LAB_0010394b;
        }
LAB_00103b38:
        pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar15);
LAB_0010398e:
        uVar14 = dcgettext(0,"cannot remove %s",5);
        error(0,iVar6,uVar14,pcVar13);
        RVar9 = RM_ERROR;
        goto LAB_001038fd;
      }
LAB_00103943:
      if (rVar8 != RMI_ALWAYS) goto LAB_001038f8;
      bVar2 = false;
LAB_0010394b:
      if (uVar17 == 0) {
        iVar6 = cache_fstatat(iVar7,pcVar13,&st,iVar4);
        if (iVar6 != 0) {
LAB_00103b30:
          piVar10 = __errno_location();
          iVar6 = *piVar10;
          goto LAB_00103b38;
        }
        if ((st.st_mode & 0xf000) == 0xa000) {
          if (x->interactive != RMI_ALWAYS) goto LAB_001038f8;
        }
        else if ((st.st_mode & 0xf000) == 0x4000) goto LAB_0010395e;
LAB_00103b11:
        pcVar15 = quotearg_style(shell_escape_always_quoting_style,pcVar15);
LAB_00103885:
        iVar7 = cache_fstatat(iVar7,pcVar13,&st,iVar4);
        if (iVar7 != 0) {
          uVar14 = dcgettext(0,"cannot remove %s",5);
          piVar10 = __errno_location();
          error(0,*piVar10,uVar14,pcVar15);
          RVar9 = RM_ERROR;
          goto LAB_001038fd;
        }
        pcVar12 = file_type(&st);
        pcVar13 = program_name;
        if (bVar2) {
          uVar14 = dcgettext(0,"%s: remove write-protected %s %s? ",5);
        }
        else {
          uVar14 = dcgettext(0,"%s: remove %s %s? ",5);
        }
        __fprintf_chk(stderr,1,uVar14,pcVar13,pcVar12,pcVar15);
      }
      else {
        if (uVar17 != 4) goto LAB_00103b11;
LAB_0010395e:
        if (x->recursive == false) {
          if ((x->remove_empty_directories == false) || (is_dir == false)) {
            iVar6 = 0x15;
            pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar15);
            goto LAB_0010398e;
          }
          goto LAB_00103b11;
        }
        pcVar15 = quotearg_style(shell_escape_always_quoting_style,pcVar15);
        pcVar12 = program_name;
        if ((mode != PA_DESCEND_INTO_DIR) || (is_dir != false)) goto LAB_00103885;
        if (bVar2) {
          uVar14 = dcgettext(0,"%s: descend into write-protected directory %s? ",5);
        }
        else {
          uVar14 = dcgettext(0,"%s: descend into directory %s? ",5);
        }
        __fprintf_chk(stderr,1,uVar14,pcVar12,pcVar15);
      }
      _Var3 = yesno();
      if (_Var3 == false) goto LAB_00103930;
    }
LAB_001038f8:
    RVar9 = RM_OK;
  }
  else {
LAB_00103930:
    RVar9 = RM_USER_DECLINED;
  }
LAB_001038fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return RVar9;
}

