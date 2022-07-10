
void usage(int status)

{
  FILE *pFVar1;
  infomap *piVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  infomap infomap [7];
  
  pcVar5 = program_name;
  bVar13 = 0;
  if (status != 0) {
    uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar4,pcVar5);
    goto LAB_001052eb;
  }
  uVar4 = dcgettext(0,"Usage: %s [OPTION]... [NUMBER]...\n",5);
  __printf_chk(1,uVar4,pcVar5);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "Reformat NUMBER(s), or the numbers from standard input if none are specified.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --debug          print warnings about invalid input\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -d, --delimiter=X    use X instead of whitespace for field delimiter\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --field=FIELDS   replace the numbers in these input fields (default=1);\n                         see FIELDS below\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --format=FORMAT  use printf style floating-point FORMAT;\n                         see FORMAT below for details\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --from=UNIT      auto-scale input numbers to UNITs; default is \'none\';\n                         see UNIT below\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --from-unit=N    specify the input unit size (instead of the default 1)\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --grouping       use locale-defined grouping of digits, e.g. 1,000,000\n                         (which means it has no effect in the C/POSIX locale)\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --header[=N]     print (without converting) the first N header lines;\n                         N defaults to 1 if not specified\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --invalid=MODE   failure mode for invalid numbers: MODE can be:\n                         abort (default), fail, warn, ignore\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --padding=N      pad the output to N characters; positive N will\n                         right-align; negative N will left-align;\n                         padding is ignored if the output is wider than N;\n                         the default is to automatically pad if a whitespace\n                         is found\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --round=METHOD   use METHOD for rounding when scaling; METHOD can be:\n                         up, down, from-zero (default), towards-zero, nearest\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --suffix=SUFFIX  add SUFFIX to output numbers, and accept optional\n                         SUFFIX in input numbers\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --to=UNIT        auto-scale output numbers to UNITs; see UNIT below\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --to-unit=N      the output unit size (instead of the default 1)\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"\nUNIT options:\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  none       no auto-scaling is done; suffixes will trigger an error\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  auto       accept optional single/two letter suffix:\n               1K = 1000,\n               1Ki = 1024,\n               1M = 1000000,\n               1Mi = 1048576,\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  si         accept optional single letter suffix:\n               1K = 1000,\n               1M = 1000000,\n               ...\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  iec        accept optional single letter suffix:\n               1K = 1024,\n               1M = 1048576,\n               ...\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  iec-i      accept optional two-letter suffix:\n               1Ki = 1024,\n               1Mi = 1048576,\n               ...\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nFIELDS supports cut(1) style field ranges:\n  N    N\'th field, counted from 1\n  N-   from N\'th field, to end of line\n  N-M  from N\'th to M\'th field (inclusive)\n  -M   from first to M\'th field (inclusive)\n  -    all fields\nMultiple fields/ranges can be separated with commas\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nFORMAT must be suitable for printing one floating-point argument \'%f\'.\nOptional quote (%\'f) will enable --grouping (if supported by current locale).\nOptional width value (%10f) will pad output. Optional zero (%010f) width\nwill zero pad the number. Optional negative values (%-10f) will left align.\nOptional precision (%.1f) will override the input determined precision.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = program_name;
  uVar4 = dcgettext(0,
                    "\nExit status is 0 if all input numbers were successfully converted.\nBy default, %s will stop at the first conversion error with exit status 2.\nWith --invalid=\'fail\' a warning is printed for each conversion error\nand the exit status is 2.  With --invalid=\'warn\' each conversion error is\ndiagnosed, but the exit status is 0.  With --invalid=\'ignore\' conversion\nerrors are not diagnosed and the exit status is 0.\n"
                    ,5);
  __printf_chk(1,uVar4,pcVar5);
  pcVar5 = program_name;
  uVar4 = dcgettext(0,
                    "\nExamples:\n  $ %s --to=si 1000\n            -> \"1.0K\"\n  $ %s --to=iec 2048\n           -> \"2.0K\"\n  $ %s --to=iec-i 4096\n           -> \"4.0Ki\"\n  $ echo 1K | %s --from=si\n           -> \"1000\"\n  $ echo 1K | %s --from=iec\n           -> \"1024\"\n  $ df -B1 | %s --header --field 2-4 --to=si\n  $ ls -l  | %s --header --field 5 --to=iec\n  $ ls -lh | %s --header --field 5 --from=iec --padding=10\n  $ ls -lh | %s --header --field 5 --from=iec --format %%10f\n"
                    ,5);
  __printf_chk(1,uVar4,pcVar5,pcVar5,pcVar5,pcVar5,pcVar5,pcVar5,pcVar5,pcVar5,pcVar5,uVar4);
  infomap[6].program = (char *)0x0;
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[3].program = "sha256sum";
  infomap[2].program = "sha224sum";
  infomap[4].program = "sha384sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].node = "sha2 utilities";
  infomap[4].node = "sha2 utilities";
  infomap[5].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[6].node = (char *)0x0;
  piVar2 = infomap;
  do {
    puVar6 = (undefined *)piVar2;
    bVar11 = false;
    bVar12 = *(byte **)(puVar6 + 0x10) == (byte *)0x0;
    if (bVar12) break;
    lVar8 = 7;
    pbVar9 = (byte *)"numfmt";
    pbVar10 = *(byte **)(puVar6 + 0x10);
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar11 = *pbVar9 < *pbVar10;
      bVar12 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
    piVar2 = (infomap *)(puVar6 + 0x10);
  } while ((!bVar11 && !bVar12) != bVar11);
  pcVar5 = *(char **)(puVar6 + 0x18);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar3 = strncmp(pcVar5,"en_",3);
      if (iVar3 != 0) {
        pcVar5 = "numfmt";
        goto LAB_001059a2;
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "numfmt";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","numfmt");
    pcVar7 = " invocation";
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) {
      iVar3 = strncmp(pcVar7,"en_",3);
      if (iVar3 != 0) {
LAB_001059a2:
        pFVar1 = stdout;
        pcVar7 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar7,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","numfmt");
    pcVar7 = " invocation";
    if (pcVar5 != "numfmt") {
      pcVar7 = "";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar4,pcVar5,pcVar7);
LAB_001052eb:
                    /* WARNING: Subroutine does not return */
  exit(status);
}

