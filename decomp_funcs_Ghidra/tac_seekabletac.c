
/* WARNING: Type propagation algorithm not settling */

_Bool tac_seekable(int input_fd,char *file,off_t file_pos)

{
  ulong s;
  byte bVar1;
  FILE *pFVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  regoff_t rVar8;
  void *pvVar9;
  size_t sVar10;
  char *pcVar11;
  __off_t _Var12;
  undefined8 uVar13;
  int *piVar14;
  undefined *puVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  long range;
  char *pcVar19;
  undefined1 *puVar20;
  char *pcVar21;
  long in_FS_OFFSET;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  undefined *puStack256;
  char *pcStack248;
  byte *apbStack240 [5];
  char *pcStack200;
  char *pcStack192;
  char *pcStack184;
  char *pcStack176;
  char *pcStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined8 uStack136;
  ulong uStack120;
  char *pcStack112;
  size_t sStack104;
  char *pcStack96;
  char *local_58;
  char *local_50;
  int local_48;
  byte local_41;
  char *local_40;
  
  sVar10 = read_size;
  bVar24 = 0;
  local_50 = (char *)match_length;
  sStack104 = match_length - 1;
  bVar1 = *separator;
  uStack120 = (ulong)bVar1;
  pcVar21 = separator + 1;
  local_48 = input_fd;
  local_40 = file;
  if ((ulong)file_pos % read_size != 0) {
    file_pos = file_pos - (ulong)file_pos % read_size;
    pcStack96 = (char *)0x1037bd;
    _Var12 = lseek(input_fd,file_pos,0);
    if (_Var12 < 0) {
      pcStack96 = (char *)0x1037d7;
      local_58 = (char *)quotearg_n_style_colon(0,3,local_40);
      pcStack96 = (char *)0x1037ee;
      uVar13 = dcgettext(0,"%s: seek failed",5);
      pcStack96 = (char *)0x1037f6;
      piVar14 = __errno_location();
      pcStack96 = (char *)0x103808;
      error(0,*piVar14,uVar13,local_58);
      sVar10 = read_size;
    }
  }
  while( true ) {
    pcStack96 = (char *)0x10331e;
    pcVar6 = (char *)safe_read(local_48,G_buffer,sVar10);
    sVar10 = read_size;
    pcVar19 = (char *)read_size;
    if (pcVar6 != (char *)0x0) break;
    if ((char *)file_pos == (char *)0x0) {
      if (read_size != 0) goto LAB_001033ae;
      goto LAB_0010364a;
    }
    pcStack96 = (char *)0x10334a;
    _Var12 = lseek(local_48,-read_size,1);
    if (_Var12 < 0) {
      pcStack96 = (char *)0x103360;
      uVar13 = quotearg_n_style_colon(0,3,local_40);
      pcStack96 = (char *)0x103376;
      uVar7 = dcgettext(0,"%s: seek failed",5);
      pcStack96 = (char *)0x10337e;
      piVar14 = __errno_location();
      pcStack96 = (char *)0x10338f;
      error(0,*piVar14,uVar7,uVar13);
      sVar10 = read_size;
    }
    file_pos = file_pos + -sVar10;
  }
  pcVar11 = pcVar6;
  if (pcVar6 == (char *)read_size) {
LAB_0010364a:
    do {
      pcStack96 = (char *)0x103661;
      local_58 = pcVar19;
      pcVar6 = (char *)safe_read(local_48,G_buffer,(size_t)pcVar19);
      pcVar11 = local_58;
      if (pcVar6 == (char *)0x0) goto LAB_001033a4;
      if (pcVar6 == (char *)0xffffffffffffffff) goto LAB_00103729;
      file_pos = file_pos + (long)pcVar6;
      pcVar19 = pcVar6;
    } while ((char *)read_size == pcVar6);
  }
  else {
LAB_001033a4:
    pcVar6 = pcVar11;
    if (pcVar6 == (char *)0xffffffffffffffff) {
LAB_00103729:
      pcStack96 = (char *)0x10373a;
      uVar13 = quotearg_n_style_colon(0,3,local_40);
      pcStack96 = (char *)0x103750;
      uVar7 = dcgettext(0,"%s: read error",5);
      pcStack96 = (char *)0x103758;
      piVar14 = __errno_location();
      pcStack96 = (char *)0x103769;
      error(0,*piVar14,uVar7,uVar13);
      return false;
    }
  }
LAB_001033ae:
  local_41 = 1;
  local_58 = G_buffer + (long)pcVar6;
  pcStack112 = G_buffer;
  pcVar19 = local_58 + (1 - (long)local_50);
  if (sentinel_length == 0) {
    pcVar19 = local_58;
  }
  do {
    pcVar6 = pcStack112;
    if (sentinel_length != 0) goto LAB_00103593;
LAB_001033e9:
    do {
      lVar16 = (long)pcVar19 - (long)pcStack112;
      range = 1 - lVar16;
      if (1 < range) {
        pcStack96 = (char *)0x103834;
        uVar13 = dcgettext(0,"record too large",5);
        pcStack96 = (char *)0x103845;
        error(1,0,uVar13);
LAB_00103845:
        pcStack96 = (char *)0x103858;
        uVar13 = dcgettext(0,"error in regular expression search",5);
        iVar4 = 1;
        pcStack96 = (char *)0x103869;
        error(1,0,uVar13);
        pcVar21 = program_name;
        uStack136 = *(undefined8 *)(in_FS_OFFSET + 0x28);
        pcStack96 = (char *)file_pos;
        if (iVar4 == 0) {
          uVar13 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
          __printf_chk(1,uVar13,pcVar21);
          pFVar2 = stdout;
          pcVar21 = (char *)dcgettext(0,"Write each FILE to standard output, last line first.\n",5);
          fputs_unlocked(pcVar21,pFVar2);
          pFVar2 = stdout;
          pcVar21 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",
                                      5);
          fputs_unlocked(pcVar21,pFVar2);
          pFVar2 = stdout;
          pcVar21 = (char *)dcgettext(0,
                                      "\nMandatory arguments to long options are mandatory for short options too.\n"
                                      ,5);
          fputs_unlocked(pcVar21,pFVar2);
          pFVar2 = stdout;
          pcVar21 = (char *)dcgettext(0,
                                      "  -b, --before             attach the separator before instead of after\n  -r, --regex              interpret the separator as a regular expression\n  -s, --separator=STRING   use STRING as the separator instead of newline\n"
                                      ,5);
          fputs_unlocked(pcVar21,pFVar2);
          pFVar2 = stdout;
          pcVar21 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
          fputs_unlocked(pcVar21,pFVar2);
          pFVar2 = stdout;
          pcVar21 = (char *)dcgettext(0,"      --version     output version information and exit\n",
                                      5);
          fputs_unlocked(pcVar21,pFVar2);
          apbStack240[4] = (byte *)0x116079;
          puStack256 = &DAT_00116038;
          pcStack248 = "test invocation";
          apbStack240[0] = (byte *)0x1160b2;
          apbStack240[1] = (byte *)0x11604a;
          uStack160 = 0;
          uStack152 = 0;
          apbStack240[2] = (byte *)0x116060;
          pcStack192 = "sha384sum";
          apbStack240[3] = (byte *)0x11606a;
          pcStack200 = "sha2 utilities";
          pcStack184 = "sha2 utilities";
          pcStack176 = "sha512sum";
          pcStack168 = "sha2 utilities";
          ppuVar3 = &puStack256;
          goto LAB_00103a68;
        }
        uVar13 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
        __fprintf_chk(stderr,1,uVar13,pcVar21);
        goto LAB_001038ca;
      }
      pcVar6 = pcStack112;
      if (range == 1) {
LAB_0010367f:
        pcVar19 = pcVar6 + -1;
      }
      else {
        pcStack96 = (char *)0x103422;
        rVar8 = rpl_re_search(&compiled_separator,pcStack112,lVar16,lVar16 + -1,range,&regs);
        pcVar6 = G_buffer;
        if (rVar8 == -1) goto LAB_0010367f;
        if (rVar8 == -2) goto LAB_00103845;
        pcVar19 = G_buffer + *regs.start;
        match_length = *regs.end - *regs.start;
      }
LAB_00103460:
      pcStack112 = pcVar6;
      pcVar11 = (char *)file_pos;
      if (pcVar19 < pcVar6) {
        do {
          if (pcVar11 == (char *)0x0) {
            pcStack96 = (char *)0x10379c;
            output(pcVar6,local_58);
            return true;
          }
          local_58 = (char *)((long)local_58 - (long)pcVar6);
          if (read_size < local_58) {
            s = sentinel_length + 2 + read_size * 4;
            sVar10 = 1;
            if (sentinel_length != 0) {
              sVar10 = sentinel_length;
            }
            if (s < G_buffer_size) {
                    /* WARNING: Subroutine does not return */
              pcStack96 = (char *)0x103821;
              G_buffer_size = s;
              read_size = read_size * 2;
              xalloc_die();
            }
            pcStack96 = (char *)0x1034d2;
            G_buffer_size = s;
            read_size = read_size * 2;
            pvVar9 = xrealloc(pcVar6 + -sVar10,s);
            G_buffer = (char *)((long)pvVar9 + sVar10);
          }
          if (pcVar11 < read_size) {
            file_pos = 0;
            read_size = (size_t)pcVar11;
          }
          else {
            file_pos = (off_t)(pcVar11 + -read_size);
          }
          pcStack96 = (char *)0x1034fd;
          _Var12 = lseek(local_48,file_pos,0);
          if (_Var12 < 0) {
            pcStack96 = (char *)0x1036d1;
            uVar13 = quotearg_n_style_colon(0,3,local_40);
            pcStack96 = (char *)0x1036e7;
            uVar7 = dcgettext(0,"%s: seek failed",5);
            pcStack96 = (char *)0x1036ef;
            piVar14 = __errno_location();
            pcStack96 = (char *)0x103700;
            error(0,*piVar14,uVar7,uVar13);
          }
          pcVar19 = G_buffer;
          sVar10 = read_size;
          pcStack96 = (char *)0x103528;
          local_50 = (char *)memmove(G_buffer + read_size,G_buffer,(size_t)local_58);
          local_58 = pcVar19 + (long)local_58 + sVar10;
          if (sentinel_length == 0) {
            local_50 = local_58;
          }
          pcStack96 = (char *)0x103559;
          sVar10 = safe_read(local_48,pcVar19,sVar10);
          if (sVar10 != read_size) goto LAB_00103729;
          pcStack112 = G_buffer;
          pcVar19 = local_50;
          if (sentinel_length == 0) goto LAB_001033e9;
          pcVar19 = local_50 + -1;
          pcVar6 = G_buffer;
          pcVar11 = local_50;
          if (local_50[-1] == bVar1) goto LAB_0010359d;
LAB_00103593:
          do {
            do {
              pcVar11 = pcVar19;
              pcVar19 = pcVar11 + -1;
            } while (pcVar11[-1] != bVar1);
LAB_0010359d:
            if (sStack104 == 0) goto LAB_00103460;
            pcStack96 = (char *)0x1035b4;
            iVar4 = strncmp(pcVar11,pcVar21,sStack104);
          } while (iVar4 != 0);
          pcStack112 = pcVar6;
          pcVar11 = (char *)file_pos;
        } while (pcVar19 < pcVar6);
      }
      pcVar6 = local_58;
      if (separator_ends_record == false) {
        pcStack96 = (char *)0x1036ac;
        output(pcVar19,local_58);
        pcStack112 = G_buffer;
        local_58 = pcVar19;
      }
      else {
        pcVar11 = pcVar19 + match_length;
        local_41 = local_41 ^ 1 | local_58 != pcVar11;
        local_58 = pcVar11;
        if (local_41 != 0) {
          pcStack96 = (char *)0x103718;
          output(pcVar11,pcVar6);
          local_41 = 0;
          pcStack112 = G_buffer;
        }
      }
    } while (sentinel_length == 0);
    pcVar19 = pcVar19 + (1 - match_length);
  } while( true );
