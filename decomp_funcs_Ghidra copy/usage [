
void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  pcVar4 = program_name;
  pFVar1 = stdout;
  if (status == 0) {
    pcVar4 = (char *)dcgettext(0,
                               "Usage: test EXPRESSION\n  or:  test\n  or:  [ EXPRESSION ]\n  or:  [ ]\n  or:  [ OPTION\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,"Exit with the status determined by EXPRESSION.\n\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nAn omitted EXPRESSION defaults to false.  Otherwise,\nEXPRESSION is true or false and sets exit status.  It is one of:\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  ( EXPRESSION )               EXPRESSION is true\n  ! EXPRESSION                 EXPRESSION is false\n  EXPRESSION1 -a EXPRESSION2   both EXPRESSION1 and EXPRESSION2 are true\n  EXPRESSION1 -o EXPRESSION2   either EXPRESSION1 or EXPRESSION2 is true\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  -n STRING            the length of STRING is nonzero\n  STRING               equivalent to -n STRING\n  -z STRING            the length of STRING is zero\n  STRING1 = STRING2    the strings are equal\n  STRING1 != STRING2   the strings are not equal\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  INTEGER1 -eq INTEGER2   INTEGER1 is equal to INTEGER2\n  INTEGER1 -ge INTEGER2   INTEGER1 is greater than or equal to INTEGER2\n  INTEGER1 -gt INTEGER2   INTEGER1 is greater than INTEGER2\n  INTEGER1 -le INTEGER2   INTEGER1 is less than or equal to INTEGER2\n  INTEGER1 -lt INTEGER2   INTEGER1 is less than INTEGER2\n  INTEGER1 -ne INTEGER2   INTEGER1 is not equal to INTEGER2\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  FILE1 -ef FILE2   FILE1 and FILE2 have the same device and inode numbers\n  FILE1 -nt FILE2   FILE1 is newer (modification date) than FILE2\n  FILE1 -ot FILE2   FILE1 is older than FILE2\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\n  -b FILE     FILE exists and is block special\n  -c FILE     FILE exists and is character special\n  -d FILE     FILE exists and is a directory\n  -e FILE     FILE exists\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -f FILE     FILE exists and is a regular file\n  -g FILE     FILE exists and is set-group-ID\n  -G FILE     FILE exists and is owned by the effective group ID\n  -h FILE     FILE exists and is a symbolic link (same as -L)\n  -k FILE     FILE exists and has its sticky bit set\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -L FILE     FILE exists and is a symbolic link (same as -h)\n  -N FILE     FILE exists and has been modified since it was last read\n  -O FILE     FILE exists and is owned by the effective user ID\n  -p FILE     FILE exists and is a named pipe\n  -r FILE     FILE exists and the user has read access\n  -s FILE     FILE exists and has a size greater than zero\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -S FILE     FILE exists and is a socket\n  -t FD       file descriptor FD is opened on a terminal\n  -u FILE     FILE exists and its set-user-ID bit is set\n  -w FILE     FILE exists and the user has write access\n  -x FILE     FILE exists and the user has execute (or search) access\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nExcept for -h and -L, all FILE-related tests dereference symbolic links.\nBeware that parentheses need to be escaped (e.g., by backslashes) for shells.\nINTEGER may also be -l STRING, which evaluates to the length of STRING.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nNOTE: Binary -a and -o are inherently ambiguous.  Use \'test EXPR1 && test\nEXPR2\' or \'test EXPR1 || test EXPR2\' instead.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nNOTE: [ honors the --help and --version options, but test does not.\ntest treats each of those as it treats any other nonempty STRING.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    uVar3 = dcgettext(0,"test and/or [",5);
    uVar5 = dcgettext(0,
                      "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                      ,5);
    __printf_chk(1,uVar5,uVar3);
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if ((pcVar4 != (char *)0x0) && (iVar2 = strncmp(pcVar4,"en_",3), pFVar1 = stdout, iVar2 != 0)) {
      pcVar4 = (char *)dcgettext(0,
                                 "Report any translation bugs to <https://translationproject.org/team/>\n"
                                 ,5);
      fputs_unlocked(pcVar4,pFVar1);
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_0010a163);
    uVar3 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
    __printf_chk(1,uVar3,"test invocation","");
  }
  else {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,pcVar4);
  }
                    /* WARNING: Subroutine does not return */
  exit(status);
}

