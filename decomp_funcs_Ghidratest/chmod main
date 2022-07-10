
/* WARNING: Could not reconcile some variable overlaps */

ulong main(int param_1,char **param_2)

{
  ulong uVar1;
  _Bool _Var2;
  int iVar3;
  Verbosity VVar4;
  mode_t mode;
  size_t sVar5;
  FTS *sp;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  uint *p;
  char *pcVar12;
  Verbosity oldmode;
  char *pcVar13;
  uint uVar14;
  long in_FS_OFFSET;
  undefined8 uVar15;
  char *local_120;
  char *local_118;
  ulong local_f0;
  stat local_e8;
  char local_58;
  undefined local_57 [9];
  undefined local_4e;
  char local_4c;
  undefined local_4b [9];
  undefined local_42;
  long local_40;
  
  pcVar9 = (char *)0x0;
  pcVar13 = (char *)(long)param_1;
  p = &switchD_00102975::switchdataD_0010b9a4;
  uVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  diagnose_surprises = false;
  force_silent = false;
  recurse = false;
  local_120 = (char *)0x0;
  uVar10 = 0;
  while( true ) {
    uVar15 = 0x102944;
    iVar3 = getopt_long((ulong)pcVar13 & 0xffffffff,param_2,
                        "Rcfvr::w::x::X::s::t::u::g::o::a::,::+::=::0::1::2::3::4::5::6::7::");
    if (iVar3 == -1) break;
    if (0x82 < iVar3) goto switchD_00102975_caseD_2d;
    if (iVar3 < 0x2b) {
      if (iVar3 == -0x83) {
        version_etc(stdout,"chmod","GNU coreutils",Version,"David MacKenzie","Jim Meyering",0,uVar15
                   );
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102975_caseD_2d;
    }
    switch(iVar3) {
    case 0x2b:
    case 0x2c:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x3d:
    case 0x58:
    case 0x61:
    case 0x67:
    case 0x6f:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x77:
    case 0x78:
      pcVar12 = param_2[(long)optind + -1];
      sVar5 = strlen(pcVar12);
      lVar7 = (uVar10 != 0) + uVar10;
      uVar1 = sVar5 + lVar7;
      if (local_f0 <= uVar1) {
        local_f0 = uVar1 + 1;
        pcVar9 = (char *)x2realloc(pcVar9,&local_f0);
      }
      pcVar9[uVar10] = ',';
      memcpy(pcVar9 + lVar7,pcVar12,sVar5 + 1);
      diagnose_surprises = true;
      uVar10 = uVar1;
      break;
    default:
      goto switchD_00102975_caseD_2d;
    case 0x52:
      recurse = true;
      break;
    case 99:
      verbosity = V_changes_only;
      break;
    case 0x66:
      force_silent = true;
      break;
    case 0x76:
      verbosity = V_high;
      break;
    case 0x80:
      uVar11 = 0;
      break;
    case 0x81:
      uVar11 = 1;
      break;
    case 0x82:
      local_120 = optarg;
    }
  }
  if (local_120 == (char *)0x0) {
    lVar7 = (long)optind;
    if (pcVar9 == (char *)0x0) {
      optind = optind + 1;
      pcVar9 = param_2[lVar7];
      if (param_1 <= optind) {
        if (pcVar9 == (char *)0x0) goto LAB_00103280;
        goto LAB_00103272;
      }
    }
    else if (param_1 <= optind) {
LAB_00103272:
      if (param_2[(long)optind + -1] == pcVar9) goto LAB_001034c5;
      goto LAB_00103280;
    }
    change = mode_compile(pcVar9);
    if (change == (mode_change *)0x0) {
      pcVar9 = quote(pcVar9);
      uVar15 = dcgettext(0,"invalid mode: %s",5);
      error(0,0,uVar15,pcVar9);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    umask_value = umask(0);
LAB_00102b09:
    if ((recurse == false) || ((char)uVar11 == '\0')) {
      root_dev_ino = (dev_ino *)0x0;
    }
    else {
      root_dev_ino = get_root_dev_ino((dev_ino *)dev_ino_buf_7399);
      if (root_dev_ino == (dev_ino *)0x0) {
        pcVar9 = quotearg_style(shell_escape_always_quoting_style,"/");
        sp = (FTS *)dcgettext(0,"failed to get attributes of %s",5);
        piVar6 = __errno_location();
        error(1,*piVar6,sp,pcVar9);
        goto LAB_001033c9;
      }
    }
    uVar11 = 1;
    sp = xfts_open(param_2 + optind,0x411,(anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0);
    p = (uint *)rpl_fts_read();
    do {
      if ((FTSENT *)p == (FTSENT *)0x0) {
        piVar6 = __errno_location();
        if (*piVar6 != 0) {
          uVar11 = (uint)force_silent;
          if (force_silent == false) {
            uVar15 = dcgettext(0,"fts_read failed",5);
            error(0,*piVar6,uVar15);
          }
          else {
            uVar11 = 0;
          }
        }
        iVar3 = rpl_fts_close(sp);
        if (iVar3 != 0) {
          uVar11 = 0;
          uVar15 = dcgettext(0,"fts_close failed",5);
          error(0,*piVar6,uVar15);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (ulong)(uVar11 ^ 1);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pcVar9 = *(char **)((long)p + 0x38);
      switch(*(ushort *)((long)p + 0x68)) {
      default:
switchD_00102b7d_caseD_0:
        if (((root_dev_ino != (dev_ino *)0x0) &&
            (((stat *)((long)p + 0x70))->st_ino == root_dev_ino->st_ino)) &&
           (((stat *)((long)p + 0x70))->st_dev == root_dev_ino->st_dev)) {
          iVar3 = strcmp(pcVar9,"/");
          if (iVar3 == 0) {
            pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
            uVar15 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
            error(0,0,uVar15,pcVar9);
          }
          else {
            quotearg_n_style(1,4,"/");
            uVar15 = quotearg_n_style(0,4,pcVar9);
            uVar8 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
            error(0,0,uVar8,uVar15);
          }
          uVar15 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
          error(0,0,uVar15);
          rpl_fts_set(sp,(FTSENT *)p,4);
          rpl_fts_read(sp);
          uVar11 = 0;
          break;
        }
        oldmode = ((stat *)((long)p + 0x70))->st_mode;
        uVar14 = 2;
        if ((oldmode & 0xf000) == 0xa000) goto LAB_00102d93;
        pcVar13 = *(char **)((long)p + 0x30);
        local_120._0_4_ =
             mode_adjust(oldmode,(oldmode & 0xf000) == 0x4000,umask_value,change,(mode_t *)0x0);
        iVar3 = rpl_fchmodat(sp->fts_cwd_fd,pcVar13,(Verbosity)local_120,0);
        if (iVar3 == 0) {
          if (verbosity != V_off) {
            VVar4 = (Verbosity)local_120;
            if ((((Verbosity)local_120 & 0xe00) != V_high) &&
               (iVar3 = __fxstatat(1,sp->fts_cwd_fd,pcVar13,&local_e8,0), VVar4 = local_e8.st_mode,
               iVar3 != 0)) {
              if (force_silent == false) {
                pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
                uVar15 = dcgettext(0,"getting new attributes of %s",5);
                piVar6 = __errno_location();
                error(0,*piVar6,uVar15,pcVar13);
              }
LAB_001031dd:
              uVar14 = 3;
              if (verbosity == V_high) goto LAB_00102ff3;
              goto LAB_00102ce5;
            }
            if (((VVar4 ^ oldmode) & 0xfff) == V_high) goto LAB_001031dd;
            uVar14 = 4;
            local_118 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
            VVar4 = (Verbosity)local_120 & 0xfff;
            strmode((Verbosity)local_120,&local_58);
            local_4e = 0;
            strmode(oldmode,&local_4c);
            local_42 = 0;
            uVar15 = dcgettext(0,"mode of %s changed from %04lo (%s) to %04lo (%s)\n",5);
            goto LAB_00102cb0;
          }
          uVar14 = 4;
          goto LAB_00102ce5;
        }
        if (force_silent == false) {
          pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
          uVar15 = dcgettext(0,"changing permissions of %s",5);
          piVar6 = __errno_location();
          error(0,*piVar6,uVar15,pcVar13);
        }
        if ((verbosity != V_off) && (verbosity == V_high)) {
          uVar14 = 1;
LAB_00102ff3:
          local_118 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
          goto LAB_001030ad;
        }
        goto LAB_00102fc3;
      case 2:
        _Var2 = cycle_warning_required(sp,(FTSENT *)p);
        if (_Var2 == false) goto switchD_00102b7d_caseD_0;
        uVar15 = quotearg_n_style_colon(0,3,pcVar9);
        uVar8 = dcgettext(0,
                          "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                          ,5);
        error(0,0,uVar8,uVar15);
        uVar11 = 0;
        break;
      case 4:
        if (force_silent == false) {
          pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
          pcVar12 = "cannot read directory %s";
LAB_00102e32:
          uVar15 = dcgettext(0,pcVar12,5);
          error(0,*(int *)((long)p + 0x40),uVar15,pcVar13);
        }
        goto LAB_00102d90;
      case 6:
        break;
      case 7:
        if (force_silent == false) {
          uVar15 = quotearg_n_style_colon(0,3,pcVar9);
          error(0,*(int *)((long)p + 0x40),"%s",uVar15);
        }
        goto LAB_00102d90;
      case 10:
        if ((*(ptrdiff_t *)((long)p + 0x58) != 0) || (*(long *)((long)p + 0x20) != 0)) {
          if (force_silent == false) {
            pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
            pcVar12 = "cannot access %s";
            goto LAB_00102e32;
          }
          goto LAB_00102d90;
        }
LAB_001033c9:
        *(long *)((long)p + 0x20) = 1;
        rpl_fts_set(sp,(FTSENT *)p,1);
        break;
      case 0xd:
        if (force_silent == false) {
          pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
          uVar15 = dcgettext(0,"cannot operate on dangling symlink %s",5);
          error(0,0,uVar15,pcVar13);
        }
LAB_00102d90:
        uVar14 = 0;
LAB_00102d93:
        oldmode = verbosity;
        if ((verbosity != V_off) && (verbosity == V_high)) {
          local_118 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
          pcVar13 = "%s could not be accessed\n";
          if (uVar14 != 0) {
            local_120._0_4_ = V_high;
LAB_001030ad:
            if (uVar14 != 2) {
              VVar4 = (Verbosity)local_120 & 0xfff;
              strmode((Verbosity)local_120,&local_58);
              local_4e = 0;
              strmode(oldmode,&local_4c);
              local_42 = 0;
              if (uVar14 == 1) {
                uVar15 = dcgettext(0,"failed to change mode of %s from %04lo (%s) to %04lo (%s)\n",5
                                  );
LAB_00102cb0:
                __printf_chk(1,uVar15,local_118,oldmode & 0xfff,local_4b,VVar4,local_57,uVar15);
                if (uVar14 < 3) goto LAB_00102cf2;
              }
              else {
                if (uVar14 != 3) {
                  uVar10 = main_cold();
                  return uVar10;
                }
                uVar15 = dcgettext(0,"mode of %s retained as %04lo (%s)\n",5);
                __printf_chk(1,uVar15,local_118,VVar4);
              }
LAB_00102ce5:
              if ((diagnose_surprises != false) &&
                 (mode = mode_adjust(oldmode,(oldmode & 0xf000) == 0x4000,0,change,(mode_t *)0x0),
                 ((Verbosity)local_120 & ~mode) != V_high)) {
                strmode((Verbosity)local_120,&local_58);
                strmode(mode,&local_4c);
                local_42 = 0;
                local_4e = 0;
                uVar15 = quotearg_n_style_colon(0,3,pcVar9);
                uVar8 = dcgettext(0,"%s: new permissions are %s, not %s",5);
                error(0,0,uVar8,uVar15,local_57,local_4b);
LAB_00102fc3:
                uVar14 = 1;
              }
              goto LAB_00102cf2;
            }
            pcVar13 = "neither symbolic link %s nor referent has been changed\n";
          }
          uVar15 = dcgettext(0,pcVar13,5);
          __printf_chk(1,uVar15,local_118);
        }
LAB_00102cf2:
        if (recurse == false) {
          rpl_fts_set(sp,(FTSENT *)p,4);
        }
        uVar11 = uVar11 & 1 < uVar14;
      }
      p = (uint *)rpl_fts_read();
    } while( true );
  }
  if (pcVar9 == (char *)0x0) {
    if (optind < param_1) {
      change = mode_create_from_ref(local_120);
      if (change != (mode_change *)0x0) goto LAB_00102b09;
      pcVar13 = quotearg_style(shell_escape_always_quoting_style,local_120);
      param_2 = (char **)dcgettext(0,"failed to get attributes of %s",5);
      piVar6 = __errno_location();
      error(1,*piVar6,param_2,pcVar13);
LAB_001034c5:
      pcVar9 = quote(param_2[(long)(pcVar13 + -1)]);
      uVar15 = dcgettext(0,"missing operand after %s",5);
      error(0,0,uVar15,pcVar9);
      goto switchD_00102975_caseD_2d;
    }
LAB_00103280:
    pcVar9 = "missing operand";
  }
  else {
    pcVar9 = "cannot combine mode and --reference options";
  }
  uVar15 = dcgettext(0,pcVar9,5);
  error(0,0,uVar15);
switchD_00102975_caseD_2d:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

