
int main(int argc,char **argv)

{
  char *pcVar1;
  long lVar2;
  _Bool _Var3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  char **ppcVar9;
  long lVar10;
  STRUCT_UTMP *utmp_ent;
  long in_FS_OFFSET;
  size_t n_users;
  STRUCT_UTMP *utmp_buf;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  do {
    iVar4 = getopt_long(argc,argv,"sfwiqbhlp",longopts,0);
    if (iVar4 == -1) {
      lVar6 = (long)optind;
      iVar4 = argc - optind;
      if (do_short_format == false) {
        if (iVar4 == 0) {
          uVar7 = dcgettext(0,"no username specified; at least one must be specified when using -l",
                            5);
          error(0,0,uVar7);
switchD_00102932_caseD_63:
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        if (0 < iVar4) {
          ppcVar9 = argv + lVar6;
          do {
            pcVar1 = *ppcVar9;
            ppcVar9 = ppcVar9 + 1;
            print_long_entry(pcVar1);
          } while (argv + lVar6 + (ulong)(iVar4 - 1) + 1 != ppcVar9);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return 0;
        }
      }
      else {
        lVar6 = (long)optind;
        utmp_buf = (STRUCT_UTMP *)0x0;
        iVar5 = read_utmp("/var/run/utmp",&n_users,&utmp_buf,0);
        utmp_ent = utmp_buf;
        if (iVar5 == 0) {
          _Var3 = hard_locale(2);
          if (_Var3 == false) {
            time_format_width = 0xc;
            time_format = "%b %e %H:%M";
          }
          else {
            time_format_width = 0x10;
            time_format = "%Y-%m-%d %H:%M";
          }
          if (include_heading != false) {
            uVar7 = dcgettext(0,"Login",5);
            __printf_chk(1,&DAT_001071b3,uVar7);
            if (include_fullname != false) {
              uVar7 = dcgettext(0,&DAT_001071b8,5);
              __printf_chk(1," %-19s",uVar7);
            }
            uVar7 = dcgettext(0,&DAT_001071c4,5);
            __printf_chk(1," %-9s",uVar7);
            if (include_idle != false) {
              uVar7 = dcgettext(0,&DAT_001071cf,5);
              __printf_chk(1," %-6s",uVar7);
            }
            uVar7 = dcgettext(0,&DAT_001071d4,5);
            __printf_chk(1," %-*s",time_format_width,uVar7);
            if (include_where != false) {
              uVar7 = dcgettext(0,"Where",5);
              __printf_chk(1," %s",uVar7);
            }
            pcVar1 = stdout->_IO_write_ptr;
            if (pcVar1 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = pcVar1 + 1;
              *pcVar1 = '\n';
            }
            else {
              __overflow(stdout,10);
            }
          }
          do {
            n_users = n_users - 1;
            if (n_users == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              exit(0);
            }
            if ((utmp_ent->ut_user[0] != '\0') && (utmp_ent->ut_type == 7)) {
              if (iVar4 != 0) {
                lVar10 = 0;
                do {
                  if (iVar4 <= (int)lVar10) goto LAB_00102a96;
                  lVar2 = lVar6 + lVar10;
                  lVar10 = lVar10 + 1;
                  iVar5 = strncmp(utmp_ent->ut_user,argv[lVar2],0x20);
                } while (iVar5 != 0);
              }
              print_entry(utmp_ent);
            }
LAB_00102a96:
            utmp_ent = utmp_ent + 1;
          } while( true );
        }
        uVar7 = quotearg_n_style_colon(0,3,"/var/run/utmp");
        piVar8 = __errno_location();
        error(1,*piVar8,"%s",uVar7);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (0x77 < iVar4) goto switchD_00102932_caseD_63;
    if (iVar4 < 0x62) {
      if (iVar4 == -0x83) {
        version_etc((FILE *)stdout,"pinky","GNU coreutils",Version,"Joseph Arceneaux",
                    "David MacKenzie","Kaveh Ghazi",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102932_caseD_63;
    }
    switch(iVar4) {
    case 0x62:
      include_home_and_shell = false;
      break;
    default:
      goto switchD_00102932_caseD_63;
    case 0x66:
      include_heading = false;
      break;
    case 0x68:
      include_project = false;
      break;
    case 0x69:
      include_fullname = false;
      include_where = false;
      break;
    case 0x6c:
      do_short_format = false;
      break;
    case 0x70:
      include_plan = false;
      break;
    case 0x71:
      include_fullname = false;
      include_where = false;
      include_idle = false;
      break;
    case 0x73:
      do_short_format = true;
      break;
    case 0x77:
      include_fullname = false;
    }
  } while( true );
}

