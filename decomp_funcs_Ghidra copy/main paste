
int main(int argc,char **argv)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  char *string;
  undefined8 uVar8;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  have_read_stdin = false;
  serial_merge = false;
  string = "\t";
  while( true ) {
    uVar8 = 0x1026de;
    iVar2 = getopt_long(argc,argv,&DAT_001070f6,longopts,0);
    if (iVar2 == -1) break;
    if (iVar2 == 100) {
      string = optarg;
      if (*optarg == '\0') {
        string = "\\0";
      }
    }
    else {
      if (iVar2 < 0x65) {
        if (iVar2 == -0x83) {
          version_etc(stdout,"paste","GNU coreutils",Version,"David M. Ihnat","David MacKenzie",0,
                      uVar8);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00102970;
      }
      if (iVar2 == 0x73) {
        serial_merge = true;
      }
      else {
        if (iVar2 != 0x7a) goto LAB_00102970;
        line_delim = '\0';
      }
    }
  }
  iVar2 = argc - optind;
  if (iVar2 == 0) {
    iVar2 = 1;
    argv[optind] = "-";
  }
  delim_end = xstrdup(string);
  cVar1 = *string;
  delims = delim_end;
  pcVar7 = string;
  do {
    if (cVar1 == '\0') {
      pcVar4 = paste_serial;
      if (serial_merge == false) {
        pcVar4 = paste_parallel;
      }
      uVar3 = (*pcVar4)((long)iVar2,argv + optind);
      argv = (char **)(ulong)uVar3;
      rpl_free(delims);
      if (have_read_stdin != false) {
LAB_00102941:
        uVar3 = (uint)argv;
        iVar2 = rpl_fclose(stdin);
        if (iVar2 == -1) {
          piVar6 = __errno_location();
          error(1,*piVar6,&DAT_001070fb);
LAB_00102970:
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
      }
      return (uVar3 ^ 1) & 0xff;
    }
    if (cVar1 == '\\') {
      cVar1 = pcVar7[1];
      if (cVar1 < 'w') {
        if (cVar1 < '\\') {
          if (cVar1 == '\0') {
            uVar8 = quotearg_n_style_colon(0,6,string);
            uVar5 = dcgettext(0,"delimiter list ends with an unescaped backslash: %s",5);
            error(1,0,uVar5,uVar8);
            goto LAB_00102941;
          }
          if (cVar1 != '0') goto switchD_00102813_caseD_5d;
          *delim_end = '\0';
        }
        else {
          switch(cVar1) {
          case '\\':
            *delim_end = '\\';
            break;
          default:
            goto switchD_00102813_caseD_5d;
          case 'b':
            *delim_end = '\b';
            break;
          case 'f':
            *delim_end = '\f';
            break;
          case 'n':
            *delim_end = '\n';
            break;
          case 'r':
            *delim_end = '\r';
            break;
          case 't':
            *delim_end = '\t';
            break;
          case 'v':
            *delim_end = '\v';
          }
        }
      }
      else {
switchD_00102813_caseD_5d:
        *delim_end = cVar1;
      }
      pcVar7 = pcVar7 + 2;
    }
    else {
      *delim_end = cVar1;
      pcVar7 = pcVar7 + 1;
    }
    delim_end = delim_end + 1;
    cVar1 = *pcVar7;
  } while( true );
}

