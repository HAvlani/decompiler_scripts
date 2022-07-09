
int main(int argc,char **argv)

{
  int iVar1;
  __mode_t __mask;
  mode_t __mode;
  int iVar2;
  undefined8 uVar3;
  mode_change *changes;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  char *mode_string;
  undefined auVar7 [16];
  undefined8 uStack56;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  mode_string = (char *)0x0;
LAB_001026f5:
  do {
    iVar1 = getopt_long(argc,argv,&DAT_001070be,longopts);
    if (iVar1 == -1) {
      if (optind != argc) {
        if (mode_string == (char *)0x0) {
          __mode = 0x1b6;
        }
        else {
          changes = mode_compile(mode_string);
          if (changes == (mode_change *)0x0) {
LAB_00102955:
            uVar3 = dcgettext(0,"invalid mode",5);
            auVar7 = error(1,0,uVar3);
            uVar3 = uStack56;
            uStack56 = SUB168(auVar7,0);
            (*(code *)PTR___libc_start_main_0010afd0)
                      (main,uVar3,&stack0xffffffffffffffd0,__libc_csu_init,__libc_csu_fini,
                       SUB168(auVar7 >> 0x40,0),&uStack56);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          __mask = umask(0);
          umask(__mask);
          __mode = mode_adjust(0x1b6,false,__mask,changes,(mode_t *)0x0);
          rpl_free(changes);
          if ((__mode & 0xfffffe00) != 0) {
            uVar3 = dcgettext(0,"mode must specify only file permission bits",5);
            error(1,0,uVar3);
            goto LAB_00102955;
          }
        }
        iVar1 = 0;
        break;
      }
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
      goto LAB_00102927;
    }
    if (iVar1 == 0x5a) {
      if (optarg != (char *)0x0) {
        uVar3 = dcgettext(0,
                          "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                          ,5);
        error(0,0,uVar3);
      }
      goto LAB_001026f5;
    }
    if (iVar1 < 0x5b) {
      if (iVar1 == -0x83) {
        version_etc(stdout,"mkfifo","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar1 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto LAB_00102927;
    }
    mode_string = optarg;
    if (iVar1 != 0x6d) {
LAB_00102927:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
  } while( true );
joined_r0x0010282e:
  if (argc <= optind) {
    return iVar1;
  }
  iVar2 = mkfifo(argv[optind],__mode);
  if (iVar2 == 0) {
    if ((mode_string != (char *)0x0) && (iVar2 = lchmod(argv[optind],__mode), iVar2 != 0)) {
      pcVar4 = quotearg_style(shell_escape_always_quoting_style,argv[optind]);
      pcVar6 = "cannot set permissions of %s";
      goto LAB_0010289e;
    }
  }
  else {
    pcVar4 = quotearg_style(shell_escape_always_quoting_style,argv[optind]);
    pcVar6 = "cannot create fifo %s";
LAB_0010289e:
    uVar3 = dcgettext(0,pcVar6,5);
    piVar5 = __errno_location();
    iVar1 = 1;
    error(0,*piVar5,uVar3,pcVar4);
  }
  optind = optind + 1;
  goto joined_r0x0010282e;
}

