
/* WARNING: Could not reconcile some variable overlaps */

void io_error(void)

{
  byte bVar1;
  size_t s;
  FILE *pFVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  size_t sVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long extraout_RDX;
  byte *__src;
  char *pcVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  undefined *puStack296;
  char *pcStack288;
  byte *apbStack280 [5];
  char *pcStack240;
  char *pcStack232;
  char *pcStack224;
  char *pcStack216;
  char *pcStack208;
  undefined8 uStack200;
  undefined8 uStack192;
  undefined8 uStack176;
  ulong uStack160;
  ulong uStack152;
  ulong uStack144;
  char *pcStack136;
  long lStack120;
  undefined8 uStack112;
  void *pvStack104;
  char *pcStack96;
  void *pvStack88;
  void *pvStack80;
  char *pcStack72;
  
  bVar23 = 0;
  clearerr_unlocked(stdout);
  uVar6 = dcgettext(0,"write error",5);
  puVar7 = (uint *)__errno_location();
  pcVar16 = (char *)0x1;
  __src = (byte *)(ulong)*puVar7;
  error(1,__src,uVar6);
  lVar14 = 4;
  bVar21 = &stack0xffffffffffffffc8 < (undefined *)0x48;
  bVar22 = &stack0x00000000 == (undefined *)0x80;
  pbVar9 = __src;
  pbVar17 = &DAT_0010a01b;
  do {
    if (lVar14 == 0) break;
    lVar14 = lVar14 + -1;
    bVar21 = *pbVar9 < *pbVar17;
    bVar22 = *pbVar9 == *pbVar17;
    pbVar9 = pbVar9 + (ulong)bVar23 * -2 + 1;
    pbVar17 = pbVar17 + (ulong)bVar23 * -2 + 1;
  } while (bVar22);
  uStack112 = (char *)CONCAT44(uStack112._4_4_,(int)(char)((!bVar21 && !bVar22) - bVar21));
  pcVar8 = pcVar16;
  if (*pcVar16 == '0') {
    do {
      pcVar10 = pcVar8;
      pcVar8 = pcVar10 + 1;
    } while (pcVar10[1] == '0');
    if ((pcVar10[1] != '\0') || (bVar21 = pcVar16 == pcVar8, pcVar16 = pcVar10, bVar21)) {
      pcVar16 = pcVar8;
    }
  }
  pbVar9 = __src;
  if (*__src == 0x30) {
    do {
      pbVar17 = pbVar9;
      pbVar9 = pbVar17 + 1;
    } while (pbVar17[1] == 0x30);
    if ((__src == pbVar9) || (__src = pbVar17, pbVar17[1] != 0)) {
      __src = pbVar9;
    }
  }
  pcStack136 = (char *)0x10381e;
  lStack120 = extraout_RDX;
  uStack152 = strlen(pcVar16);
  pvStack88 = (void *)(uStack152 + 1);
  uStack160 = 0x1f;
  if (0x1e < pvStack88) {
    uStack160 = (ulong)pvStack88;
  }
  if ((int)uStack112 == 0) {
    pcStack96 = (char *)(uStack160 + 1);
    uVar20 = 0;
    pcStack136 = (char *)0x103934;
    pvStack104 = xmalloc((size_t)pcStack96);
    pcStack136 = (char *)0x10394f;
    pcVar16 = (char *)memcpy((void *)((uStack160 - uStack152) + (long)pvStack104),pcVar16,
                             (size_t)pvStack88);
    pvStack88 = (void *)0x0;
    pvStack80 = pcStack96;
  }
  else {
    uVar15 = 0xffffffffffffffff;
    pbVar9 = __src;
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + (ulong)bVar23 * -2 + 1;
    } while (bVar1 != 0);
    uVar20 = ~uVar15 - 1;
    if (uStack160 < uVar20) {
      uStack160 = uVar20;
    }
    pcStack96 = (char *)(uStack160 + 1);
    pcStack136 = (char *)0x103870;
    pvStack80 = pvStack88;
    pvStack88 = (void *)~uVar15;
    pvStack104 = xmalloc((size_t)pcStack96);
    pcStack136 = (char *)0x10388b;
    pcVar16 = (char *)memcpy((void *)((uStack160 - uStack152) + (long)pvStack104),pcVar16,
                             (size_t)pvStack80);
    pvStack80 = pcStack96;
    pcStack136 = (char *)0x1038a0;
    pcStack96 = (char *)xmalloc((size_t)pcStack96);
    pcStack136 = (char *)0x1038be;
    pvStack88 = memcpy((void *)((uStack160 - uVar20) + (long)pcStack96),__src,(size_t)pvStack88);
    if (uVar20 <= uStack152) {
      if (uVar20 < uStack152) {
LAB_001038e9:
        pcStack136 = (char *)0x1038f3;
        rpl_free(pvStack104);
        rpl_free(pcStack96);
        return;
      }
      pcStack136 = (char *)0x1038e1;
      iVar4 = memcmp(pcVar16,pvStack88,uStack152);
      if (0 < iVar4) goto LAB_001038e9;
    }
  }
  uVar15 = (long)pvStack80 * 2;
  pvStack80 = (void *)0x2000;
  if (0x1fff < uVar15) {
    pvStack80 = (void *)uVar15;
  }
  pcStack136 = (char *)0x103980;
  pcVar10 = (char *)xmalloc((size_t)pvStack80);
  pcStack96 = pcVar10 + (long)pvStack80;
  pcStack136 = (char *)0x10399e;
  pcVar8 = (char *)mempcpy(pcVar10,pcVar16,uStack152);
  uStack144 = uStack152 & 0xffffffffffffff00 | (ulong)((int)uStack112 == 0);
  lVar14 = lStack120;
  do {
    do {
      for (; lVar14 != 0; lVar14 = lVar14 + -1) {
        pcVar18 = pcVar16 + (uStack152 - 1);
        do {
          if (*pcVar18 < '9') {
            *pcVar18 = *pcVar18 + '\x01';
            goto LAB_001039ee;
          }
          pcVar11 = pcVar18 + -1;
          *pcVar18 = '0';
          pcVar18 = pcVar11;
        } while (pcVar16 <= pcVar11);
        pcVar16[-1] = '1';
        uStack152 = uStack152 + 1;
        pcVar16 = pcVar16 + -1;
LAB_001039ee:
      }
      if ((uVar20 <= uStack152) && ((int)uStack112 != 0)) {
        if (uStack152 <= uVar20) {
          pcStack136 = (char *)0x103a1c;
          uStack112 = pcVar8;
          iVar4 = memcmp(pcVar16,pvStack88,uStack152);
          pcVar8 = uStack112;
          if (iVar4 < 1) goto LAB_00103a25;
        }
        *pcVar8 = '\n';
        pcStack136 = (char *)0x103ac0;
        sVar12 = fwrite_unlocked(pcVar10,(size_t)(pcVar8 + (1 - (long)pcVar10)),1,stdout);
        iVar4 = (int)pcVar10;
        if (sVar12 == 1) {
                    /* WARNING: Subroutine does not return */
          pcStack136 = (char *)0x103ad1;
          exit(0);
        }
        goto LAB_00103b74;
      }
LAB_00103a25:
      *pcVar8 = *separator;
      pcVar18 = pcVar8 + 1;
      if (uStack160 == uStack152) {
        uStack160 = uStack160 * 2;
        uStack112 = (char *)(uStack160 + 1);
        pcStack136 = (char *)0x103aef;
        pcStack72 = pcVar8 + 1;
        pvStack104 = xrealloc(pvStack104,(size_t)uStack112);
        pcStack136 = (char *)0x103b04;
        pcVar16 = (char *)memmove((void *)((long)pvStack104 + uStack152),pvStack104,uStack152 + 1);
        s = (long)uStack112 * 2;
        pcVar18 = pcStack72;
        if (pvStack80 < s) {
          uStack112 = pcStack72 + -(long)pcVar10;
          pcStack136 = (char *)0x103b37;
          pcStack96 = (char *)s;
          pcVar10 = (char *)xrealloc(pcVar10,s);
          pvStack80 = pcStack96;
          pcStack96 = pcVar10 + (long)pcStack96;
          pcVar18 = uStack112 + (long)pcVar10;
        }
      }
      pcStack136 = (char *)0x103a4c;
      pcVar8 = (char *)mempcpy(pcVar18,pcVar16,uStack152);
      lVar14 = lStack120;
    } while (pcVar8 <= pcStack96 + ~uStack152);
    pcStack136 = (char *)0x103a7d;
    pcVar18 = pcVar10;
    sVar12 = fwrite_unlocked(pcVar10,(long)pcVar8 - (long)pcVar10,1,stdout);
    iVar4 = (int)pcVar18;
    lVar14 = lStack120;
    pcVar8 = pcVar10;
  } while (sVar12 == 1);
