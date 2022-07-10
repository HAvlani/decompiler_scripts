
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
    goto LAB_0010627b;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar3,pcVar4);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Show information about the file system on which each FILE resides,\nor all file systems by default.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --all             include pseudo, duplicate, inaccessible file systems\n  -B, --block-size=SIZE  scale sizes by SIZE before printing them; e.g.,\n                           \'-BM\' prints sizes in units of 1,048,576 bytes;\n                           see SIZE format below\n  -h, --human-readable  print sizes in powers of 1024 (e.g., 1023M)\n  -H, --si              print sizes in powers of 1000 (e.g., 1.1G)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --inodes          list inode information instead of block usage\n  -k                    like --block-size=1K\n  -l, --local           limit listing to local file systems\n      --no-sync         do not invoke sync before getting usage info (default)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --output[=FIELD_LIST]  use the output format defined by FIELD_LIST,\n                               or print all fields if FIELD_LIST is omitted.\n  -P, --portability     use the POSIX output format\n      --sync            invoke sync before getting usage info\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --total           elide all entries insignificant to available space,\n                          and produce a grand total\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t, --type=TYPE       limit listing to file systems of type TYPE\n  -T, --print-type      print file system type\n  -x, --exclude-type=TYPE   limit listing to file systems not of type TYPE\n  -v                    (ignored)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar3 = dcgettext(0,
                    "\nDisplay values are in units of the first available SIZE from --block-size,\nand the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n"
                    ,5);
  __printf_chk(1,uVar3,&DAT_0011106f);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFIELD_LIST is a comma-separated list of columns to be included.  Valid\nfield names are: \'source\', \'fstype\', \'itotal\', \'iused\', \'iavail\', \'ipcent\',\n\'size\', \'used\', \'avail\', \'pcent\', \'file\' and \'target\' (see info page).\n"
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
  } while (((*pcVar4 != 'd') || (pcVar4[1] != 'f')) || (pcVar4[2] != '\0'));
  puVar6 = *(undefined **)(puVar6 + 0x18);
  if (puVar6 == (undefined *)0x0) {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        puVar6 = &DAT_0011106c;
        goto LAB_0010669d;
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar6 = &DAT_0011106c;
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_0011106c);
    pcVar4 = " invocation";
  }
  else {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_0010669d:
        pFVar1 = stdout;
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_0011106c);
    pcVar4 = " invocation";
    if (puVar6 != &DAT_0011106c) {
      pcVar4 = "";
    }
  }
  uVar3 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar3,puVar6,pcVar4);
LAB_0010627b:
                    /* WARNING: Subroutine does not return */
  exit(status);
}

