
/* WARNING: Could not reconcile some variable overlaps */

void seq_fast(char *a,char *b,uintmax_t step)

{
  char cVar1;
  size_t s;
  uintmax_t uVar2;
  FILE *pFVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *__dest;
  char *pcVar8;
  char *pcVar9;
  size_t sVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  undefined *puStack288;
  char *pcStack280;
  byte *apbStack272 [5];
  char *pcStack232;
  char *pcStack224;
  char *pcStack216;
  char *pcStack208;
  char *pcStack200;
  undefined8 uStack192;
  undefined8 uStack184;
  undefined8 uStack168;
  ulong uStack152;
  ulong uStack144;
  ulong uStack136;
  char *pcStack128;
  uintmax_t local_70;
  size_t buf_offset;
  void *local_60;
  char *local_58;
  void *local_50;
  void *local_48;
  char *local_40;
  
  bVar22 = 0;
  lVar13 = 4;
  bVar20 = &stack0xffffffffffffffd0 < (undefined *)0x48;
  bVar21 = &stack0x00000000 == (undefined *)0x78;
  pbVar15 = (byte *)b;
  pbVar16 = &DAT_0010a01b;
  do {
    if (lVar13 == 0) break;
    lVar13 = lVar13 + -1;
    bVar20 = *pbVar15 < *pbVar16;
    bVar21 = *pbVar15 == *pbVar16;
    pbVar15 = pbVar15 + 1;
    pbVar16 = pbVar16 + 1;
  } while (bVar21);
  buf_offset = buf_offset & 0xffffffff00000000 |
               (ulong)(uint)(int)(char)((!bVar20 && !bVar21) - bVar20);
  pcVar7 = a;
  if (*a == '0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (pcVar8[1] == '0');
    if ((pcVar8[1] != '\0') || (bVar20 = a == pcVar7, a = pcVar8, bVar20)) {
      a = pcVar7;
    }
  }
  pcVar7 = b;
  if (*b == '0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (pcVar8[1] == '0');
    if ((b == pcVar7) || (b = pcVar8, pcVar8[1] != '\0')) {
      b = pcVar7;
    }
  }
  pcStack128 = (char *)0x10381e;
  local_70 = step;
  uStack144 = strlen(a);
  local_50 = (void *)(uStack144 + 1);
  uStack152 = 0x1f;
  if (0x1e < local_50) {
    uStack152 = (ulong)local_50;
  }
  if ((int)buf_offset == 0) {
    local_58 = (char *)(uStack152 + 1);
    uVar19 = 0;
    pcStack128 = (char *)0x103934;
    local_60 = xmalloc((size_t)local_58);
    pcStack128 = (char *)0x10394f;
    pcVar7 = (char *)memcpy((void *)((uStack152 - uStack144) + (long)local_60),a,(size_t)local_50);
    local_50 = (void *)0x0;
    local_48 = local_58;
  }
  else {
    uVar14 = 0xffffffffffffffff;
    pcVar7 = b;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (ulong)bVar22 * -2 + 1;
    } while (cVar1 != '\0');
    uVar19 = ~uVar14 - 1;
    if (uStack152 < uVar19) {
      uStack152 = uVar19;
    }
    local_58 = (char *)(uStack152 + 1);
    pcStack128 = (char *)0x103870;
    local_48 = local_50;
    local_50 = (void *)~uVar14;
    local_60 = xmalloc((size_t)local_58);
    pcStack128 = (char *)0x10388b;
    pcVar7 = (char *)memcpy((void *)((uStack152 - uStack144) + (long)local_60),a,(size_t)local_48);
    local_48 = local_58;
    pcStack128 = (char *)0x1038a0;
    local_58 = (char *)xmalloc((size_t)local_58);
    pcStack128 = (char *)0x1038be;
    local_50 = memcpy((void *)((uStack152 - uVar19) + (long)local_58),b,(size_t)local_50);
    if (uVar19 <= uStack144) {
      if (uVar19 < uStack144) {
LAB_001038e9:
        pcStack128 = (char *)0x1038f3;
        rpl_free(local_60);
        rpl_free(local_58);
        return;
      }
      pcStack128 = (char *)0x1038e1;
      iVar5 = memcmp(pcVar7,local_50,uStack144);
      if (0 < iVar5) goto LAB_001038e9;
    }
  }
  uVar14 = (long)local_48 * 2;
  local_48 = (void *)0x2000;
  if (0x1fff < uVar14) {
    local_48 = (void *)uVar14;
  }
  pcStack128 = (char *)0x103980;
  __dest = (char *)xmalloc((size_t)local_48);
  local_58 = __dest + (long)local_48;
  pcStack128 = (char *)0x10399e;
  pcVar8 = (char *)mempcpy(__dest,pcVar7,uStack144);
  uStack136 = uStack144 & 0xffffffffffffff00 | (ulong)((int)buf_offset == 0);
  uVar2 = local_70;
  do {
    do {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        pcVar17 = pcVar7 + (uStack144 - 1);
        do {
          if (*pcVar17 < '9') {
            *pcVar17 = *pcVar17 + '\x01';
            goto LAB_001039ee;
          }
          pcVar9 = pcVar17 + -1;
          *pcVar17 = '0';
          pcVar17 = pcVar9;
        } while (pcVar7 <= pcVar9);
        pcVar7[-1] = '1';
        uStack144 = uStack144 + 1;
        pcVar7 = pcVar7 + -1;
LAB_001039ee:
      }
      if ((uVar19 <= uStack144) && ((int)buf_offset != 0)) {
        if (uStack144 <= uVar19) {
          pcStack128 = (char *)0x103a1c;
          buf_offset = (size_t)pcVar8;
          iVar5 = memcmp(pcVar7,local_50,uStack144);
          pcVar8 = (char *)buf_offset;
          if (iVar5 < 1) goto LAB_00103a25;
        }
        *pcVar8 = '\n';
        pcStack128 = (char *)0x103ac0;
        sVar10 = fwrite_unlocked(__dest,(size_t)(pcVar8 + (1 - (long)__dest)),1,stdout);
        iVar5 = (int)__dest;
        if (sVar10 == 1) {
                    /* WARNING: Subroutine does not return */
          pcStack128 = (char *)0x103ad1;
          exit(0);
        }
        goto LAB_00103b74;
      }
LAB_00103a25:
      *pcVar8 = *separator;
      pcVar17 = pcVar8 + 1;
      if (uStack152 == uStack144) {
        uStack152 = uStack152 * 2;
        buf_offset = uStack152 + 1;
        pcStack128 = (char *)0x103aef;
        local_40 = pcVar8 + 1;
        local_60 = xrealloc(local_60,buf_offset);
        pcStack128 = (char *)0x103b04;
        pcVar7 = (char *)memmove((void *)((long)local_60 + uStack144),local_60,uStack144 + 1);
        s = buf_offset * 2;
        pcVar17 = local_40;
        if (local_48 < s) {
          buf_offset = (long)local_40 - (long)__dest;
          pcStack128 = (char *)0x103b37;
          local_58 = (char *)s;
          __dest = (char *)xrealloc(__dest,s);
          local_48 = local_58;
          local_58 = __dest + (long)local_58;
          pcVar17 = __dest + buf_offset;
        }
      }
      pcStack128 = (char *)0x103a4c;
      pcVar8 = (char *)mempcpy(pcVar17,pcVar7,uStack144);
      uVar2 = local_70;
    } while (pcVar8 <= local_58 + ~uStack144);
    pcStack128 = (char *)0x103a7d;
    pcVar17 = __dest;
    sVar10 = fwrite_unlocked(__dest,(long)pcVar8 - (long)__dest,1,stdout);
    iVar5 = (int)pcVar17;
    uVar2 = local_70;
    pcVar8 = __dest;
  } while (sVar10 == 1);
