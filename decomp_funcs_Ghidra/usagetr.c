
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
    goto LAB_00104a7b;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... STRING1 [STRING2]\n",5);
  __printf_chk(1,uVar3,pcVar4);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Translate, squeeze, and/or delete characters from standard input,\nwriting to standard output.  STRING1 and STRING2 specify arrays of\ncharacters ARRAY1 and ARRAY2 that control the action.\n\n  -c, -C, --complement    use the complement of ARRAY1\n  -d, --delete            delete characters in ARRAY1, do not translate\n  -s, --squeeze-repeats   replace each sequence of a repeated character\n                            that is listed in the last specified ARRAY,\n                            with a single occurrence of that character\n  -t, --truncate-set1     first truncate ARRAY1 to length of ARRAY2\n"
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
                             "\nARRAYs are specified as strings of characters.  Most represent themselves.\nInterpreted sequences are:\n\n  \\NNN            character with octal value NNN (1 to 3 octal digits)\n  \\\\              backslash\n  \\a              audible BEL\n  \\b              backspace\n  \\f              form feed\n  \\n              new line\n  \\r              return\n  \\t              horizontal tab\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\v              vertical tab\n  CHAR1-CHAR2     all characters from CHAR1 to CHAR2 in ascending order\n  [CHAR*]         in ARRAY2, copies of CHAR until length of ARRAY1\n  [CHAR*REPEAT]   REPEAT copies of CHAR, REPEAT octal if starting with 0\n  [:alnum:]       all letters and digits\n  [:alpha:]       all letters\n  [:blank:]       all horizontal whitespace\n  [:cntrl:]       all control characters\n  [:digit:]       all digits\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  [:graph:]       all printable characters, not including space\n  [:lower:]       all lower case letters\n  [:print:]       all printable characters, including space\n  [:punct:]       all punctuation characters\n  [:space:]       all horizontal or vertical whitespace\n  [:upper:]       all upper case letters\n  [:xdigit:]      all hexadecimal digits\n  [=CHAR=]        all characters which are equivalent to CHAR\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nTranslation occurs if -d is not given and both STRING1 and STRING2 appear.\n-t may be used only when translating.  ARRAY2 is extended to length of\nARRAY1 by repeating its last character as necessary.  Excess characters\nof ARRAY2 are ignored.  Character classes expand in unspecified order;\nwhile translating, [:lower:] and [:upper:] may be used in pairs to\nspecify case conversion.  Squeezing occurs after translation or deletion.\n"
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
  } while (((*pcVar4 != 't') || (pcVar4[1] != 'r')) || (pcVar4[2] != '\0'));
  puVar6 = *(undefined **)(puVar6 + 0x18);
  if (puVar6 == (undefined *)0x0) {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        puVar6 = &DAT_0010908e;
        goto LAB_00104ddd;
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar6 = &DAT_0010908e;
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_0010908e);
    pcVar4 = " invocation";
  }
  else {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00104ddd:
        pFVar1 = stdout;
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_0010908e);
    pcVar4 = " invocation";
    if (puVar6 != &DAT_0010908e) {
      pcVar4 = "";
    }
  }
  uVar3 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar3,puVar6,pcVar4);
LAB_00104a7b:
                    /* WARNING: Subroutine does not return */
  exit(status);
}

