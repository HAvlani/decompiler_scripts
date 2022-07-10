
int main(int argc,char **argv)

{
  bool bVar1;
  _Bool _Var2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  uintmax_t uVar8;
  char *pcVar9;
  FILE *f;
  undefined8 uVar10;
  int *piVar11;
  char *pcVar12;
  undefined auVar13 [16];
  undefined8 uStack56;
  
  pcVar9 = (char *)0x0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  uniform = false;
  split = false;
  tagged = false;
  crown = false;
  max_width = 0x4b;
  prefix = "";
  prefix_full_length = 0;
  prefix_lead_space = 0;
  prefix_length = 0;
  if (((1 < argc) && (pcVar12 = argv[1], *pcVar12 == '-')) && ((int)pcVar12[1] - 0x30U < 10)) {
    pcVar9 = pcVar12 + 1;
    pcVar12 = *argv;
    argc = argc + -1;
    argv = argv + 1;
    *argv = pcVar12;
  }
  pcVar12 = (char *)0x0;
  while (iVar4 = getopt_long(argc,argv,"0123456789cstuw:p:g:",long_options,0), iVar4 != -1) {
    if (0x77 < iVar4) {
switchD_001027f0_caseD_64:
      if (iVar4 - 0x30U < 10) {
        uVar10 = dcgettext(0,
                           "invalid option -- %c; -WIDTH is recognized only when it is the first\noption; use -w N instead"
                           ,5);
        error(0,0,uVar10,iVar4);
      }
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar4 < 99) {
      if (iVar4 == -0x83) {
        version_etc(stdout,"fmt","GNU coreutils",Version,"Ross Paterson",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001027f0_caseD_64;
    }
    switch(iVar4) {
    case 99:
      crown = true;
      break;
    default:
      goto switchD_001027f0_caseD_64;
    case 0x67:
      pcVar12 = optarg;
      break;
    case 0x70:
      prefix_lead_space = 0;
      pcVar7 = optarg;
      if (*optarg == ' ') {
        do {
          prefix_lead_space = (1 - (int)optarg) + (int)pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar7 == ' ');
      }
      prefix = pcVar7;
      sVar5 = strlen(pcVar7);
      prefix_full_length = (int)sVar5;
      pcVar6 = pcVar7 + prefix_full_length;
      if (pcVar7 < pcVar6) {
        do {
          if (pcVar6[-1] != ' ') break;
          pcVar6 = pcVar6 + -1;
        } while (pcVar7 != pcVar6);
      }
      *pcVar6 = '\0';
      prefix_length = (int)pcVar6 - (int)pcVar7;
      break;
    case 0x73:
      split = true;
      break;
    case 0x74:
      tagged = true;
      break;
    case 0x75:
      uniform = true;
      break;
    case 0x77:
      pcVar9 = optarg;
    }
  }
  if (pcVar9 == (char *)0x0) {
    if (pcVar12 == (char *)0x0) goto LAB_00102a97;
    pcVar9 = (char *)dcgettext(0,"invalid width",5);
    uVar8 = xdectoumax(pcVar12,0,0x4b,"",pcVar9,0);
    goal_width = (int)uVar8;
    max_width = goal_width + 10;
  }
  else {
    pcVar7 = (char *)dcgettext(0,"invalid width",5);
    uVar8 = xdectoumax(pcVar9,0,0x9c4,"",pcVar7,0);
    iVar4 = (int)uVar8;
    max_width = iVar4;
    if (pcVar12 == (char *)0x0) {
LAB_00102a97:
      goal_width = (max_width * 0xbb) / 200;
    }
    else {
      pcVar9 = (char *)dcgettext(0,"invalid width",5);
      uVar8 = xdectoumax(pcVar12,0,(long)iVar4,"",pcVar9,0);
      goal_width = (int)uVar8;
    }
  }
  if (optind == argc) {
    bVar3 = fmt(stdin,"-");
  }
  else {
    bVar1 = false;
    bVar3 = 1;
    if (argc <= optind) goto LAB_00102a40;
    do {
      pcVar9 = argv[optind];
      if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
        bVar1 = true;
        _Var2 = fmt(stdin,pcVar9);
        bVar3 = bVar3 & _Var2;
      }
      else {
        f = fopen(pcVar9,"r");
        if (f == (FILE *)0x0) {
          bVar3 = 0;
          pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
          uVar10 = dcgettext(0,"cannot open %s for reading",5);
          piVar11 = __errno_location();
          error(0,*piVar11,uVar10,pcVar9);
        }
        else {
          _Var2 = fmt((FILE *)f,pcVar9);
          bVar3 = bVar3 & _Var2;
        }
      }
      optind = optind + 1;
    } while (optind < argc);
    if (!bVar1) goto LAB_00102a40;
  }
  iVar4 = rpl_fclose(stdin);
  if (iVar4 != 0) {
    uVar10 = dcgettext(0,"closing standard input",5);
    piVar11 = __errno_location();
    auVar13 = error(1,*piVar11,"%s",uVar10);
    uVar10 = uStack56;
    uStack56 = SUB168(auVar13,0);
    (*(code *)PTR___libc_start_main_0010bfe0)
              (main,uVar10,&stack0xffffffffffffffd0,__libc_csu_init,__libc_csu_fini,
               SUB168(auVar13 >> 0x40,0),&uStack56);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_00102a40:
  return (int)(bVar3 ^ 1);
}

