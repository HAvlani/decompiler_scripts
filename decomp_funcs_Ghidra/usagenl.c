
void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  infomap *piVar5;
  undefined *puVar6;
  infomap infomap [7];
  
  pcVar4 = program_name;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,pcVar4);
    goto LAB_0010358b;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,pcVar4);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"Write each FILE to standard output, with line numbers added.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -b, --body-numbering=STYLE      use STYLE for numbering body lines\n  -d, --section-delimiter=CC      use CC for logical page delimiters\n  -f, --footer-numbering=STYLE    use STYLE for numbering footer lines\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -h, --header-numbering=STYLE    use STYLE for numbering header lines\n  -i, --line-increment=NUMBER     line number increment at each line\n  -l, --join-blank-lines=NUMBER   group of NUMBER empty lines counted as one\n  -n, --number-format=FORMAT      insert line numbers according to FORMAT\n  -p, --no-renumber               do not reset line numbers for each section\n  -s, --number-separator=STRING   add STRING after (possible) line number\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v, --starting-line-number=NUMBER  first line number for each section\n  -w, --number-width=NUMBER       use NUMBER columns for line numbers\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nDefault options are: -bt -d\'\\:\' -fn -hn -i1 -l1 -n\'rn\' -s<TAB> -v1 -w6\n\nCC are two delimiter characters used to construct logical page delimiters;\na missing second character implies \':\'.  As a GNU extension one can specify\nmore than two characters, and also specifying the empty string (-d \'\')\ndisables section matching.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nSTYLE is one of:\n\n  a      number all lines\n  t      number only nonempty lines\n  n      number no lines\n  pBRE   number only lines that contain a match for the basic regular\n         expression, BRE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFORMAT is one of:\n\n  ln     left justified, no leading zeros\n  rn     right justified, no leading zeros\n  rz     right justified, leading zeros\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
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
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  piVar5 = infomap;
  do {
    puVar6 = (undefined *)piVar5;
    pcVar4 = *(char **)(puVar6 + 0x10);
    piVar5 = (infomap *)(puVar6 + 0x10);
    if (pcVar4 == (char *)0x0) break;
  } while (((*pcVar4 != 'n') || (pcVar4[1] != 'l')) || (pcVar4[2] != '\0'));
  puVar6 = *(undefined **)(puVar6 + 0x18);
  if (puVar6 == (undefined *)0x0) {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        puVar6 = &DAT_00116019;
        goto LAB_00103985;
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar6 = &DAT_00116019;
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_00116019);
    pcVar4 = " invocation";
  }
  else {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00103985:
        pFVar1 = stdout;
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_00116019);
    pcVar4 = " invocation";
    if (puVar6 != &DAT_00116019) {
      pcVar4 = "";
    }
  }
  uVar3 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar3,puVar6,pcVar4);
LAB_0010358b:
                    /* WARNING: Subroutine does not return */
  exit(status);
}

