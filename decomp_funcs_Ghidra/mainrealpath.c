
int main(int argc,char **argv)

{
  _Bool _Var1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint can_mode;
  undefined auVar9 [16];
  undefined8 uStack56;
  
  can_mode = 1;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  pcVar8 = (char *)0x0;
  pcVar3 = (char *)0x0;
  while (iVar2 = getopt_long(argc,argv,"eLmPqsz",longopts,0), iVar2 != -1) {
    if (0x81 < iVar2) goto switchD_0010279c_caseD_4d;
    if (iVar2 < 0x4c) {
      if (iVar2 == -0x83) {
        version_etc((FILE *)stdout,"realpath","GNU coreutils",Version,"Padraig Brady",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_0010279c_caseD_4d;
    }
    switch(iVar2) {
    case 0x4c:
      logical = true;
      can_mode = can_mode | 4;
      break;
    default:
      goto switchD_0010279c_caseD_4d;
    case 0x50:
      logical = false;
      can_mode = can_mode & 0xfffffffb;
      break;
    case 0x65:
      can_mode = can_mode & 0xfffffffc;
      break;
    case 0x6d:
      can_mode = can_mode & 0xfffffffc | 2;
      break;
    case 0x71:
      verbose = false;
      break;
    case 0x73:
      logical = false;
      can_mode = can_mode | 4;
      break;
    case 0x7a:
      use_nuls = true;
      break;
    case 0x80:
      pcVar3 = optarg;
      break;
    case 0x81:
      pcVar8 = optarg;
    }
  }
  if (argc <= optind) {
    uVar5 = dcgettext(0,"missing operand",5);
    error(0,0,uVar5);
switchD_0010279c_caseD_4d:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (pcVar8 == (char *)0x0) {
    if (pcVar3 != (char *)0x0) goto LAB_00102881;
LAB_001028a4:
    if (pcVar8 == pcVar3) {
      can_relative_base = can_relative_to;
      pcVar3 = can_relative_base;
      goto LAB_001028ef;
    }
    pcVar3 = can_relative_base;
    if (pcVar8 == (char *)0x0) goto LAB_001028ef;
    pcVar3 = realpath_canon(pcVar8,can_mode);
    if (pcVar3 != (char *)0x0) {
      if (((can_mode & 3) != 0) || (_Var1 = isdir(pcVar3), _Var1 != false)) {
        pcVar8 = pcVar3;
        _Var1 = path_prefix(pcVar3,can_relative_to);
        if (_Var1 != false) goto LAB_001028ef;
        goto LAB_00102a99;
      }
      uVar5 = quotearg_n_style_colon(0,3,pcVar8);
      error(1,0x14,"%s",uVar5);
    }
    uVar5 = quotearg_n_style_colon(0,3,pcVar8);
    piVar4 = __errno_location();
    error(1,*piVar4,"%s",uVar5);
LAB_00102b25:
    uVar5 = quotearg_n_style_colon(0,3,pcVar3);
    piVar4 = __errno_location();
    auVar9 = error(1,*piVar4,"%s",uVar5);
    uVar5 = uStack56;
    uStack56 = SUB168(auVar9,0);
    (*(code *)PTR___libc_start_main_0010dfe0)
              (main,uVar5,&stack0xffffffffffffffd0,__libc_csu_init,__libc_csu_fini,
               SUB168(auVar9 >> 0x40,0),&uStack56);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = pcVar8;
  }
LAB_00102881:
  can_relative_to = realpath_canon(pcVar3,can_mode);
  if (can_relative_to == (char *)0x0) goto LAB_00102b25;
  if (((can_mode & 3) != 0) || (_Var1 = isdir(can_relative_to), _Var1 != false)) goto LAB_001028a4;
  quotearg_n_style_colon(0,3,pcVar3);
  pcVar8 = (char *)0x1;
  error(1,0x14,"%s");
LAB_00102a99:
  rpl_free(pcVar8);
  can_relative_base = can_relative_to;
  can_relative_to = (char *)0x0;
  pcVar3 = can_relative_base;
LAB_001028ef:
  can_relative_base = pcVar3;
  uVar6 = 1;
  for (; optind < argc; optind = optind + 1) {
    pcVar8 = argv[optind];
    pcVar3 = realpath_canon(pcVar8,can_mode);
    if (pcVar3 == (char *)0x0) {
      uVar6 = (uint)verbose;
      if (verbose != false) {
        uVar6 = 0;
        quotearg_n_style_colon(0,3,pcVar8);
        piVar4 = __errno_location();
        error(0,*piVar4,"%s");
      }
    }
    else {
      if ((can_relative_to == (char *)0x0) ||
         (((pcVar8 = can_relative_to, can_relative_base != (char *)0x0 &&
           (_Var1 = path_prefix(can_relative_base,pcVar3), _Var1 == false)) ||
          (_Var1 = relpath(pcVar3,pcVar8,(char *)0x0,0), _Var1 == false)))) {
        fputs_unlocked(pcVar3,stdout);
      }
      pcVar8 = stdout->_IO_write_ptr;
      uVar7 = -(uint)(use_nuls == false) & 10;
      if (pcVar8 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar8 + 1;
        *pcVar8 = (char)uVar7;
      }
      else {
        __overflow(stdout,uVar7);
      }
      rpl_free(pcVar3);
    }
  }
  return uVar6 ^ 1;
}

