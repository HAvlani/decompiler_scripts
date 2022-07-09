
int main(int argc,char **argv)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  char *__s;
  int *piVar4;
  undefined8 uVar5;
  canonicalize_mode_t can_mode;
  
  bVar2 = false;
  can_mode = ~CAN_EXISTING;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  do {
    iVar3 = getopt_long(argc,argv,"efmnqsvz",longopts,0);
    if (iVar3 == -1) {
      if (optind < argc) {
        if (argc - optind != 1) {
          if (no_newline != false) {
            uVar5 = dcgettext(0,"ignoring --no-newline with multiple arguments",5);
            error(0,0,uVar5);
          }
          no_newline = false;
          if (argc <= optind) {
            no_newline = false;
            return 0;
          }
        }
        iVar3 = 0;
        do {
          pcVar1 = argv[optind];
          if (can_mode == ~CAN_EXISTING) {
            __s = areadlink_with_size(pcVar1,0x3f);
          }
          else {
            __s = canonicalize_filename_mode(pcVar1,can_mode);
          }
          if (__s == (char *)0x0) {
            iVar3 = 1;
            if (verbose != false) {
              quotearg_n_style_colon(0,3,pcVar1);
              piVar4 = __errno_location();
              error(0,*piVar4,"%s");
            }
          }
          else {
            fputs_unlocked(__s,stdout);
            if (no_newline == false) {
              pcVar1 = stdout->_IO_write_ptr;
              if (stdout->_IO_write_end < pcVar1 || stdout->_IO_write_end == pcVar1) {
                __overflow(stdout,-(uint)!bVar2 & 10);
              }
              else {
                stdout->_IO_write_ptr = pcVar1 + 1;
                *pcVar1 = (char)(-(uint)!bVar2 & 10);
              }
            }
            rpl_free(__s);
          }
          optind = optind + 1;
        } while (optind < argc);
        return iVar3;
      }
      uVar5 = dcgettext(0,"missing operand",5);
      error(0,0,uVar5);
switchD_00102792_caseD_67:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (0x7a < iVar3) goto switchD_00102792_caseD_67;
    if (iVar3 < 0x65) {
      if (iVar3 == -0x83) {
        version_etc((FILE *)stdout,"readlink","GNU coreutils",Version,"Dmitry V. Levin",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102792_caseD_67;
    }
    switch(iVar3) {
    case 0x65:
      can_mode = CAN_EXISTING;
      break;
    case 0x66:
      can_mode = CAN_ALL_BUT_LAST;
      break;
    default:
      goto switchD_00102792_caseD_67;
    case 0x6d:
      can_mode = CAN_MISSING;
      break;
    case 0x6e:
      no_newline = true;
      break;
    case 0x71:
    case 0x73:
      verbose = false;
      break;
    case 0x76:
      verbose = true;
      break;
    case 0x7a:
      bVar2 = true;
    }
  } while( true );
}

