
int main(int argc,char **argv)

{
  char **__argv;
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  __mode_t __mask;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  int status;
  bool bVar14;
  undefined8 uVar15;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  pcVar10 = getenv("POSIXLY_CORRECT");
  status = (-(uint)(pcVar10 == (char *)0x0) & 0xfffffffe) + 0x7f;
  uVar15 = 0x10274d;
  exit_failure = status;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"nohup","GNU coreutils",Version,false,usage,"Jim Meyering",0,uVar15);
  if (argc <= optind) {
    uVar15 = dcgettext(0,"missing operand",5);
    error(0,0,uVar15);
                    /* WARNING: Subroutine does not return */
    usage(status);
  }
  iVar5 = isatty(0);
  uVar6 = isatty(1);
  if ((uVar6 == 0) && (piVar11 = __errno_location(), *piVar11 == 9)) {
    bVar3 = 1;
    uVar7 = isatty(2);
    bVar1 = true;
    bVar14 = uVar7 != 0;
    bVar4 = 1;
    if (iVar5 == 0) {
LAB_00102a10:
      bVar2 = (bool)(bVar3 & bVar14);
      if (bVar2) {
        __mask = umask(0xfffffe7f);
        iVar8 = open("nohup.out",0x441,0x180);
        goto LAB_00102811;
      }
LAB_00102948:
      if (bVar14) {
        iVar9 = rpl_fcntl(2,0x406,3);
        iVar8 = 1;
        goto LAB_00102970;
      }
      goto LAB_00102892;
    }
LAB_001029d7:
    bVar3 = bVar4;
    iVar8 = fd_reopen(0,"/dev/null",1,0);
    if (iVar8 < 0) {
      uVar15 = dcgettext(0,"failed to render standard input unusable",5);
      piVar11 = __errno_location();
      error(status,*piVar11,uVar15);
    }
    if ((uVar7 | uVar6) != 0) {
      bVar2 = bVar14;
      if (uVar6 != 0) goto LAB_001027e1;
      goto LAB_00102a10;
    }
    iVar9 = 2;
    uVar15 = dcgettext(0,"ignoring input",5);
    error(0,0,uVar15);
  }
  else {
    uVar7 = isatty(2);
    bVar14 = uVar7 != 0;
    if (iVar5 != 0) {
      bVar1 = false;
      bVar4 = 0;
      goto LAB_001029d7;
    }
    bVar1 = false;
    bVar2 = bVar14;
    if (uVar6 == 0) {
      bVar1 = false;
      goto LAB_00102948;
    }
LAB_001027e1:
    __mask = umask(0xfffffe7f);
    iVar8 = fd_reopen(1,"nohup.out",0x441,0x180);
LAB_00102811:
    pcVar12 = "nohup.out";
    pcVar10 = (char *)0x0;
    if (iVar8 < 0) {
      piVar11 = __errno_location();
      iVar9 = *piVar11;
      pcVar10 = getenv("HOME");
      if (pcVar10 == (char *)0x0) {
        pcVar10 = quotearg_style(shell_escape_always_quoting_style,"nohup.out");
        uVar15 = dcgettext(0,"failed to open %s",5);
        error(0,iVar9,uVar15,pcVar10);
        return status;
      }
      pcVar12 = file_name_concat(pcVar10,"nohup.out",(char **)0x0);
      if (uVar6 == 0) {
        iVar8 = open(pcVar12,0x441,0x180);
      }
      else {
        iVar8 = fd_reopen(1,pcVar12,0x441,0x180);
      }
      pcVar10 = pcVar12;
      if (iVar8 < 0) {
        iVar5 = *piVar11;
        pcVar10 = quotearg_style(shell_escape_always_quoting_style,"nohup.out");
        uVar15 = dcgettext(0,"failed to open %s",5);
        error(0,iVar9,uVar15,pcVar10);
        pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
        pcVar12 = "failed to open %s";
        goto LAB_00102b2f;
      }
    }
    umask(__mask);
    pcVar12 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
    pcVar13 = "ignoring input and appending output to %s";
    if (iVar5 == 0) {
      pcVar13 = "appending output to %s";
    }
    uVar15 = dcgettext(0,pcVar13,5);
    error(0,0,uVar15,pcVar12);
    rpl_free(pcVar10);
    if (bVar2) {
      iVar9 = rpl_fcntl(2,0x406,3);
      if (uVar6 == 0) {
LAB_00102970:
        pcVar10 = "ignoring input and redirecting stderr to stdout";
        if (iVar5 == 0) {
          pcVar10 = "redirecting stderr to stdout";
        }
        uVar15 = dcgettext(0,pcVar10,5);
        error(0,0,uVar15);
      }
      iVar5 = dup2(iVar8,2);
      if (iVar5 < 0) {
        uVar15 = dcgettext(0,"failed to redirect standard error",5);
        piVar11 = __errno_location();
        error(status,*piVar11,uVar15);
      }
      if (bVar1) {
        close(iVar8);
      }
    }
    else {
LAB_00102892:
      iVar9 = 2;
    }
  }
  if ((*stderr & 0x20) != 0) {
    return status;
  }
  signal(1,(__sighandler_t)0x1);
  __argv = argv + optind;
  execvp(*__argv,__argv);
  piVar11 = __errno_location();
  iVar5 = *piVar11;
  status = (iVar5 == 2) + 0x7e;
  iVar8 = dup2(iVar9,2);
  if (iVar8 != 2) {
    return status;
  }
  pcVar10 = quotearg_style(shell_escape_always_quoting_style,*__argv);
  pcVar12 = "failed to run command %s";
LAB_00102b2f:
  uVar15 = dcgettext(0,pcVar12,5);
  error(0,iVar5,uVar15,pcVar10);
  return status;
}

