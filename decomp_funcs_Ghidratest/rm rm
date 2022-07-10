
RM_status rm(char **file,rm_options *x)

{
  ushort uVar1;
  long lVar2;
  dev_ino *pdVar3;
  long lVar4;
  RM_status RVar5;
  RM_status RVar6;
  int iVar7;
  FTS *fts;
  FTSENT *ent;
  int *piVar8;
  DIR *__dirp;
  dirent *pdVar9;
  char *pcVar10;
  _ftsent *p_Var11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long in_FS_OFFSET;
  bool is_dir;
  Ternary is_empty_directory;
  stat statbuf;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*file == (char *)0x0) {
    RVar6 = RM_OK;
LAB_00103d5a:
    if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return RVar6;
  }
  RVar6 = RM_OK;
  fts = xfts_open(file,(-(uint)(x->one_file_system == false) & 0xffffffc0) + 600,
                  (anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0);
LAB_00103c60:
  ent = (FTSENT *)rpl_fts_read();
  if (ent != (FTSENT *)0x0) {
    do {
      uVar1 = ent->fts_info;
      switch(uVar1) {
      default:
        uVar14 = quotearg_n_style_colon(0,3,ent->fts_path);
        uVar1 = ent->fts_info;
        uVar15 = dcgettext(0,"unexpected failure: fts_info=%d: %s\nplease report to %s",5);
        error(0,0,uVar15,uVar1,uVar14,"bug-coreutils@gnu.org");
                    /* WARNING: Subroutine does not return */
        abort();
      case 1:
        if (x->recursive == false) {
          if (x->remove_empty_directories == false) {
LAB_00104000:
            uVar14 = 0x15;
          }
          else {
            iVar7 = openat(fts->fts_cwd_fd,ent->fts_accpath,0x30900);
            if (-1 < iVar7) {
              __dirp = fdopendir(iVar7);
              if (__dirp == (DIR *)0x0) {
                close(iVar7);
              }
              else {
                piVar8 = __errno_location();
                *piVar8 = 0;
                while (pdVar9 = readdir(__dirp), pdVar9 != (dirent *)0x0) {
                  if ((pdVar9->d_name[0] != '.') ||
                     ((pdVar9->d_name[(ulong)(pdVar9->d_name[1] == '.') + 1] != '\0' &&
                      (pdVar9->d_name[(ulong)(pdVar9->d_name[1] == '.') + 1] != '/')))) {
                    iVar7 = *piVar8;
                    closedir(__dirp);
                    *piVar8 = iVar7;
                    goto LAB_00103eb3;
                  }
                }
                iVar7 = *piVar8;
                closedir(__dirp);
                *piVar8 = iVar7;
                if (iVar7 == 0) goto LAB_00103ee0;
              }
            }
LAB_00103eb3:
            if (x->remove_empty_directories == false) goto LAB_00104000;
            uVar14 = 0x27;
          }
          pcVar12 = quotearg_style(shell_escape_always_quoting_style,ent->fts_path);
          uVar15 = dcgettext(0,"cannot remove %s",5);
          error(0,uVar14,uVar15,pcVar12);
          p_Var11 = ent->fts_parent;
          if (-1 < p_Var11->fts_level) goto LAB_00104067;
          goto LAB_00103dc7;
        }
LAB_00103ee0:
        if (ent->fts_level == 0) {
          pcVar12 = ent->fts_accpath;
          pcVar10 = last_component(pcVar12);
          if ((*pcVar10 == '.') &&
             ((pcVar10[(ulong)(pcVar10[1] == '.') + 1] == '\0' ||
              (pcVar10[(ulong)(pcVar10[1] == '.') + 1] == '/')))) {
            quotearg_n_style(2,4,ent->fts_path);
            uVar14 = quotearg_n_style(1,4,&DAT_0010cc8e);
            uVar15 = quotearg_n_style(0,4,&DAT_0010cc8f);
            uVar13 = dcgettext(0,"refusing to remove %s or %s directory: skipping %s",5);
            error(0,0,uVar13,uVar15,uVar14);
            goto LAB_00103dc7;
          }
          pdVar3 = x->root_dev_ino;
          if (((pdVar3 != (dev_ino *)0x0) && (ent->fts_statp[0].st_ino == pdVar3->st_ino)) &&
             (ent->fts_statp[0].st_dev == pdVar3->st_dev)) {
            pcVar12 = ent->fts_path;
            if ((*pcVar12 == '/') && (pcVar12[1] == '\0')) {
              pcVar12 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
              uVar14 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
              error(0,0,uVar14,pcVar12);
            }
            else {
              uVar14 = quotearg_n_style(1,4,"/");
              uVar15 = quotearg_n_style(0,4,ent->fts_path);
              uVar13 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
              error(0,0,uVar13,uVar15,uVar14);
            }
            pcVar12 = "use --no-preserve-root to override this failsafe";
LAB_00104197:
            uVar14 = dcgettext(0,pcVar12,5);
            error(0,0,uVar14);
            goto LAB_00103dc7;
          }
          if (x->preserve_all_root != false) {
            pcVar12 = file_name_concat(pcVar12,"..",(char **)0x0);
            iVar7 = __lxstat(1,pcVar12,(stat *)&statbuf);
            if (iVar7 != 0) {
              uVar14 = quotearg_n_style(1,4,ent->fts_accpath);
              uVar15 = quotearg_n_style(0,4,pcVar12);
              uVar13 = dcgettext(0,"failed to stat %s: skipping %s",5);
              error(0,0,uVar13,uVar15,uVar14);
              rpl_free(pcVar12);
              goto LAB_00103dc7;
            }
            rpl_free(pcVar12);
            if (fts->fts_dev != statbuf.st_dev) {
              pcVar12 = quotearg_style(shell_escape_always_quoting_style,ent->fts_path);
              uVar14 = dcgettext(0,"skipping %s, since it\'s on a different device",5);
              error(0,0,uVar14,pcVar12);
              pcVar12 = "and --preserve-root=all is in effect";
              goto LAB_00104197;
            }
          }
        }
        RVar5 = prompt(fts,ent,true,x,PA_DESCEND_INTO_DIR,&is_empty_directory);
        if (RVar5 == RM_OK) {
          if (is_empty_directory != T_YES) goto LAB_00103c60;
          RVar5 = excise(fts,ent,x,true);
          if (RVar5 == RM_OK) {
            rpl_fts_set(fts,ent,4);
            rpl_fts_read(fts);
            goto LAB_00103c60;
          }
        }
        p_Var11 = ent->fts_parent;
        lVar4 = p_Var11->fts_level;
        while ((-1 < lVar4 && (p_Var11->fts_number == 0))) {
          p_Var11->fts_number = 1;
          p_Var11 = p_Var11->fts_parent;
          lVar4 = p_Var11->fts_level;
        }
        rpl_fts_set(fts,ent,4);
        rpl_fts_read(fts);
        break;
      case 2:
        goto switchD_00103c8c_caseD_2;
      case 3:
      case 4:
      case 6:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        if ((((uVar1 == 6) && (x->one_file_system != false)) && (0 < ent->fts_level)) &&
           (ent->fts_statp[0].st_dev != fts->fts_dev)) {
          p_Var11 = ent->fts_parent;
          if (-1 < p_Var11->fts_level) goto LAB_001042db;
          goto LAB_001042e2;
        }
        is_dir = (uVar1 & 0xfffd) == 4;
        RVar5 = prompt(fts,ent,is_dir,x,PA_REMOVE_DIR,(Ternary *)0x0);
        if (RVar5 == RM_OK) {
          RVar5 = excise(fts,ent,x,is_dir);
        }
        break;
      case 7:
        uVar14 = quotearg_n_style_colon(0,3,ent->fts_path);
        uVar15 = dcgettext(0,"traversal failed: %s",5);
        error(0,ent->fts_errno,uVar15,uVar14);
        goto LAB_00103dc7;
      }
      if (2 < RVar5 + 0xfffffffe) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("VALID_STATUS (s)","src/remove.c",0x263,"rm");
      }
      if (RVar5 == RM_ERROR) {
        RVar6 = RM_ERROR;
        goto LAB_00103c60;
      }
      if (RVar5 != RM_USER_DECLINED) goto LAB_00103c60;
      if (RVar6 == RM_OK) {
        RVar6 = RM_USER_DECLINED;
      }
      ent = (FTSENT *)rpl_fts_read();
      if (ent == (FTSENT *)0x0) break;
    } while( true );
  }
  piVar8 = __errno_location();
  if (*piVar8 == 0) {
    iVar7 = rpl_fts_close(fts);
  }
  else {
    RVar6 = RM_ERROR;
    uVar14 = dcgettext(0,"fts_read failed",5);
    error(0,*piVar8,uVar14);
    iVar7 = rpl_fts_close(fts);
  }
  if (iVar7 != 0) {
    RVar6 = RM_ERROR;
    uVar14 = dcgettext(0,"fts_close failed",5);
    error(0,*piVar8,uVar14);
  }
  goto LAB_00103d5a;
  while( true ) {
    p_Var11->fts_number = 1;
    p_Var11 = p_Var11->fts_parent;
    if (p_Var11->fts_level < 0) break;
LAB_001042db:
    if (p_Var11->fts_number != 0) break;
  }
LAB_001042e2:
  pcVar12 = quotearg_style(shell_escape_always_quoting_style,ent->fts_path);
  uVar14 = dcgettext(0,"skipping %s, since it\'s on a different device",5);
  RVar6 = RM_ERROR;
  error(0,0,uVar14,pcVar12);
  goto LAB_00103c60;
switchD_00103c8c_caseD_2:
  uVar14 = quotearg_n_style_colon(0,3,ent->fts_path);
  uVar15 = dcgettext(0,
                     "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                     ,5);
  error(0,0,uVar15,uVar14);
  goto LAB_00103dc7;
  while( true ) {
    p_Var11->fts_number = 1;
    p_Var11 = p_Var11->fts_parent;
    if (p_Var11->fts_level < 0) break;
LAB_00104067:
    if (p_Var11->fts_number != 0) break;
  }
LAB_00103dc7:
  RVar6 = RM_ERROR;
  rpl_fts_set(fts,ent,4);
  rpl_fts_read(fts);
  goto LAB_00103c60;
}

