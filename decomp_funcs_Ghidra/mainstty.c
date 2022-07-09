
int main(int argc,char **argv)

{
  cc_t *pcVar1;
  cc_t cVar2;
  mode_type mVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char **ppcVar12;
  uint *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar19;
  char *pcVar20;
  long lVar21;
  control_info *pcVar22;
  mode_info *pmVar23;
  uint uVar24;
  mode_type mVar25;
  byte *pbVar26;
  byte *pbVar27;
  _IO_FILE *p_Var28;
  long in_FS_OFFSET;
  bool bVar29;
  bool bVar30;
  byte bVar31;
  char *local_58;
  _Bool require_set_attr;
  _Bool speed_was_set;
  long local_40;
  
  bVar31 = 0;
  iVar11 = 0;
  uVar24 = 0;
  lVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  local_58 = (char *)0x0;
  opterr = 0;
  bVar6 = true;
  bVar5 = false;
  bVar7 = false;
  uVar10 = 1;
LAB_001038c3:
  iVar9 = getopt_long(argc - uVar24,argv + lVar21,"-agF:",longopts,0);
  uVar8 = optind;
  if (iVar9 != -1) {
    if (iVar9 == 0x46) {
      if (local_58 != (char *)0x0) goto LAB_0010424b;
      local_58 = optarg;
    }
    else {
      if (iVar9 < 0x47) {
        if (iVar9 == -0x83) {
          version_etc((FILE *)stdout,"stty","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar9 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
LAB_001039ab:
        bVar29 = CARRY4(uVar24,uVar10);
        uVar24 = uVar24 + uVar10;
        bVar30 = uVar24 == 0;
        lVar19 = 7;
        lVar21 = (long)(int)uVar24;
        pbVar26 = (byte *)argv[lVar21];
        pbVar27 = (byte *)"-drain";
        do {
          if (lVar19 == 0) break;
          lVar19 = lVar19 + -1;
          bVar29 = *pbVar26 < *pbVar27;
          bVar30 = *pbVar26 == *pbVar27;
          pbVar26 = pbVar26 + (ulong)bVar31 * -2 + 1;
          pbVar27 = pbVar27 + (ulong)bVar31 * -2 + 1;
        } while (bVar30);
        if (((!bVar29 && !bVar30) != bVar29) && (iVar9 = strcmp(argv[lVar21],"drain"), iVar9 != 0))
        {
          bVar6 = false;
        }
        optind = 0;
        uVar10 = 1;
        goto LAB_001038c3;
      }
      if (iVar9 == 0x61) {
        bVar7 = true;
        iVar11 = 1;
      }
      else {
        if (iVar9 != 0x67) goto LAB_001039ab;
        bVar5 = true;
        iVar11 = 2;
      }
    }
    if ((int)uVar10 < (int)optind) {
      lVar19 = (long)(int)uVar10;
      uVar18 = (optind - 1) - uVar10;
      ppcVar12 = argv + lVar19 + lVar21;
      do {
        *ppcVar12 = (char *)0x0;
        ppcVar12 = ppcVar12 + 1;
        uVar10 = uVar8;
      } while (argv + (ulong)uVar18 + lVar19 + lVar21 + 1 != ppcVar12);
    }
    goto LAB_001038c3;
  }
  if ((bool)(bVar7 & bVar5)) {
    uVar15 = dcgettext(0,
                       "the options for verbose and stty-readable output styles are\nmutually exclusive"
                       ,5);
    error(1,0,uVar15);
LAB_0010424b:
    uVar15 = dcgettext(0,"only one device may be specified",5);
    error(1,0,uVar15);
LAB_0010426f:
    uVar15 = quotearg_n_style_colon(0,3,local_58);
    piVar16 = __errno_location();
    error(1,*piVar16,"%s",uVar15);
LAB_0010429f:
    uVar15 = dcgettext(0,"when specifying an output style, modes may not be set",5);
    error(1,0,uVar15);
  }
  else {
    if (bVar6) {
      if (local_58 != (char *)0x0) goto LAB_00103aa3;
      local_58 = (char *)dcgettext(0,"standard input",5);
      iVar9 = tcgetattr(0,(termios *)&main::mode);
      if (iVar9 == 0) {
LAB_00103bbc:
        max_col = screen_columns();
        current_col = 0;
        if (iVar11 == 1) goto LAB_00103dad;
        if (iVar11 == 2) {
          lVar21 = 0;
          __printf_chk(1,"%lx:%lx:%lx:%lx",main::mode.c_iflag,main::mode.c_oflag,main::mode.c_cflag,
                       main::mode.c_lflag);
          do {
            pcVar1 = main::mode.c_cc + lVar21;
            lVar21 = lVar21 + 1;
            __printf_chk(1,":%lx",*pcVar1);
          } while (lVar21 != 0x20);
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\n';
          }
          else {
            __overflow(stdout,10);
          }
          goto LAB_00103b5f;
        }
        display_speed(&main::mode,true);
        wrapf("line = %d;",(ulong)main::mode.c_line);
        pcVar4 = stdout->_IO_write_ptr;
        if (pcVar4 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar4 + 1;
          *pcVar4 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
        current_col = 0;
        pcVar22 = control_info;
        bVar5 = true;
        while( true ) {
          pcVar4 = pcVar22->name;
          iVar11 = strcmp(pcVar4,"min");
          if (iVar11 == 0) break;
          cVar2 = *(cc_t *)(pcVar22->offset + 0x114191);
          if ((cVar2 != pcVar22->saneval) && (iVar11 = strcmp(pcVar4,"flush"), iVar11 != 0)) {
            pcVar20 = "<undef>";
            if (cVar2 != '\0') {
              pcVar20 = visible(cVar2);
            }
            bVar5 = false;
            wrapf("%s = %s;",pcVar4,pcVar20);
          }
          pcVar22 = pcVar22 + 1;
        }
        if ((main::mode.c_lflag & 2) == 0) {
          wrapf("min = %lu; time = %lu;\n",(ulong)main::mode.c_cc[6],(ulong)main::mode.c_cc[5]);
        }
        else if (!bVar5) {
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\n';
          }
          else {
            __overflow(stdout,10);
          }
        }
        mVar25 = control;
        bVar5 = true;
        current_col = 0;
        for (pmVar23 = mode_info; pcVar4 = pmVar23->name, pcVar4 != (char *)0x0;
            pmVar23 = pmVar23 + 1) {
          bVar31 = pmVar23->flags;
          if ((bVar31 & 8) == 0) {
            mVar3 = pmVar23->type;
            if ((mVar3 != mVar25) && (mVar25 = mVar3, !bVar5)) {
              pcVar20 = stdout->_IO_write_ptr;
              if (pcVar20 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar20 + 1;
                *pcVar20 = '\n';
              }
              else {
                __overflow(stdout,10);
              }
              current_col = 0;
              bVar5 = true;
            }
            puVar13 = (uint *)mode_type_flag(mVar3,&main::mode);
            uVar14 = pmVar23->mask;
            if (uVar14 == 0) {
              uVar14 = pmVar23->bits;
            }
            if (puVar13 == (uint *)0x0) goto LAB_00104335;
            if ((ulong)((uint)uVar14 & *puVar13) == pmVar23->bits) {
              if ((bVar31 & 2) != 0) {
                bVar5 = false;
                wrapf("%s",pcVar4);
              }
            }
            else if ((bVar31 & 5) == 5) {
              bVar5 = false;
              wrapf("-%s",pcVar4);
            }
          }
        }
        if (!bVar5) goto LAB_00103f93;
      }
      else {
LAB_00103d7d:
        uVar15 = quotearg_n_style_colon(0,3,local_58);
        piVar16 = __errno_location();
        error(1,*piVar16,"%s",uVar15);
LAB_00103dad:
        display_speed(&main::mode,true);
        display_window_size(true,local_58);
        wrapf("line = %d;",(ulong)main::mode.c_line);
        pcVar4 = stdout->_IO_write_ptr;
        if (pcVar4 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar4 + 1;
          *pcVar4 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
        pcVar22 = control_info;
        current_col = 0;
        while( true ) {
          pcVar4 = pcVar22->name;
          iVar11 = strcmp(pcVar4,"min");
          if (iVar11 == 0) break;
          iVar11 = strcmp(pcVar4,"flush");
          if (iVar11 != 0) {
            pcVar20 = "<undef>";
            cVar2 = *(cc_t *)(pcVar22->offset + 0x114191);
            if (cVar2 != '\0') {
              pcVar20 = visible(cVar2);
            }
            wrapf("%s = %s;",pcVar4,pcVar20);
          }
          pcVar22 = pcVar22 + 1;
        }
        wrapf("min = %lu; time = %lu;",(ulong)main::mode.c_cc[6],(ulong)main::mode.c_cc[5]);
        if (current_col != 0) {
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\n';
          }
          else {
            __overflow(stdout,10);
          }
        }
        mVar25 = control;
        current_col = 0;
        for (pmVar23 = mode_info; pcVar4 = pmVar23->name, pcVar4 != (char *)0x0;
            pmVar23 = pmVar23 + 1) {
          bVar31 = pmVar23->flags;
          if ((bVar31 & 8) == 0) {
            mVar3 = pmVar23->type;
            if (mVar3 != mVar25) {
              pcVar20 = stdout->_IO_write_ptr;
              if (pcVar20 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar20 + 1;
                *pcVar20 = '\n';
              }
              else {
                __overflow(stdout,10);
              }
              current_col = 0;
              mVar25 = mVar3;
            }
            puVar13 = (uint *)mode_type_flag(mVar3,&main::mode);
            uVar14 = pmVar23->mask;
            if (uVar14 == 0) {
              uVar14 = pmVar23->bits;
            }
            if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("bitsp","src/stty.c",0x7f5,"display_all");
            }
            if ((ulong)((uint)uVar14 & *puVar13) == pmVar23->bits) {
              wrapf("%s",pcVar4);
            }
            else if ((bVar31 & 4) != 0) {
              wrapf("-%s",pcVar4);
            }
          }
        }
LAB_00103f93:
        pcVar4 = stdout->_IO_write_ptr;
        p_Var28 = stdout;
        if (pcVar4 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar4 + 1;
          *pcVar4 = '\n';
        }
        else {
LAB_001043d5:
          __overflow(p_Var28,10);
        }
      }
      current_col = 0;
LAB_00103b5f:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
    if ((bVar7) || (bVar5)) goto LAB_0010429f;
    if (local_58 == (char *)0x0) goto LAB_00103d22;
    apply_settings(true,local_58,argv,argc,&main::lexical_block_3::check_mode,&speed_was_set,
                   &require_set_attr);
LAB_00103aa3:
    iVar9 = fd_reopen(0,local_58,0x800,0);
    if (iVar9 < 0) goto LAB_00104305;
    uVar10 = rpl_fcntl(0,3);
    if ((uVar10 != 0xffffffff) && (iVar9 = rpl_fcntl(0,4,(ulong)(uVar10 & 0xfffff7ff)), -1 < iVar9))
    {
      iVar9 = tcgetattr(0,(termios *)&main::mode);
      if (iVar9 == 0) {
        if (((bool)(bVar5 | bVar6)) || (bVar7)) goto LAB_00103bbc;
        do {
          speed_was_set = false;
          require_set_attr = false;
          apply_settings(false,local_58,argv,argc,&main::mode,&speed_was_set,&require_set_attr);
          if (require_set_attr == false) goto LAB_00103b5f;
          iVar11 = tcsetattr(0,tcsetattr_options,(termios *)&main::mode);
          if (iVar11 != 0) {
            uVar15 = quotearg_n_style_colon(0,3,local_58);
            piVar16 = __errno_location();
            p_Var28 = (_IO_FILE *)0x1;
            error(1,*piVar16,"%s",uVar15);
            goto LAB_001043d5;
          }
          iVar11 = tcgetattr(0,(termios *)&main::lexical_block_6::new_mode);
          if (iVar11 != 0) goto LAB_0010426f;
          iVar11 = memcmp(&main::mode,&main::lexical_block_6::new_mode,0x3c);
          if ((iVar11 == 0) ||
             ((main::lexical_block_6::new_mode.c_cflag =
                    main::lexical_block_6::new_mode.c_cflag & 0xeff0ffff, speed_was_set == false &&
              (iVar11 = memcmp(&main::mode,&main::lexical_block_6::new_mode,0x3c), iVar11 == 0))))
          goto LAB_00103b5f;
          argc = quotearg_n_style_colon(0,3,local_58);
          uVar15 = dcgettext(0,"%s: unable to perform all requested operations",5);
          error(1,0,uVar15);
LAB_00103d22:
          local_58 = (char *)dcgettext(0,"standard input",5);
          apply_settings(true,local_58,argv,argc,&main::lexical_block_3::check_mode,&speed_was_set,
                         &require_set_attr);
          iVar11 = tcgetattr(0,(termios *)&main::mode);
        } while (iVar11 == 0);
      }
      goto LAB_00103d7d;
    }
  }
  uVar15 = quotearg_n_style_colon(0,3,local_58);
  uVar17 = dcgettext(0,"%s: couldn\'t reset non-blocking mode",5);
  piVar16 = __errno_location();
  error(1,*piVar16,uVar17,uVar15);
LAB_00104305:
  uVar15 = quotearg_n_style_colon(0,3,local_58);
  piVar16 = __errno_location();
  error(1,*piVar16,"%s",uVar15);
LAB_00104335:
                    /* WARNING: Subroutine does not return */
  __assert_fail("bitsp","src/stty.c",0x7a1,"display_changed");
}

