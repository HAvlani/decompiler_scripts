
/* WARNING: Could not reconcile some variable overlaps */

void compare_files(char **infiles)

{
  char cVar1;
  uchar delimiter;
  FILE *pFVar2;
  undefined **ppuVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FILE *pFVar7;
  linebuffer *plVar8;
  undefined8 uVar9;
  int *piVar10;
  char *pcVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  linebuffer *plVar15;
  linebuffer *plVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined1 *puVar20;
  linebuffer *plVar21;
  linebuffer **pplVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  undefined *puStack736;
  char *pcStack728;
  byte *apbStack720 [5];
  char *pcStack680;
  char *pcStack672;
  char *pcStack664;
  char *pcStack656;
  char *pcStack648;
  undefined8 uStack640;
  undefined8 uStack632;
  undefined8 uStack616;
  undefined8 uStack608;
  linebuffer *plStack600;
  linebuffer *plStack592;
  ulong uStack584;
  code *pcStack576;
  char *local_238;
  linebuffer *(*local_230) [4];
  linebuffer *local_228;
  FILE **local_220;
  linebuffer **local_218;
  uintmax_t local_210;
  uintmax_t local_208;
  uintmax_t local_200;
  uint local_1f4;
  char **local_1f0;
  _Bool fill_up [2];
  linebuffer *thisline [2];
  FILE *streams [2];
  int alt [2] [3];
  linebuffer *all_line [2] [4];
  linebuffer lba [2] [4];
  char buf1 [21];
  char buf2 [21];
  char buf3 [21];
  
  bVar26 = 0;
  uVar19 = 0;
  plVar15 = (linebuffer *)lba[1];
  plVar21 = (linebuffer *)alt;
  local_220 = streams;
  local_230 = all_line;
  local_228 = plVar21;
  local_1f0 = infiles;
  while( true ) {
    local_238 = (char *)((ulong)local_238 & 0xffffffff00000000 | uVar19);
    plVar16 = plVar15 + -4;
    pplVar22 = (linebuffer **)local_230[uVar19];
    do {
      pcStack576 = (code *)0x102c72;
      initbuffer(plVar16);
      *pplVar22 = plVar16;
      plVar16 = plVar16 + 1;
      pplVar22 = pplVar22 + 1;
    } while (plVar16 != plVar15);
    pcVar11 = (char *)((linebuffer *)infiles)->size;
    *(undefined4 *)&((linebuffer *)&plVar21->size)->size = 0;
    *(undefined4 *)((long)&((linebuffer *)&plVar21->size)->size + 4) = 0;
    cVar1 = *pcVar11;
    *(undefined4 *)&plVar21->length = 0;
    if ((cVar1 != '-') || (pFVar7 = stdin, pcVar11[1] != '\0')) {
      pcStack576 = (code *)0x102cab;
      pFVar7 = fopen_safer(pcVar11,"r");
    }
    local_220[uVar19] = pFVar7;
    plVar8 = plVar15;
    if (pFVar7 == (FILE *)0x0) goto LAB_0010316d;
    pcStack576 = (code *)0x102ccd;
    fadvise(pFVar7,FADVISE_SEQUENTIAL);
    plVar16 = (linebuffer *)((long)(int)local_238 * 0x20);
    pcStack576 = (code *)0x102cec;
    plVar8 = readlinebuffer_delim(all_line[(int)local_238][0],pFVar7,delim);
    thisline[uVar19] = plVar8;
    uVar4 = pFVar7->_flags & 0x20;
    if (uVar4 != 0) goto LAB_001030fc;
    infiles = (char **)((long)infiles + 8);
    plVar21 = (linebuffer *)((long)&plVar21->length + 4);
    plVar15 = plVar15 + 4;
    if (uVar19 == 1) break;
    uVar19 = 1;
  }
  local_200 = 0;
  local_210 = 0;
  local_208 = 0;
  plVar15 = (linebuffer *)infiles;
  local_218 = thisline;
  local_1f4 = uVar4;
  do {
    if (thisline[0] == (linebuffer *)0x0) {
      if (thisline[1] == (linebuffer *)0x0) {
        pcStack576 = (code *)0x102fd3;
        iVar5 = rpl_fclose(streams[0]);
        if (iVar5 != 0) goto LAB_00103133;
        pcStack576 = (code *)0x102fe5;
        iVar5 = rpl_fclose(streams[1]);
        if (iVar5 != 0) goto LAB_0010312b;
        if (total_option != false) {
          uVar23 = (ulong)delim;
          pcStack576 = (code *)0x103032;
          uVar19 = dcgettext(0,"total",5);
          local_230 = (linebuffer *(*) [4])col_sep;
          pcStack576 = (code *)0x103053;
          thisline[0] = (linebuffer *)umaxtostr(local_200,buf3);
          local_238 = col_sep;
          pcStack576 = (code *)0x103073;
          thisline[1] = (linebuffer *)umaxtostr(local_210,buf2);
          plVar21 = (linebuffer *)col_sep;
          pcStack576 = (code *)0x10308f;
          pcVar11 = umaxtostr(local_208,buf1);
          plStack592 = (linebuffer *)local_230;
          uStack608 = 0x1030bb;
          plStack600 = thisline[0];
          uStack584 = uVar19;
          pcStack576 = (code *)uVar23;
          __printf_chk(1,"%s%s%s%s%s%s%s%c",pcVar11,plVar21,thisline[1],local_238);
        }
        if ((issued_disorder_warning[0] == false) && (issued_disorder_warning[1] == false)) {
                    /* WARNING: Subroutine does not return */
          pcStack576 = (code *)0x103017;
          exit(0);
        }
        goto LAB_0010319c;
      }
LAB_00102f3f:
      seen_unpairable = true;
      local_210 = local_210 + 1;
      pcStack576 = (code *)0x102f57;
      writeline();
      fill_up[1] = true;
      bVar24 = false;
    }
    else {
      fill_up[1] = false;
      if (thisline[1] == (linebuffer *)0x0) {
LAB_00102f76:
        seen_unpairable = true;
        local_208 = local_208 + 1;
        pcStack576 = (code *)0x102f8e;
        writeline();
      }
      else {
        uVar19 = thisline[1]->length;
        uVar23 = thisline[0]->length;
        if (hard_LC_COLLATE == false) {
          uVar14 = uVar19;
          if ((long)uVar23 <= (long)uVar19) {
            uVar14 = uVar23;
          }
          pcStack576 = (code *)0x102da9;
          uVar4 = memcmp(thisline[0]->buffer,thisline[1]->buffer,uVar14 - 1);
          if (uVar4 == 0) {
            if ((long)uVar23 < (long)uVar19) goto LAB_00102f76;
            uVar4 = (uint)(uVar23 != uVar19);
            goto LAB_00102dc0;
          }
LAB_00102f9f:
          if (0 < (int)uVar4) goto LAB_00102f3f;
          goto LAB_00102f76;
        }
        pcStack576 = (code *)0x102fc4;
        uVar4 = xmemcoll(thisline[0]->buffer,uVar23 - 1,thisline[1]->buffer,uVar19 - 1);
LAB_00102dc0:
        if (uVar4 != 0) goto LAB_00102f9f;
        local_200 = local_200 + 1;
        pcStack576 = (code *)0x102de7;
        writeline();
        fill_up[1] = true;
      }
      bVar24 = true;
    }
    plVar15 = (linebuffer *)0x0;
    plVar16 = local_228;
    if (bVar24) goto LAB_00102e1e;
    while (plVar16 = (linebuffer *)((long)&plVar16->length + 4), plVar15 != (linebuffer *)0x1) {
      plVar15 = (linebuffer *)0x1;
      if (fill_up[1] != false) {
LAB_00102e1e:
        delimiter = delim;
        iVar5 = *(int *)&((linebuffer *)&plVar16->size)->size;
        uVar19 = (ulong)iVar5;
        iVar6 = *(int *)((long)&((linebuffer *)&plVar16->size)->size + 4);
        plVar21 = (linebuffer *)(long)iVar6;
        local_230 = (linebuffer *(*) [4])((ulong)local_230 & 0xffffffff00000000 | (ulong)plVar15);
        local_238 = (char *)((long)plVar15 * 4);
        *(int *)&plVar16->length = iVar6;
        uVar4 = iVar5 + 1U & 3;
        pFVar7 = local_220[(long)plVar15];
        *(int *)((long)&((linebuffer *)&plVar16->size)->size + 4) = iVar5;
        *(uint *)&((linebuffer *)&plVar16->size)->size = uVar4;
        pcStack576 = (code *)0x102e6e;
        plVar8 = readlinebuffer_delim
                           (all_line[(long)((char *)((long)plVar15 * 4) + (int)uVar4)],pFVar7,
                            delimiter);
        local_218[(long)plVar15] = plVar8;
        if ((((plVar8 != (linebuffer *)0x0) ||
             (all_line[(long)(local_238 + (long)plVar21)]->buffer != (char *)0x0)) &&
            (check_input_order != CHECK_ORDER_DISABLED)) &&
           ((check_input_order == CHECK_ORDER_ENABLED || (seen_unpairable != false)))) {
          pcStack576 = (code *)0x102ec8;
          check_order();
        }
        if ((*(byte *)&pFVar7->_flags & 0x20) != 0) {
          pcStack576 = (code *)0x1030dc;
          uVar9 = quotearg_n_style_colon(0,3,local_1f0[(int)plVar15]);
          pcStack576 = (code *)0x1030e4;
          piVar10 = __errno_location();
          pcStack576 = (code *)0x1030fc;
          error(1,*piVar10,"%s",uVar9);
          infiles = (char **)plVar15;
          goto LAB_001030fc;
        }
        fill_up[(long)plVar15] = false;
      }
    }
  } while( true );
LAB_001030fc:
  pcStack576 = (code *)0x10310b;
  uVar9 = quotearg_n_style_colon(0,3,*(idx_t *)infiles);
  pcStack576 = (code *)0x103113;
  piVar10 = __errno_location();
  pcStack576 = (code *)0x10312b;
  error(1,*piVar10,"%s",uVar9);
  thisline[1] = plVar15;
  thisline[0] = plVar16;
  plVar15 = (linebuffer *)infiles;
LAB_0010312b:
  local_1f4 = 1;
LAB_00103133:
  pcStack576 = (code *)0x10314d;
  uVar9 = quotearg_n_style_colon(0,3,local_1f0[(int)local_1f4]);
  pcStack576 = (code *)0x103155;
  piVar10 = __errno_location();
  pcStack576 = (code *)0x10316d;
  error(1,*piVar10,"%s",uVar9);
  plVar8 = thisline[1];
  plVar16 = thisline[0];
  infiles = (char **)plVar15;
LAB_0010316d:
  thisline[0] = plVar16;
  thisline[1] = plVar8;
  pcStack576 = (code *)0x10317c;
  uVar19 = quotearg_n_style_colon(0,3,((linebuffer *)infiles)->size);
  pcStack576 = (code *)0x103184;
  piVar10 = __errno_location();
  pcStack576 = (code *)0x10319c;
  error(1,*piVar10,"%s",uVar19);
LAB_0010319c:
  pcStack576 = (code *)0x1031af;
  uVar9 = dcgettext(0,"input is not in sorted order",5);
  iVar5 = 1;
  pcStack576 = usage;
  error(1,0,uVar9);
  pcVar11 = program_name;
  uStack616 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  plStack600 = thisline[1];
  plStack592 = thisline[0];
  uStack584 = uVar19;
  pcStack576 = (code *)plVar21;
  if (iVar5 != 0) {
    uVar9 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar9,pcVar11);
    goto LAB_0010321a;
  }
  uVar9 = dcgettext(0,"Usage: %s [OPTION]... FILE1 FILE2\n",5);
  __printf_chk(1,uVar9,pcVar11);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,"Compare sorted files FILE1 and FILE2 line by line.\n",5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,"\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n",5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,
                              "\nWith no options, produce three-column output.  Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files.\n"
                              ,5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,
                              "\n  -1                      suppress column 1 (lines unique to FILE1)\n  -2                      suppress column 2 (lines unique to FILE2)\n  -3                      suppress column 3 (lines that appear in both files)\n"
                              ,5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,
                              "\n      --check-order       check that the input is correctly sorted, even\n                            if all input lines are pairable\n      --nocheck-order     do not check that the input is correctly sorted\n"
                              ,5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,"      --output-delimiter=STR  separate columns with STR\n",5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,"      --total             output a summary\n",5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,"  -z, --zero-terminated   line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar11,pFVar2);
  pFVar2 = stdout;
  pcVar11 = (char *)dcgettext(0,"\nNote, comparisons honor the rules specified by \'LC_COLLATE\'.\n"
                              ,5);
  fputs_unlocked(pcVar11,pFVar2);
  pcVar11 = program_name;
  uVar9 = dcgettext(0,
                    "\nExamples:\n  %s -12 file1 file2  Print only lines present in both file1 and file2.\n  %s -3 file1 file2  Print lines in file1 not in file2, and vice versa.\n"
                    ,5);
  __printf_chk(1,uVar9,pcVar11,pcVar11);
  apbStack720[4] = (byte *)0x1076cf;
  puStack736 = &DAT_0010768e;
  pcStack728 = "test invocation";
  apbStack720[0] = (byte *)0x107708;
  apbStack720[1] = (byte *)0x1076a0;
  uStack640 = 0;
  uStack632 = 0;
  apbStack720[2] = (byte *)0x1076b6;
  pcStack672 = "sha384sum";
  apbStack720[3] = (byte *)0x1076c0;
  pcStack680 = "sha2 utilities";
  pcStack664 = "sha2 utilities";
  pcStack656 = "sha512sum";
  pcStack648 = "sha2 utilities";
  ppuVar3 = &puStack736;
  do {
    puVar12 = (undefined *)ppuVar3;
    bVar24 = false;
    bVar25 = *(byte **)(puVar12 + 0x10) == (byte *)0x0;
    if (bVar25) break;
    lVar13 = 5;
    pbVar17 = &DAT_00107689;
    pbVar18 = *(byte **)(puVar12 + 0x10);
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar24 = *pbVar17 < *pbVar18;
      bVar25 = *pbVar17 == *pbVar18;
      pbVar17 = pbVar17 + (ulong)bVar26 * -2 + 1;
      pbVar18 = pbVar18 + (ulong)bVar26 * -2 + 1;
    } while (bVar25);
    ppuVar3 = (undefined **)(puVar12 + 0x10);
  } while ((!bVar24 && !bVar25) != bVar24);
  puVar20 = *(undefined1 **)(puVar12 + 0x18);
  if (puVar20 == (undefined1 *)0x0) {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar11 = setlocale(5,(char *)0x0);
    if ((pcVar11 != (char *)0x0) && (iVar6 = strncmp(pcVar11,"en_",3), iVar6 != 0)) {
      puVar20 = &DAT_00107689;
      goto LAB_00103632;
    }
    uVar9 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar20 = &DAT_00107689;
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/",&DAT_00107689);
    pcVar11 = " invocation";
  }
  else {
    uVar9 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar9,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar11 = setlocale(5,(char *)0x0);
    if ((pcVar11 != (char *)0x0) && (iVar6 = strncmp(pcVar11,"en_",3), iVar6 != 0)) {
LAB_00103632:
      pFVar2 = stdout;
      pcVar11 = (char *)dcgettext(0,
                                  "Report any translation bugs to <https://translationproject.org/team/>\n"
                                  ,5);
      fputs_unlocked(pcVar11,pFVar2);
    }
    uVar9 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar11 = " invocation";
    __printf_chk(1,uVar9,"https://www.gnu.org/software/coreutils/",&DAT_00107689);
    if (puVar20 != &DAT_00107689) {
      pcVar11 = "";
    }
  }
  uVar9 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar9,puVar20,pcVar11);
LAB_0010321a:
                    /* WARNING: Subroutine does not return */
  exit(iVar5);
}

