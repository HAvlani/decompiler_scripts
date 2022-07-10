
int main(int argc,char **argv)

{
  char **__argv;
  long lVar1;
  int iVar2;
  __pid_t _Var3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint __sig;
  long in_FS_OFFSET;
  double duration;
  int status;
  sigset_t cleanup_set;
  sigset_t block_set;
  char signame [19];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 0x7d;
  atexit(close_stdout);
  while( true ) {
    iVar2 = getopt_long(argc,argv,"+k:s:v",long_options,0);
    if (iVar2 == -1) {
      lVar4 = (long)optind;
      if (1 < argc - optind) {
        optind = optind + 1;
        duration = parse_duration(argv[lVar4]);
        __argv = argv + optind;
        command = *__argv;
        if (foreground == false) {
          setpgid(0,0);
        }
        iVar2 = term_signal;
        sigemptyset((sigset_t *)(block_set.__val + 1));
        block_set.__val[0] = (ulong)cleanup;
        sigaction(0xe,(sigaction *)&block_set,(sigaction *)0x0);
        sigaction(2,(sigaction *)&block_set,(sigaction *)0x0);
        sigaction(3,(sigaction *)&block_set,(sigaction *)0x0);
        sigaction(1,(sigaction *)&block_set,(sigaction *)0x0);
        sigaction(0xf,(sigaction *)&block_set,(sigaction *)0x0);
        sigaction(iVar2,(sigaction *)&block_set,(sigaction *)0x0);
        signal(0x15,(__sighandler_t)0x1);
        signal(0x16,(__sighandler_t)0x1);
        sigemptyset((sigset_t *)(block_set.__val + 1));
        block_set.__val[0] = (ulong)chld;
        sigaction(0x11,(sigaction *)&block_set,(sigaction *)0x0);
        unblock_signal(0x11);
        monitored_pid = fork();
        if (monitored_pid == -1) {
          uVar7 = dcgettext(0,"fork system call failed",5);
          piVar5 = __errno_location();
          error(0,*piVar5,uVar7);
          iVar2 = 0x7d;
        }
        else if (monitored_pid == 0) {
          signal(0x15,(__sighandler_t)0x0);
          signal(0x16,(__sighandler_t)0x0);
          execvp(*__argv,__argv);
          piVar5 = __errno_location();
          iVar2 = *piVar5;
          pcVar6 = quote(command);
          uVar7 = dcgettext(0,"failed to run command %s",5);
          error(0,*piVar5,uVar7,pcVar6);
          iVar2 = (iVar2 == 2) + 0x7e;
        }
        else {
          unblock_signal(0xe);
          settimeout(duration,true);
          iVar2 = term_signal;
          sigemptyset((sigset_t *)(sigaction *)&block_set);
          sigaddset((sigset_t *)(sigaction *)&block_set,0xe);
          sigaddset((sigset_t *)(sigaction *)&block_set,2);
          sigaddset((sigset_t *)(sigaction *)&block_set,3);
          sigaddset((sigset_t *)(sigaction *)&block_set,1);
          sigaddset((sigset_t *)(sigaction *)&block_set,0xf);
          sigaddset((sigset_t *)(sigaction *)&block_set,iVar2);
          sigaddset((sigset_t *)(sigaction *)&block_set,0x11);
          iVar2 = sigprocmask(0,(sigset_t *)(sigaction *)&block_set,(sigset_t *)&cleanup_set);
          if (iVar2 != 0) {
            uVar7 = dcgettext(0,"warning: sigprocmask",5);
            piVar5 = __errno_location();
            error(0,*piVar5,uVar7);
          }
          while( true ) {
            _Var3 = waitpid(monitored_pid,&status,1);
            if (_Var3 != 0) break;
            sigsuspend((sigset_t *)&cleanup_set);
          }
          if (_Var3 < 0) {
            uVar7 = dcgettext(0,"error waiting for command",5);
            piVar5 = __errno_location();
            error(0,*piVar5,uVar7);
            status = 0x7d;
          }
          else {
            __sig = status & 0x7f;
            if (__sig == 0) {
              status = (uint)status >> 8 & 0xff;
            }
            else if ((char)__sig == '\0' || (char)((char)__sig + '\x01') < '\x01') {
              uVar7 = dcgettext(0,"unknown status from command (%d)",5);
              error(0,0,uVar7,status);
              status = 1;
            }
            else {
              if ((status & 0x80U) != 0) {
                uVar7 = dcgettext(0,"the monitored command dumped core",5);
                error(0,0,uVar7);
              }
              if (timed_out == 0) {
                iVar2 = prctl(4);
                if (iVar2 == 0) {
                  signal(__sig,(__sighandler_t)0x0);
                  unblock_signal(__sig);
                  raise(__sig);
                }
                else {
                  uVar7 = dcgettext(0,"warning: disabling core dumps failed",5);
                  piVar5 = __errno_location();
                  error(0,*piVar5,uVar7);
                }
              }
              if ((timed_out != 0) && (__sig == 9)) {
                preserve_status = true;
              }
              status = __sig + 0x80;
            }
          }
          iVar2 = status;
          if ((timed_out != 0) && (preserve_status == false)) {
            status = 0x7c;
            iVar2 = status;
          }
        }
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto switchD_001029d0_caseD_6c;
    }
    if (0x81 < iVar2) goto switchD_001029d0_caseD_6c;
    if (iVar2 < 0x6b) break;
    switch(iVar2) {
    case 0x6b:
      kill_after = parse_duration(optarg);
      break;
    default:
      goto switchD_001029d0_caseD_6c;
    case 0x73:
      term_signal = operand2sig(optarg,signame);
      if (term_signal == -1) {
switchD_001029d0_caseD_6c:
                    /* WARNING: Subroutine does not return */
        usage(0x7d);
      }
      break;
    case 0x76:
      verbose = true;
      break;
    case 0x80:
      foreground = true;
      break;
    case 0x81:
      preserve_status = true;
    }
  }
  if (iVar2 == -0x83) {
    version_etc(stdout,"timeout","GNU coreutils",Version,"Padraig Brady",0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
    usage(0);
  }
  goto switchD_001029d0_caseD_6c;
}

