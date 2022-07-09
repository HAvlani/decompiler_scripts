
int main(int argc,char **argv)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  long in_FS_OFFSET;
  utsname name;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  if (uname_mode == 2) {
    iVar2 = getopt_long(argc,argv,"",arch_long_options,0);
    if (iVar2 != -1) {
      if (iVar2 == -0x83) {
        pcVar6 = "uname";
        if (uname_mode != 1) {
          pcVar6 = "arch";
        }
        version_etc((FILE *)stdout,pcVar6,"GNU coreutils",Version,"David MacKenzie","Karel Zak",0,
                    &DAT_0010600a);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
LAB_00102750:
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001026ba_caseD_62;
    }
    if (argc == optind) {
      iVar2 = uname((utsname *)&name);
      if (iVar2 == -1) goto LAB_00102981;
      uVar5 = 0x10;
      uVar7 = 0x10;
      goto LAB_00102801;
    }
  }
  else {
    uVar7 = 0;
    while (iVar2 = getopt_long(argc,argv,"asnrvmpio",uname_long_options,0), iVar2 != -1) {
      if (0x76 < iVar2) goto switchD_001026ba_caseD_62;
      if (iVar2 < 0x61) {
        if (iVar2 == -0x83) {
          pcVar6 = "uname";
          if (uname_mode != 1) {
            pcVar6 = "arch";
          }
          version_etc((FILE *)stdout,pcVar6,"GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00102750;
      }
      switch(iVar2) {
      case 0x61:
        uVar7 = 0xffffffff;
        break;
      default:
        goto switchD_001026ba_caseD_62;
      case 0x69:
        uVar7 = uVar7 | 0x40;
        break;
      case 0x6d:
        uVar7 = uVar7 | 0x10;
        break;
      case 0x6e:
        uVar7 = uVar7 | 2;
        break;
      case 0x6f:
        uVar7 = uVar7 | 0x80;
        break;
      case 0x70:
        uVar7 = uVar7 | 0x20;
        break;
      case 0x72:
        uVar7 = uVar7 | 4;
        break;
      case 0x73:
        uVar7 = uVar7 | 1;
        break;
      case 0x76:
        uVar7 = uVar7 | 8;
      }
    }
    if (argc == optind) {
      uVar5 = 1;
      if (uVar7 != 0) {
        uVar5 = uVar7;
      }
      if ((uVar5 & 0x1f) != 0) {
        iVar2 = uname((utsname *)&name);
        if (iVar2 == -1) {
LAB_00102981:
          uVar3 = dcgettext(0,"cannot get system name",5);
          piVar4 = __errno_location();
          error(1,*piVar4,uVar3);
          goto LAB_001029ad;
        }
        if ((uVar5 & 1) != 0) {
          print_element(name.sysname);
        }
        if ((uVar5 & 2) != 0) {
          print_element(name.nodename);
        }
        if ((uVar5 & 4) != 0) {
          print_element(name.release);
        }
LAB_00102801:
        if ((uVar5 & 8) != 0) {
          print_element(name.version);
        }
        if ((uVar5 & 0x10) != 0) {
          print_element(name.machine);
        }
      }
      if ((uVar5 & 0x20) == 0) {
        if (((uVar5 & 0x40) != 0) && (uVar7 != 0xffffffff)) goto LAB_0010288a;
      }
      else if ((uVar7 != 0xffffffff) && (print_element("unknown"), (uVar5 & 0x40) != 0)) {
LAB_0010288a:
        print_element("unknown");
      }
      if ((uVar5 & 0x80) != 0) {
        print_element("GNU/Linux");
      }
      pcVar6 = stdout->_IO_write_ptr;
      if (pcVar6 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar6 + 1;
        *pcVar6 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
LAB_001029ad:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  pcVar6 = quote(argv[optind]);
  uVar3 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar3,pcVar6);
switchD_001026ba_caseD_62:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

