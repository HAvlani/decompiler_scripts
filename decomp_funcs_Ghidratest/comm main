
int main(int argc,char **argv)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  byte bVar7;
  undefined auVar8 [16];
  undefined8 uStack40;
  
  bVar7 = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  hard_LC_COLLATE = hard_locale(3);
  atexit(close_stdout);
  only_file_1 = true;
  only_file_2 = true;
  both = true;
  seen_unpairable = false;
  issued_disorder_warning = 0;
  check_input_order = CHECK_ORDER_DEFAULT;
  total_option = false;
  while( true ) {
    uVar3 = getopt_long(argc,argv,&DAT_00107755,long_options,0);
    pcVar4 = optarg;
    iVar2 = (int)uVar3;
    if (iVar2 == -1) break;
    if (0x83 < iVar2) goto switchD_001027c3_caseD_7b;
    if (iVar2 < 0x7a) {
      if (iVar2 == 0x31) {
        only_file_1 = false;
      }
      else {
        if (iVar2 < 0x32) {
          if (iVar2 == -0x83) {
            version_etc(stdout,"comm","GNU coreutils",Version,"Richard M. Stallman",
                        "David MacKenzie",0,uVar3);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
            usage(0);
          }
          goto switchD_001027c3_caseD_7b;
        }
        if (iVar2 == 0x32) {
          only_file_2 = false;
        }
        else {
          if (iVar2 != 0x33) goto switchD_001027c3_caseD_7b;
          both = false;
        }
      }
    }
    else {
      switch(iVar2) {
      case 0x7a:
        delim = '\0';
        break;
      default:
        goto switchD_001027c3_caseD_7b;
      case 0x80:
        check_input_order = CHECK_ORDER_ENABLED;
        break;
      case 0x81:
        check_input_order = CHECK_ORDER_DISABLED;
        break;
      case 0x82:
        if ((col_sep_len != 0) && (iVar2 = strcmp(col_sep,optarg), iVar2 != 0)) {
          uVar3 = dcgettext(0,"multiple output delimiters specified",5);
          auVar8 = error(1,0,uVar3);
          uVar3 = uStack40;
          uStack40 = SUB168(auVar8,0);
          (*(code *)PTR___libc_start_main_0010afd8)
                    (main,uVar3,&stack0xffffffffffffffe0,__libc_csu_init,__libc_csu_fini,
                     SUB168(auVar8 >> 0x40,0),&uStack40);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        col_sep_len = 1;
        col_sep = pcVar4;
        if (*pcVar4 != '\0') {
          uVar5 = 0xffffffffffffffff;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + (ulong)bVar7 * -2 + 1;
          } while (cVar1 != '\0');
          col_sep_len = ~uVar5 - 1;
        }
        break;
      case 0x83:
        total_option = true;
      }
    }
  }
  if (col_sep_len == 0) {
    col_sep_len = 1;
  }
  if (argc - optind < 2) {
    if (argc <= optind) {
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
      goto switchD_001027c3_caseD_7b;
    }
    pcVar4 = quote(argv[(long)argc + -1]);
    pcVar6 = "missing operand after %s";
  }
  else {
    if (argc - optind == 2) {
                    /* WARNING: Subroutine does not return */
      compare_files(argv + optind);
    }
    pcVar4 = quote(argv[(long)optind + 2]);
    pcVar6 = "extra operand %s";
  }
  uVar3 = dcgettext(0,pcVar6,5);
  error(0,0,uVar3,pcVar4);
switchD_001027c3_caseD_7b:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

