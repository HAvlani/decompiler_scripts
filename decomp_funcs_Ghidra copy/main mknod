
int main(int argc,char **argv)

{
  char cVar1;
  int iVar2;
  __mode_t __mask;
  mode_t mVar3;
  strtol_error sVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  int *piVar8;
  mode_change *pmVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  uint __mode;
  mode_change *unaff_R14;
  uint uVar13;
  long in_FS_OFFSET;
  undefined auVar14 [16];
  uintmax_t i_major;
  uintmax_t i_minor;
  long local_40;
  
  pcVar12 = (char *)(long)argc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  pcVar7 = (char *)0x0;
LAB_00102786:
  do {
    iVar2 = getopt_long(argc,argv,&DAT_001070bd,longopts);
    if (iVar2 == -1) {
      if (pcVar7 != (char *)0x0) {
        unaff_R14 = mode_compile(pcVar7);
        if (unaff_R14 == (mode_change *)0x0) {
          uVar5 = dcgettext(0,"invalid mode",5);
          error(1,0,uVar5);
          goto LAB_00102ba0;
        }
        __mask = umask(0);
        umask(__mask);
        pmVar9 = unaff_R14;
        mVar3 = mode_adjust(0x1b6,false,__mask,unaff_R14,(mode_t *)0x0);
        uVar11 = (ulong)mVar3;
        rpl_free(unaff_R14);
        if ((mVar3 & 0xfffffe00) == 0) goto LAB_001028a7;
        uVar5 = dcgettext(0,"mode must specify only file permission bits",5);
        error(1,0,uVar5);
LAB_00102d47:
        pcVar12 = quote(argv[(long)&pmVar9->affected]);
        pcVar7 = "extra operand %s";
        goto LAB_00102a60;
      }
      uVar11 = 0x1b6;
LAB_001028a7:
      pmVar9 = (mode_change *)(long)optind;
      uVar10 = (ulong)(argc - optind);
      if (optind < argc) {
        if ((optind + 1 < argc) &&
           (auVar14 = CONCAT88(uVar10,(long)optind), *argv[(long)optind + 1] == 'p'))
        goto LAB_00102b62;
        if (uVar10 < 4) {
          pcVar12 = quote(argv[(long)argc + -1]);
          uVar5 = dcgettext(0,"missing operand after %s",5);
          error(0,0,uVar5,pcVar12);
          if (argc - optind == 2) {
            pcVar12 = "Special files require major and minor device numbers.";
            goto LAB_00102aed;
          }
          break;
        }
        if (uVar10 != 4) goto LAB_00102d47;
      }
      else {
        if (uVar10 < 2) {
          uVar5 = dcgettext(0,"missing operand",5);
          error(0,0,uVar5);
          break;
        }
        if (uVar10 != 2) {
          pcVar12 = argv[(long)&pmVar9->field_0x2];
          goto LAB_00102aaa;
        }
      }
      lVar6 = (long)optind;
      goto LAB_001028ec;
    }
    if (iVar2 == 0x5a) {
      if (optarg != (char *)0x0) {
        uVar5 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar5);
      }
      goto LAB_00102786;
    }
    if (iVar2 < 0x5b) {
      if (iVar2 == -0x83) {
        version_etc(stdout,"mknod","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      break;
    }
    pcVar7 = optarg;
  } while (iVar2 == 0x6d);
  goto LAB_00102a78;
LAB_00102ba0:
  pcVar12 = quote(argv[(long)(pcVar12 + -1)]);
  pcVar7 = "missing operand after %s";
LAB_00102a60:
  uVar5 = dcgettext(0,pcVar7,5);
  error(0,0,uVar5,pcVar12);
  goto LAB_00102a78;
LAB_001028ec:
  do {
    cVar1 = *argv[lVar6 + 1];
    __mode = (uint)uVar11;
    if (cVar1 != 'p') {
      if (cVar1 < 'q') {
        uVar13 = 0x6000;
        if ((cVar1 != 'b') && (uVar13 = 0x2000, cVar1 != 'c')) {
LAB_00102a4c:
          pcVar12 = quote(argv[lVar6 + 1]);
          pcVar7 = "invalid device type %s";
          goto LAB_00102a60;
        }
      }
      else {
        if (cVar1 != 'u') goto LAB_00102a4c;
        uVar13 = 0x2000;
      }
      unaff_R14 = (mode_change *)argv[lVar6 + 2];
      pcVar12 = argv[lVar6 + 3];
      sVar4 = xstrtoumax((char *)unaff_R14,(char **)0x0,0,&i_major,"");
      if ((sVar4 == LONGINT_OK) && (i_major == (i_major & 0xffffffff))) {
        sVar4 = xstrtoumax(pcVar12,(char **)0x0,0,&i_minor,"");
        if ((sVar4 == LONGINT_OK) && (i_minor == (i_minor & 0xffffffff))) {
          uVar11 = i_minor & 0xff |
                   (i_minor & 0xffffff00) << 0xc |
                   (ulong)((uint)(i_major << 8) & 0xfff00) | (i_major & 0xfffff000) << 0x20;
          if (uVar11 != 0xffffffffffffffff) {
            iVar2 = rpl_mknod(argv[optind],uVar13 | __mode,uVar11);
            if (iVar2 == 0) goto LAB_001029ee;
            goto LAB_00102c59;
          }
          goto LAB_00102c90;
        }
        goto LAB_00102cba;
      }
LAB_00102cec:
      pcVar12 = quote(&unaff_R14->op);
      uVar5 = dcgettext(0,"invalid major device number %s",5);
      error(1,0,uVar5,pcVar12);
LAB_00102d1e:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar2 = mkfifo(argv[lVar6],__mode);
    if (iVar2 == 0) {
LAB_001029ee:
      if ((pcVar7 == (char *)0x0) || (iVar2 = lchmod(argv[optind],__mode), iVar2 == 0)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return 0;
        }
        goto LAB_00102d1e;
      }
      pcVar7 = quotearg_style(shell_escape_always_quoting_style,argv[optind]);
      uVar5 = dcgettext(0,"cannot set permissions of %s",5);
      piVar8 = __errno_location();
      error(1,*piVar8,uVar5,pcVar7);
LAB_00102c59:
      uVar5 = quotearg_n_style_colon(0,3,argv[optind]);
      piVar8 = __errno_location();
      error(1,*piVar8,"%s",uVar5);
LAB_00102c90:
      uVar5 = dcgettext(0,"invalid device %s %s",5);
      error(1,0,uVar5,unaff_R14,pcVar12);
LAB_00102cba:
      pcVar12 = quote(pcVar12);
      uVar5 = dcgettext(0,"invalid minor device number %s",5);
      error(1,0,uVar5,pcVar12);
      goto LAB_00102cec;
    }
    uVar11 = quotearg_n_style_colon(0,3,argv[optind]);
    piVar8 = __errno_location();
    auVar14 = error(1,*piVar8,"%s",uVar11);
LAB_00102b62:
    lVar6 = SUB168(auVar14,0);
    if (auVar14 < (undefined  [16])0x2) goto LAB_00102ba0;
  } while (SUB168(auVar14 >> 0x40,0) == 2);
  pcVar12 = argv[lVar6 + 2];
LAB_00102aaa:
  pcVar12 = quote(pcVar12);
  uVar5 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar5,pcVar12);
  pcVar12 = "Fifos do not have major and minor device numbers.";
  if (argc - optind == 4) {
LAB_00102aed:
    uVar5 = dcgettext(0,pcVar12,5);
    __fprintf_chk(stderr,1,"%s\n",uVar5);
  }
LAB_00102a78:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

