
int main(int argc,char **argv)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined auVar8 [16];
  undefined8 uStack104;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  int option_index;
  undefined8 local_40;
  
  bVar1 = false;
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  uVar6 = 0;
  do {
    option_index = 0;
    iVar2 = getopt_long(argc,argv,"+r:t:u:l:c",long_options,&option_index);
    if (iVar2 == -1) {
      if (optind != argc) {
        if ((((local_60 | uVar6) != 0) || ((local_58 | local_50) != 0)) || (bVar1)) {
LAB_001026d3:
          if (optind < argc) goto LAB_001027ed;
          pcVar5 = "no command specified";
        }
        else {
          if (optind < argc) {
            optind = optind + 1;
            goto LAB_001026d3;
          }
          pcVar5 = "you must specify -c, -t, -u, -l, -r, or context";
        }
        uVar3 = dcgettext(0,pcVar5,5);
        error(0,0,uVar3);
switchD_00102671_caseD_64:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      piVar4 = __errno_location();
      *piVar4 = 0x5f;
      uVar3 = dcgettext(0,"failed to get current context",5);
      error(1,*piVar4,uVar3);
LAB_001027ed:
      pcVar5 = program_name;
      uVar3 = dcgettext(0,"%s may be used only on a SELinux kernel",5);
      error(1,0,uVar3,pcVar5);
LAB_0010281b:
      uVar3 = dcgettext(0,"multiple users",5);
      error(1,0,uVar3);
LAB_0010283f:
      uVar3 = dcgettext(0,"multiple types",5);
      error(1,0,uVar3);
      goto LAB_00102863;
    }
    if (0x75 < iVar2) goto switchD_00102671_caseD_64;
    if (iVar2 < 99) {
      if (iVar2 == -0x83) {
        version_etc(stdout,"runcon","GNU coreutils",Version,"Russell Coker",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102671_caseD_64;
    }
    switch(iVar2) {
    case 99:
      bVar1 = true;
      break;
    default:
      goto switchD_00102671_caseD_64;
    case 0x6c:
      if (local_58 != 0) goto LAB_00102887;
      local_58 = optarg;
      break;
    case 0x72:
      bVar7 = uVar6 != 0;
      uVar6 = optarg;
      if (bVar7) {
LAB_00102863:
        uVar3 = dcgettext(0,"multiple roles",5);
        error(1,0,uVar3);
LAB_00102887:
        uVar3 = dcgettext(0,"multiple levelranges",5);
        auVar8 = error(1,0,uVar3);
        uVar3 = uStack104;
        uStack104 = SUB168(auVar8,0);
        (*(code *)PTR___libc_start_main_00109fd0)
                  (main,uVar3,&local_60,__libc_csu_init,__libc_csu_fini,SUB168(auVar8 >> 0x40,0),
                   &uStack104);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      break;
    case 0x74:
      if (local_50 != 0) goto LAB_0010283f;
      local_50 = optarg;
      break;
    case 0x75:
      if (local_60 != 0) goto LAB_0010281b;
      local_60 = optarg;
    }
  } while( true );
}

