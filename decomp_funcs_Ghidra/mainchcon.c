
int main(int argc,char **argv)

{
  bool bVar1;
  _Bool _Var2;
  int iVar3;
  int *piVar4;
  FTS *sp;
  FTSENT *p;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  int extraout_EDX;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  byte bVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined8 uVar13;
  int local_58;
  char *local_50;
  char *file_context;
  long local_40;
  
  uVar12 = 0x10;
  bVar11 = 0;
  bVar1 = false;
  pcVar10 = (char *)(long)argc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  local_58 = -1;
  local_50 = (char *)0x0;
  do {
    uVar13 = 0x10297b;
    iVar3 = getopt_long((ulong)pcVar10 & 0xffffffff,argv,"HLPRhvu:r:t:l:",long_options,0);
    if (iVar3 == -1) {
      if (recurse == false) {
        affect_symlink_referent = local_58 != 0;
        uVar12 = 0x10;
LAB_00102a9a:
        lVar8 = (long)optind;
        iVar3 = optind;
        if ((local_50 != (char *)0x0) || (bVar1)) {
          if (0 < argc - optind) {
            if (local_50 != (char *)0x0) goto LAB_00103297;
            specified_context = (char *)0x0;
            goto LAB_00102ad9;
          }
        }
        else if (1 < argc - optind) {
          optind = optind + 1;
          specified_context = argv[lVar8];
LAB_00102ad9:
          bVar11 = bVar11 & recurse;
          piVar4 = __errno_location();
          if (bVar11 == 0) {
            root_dev_ino = (dev_ino *)0x0;
          }
          else {
            root_dev_ino = get_root_dev_ino(&main::lexical_block_4::dev_ino_buf);
            if (root_dev_ino == (dev_ino *)0x0) {
              pcVar6 = quotearg_style(shell_escape_always_quoting_style,"/");
              uVar13 = dcgettext(0,"failed to get attributes of %s",5);
              error(1,*piVar4,uVar13,pcVar6);
              iVar3 = extraout_EDX;
              goto LAB_001030be;
            }
          }
          uVar9 = 1;
          sp = xfts_open(argv + optind,uVar12 | 8,(anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0
                        );
          p = (FTSENT *)rpl_fts_read();
          if (p != (FTSENT *)0x0) break;
          goto LAB_00102c04;
        }
LAB_001030be:
        if (argc <= iVar3) {
          uVar13 = dcgettext(0,"missing operand",5);
          error(0,0,uVar13);
          goto switchD_001029ab_caseD_49;
        }
      }
      else {
        if (uVar12 == 0x10) {
          if (local_58 != 1) {
            affect_symlink_referent = false;
            goto LAB_00102a9a;
          }
        }
        else {
          if (local_58 != 0) {
            affect_symlink_referent = true;
            goto LAB_00102a9a;
          }
          uVar13 = dcgettext(0,"-R -h requires -P",5);
          error(1,0,uVar13);
LAB_00103297:
          piVar4 = __errno_location();
          *piVar4 = 0x5f;
          pcVar10 = quotearg_style(shell_escape_always_quoting_style,local_50);
          uVar13 = dcgettext(0,"failed to get security context of %s",5);
          error(1,*piVar4,uVar13,pcVar10);
        }
        uVar13 = dcgettext(0,"-R --dereference requires either -H or -L",5);
        error(1,0,uVar13);
      }
      pcVar10 = quote(argv[(long)(pcVar10 + -1)]);
      uVar13 = dcgettext(0,"missing operand after %s",5);
      error(0,0,uVar13,pcVar10);
      goto switchD_001029ab_caseD_49;
    }
    if (0x83 < iVar3) goto switchD_001029ab_caseD_49;
    if (iVar3 < 0x48) {
      if (iVar3 == -0x83) {
        version_etc(stdout,"chcon","GNU coreutils",Version,"Russell Coker","Jim Meyering",0,uVar13);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001029ab_caseD_49;
    }
    switch(iVar3) {
    case 0x48:
      uVar12 = 0x11;
      break;
    default:
switchD_001029ab_caseD_49:
                    /* WARNING: Subroutine does not return */
      usage(1);
    case 0x4c:
      uVar12 = 2;
      break;
    case 0x50:
      uVar12 = 0x10;
      break;
    case 0x52:
      recurse = true;
      break;
    case 0x66:
      break;
    case 0x68:
      local_58 = 0;
      break;
    case 0x6c:
    case 0x72:
    case 0x74:
    case 0x75:
      bVar1 = true;
      break;
    case 0x76:
      verbose = true;
      break;
    case 0x80:
      local_58 = 1;
      break;
    case 0x81:
      bVar11 = 0;
      break;
    case 0x82:
      bVar11 = 1;
      break;
    case 0x83:
      local_50 = optarg;
    }
  } while( true );
LAB_00102b38:
  pcVar10 = p->fts_path;
  switch(p->fts_info) {
  case 1:
    uVar12 = (uint)recurse;
    if (recurse == false) goto switchD_00102b4e_caseD_0;
    if (((root_dev_ino != (dev_ino *)0x0) && (p->fts_statp[0].st_ino == root_dev_ino->st_ino)) &&
       (p->fts_statp[0].st_dev == root_dev_ino->st_dev)) {
      iVar3 = strcmp(pcVar10,"/");
      if (iVar3 == 0) {
        pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar10);
        uVar13 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
        error(0,0,uVar13,pcVar10);
      }
      else {
        uVar13 = quotearg_n_style(1,4,"/");
        uVar5 = quotearg_n_style(0,4,pcVar10);
        uVar7 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
        error(0,0,uVar7,uVar5,uVar13);
      }
      uVar12 = 0;
      uVar13 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
      error(0,0,uVar13);
      rpl_fts_set(sp,p,4);
      rpl_fts_read(sp);
    }
    goto LAB_00102bed;
  case 2:
    _Var2 = cycle_warning_required(sp,p);
    if (_Var2 != false) {
      uVar13 = quotearg_n_style_colon(0,3,pcVar10);
      uVar5 = dcgettext(0,
                        "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                        ,5);
      uVar12 = 0;
      error(0,0,uVar5,uVar13);
      goto LAB_00102bed;
    }
  default:
switchD_00102b4e_caseD_0:
    pcVar6 = p->fts_accpath;
    if (verbose != false) {
      pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar10);
      uVar13 = dcgettext(0,"changing security context of %s\n",5);
      __printf_chk(1,uVar13,pcVar10);
    }
    pcVar10 = specified_context;
    iVar3 = sp->fts_cwd_fd;
    file_context = (char *)0x0;
    if (specified_context == (char *)0x0) {
      if (affect_symlink_referent == false) {
        iVar3 = lgetfileconat(iVar3,pcVar6,&file_context);
      }
      else {
        iVar3 = getfileconat(iVar3,pcVar6,&file_context);
      }
      if ((iVar3 < 0) && (*piVar4 != 0x3d)) {
        pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar6);
        uVar13 = dcgettext(0,"failed to get security context of %s",5);
        uVar12 = 0;
        error(0,*piVar4,uVar13,pcVar10);
      }
      else if (file_context == (char *)0x0) {
        pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar6);
        uVar13 = dcgettext(0,"can\'t apply partial context to unlabeled file %s",5);
        uVar12 = 0;
        error(0,0,uVar13,pcVar10);
      }
      else {
        *piVar4 = 0x5f;
        pcVar10 = quote(file_context);
        uVar13 = dcgettext(0,"failed to create security context: %s",5);
        uVar12 = 0;
        error(0,*piVar4,uVar13,pcVar10);
      }
    }
    else {
      if (affect_symlink_referent == false) {
        iVar3 = lsetfileconat(iVar3,pcVar6,(char **)specified_context);
      }
      else {
        iVar3 = setfileconat(iVar3,pcVar6,(char **)specified_context);
      }
      if (iVar3 == 0) {
        uVar12 = 1;
      }
      else {
        pcVar10 = quote_n(1,pcVar10);
        uVar13 = quotearg_n_style(0,4,pcVar6);
        uVar5 = dcgettext(0,"failed to change context of %s to %s",5);
        uVar12 = 0;
        error(0,*piVar4,uVar5,uVar13,pcVar10);
      }
    }
    break;
  case 4:
    pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar10);
    pcVar6 = "cannot read directory %s";
    goto LAB_00102c78;
  case 6:
    if (recurse == false) {
LAB_00102f6f:
      uVar12 = 1;
      goto LAB_00102bed;
    }
    if (((root_dev_ino == (dev_ino *)0x0) || (p->fts_statp[0].st_ino != root_dev_ino->st_ino)) ||
       (p->fts_statp[0].st_dev != root_dev_ino->st_dev)) goto switchD_00102b4e_caseD_0;
    iVar3 = strcmp(pcVar10,"/");
    if (iVar3 == 0) {
      pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar10);
      uVar13 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
      error(0,0,uVar13,pcVar10);
    }
    else {
      uVar13 = quotearg_n_style(1,4,"/");
      uVar5 = quotearg_n_style(0,4,pcVar10);
      uVar7 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
      error(0,0,uVar7,uVar5,uVar13);
    }
    uVar12 = 0;
    uVar13 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
    error(0,0,uVar13);
    break;
  case 7:
    uVar12 = 0;
    uVar13 = quotearg_n_style_colon(0,3,pcVar10);
    error(0,p->fts_errno,"%s",uVar13);
    break;
  case 10:
    if ((p->fts_level == 0) && (p->fts_number == 0)) {
      p->fts_number = 1;
      rpl_fts_set(sp,p,1);
      goto LAB_00102f6f;
    }
    pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar10);
    pcVar6 = "cannot access %s";
LAB_00102c78:
    uVar13 = dcgettext(0,pcVar6,5);
    uVar12 = 0;
    error(0,p->fts_errno,uVar13,pcVar10);
  }
  if (recurse == false) {
    rpl_fts_set(sp,p,4);
  }
LAB_00102bed:
  uVar9 = uVar9 & uVar12;
  p = (FTSENT *)rpl_fts_read();
  if (p == (FTSENT *)0x0) {
LAB_00102c04:
    if (*piVar4 != 0) {
      uVar9 = 0;
      uVar13 = dcgettext(0,"fts_read failed",5);
      error(0,*piVar4,uVar13);
    }
    iVar3 = rpl_fts_close(sp);
    if (iVar3 != 0) {
      uVar9 = 0;
      uVar13 = dcgettext(0,"fts_close failed",5);
      error(0,*piVar4,uVar13);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar9 ^ 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00102b38;
}

