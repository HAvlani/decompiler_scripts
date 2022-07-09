
void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *__s1;
  char *pcVar5;
  infomap *piVar6;
  char *pcVar7;
  infomap infomap [7];
  
  pcVar5 = program_name;
  piVar6 = infomap;
  if (status == 0) {
    uVar3 = dcgettext(0,"Usage: %s [OPTION]...\n",5);
    __printf_chk(1,uVar3,pcVar5);
    pFVar1 = stdout;
    pcVar5 = "Print machine architecture.\n\n";
    if (uname_mode == 1) {
      pcVar5 = (char *)dcgettext(0,
                                 "Print certain system information.  With no OPTION, same as -s.\n\n  -a, --all                print all information, in the following order,\n                             except omit -p and -i if unknown:\n  -s, --kernel-name        print the kernel name\n  -n, --nodename           print the network node hostname\n  -r, --kernel-release     print the kernel release\n"
                                 ,5);
      fputs_unlocked(pcVar5,pFVar1);
      pcVar5 = 
      "  -v, --kernel-version     print the kernel version\n  -m, --machine            print the machine hardware name\n  -p, --processor          print the processor type (non-portable)\n  -i, --hardware-platform  print the hardware platform (non-portable)\n  -o, --operating-system   print the operating system\n"
      ;
    }
    pFVar1 = stdout;
    __s1 = "uname";
    pcVar5 = (char *)dcgettext(0,pcVar5,5);
    fputs_unlocked(pcVar5,pFVar1);
    pFVar1 = stdout;
    pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
    fputs_unlocked(pcVar5,pFVar1);
    pFVar1 = stdout;
    pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
    fputs_unlocked(pcVar5,pFVar1);
    if (uname_mode != 1) {
      __s1 = "arch";
    }
    infomap[3].program = "sha256sum";
    infomap[0].node = "test invocation";
    pcVar5 = "[";
    infomap[1].program = "coreutils";
    infomap[1].node = "Multi-call invocation";
    infomap[2].program = "sha224sum";
    infomap[4].program = "sha384sum";
    infomap[0].program = "[";
    infomap[2].node = "sha2 utilities";
    infomap[3].node = "sha2 utilities";
    infomap[4].node = "sha2 utilities";
    infomap[5].program = "sha512sum";
    infomap[5].node = "sha2 utilities";
    infomap[6].program = (char *)0x0;
    infomap[6].node = (char *)0x0;
    do {
      iVar2 = strcmp(__s1,pcVar5);
      if (iVar2 == 0) break;
      pcVar5 = *(char **)((long)piVar6 + 0x10);
      piVar6 = (infomap *)((long)piVar6 + 0x10);
    } while (pcVar5 != (char *)0x0);
    pcVar5 = *(char **)((long)piVar6 + 8);
    if (*(char **)((long)piVar6 + 8) == (char *)0x0) {
      pcVar5 = __s1;
    }
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    iVar2 = strcmp(__s1,"[");
    pcVar4 = "test";
    if (iVar2 != 0) {
      pcVar4 = __s1;
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar7 = " invocation";
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",pcVar4);
    if (__s1 != pcVar5) {
      pcVar7 = "";
    }
    uVar3 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
    __printf_chk(1,uVar3,pcVar5,pcVar7);
  }
  else {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,pcVar5);
  }
                    /* WARNING: Subroutine does not return */
  exit(status);
}

