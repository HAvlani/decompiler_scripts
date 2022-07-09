
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
    goto LAB_0010555b;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPERAND]...\n  or:  %s OPTION\n",5);
  __printf_chk(1,uVar3,pcVar4,pcVar4);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Copy a file, converting and formatting according to the operands.\n\n  bs=BYTES        read and write up to BYTES bytes at a time (default: 512);\n                  overrides ibs and obs\n  cbs=BYTES       convert BYTES bytes at a time\n  conv=CONVS      convert the file as per the comma separated symbol list\n  count=N         copy only N input blocks\n  ibs=BYTES       read up to BYTES bytes at a time (default: 512)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  if=FILE         read from FILE instead of stdin\n  iflag=FLAGS     read as per the comma separated symbol list\n  obs=BYTES       write BYTES bytes at a time (default: 512)\n  of=FILE         write to FILE instead of stdout\n  oflag=FLAGS     write as per the comma separated symbol list\n  seek=N          (or oseek=N) skip N obs-sized output blocks\n  skip=N          (or iseek=N) skip N ibs-sized input blocks\n  status=LEVEL    The LEVEL of information to print to stderr;\n                  \'none\' suppresses everything but error messages,\n                  \'noxfer\' suppresses the final transfer statistics,\n                  \'progress\' shows periodic transfer statistics\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nN and BYTES may be followed by the following multiplicative suffixes:\nc=1, w=2, b=512, kB=1000, K=1024, MB=1000*1000, M=1024*1024, xM=M,\nGB=1000*1000*1000, G=1024*1024*1024, and so on for T, P, E, Z, Y.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\nIf N ends in \'B\', it counts bytes not blocks.\n\nEach CONV symbol may be:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  ascii     from EBCDIC to ASCII\n  ebcdic    from ASCII to EBCDIC\n  ibm       from ASCII to alternate EBCDIC\n  block     pad newline-terminated records with spaces to cbs-size\n  unblock   replace trailing spaces in cbs-size records with newline\n  lcase     change upper case to lower case\n  ucase     change lower case to upper case\n  sparse    try to seek rather than write all-NUL output blocks\n  swab      swap every pair of input bytes\n  sync      pad every input block with NULs to ibs-size; when used\n            with block or unblock, pad with spaces rather than NULs\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  excl      fail if the output file already exists\n  nocreat   do not create the output file\n  notrunc   do not truncate the output file\n  noerror   continue after read errors\n  fdatasync  physically write output file data before finishing\n  fsync     likewise, but also write metadata\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nEach FLAG symbol may be:\n\n  append    append mode (makes sense only for output; conv=notrunc suggested)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  direct    use direct I/O for data\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  directory  fail unless a directory\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  dsync     use synchronized I/O for data\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  sync      likewise, but also for metadata\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  fullblock  accumulate full blocks of input (iflag only)\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  nonblock  use non-blocking I/O\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  noatime   do not update access time\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  nocache   Request to drop cache.  See also oflag=sync\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  noctty    do not assign controlling terminal from file\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  nofollow  do not follow symlinks\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar3 = dcgettext(0,
                    "\nSending a %s signal to a running \'dd\' process makes it\nprint I/O statistics to standard error and then resume copying.\n\nOptions are:\n\n"
                    ,5);
  __printf_chk(1,uVar3,&DAT_0010e0a3);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[3].program = "sha256sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].node = "sha2 utilities";
  infomap[4].node = "sha2 utilities";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  infomap[4].program = "sha384sum";
  infomap[5].program = "sha512sum";
  piVar5 = infomap;
  do {
    puVar6 = (undefined *)piVar5;
    pcVar4 = *(char **)(puVar6 + 0x10);
    piVar5 = (infomap *)(puVar6 + 0x10);
    if (pcVar4 == (char *)0x0) break;
  } while (((*pcVar4 != 'd') || (pcVar4[1] != 'd')) || (pcVar4[2] != '\0'));
  puVar6 = *(undefined **)(puVar6 + 0x18);
  if (puVar6 == (undefined *)0x0) {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        puVar6 = &DAT_0010e0a0;
        goto LAB_00105a7d;
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar6 = &DAT_0010e0a0;
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_0010e0a0);
    pcVar4 = " invocation";
  }
  else {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00105a7d:
        pFVar1 = stdout;
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_0010e0a0);
    pcVar4 = " invocation";
    if (puVar6 != &DAT_0010e0a0) {
      pcVar4 = "";
    }
  }
  uVar3 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar3,puVar6,pcVar4);
LAB_0010555b:
                    /* WARNING: Subroutine does not return */
  exit(status);
}

