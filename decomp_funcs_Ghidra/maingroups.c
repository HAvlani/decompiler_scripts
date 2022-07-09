
int main(int argc,char **argv)

{
  gid_t rgid;
  uid_t ruid;
  char *pcVar1;
  _Bool _Var2;
  int iVar3;
  __uid_t ruid_00;
  __gid_t rgid_00;
  passwd *ppVar4;
  undefined8 uVar5;
  int *piVar6;
  option *poVar7;
  __gid_t extraout_EDX;
  _IO_FILE *p_Var8;
  uint unaff_R12D;
  uint uVar9;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  poVar7 = longopts;
  iVar3 = getopt_long(argc,argv,"",longopts,0);
  if (iVar3 != -1) {
    if (iVar3 == -0x83) {
      version_etc((FILE *)stdout,"groups","GNU coreutils",Version,"David MacKenzie","James Youngman"
                  ,0,poVar7);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar3 != -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
                    /* WARNING: Subroutine does not return */
    usage(0);
  }
  if (optind == argc) {
    piVar6 = __errno_location();
    *piVar6 = 0;
    ruid_00 = getuid();
    if ((ruid_00 == 0xffffffff) && (*piVar6 != 0)) {
      uVar5 = dcgettext(0,"cannot get real UID",5);
      error(1,*piVar6,uVar5);
      rgid_00 = extraout_EDX;
      goto LAB_00102966;
    }
    *piVar6 = 0;
    unaff_R12D = getegid();
    if (unaff_R12D == 0xffffffff) goto LAB_00102993;
    do {
      *piVar6 = 0;
      rgid_00 = getgid();
      if (rgid_00 != 0xffffffff) {
LAB_001028d4:
        _Var2 = print_group_list((char *)0x0,ruid_00,rgid_00,unaff_R12D,true,' ');
        uVar9 = (uint)_Var2;
        pcVar1 = stdout->_IO_write_ptr;
        p_Var8 = stdout;
        unaff_R12D = (uint)_Var2;
        if (stdout->_IO_write_end <= pcVar1) goto LAB_001029c0;
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = '\n';
        goto LAB_0010290f;
      }
LAB_00102966:
      if (*piVar6 == 0) goto LAB_001028d4;
      uVar5 = dcgettext(0,"cannot get real GID",5);
      error(1,*piVar6,uVar5);
LAB_00102993:
    } while (*piVar6 == 0);
    uVar5 = dcgettext(0,"cannot get effective GID",5);
    p_Var8 = (_IO_FILE *)0x1;
    error(1,*piVar6,uVar5);
LAB_001029c0:
    uVar9 = unaff_R12D;
    __overflow(p_Var8,10);
  }
  else {
    uVar9 = 1;
    for (; optind < argc; optind = optind + 1) {
      ppVar4 = getpwnam(argv[optind]);
      if (ppVar4 == (passwd *)0x0) {
        quote(argv[optind]);
        uVar5 = dcgettext(0,"%s: no such user",5);
        uVar9 = 0;
        error(0,0,uVar5);
      }
      else {
        rgid = ppVar4->pw_gid;
        ruid = ppVar4->pw_uid;
        __printf_chk(1,"%s : ",argv[optind]);
        _Var2 = print_group_list(argv[optind],ruid,rgid,rgid,true,' ');
        if (_Var2 == false) {
          uVar9 = 0;
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
    }
  }
LAB_0010290f:
  return (uVar9 ^ 1) & 0xff;
}