LAB_00103b74:
  pcStack136 = (char *)0x103b79;
  io_error();
  pcVar8 = program_name;
  uStack176 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcStack136 = pcVar16;
  if (iVar4 != 0) {
    uVar6 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar6,pcVar8);
    goto LAB_00103bda;
  }
  uVar6 = dcgettext(0,
                    "Usage: %s [OPTION]... LAST\n  or:  %s [OPTION]... FIRST LAST\n  or:  %s [OPTION]... FIRST INCREMENT LAST\n"
                    ,5);
  __printf_chk(1,uVar6,pcVar8,pcVar8,pcVar8);
  pFVar2 = stdout;
  pcVar16 = (char *)dcgettext(0,"Print numbers from FIRST to LAST, in steps of INCREMENT.\n",5);
  fputs_unlocked(pcVar16,pFVar2);
  pFVar2 = stdout;
  pcVar16 = (char *)dcgettext(0,
                              "\nMandatory arguments to long options are mandatory for short options too.\n"
                              ,5);
  fputs_unlocked(pcVar16,pFVar2);
  pFVar2 = stdout;
  pcVar16 = (char *)dcgettext(0,
                              "  -f, --format=FORMAT      use printf style floating-point FORMAT\n  -s, --separator=STRING   use STRING to separate numbers (default: \\n)\n  -w, --equal-width        equalize width by padding with leading zeroes\n"
                              ,5);
  fputs_unlocked(pcVar16,pFVar2);
  pFVar2 = stdout;
  pcVar16 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar16,pFVar2);
  pFVar2 = stdout;
  pcVar16 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar16,pFVar2);
  pFVar2 = stdout;
  pcVar16 = (char *)dcgettext(0,
                              "\nIf FIRST or INCREMENT is omitted, it defaults to 1.  That is, an\nomitted INCREMENT defaults to 1 even when LAST is smaller than FIRST.\nThe sequence of numbers ends when the sum of the current number and\nINCREMENT would become greater than LAST.\nFIRST, INCREMENT, and LAST are interpreted as floating point values.\nINCREMENT is usually positive if FIRST is smaller than LAST, and\nINCREMENT is usually negative if FIRST is greater than LAST.\nINCREMENT must not be 0; none of FIRST, INCREMENT and LAST may be NaN.\n"
                              ,5);
  fputs_unlocked(pcVar16,pFVar2);
  pFVar2 = stdout;
  pcVar16 = (char *)dcgettext(0,
                              "FORMAT must be suitable for printing one argument of type \'double\';\nit defaults to %.PRECf if FIRST, INCREMENT, and LAST are all fixed point\ndecimal numbers with maximum precision PREC, and to %g otherwise.\n"
                              ,5);
  fputs_unlocked(pcVar16,pFVar2);
  apbStack280[4] = (byte *)0x10a064;
  puStack296 = &DAT_0010a023;
  pcStack288 = "test invocation";
  apbStack280[0] = (byte *)0x10a09d;
  apbStack280[1] = (byte *)0x10a035;
  uStack200 = 0;
  uStack192 = 0;
  apbStack280[2] = (byte *)0x10a04b;
  pcStack232 = "sha384sum";
  apbStack280[3] = (byte *)0x10a055;
  pcStack240 = "sha2 utilities";
  pcStack224 = "sha2 utilities";
  pcStack216 = "sha512sum";
  pcStack208 = "sha2 utilities";
  ppuVar3 = &puStack296;
  do {
    puVar13 = (undefined *)ppuVar3;
    bVar21 = false;
    bVar22 = *(byte **)(puVar13 + 0x10) == (byte *)0x0;
    if (bVar22) break;
    lVar14 = 4;
    pbVar9 = &DAT_0010a01f;
    pbVar17 = *(byte **)(puVar13 + 0x10);
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar21 = *pbVar9 < *pbVar17;
      bVar22 = *pbVar9 == *pbVar17;
      pbVar9 = pbVar9 + (ulong)bVar23 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar23 * -2 + 1;
    } while (bVar22);
    ppuVar3 = (undefined **)(puVar13 + 0x10);
  } while ((!bVar21 && !bVar22) != bVar21);
  puVar19 = *(undefined1 **)(puVar13 + 0x18);
  if (puVar19 == (undefined1 *)0x0) {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar16 = setlocale(5,(char *)0x0);
    if ((pcVar16 != (char *)0x0) && (iVar5 = strncmp(pcVar16,"en_",3), iVar5 != 0)) {
      puVar19 = &DAT_0010a01f;
      goto LAB_00103f32;
    }
    uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar19 = &DAT_0010a01f;
    __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/",&DAT_0010a01f);
    pcVar16 = " invocation";
  }
  else {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar16 = setlocale(5,(char *)0x0);
    if ((pcVar16 != (char *)0x0) && (iVar5 = strncmp(pcVar16,"en_",3), iVar5 != 0)) {
LAB_00103f32:
      pFVar2 = stdout;
      pcVar16 = (char *)dcgettext(0,
                                  "Report any translation bugs to <https://translationproject.org/team/>\n"
                                  ,5);
      fputs_unlocked(pcVar16,pFVar2);
    }
    uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar16 = " invocation";
    __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/",&DAT_0010a01f);
    if (puVar19 != &DAT_0010a01f) {
      pcVar16 = "";
    }
  }
  uVar6 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar6,puVar19,pcVar16);
LAB_00103bda:
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}