LAB_00103a68:
  do {
    puVar15 = (undefined *)ppuVar3;
    bVar22 = false;
    bVar23 = *(byte **)(puVar15 + 0x10) == (byte *)0x0;
    if (bVar23) break;
    lVar16 = 4;
    pbVar17 = &DAT_00116034;
    pbVar18 = *(byte **)(puVar15 + 0x10);
    do {
      if (lVar16 == 0) break;
      lVar16 = lVar16 + -1;
      bVar22 = *pbVar17 < *pbVar18;
      bVar23 = *pbVar17 == *pbVar18;
      pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
      pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
    } while (bVar23);
    ppuVar3 = (undefined **)(puVar15 + 0x10);
  } while ((!bVar22 && !bVar23) != bVar22);
  puVar20 = *(undefined1 **)(puVar15 + 0x18);
  if (puVar20 == (undefined1 *)0x0) {
    uVar13 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar13,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar21 = setlocale(5,(char *)0x0);
    if ((pcVar21 == (char *)0x0) || (iVar5 = strncmp(pcVar21,"en_",3), iVar5 == 0)) {
      uVar13 = dcgettext(0,"Full documentation <%s%s>\n",5);
      puVar20 = &DAT_00116034;
      __printf_chk(1,uVar13,"https://www.gnu.org/software/coreutils/",&DAT_00116034);
      pcVar21 = " invocation";
      goto LAB_00103b38;
    }
    puVar20 = &DAT_00116034;
LAB_00103bfa:
    pFVar2 = stdout;
    pcVar21 = (char *)dcgettext(0,
                                "Report any translation bugs to <https://translationproject.org/team/>\n"
                                ,5);
    fputs_unlocked(pcVar21,pFVar2);
  }
  else {
    uVar13 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar13,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar21 = setlocale(5,(char *)0x0);
    if ((pcVar21 != (char *)0x0) && (iVar5 = strncmp(pcVar21,"en_",3), iVar5 != 0))
    goto LAB_00103bfa;
  }
  uVar13 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar21 = " invocation";
  __printf_chk(1,uVar13,"https://www.gnu.org/software/coreutils/",&DAT_00116034);
  if (puVar20 != &DAT_00116034) {
    pcVar21 = "";
  }
LAB_00103b38:
  uVar13 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar13,puVar20,pcVar21);
LAB_001038ca:
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}

