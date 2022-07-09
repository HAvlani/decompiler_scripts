
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
    goto LAB_0010437a;
  }
  uVar4 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar4,pcVar5);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "Print or verify checksums.\nBy default use the 32 bit CRC algorithm.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -a, --algorithm=TYPE  select the digest type to use.  See DIGEST below.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -c, --check           read checksums from the FILEs and check them\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -l, --length=BITS     digest length in bits; must not exceed the max for\n                          the blake2 algorithm and must be a multiple of 8\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --tag             create a BSD-style checksum (the default)\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --untagged        create a reversed style checksum, without digest type\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -z, --zero            end each output line with NUL, not newline,\n                          and disable file name escaping\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nThe following five options are useful only when verifying checksums:\n      --ignore-missing  don\'t fail or report status for missing files\n      --quiet           don\'t print OK for each successfully verified file\n      --status          don\'t output anything, status code shows success\n      --strict          exit non-zero for improperly formatted checksum lines\n  -w, --warn            warn about improperly formatted checksum lines\n\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --debug           indicate which implementation used\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nDIGEST determines the digest algorithm and default output format:\n  sysv      (equivalent to sum -s)\n  bsd       (equivalent to sum -r)\n  crc       (equivalent to cksum)\n  md5       (equivalent to md5sum)\n  sha1      (equivalent to sha1sum)\n  sha224    (equivalent to sha224sum)\n  sha256    (equivalent to sha256sum)\n  sha384    (equivalent to sha384sum)\n  sha512    (equivalent to sha512sum)\n  blake2b   (equivalent to b2sum)\n  sm3       (only available through cksum)\n\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "When checking, the input should be a former output of this program,\nor equivalent standalone program.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  infomap[3].program = "sha256sum";
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  infomap[2].program = "sha224sum";
  infomap[4].program = "sha384sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].node = "sha2 utilities";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  piVar2 = infomap;
  do {
    puVar6 = (undefined *)piVar2;
    bVar11 = false;
    bVar12 = *(byte **)(puVar6 + 0x10) == (byte *)0x0;
    if (bVar12) break;
    lVar8 = 6;
    pbVar9 = (byte *)"cksum";
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
        pcVar5 = "cksum";
        goto LAB_001047fa;
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "cksum";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","cksum");
    pcVar7 = " invocation";
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) {
      iVar3 = strncmp(pcVar7,"en_",3);
      if (iVar3 != 0) {
LAB_001047fa:
        pFVar1 = stdout;
        pcVar7 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar7,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar7 = " invocation";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","cksum");
    if (pcVar5 != "cksum") {
      pcVar7 = "";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar4,pcVar5,pcVar7);
LAB_0010437a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}