LAB_00103b74:
  pcStack128 = (char *)0x103b79;
  io_error();
  pcVar8 = program_name;
  uStack168 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcStack128 = pcVar7;
  if (iVar5 != 0) {
    uVar11 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar11,pcVar8);
    goto LAB_00103bda;
  }
  uVar11 = dcgettext(0,
                     "Usage: %s [OPTION]... LAST\n  or:  %s [OPTION]... FIRST LAST\n  or:  %s [OPTION]... FIRST INCREMENT LAST\n"
                     ,5);
  __printf_chk(1,uVar11,pcVar8,pcVar8,pcVar8);
  pFVar3 = stdout;
  pcVar7 = (char *)dcgettext(0,"Print numbers from FIRST to LAST, in steps of INCREMENT.\n",5);
  fputs_unlocked(pcVar7,pFVar3);
  pFVar3 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar3);
  pFVar3 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "  -f, --format=FORMAT      use printf style floating-point FORMAT\n  -s, --separator=STRING   use STRING to separate numbers (default: \\n)\n  -w, --equal-width        equalize width by padding with leading zeroes\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar3);
  pFVar3 = stdout;
  pcVar7 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar7,pFVar3);
  pFVar3 = stdout;
  pcVar7 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar7,pFVar3);
  pFVar3 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "\nIf FIRST or INCREMENT is omitted, it defaults to 1.  That is, an\nomitted INCREMENT defaults to 1 even when LAST is smaller than FIRST.\nThe sequence of numbers ends when the sum of the current number and\nINCREMENT would become greater than LAST.\nFIRST, INCREMENT, and LAST are interpreted as floating point values.\nINCREMENT is usually positive if FIRST is smaller than LAST, and\nINCREMENT is usually negative if FIRST is greater than LAST.\nINCREMENT must not be 0; none of FIRST, INCREMENT and LAST may be NaN.\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar3);
  pFVar3 = stdout;
  pcVar7 = (char *)dcgettext(0,
                             "FORMAT must be suitable for printing one argument of type \'double\';\nit defaults to %.PRECf if FIRST, INCREMENT, and LAST are all fixed point\ndecimal numbers with maximum precision PREC, and to %g otherwise.\n"
                             ,5);
  fputs_unlocked(pcVar7,pFVar3);
  apbStack272[4] = (byte *)0x10a064;
  puStack288 = &DAT_0010a023;
  pcStack280 = "test invocation";
  apbStack272[0] = (byte *)0x10a09d;
  apbStack272[1] = (byte *)0x10a035;
  uStack192 = 0;
  uStack184 = 0;
  apbStack272[2] = (byte *)0x10a04b;
  pcStack224 = "sha384sum";
  apbStack272[3] = (byte *)0x10a055;
  pcStack232 = "sha2 utilities";
  pcStack216 = "sha2 utilities";
  pcStack208 = "sha512sum";
  pcStack200 = "sha2 utilities";
  ppuVar4 = &puStack288;
  do {
    puVar12 = (undefined *)ppuVar4;
    bVar20 = false;
    bVar21 = *(byte **)(puVar12 + 0x10) == (byte *)0x0;
    if (bVar21) break;
    lVar13 = 4;
    pbVar15 = &DAT_0010a01f;
    pbVar16 = *(byte **)(puVar12 + 0x10);
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar20 = *pbVar15 < *pbVar16;
      bVar21 = *pbVar15 == *pbVar16;
      pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
      pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
    } while (bVar21);
    ppuVar4 = (undefined **)(puVar12 + 0x10);
  } while ((!bVar20 && !bVar21) != bVar20);
  puVar18 = *(undefined1 **)(puVar12 + 0x18);
  if (puVar18 == (undefined1 *)0x0) {
    uVar11 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar11,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if ((pcVar7 != (char *)0x0) && (iVar6 = strncmp(pcVar7,"en_",3), iVar6 != 0)) {
      puVar18 = &DAT_0010a01f;
      goto LAB_00103f32;
    }
    uVar11 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar18 = &DAT_0010a01f;
    __printf_chk(1,uVar11,"https://www.gnu.org/software/coreutils/",&DAT_0010a01f);
    pcVar7 = " invocation";
  }
  else {
    uVar11 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar11,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if ((pcVar7 != (char *)0x0) && (iVar6 = strncmp(pcVar7,"en_",3), iVar6 != 0)) {
LAB_00103f32:
      pFVar3 = stdout;
      pcVar7 = (char *)dcgettext(0,
                                 "Report any translation bugs to <https://translationproject.org/team/>\n"
                                 ,5);
      fputs_unlocked(pcVar7,pFVar3);
    }
    uVar11 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar7 = " invocation";
    __printf_chk(1,uVar11,"https://www.gnu.org/software/coreutils/",&DAT_0010a01f);
    if (puVar18 != &DAT_0010a01f) {
      pcVar7 = "";
    }
  }
  uVar11 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar11,puVar18,pcVar7);
LAB_00103bda:
                    /* WARNING: Subroutine does not return */
  exit(iVar5);
}

