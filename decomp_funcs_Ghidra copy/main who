
int main(int argc,char **argv)

{
  bool bVar1;
  _Bool _Var2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  bVar1 = true;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  while (iVar3 = getopt_long(argc,argv,"abdlmpqrstuwHT",longopts,0), iVar3 != -1) {
    if (0x80 < iVar3) goto switchD_001028e3_caseD_49;
    if (iVar3 < 0x48) {
      if (iVar3 == -0x83) {
        version_etc(stdout,"who","GNU coreutils",Version,"Joseph Arceneaux","David MacKenzie",
                    "Michael Stone",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001028e3_caseD_49;
    }
    switch(iVar3) {
    case 0x48:
      include_heading = true;
      break;
    default:
      goto switchD_001028e3_caseD_49;
    case 0x54:
    case 0x77:
      include_mesg = true;
      break;
    case 0x61:
      need_boottime = true;
      bVar1 = false;
      need_deadprocs = true;
      need_login = true;
      need_initspawn = true;
      need_runlevel = true;
      need_clockchange = true;
      need_users = true;
      include_mesg = true;
      include_idle = true;
      include_exit = true;
      break;
    case 0x62:
      need_boottime = true;
      bVar1 = false;
      break;
    case 100:
      need_deadprocs = true;
      bVar1 = false;
      include_idle = true;
      include_exit = true;
      break;
    case 0x6c:
      need_login = true;
      bVar1 = false;
      include_idle = true;
      break;
    case 0x6d:
      my_line_only = true;
      break;
    case 0x70:
      need_initspawn = true;
      bVar1 = false;
      break;
    case 0x71:
      short_list = true;
      break;
    case 0x72:
      need_runlevel = true;
      bVar1 = false;
      include_idle = true;
      break;
    case 0x73:
      short_output = true;
      break;
    case 0x74:
      need_clockchange = true;
      bVar1 = false;
      break;
    case 0x75:
      need_users = true;
      bVar1 = false;
      include_idle = true;
      break;
    case 0x80:
      do_lookup = true;
    }
  }
  if (bVar1) {
    need_users = true;
    short_output = true;
  }
  if (include_exit != false) {
    short_output = false;
  }
  _Var2 = hard_locale(2);
  if (_Var2 == false) {
    time_format_width = 0xc;
    time_format = "%b %e %H:%M";
  }
  else {
    time_format_width = 0x10;
    time_format = "%Y-%m-%d %H:%M";
  }
  iVar3 = argc - optind;
  if (iVar3 == 1) {
    who(argv[optind],0);
  }
  else {
    if (iVar3 < 2) {
      if (1 < iVar3 + 1U) {
LAB_00102b13:
        pcVar4 = quote(argv[(long)optind + 2]);
        uVar5 = dcgettext(0,"extra operand %s",5);
        error(0,0,uVar5,pcVar4);
switchD_001028e3_caseD_49:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
    }
    else {
      if (iVar3 != 2) goto LAB_00102b13;
      my_line_only = true;
    }
    who("/var/run/utmp",1);
  }
  return 0;
}

