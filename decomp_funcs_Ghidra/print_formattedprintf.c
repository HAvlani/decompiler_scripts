
/* WARNING: Could not reconcile some variable overlaps */

int print_formatted(char *format,int argc,char **argv)

{
  bool bVar1;
  FILE *pFVar2;
  undefined **ppuVar3;
  undefined2 uVar4;
  undefined6 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  intmax_t iVar11;
  void *pvVar12;
  int *piVar13;
  byte *pbVar14;
  size_t sVar15;
  size_t sVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined *puVar19;
  long lVar20;
  byte *pbVar21;
  char cVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte **ppbVar25;
  byte *pbVar26;
  byte **ppbVar27;
  ulong uVar28;
  char cVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  bool bVar32;
  bool bVar33;
  byte bVar34;
  unkbyte10 in_ST0;
  float10 fVar35;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  unkbyte10 Var36;
  undefined *puStack592;
  char *pcStack584;
  byte *apbStack576 [5];
  char *pcStack536;
  char *pcStack528;
  char *pcStack520;
  char *pcStack512;
  char *pcStack504;
  undefined8 uStack496;
  undefined8 uStack488;
  undefined8 uStack472;
  byte *pbStack456;
  byte **ppbStack448;
  char *pcStack440;
  ulong uStack432;
  byte **local_1a0;
  byte *local_198;
  int local_190;
  uint local_18c;
  undefined2 local_188;
  undefined6 uStack390;
  undefined2 uStack384;
  undefined6 uStack382;
  byte *local_178;
  byte *local_170;
  byte *local_168;
  uint local_160;
  char local_15a;
  char local_159;
  char *end;
  mbstate_t mbstate;
  char ok [256];
  long local_40;
  
  bVar34 = 0;
  local_190 = argc;
  local_1a0 = (byte **)argv;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar6 = *format;
  if (bVar6 != 0) {
    local_160 = 0;
    uVar31 = (ulong)(uint)argc;
    local_18c = 0;
LAB_001031c1:
    ppbVar27 = local_1a0;
    pFVar2 = stdout;
    if (bVar6 == 0x25) {
      bVar6 = ((byte *)format)[1];
      ppbVar25 = (byte **)(ulong)bVar6;
      pbVar14 = (byte *)format + 1;
      pbVar21 = (byte *)format + 2;
      if (bVar6 == 0x25) {
        pcVar10 = stdout->_IO_write_ptr;
        if (pcVar10 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar10 + 1;
          *pcVar10 = '%';
        }
        else {
          uStack432 = 0x10361d;
          __overflow(stdout,0x25);
        }
      }
      else {
        iVar7 = (int)uVar31;
        if (bVar6 == 0x62) {
          if (0 < iVar7) {
            pbVar23 = *local_1a0;
            bVar6 = *pbVar23;
            while (pbVar26 = pbVar23, bVar6 != 0) {
              while (bVar6 == 0x5c) {
                uStack432 = 0x10330f;
                iVar9 = print_esc((char *)pbVar26,true);
                bVar6 = pbVar26[(long)iVar9 + 1];
                pbVar26 = pbVar26 + (long)iVar9 + 1;
                if (bVar6 == 0) goto LAB_00103320;
              }
              pbVar23 = (byte *)stdout->_IO_write_ptr;
              if (pbVar23 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = (char *)(pbVar23 + 1);
                *pbVar23 = bVar6;
              }
              else {
                uStack432 = 0x103608;
                __overflow(stdout,(uint)bVar6);
              }
              pbVar23 = pbVar26 + 1;
              bVar6 = pbVar26[1];
            }
LAB_00103320:
            local_1a0 = local_1a0 + 1;
            uVar31 = (ulong)(iVar7 - 1);
          }
        }
        else {
          if (bVar6 != 0x71) {
            bVar33 = false;
            bVar32 = false;
            cVar22 = '\x01';
            puVar30 = (undefined8 *)ok;
            for (lVar20 = 0x20; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar30 = 0;
              puVar30 = puVar30 + (ulong)bVar34 * -2 + 1;
            }
            ok[88] = '\x01';
            cVar29 = '\x01';
            bVar6 = 1;
            ok[120] = '\x01';
            pbVar21 = (byte *)0x1;
            ok[117] = '\x01';
            ok[115] = '\x01';
            ok[111] = '\x01';
            ok[105] = '\x01';
            ok[69] = '\x01';
            ok[99] = '\x01';
            ok._100_4_ = 0x1010101;
            ok[65] = '\x01';
            ok[97] = '\x01';
            ok._70_2_ = 0x101;
            bVar1 = false;
            pbStack456 = pbVar14;
            do {
              switch((int)ppbVar25 - 0x20U & 0xff) {
              default:
                goto switchD_00103408_caseD_1;
              case 3:
                bVar1 = true;
                bVar6 = 0;
              case 0x10:
                pbStack456 = pbStack456 + 1;
                bVar33 = true;
                cVar29 = '\0';
                pbVar21 = pbVar21 + 1;
                ppbVar25 = (byte **)(ulong)*pbStack456;
                break;
              case 7:
              case 0x29:
                bVar33 = true;
                cVar29 = '\0';
                bVar32 = true;
                cVar22 = '\0';
              case 0:
              case 0xb:
              case 0xd:
                pbStack456 = pbStack456 + 1;
                pbVar21 = pbVar21 + 1;
                ppbVar25 = (byte **)(ulong)*pbStack456;
              }
            } while( true );
          }
          if (0 < iVar7) {
            uVar31 = (ulong)(iVar7 - 1);
            ppbVar27 = local_1a0 + 1;
            uStack432 = 0x103268;
            pcVar10 = quotearg_style(shell_escape_quoting_style,(char *)*local_1a0);
            uStack432 = 0x103273;
            fputs_unlocked(pcVar10,pFVar2);
            local_1a0 = ppbVar27;
          }
        }
      }
      goto LAB_001031b9;
    }
    if (bVar6 != 0x5c) {
      pbVar23 = (byte *)stdout->_IO_write_ptr;
      pbVar14 = (byte *)format;
      pbVar21 = (byte *)format + 1;
      if (pbVar23 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar23 + 1);
        *pbVar23 = bVar6;
      }
      else {
        uStack432 = 0x103346;
        __overflow(stdout,(uint)bVar6);
      }
      goto LAB_001031b9;
    }
    uStack432 = 0x1031d3;
    iVar7 = print_esc(format,false);
    bVar6 = ((byte *)format)[(long)iVar7 + 1];
    format = (char *)((byte *)format + (long)iVar7 + 1);
    goto joined_r0x001031bf;
  }
  iVar7 = 0;
LAB_001031ec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    uStack432 = 0x103c79;
    __stack_chk_fail();
  }
  return iVar7;
switchD_00103408_caseD_1:
  if (bVar32) {
    ok[88] = cVar22;
    ok[120] = cVar22;
  }
  if (bVar33) {
    ok[115] = cVar29;
  }
  if (bVar32) {
    ok[111] = cVar22;
    ok[69] = cVar22;
    ok._100_4_ = CONCAT22(0x101,CONCAT11(cVar22,1));
    if (bVar33) {
LAB_00103453:
      ok[99] = cVar29;
      if (!bVar32) goto LAB_0010346e;
    }
    ok[65] = cVar22;
    ok[97] = cVar22;
  }
  else if (bVar33) goto LAB_00103453;
LAB_0010346e:
  if (bVar1) {
    ok[117] = bVar6;
    ok[105] = bVar6;
    ok._100_4_ = ok._100_4_ & 0xffffff00 | (uint)bVar6;
  }
  pbVar23 = pbStack456 + 1;
  ok[65] = ok[97];
  ok[69] = ok[111];
  ok[88] = ok[120];
  ok[105] = ok[117];
  if ((char)ppbVar25 == '*') {
    pbVar21 = pbVar21 + 1;
    if (iVar7 < 1) {
      local_18c = 0;
      ppbVar25 = (byte **)(ulong)pbStack456[1];
      local_198 = pbStack456 + 2;
      local_15a = '\x01';
      pbStack456 = pbVar23;
LAB_001034c3:
      pbVar23 = pbVar21;
      pbVar14 = pbStack456;
      ppbVar27 = ppbVar25;
      if ((char)ppbVar25 != '.') goto LAB_001038cf;
LAB_001034cd:
      pbVar14 = local_198;
      bVar6 = pbStack456[1];
      ppbVar27 = (byte **)(ulong)bVar6;
      ok[99] = '\0';
      if (bVar6 == 0x2a) {
        pbVar14 = pbStack456 + 2;
        pbVar23 = pbVar21 + 2;
        if ((int)uVar31 < 1) {
          ppbVar27 = (byte **)(ulong)pbStack456[2];
          local_159 = '\x01';
          local_198 = pbStack456 + 3;
          local_160 = 0;
        }
        else {
          uStack432 = 0x103506;
          local_198 = pbVar23;
          iVar11 = vstrtoimax((char *)*local_1a0);
          pbVar23 = local_198;
          if (iVar11 < 0) {
            local_160 = 0xffffffff;
          }
          else {
            if (0x7fffffff < iVar11) goto LAB_00103cdf;
            local_160 = (uint)iVar11;
          }
          local_1a0 = local_1a0 + 1;
          ppbVar27 = (byte **)(ulong)pbStack456[2];
          uVar31 = (ulong)((int)uVar31 - 1);
          local_198 = pbStack456 + 3;
          local_159 = '\x01';
        }
      }
      else {
        pbVar23 = pbVar21 + 1;
        pbVar26 = local_198 + 1;
        if ((int)(char)bVar6 - 0x30U < 10) {
          do {
            pbVar24 = pbVar14;
            pbVar14 = pbVar26;
            pbVar23 = pbVar14 + 1 + (long)pbVar21 + -(long)local_198;
            ppbVar27 = (byte **)(ulong)(uint)(int)(char)*pbVar14;
            pbVar26 = pbVar14 + 1;
          } while ((int)(char)*pbVar14 - 0x30U < 10);
          local_159 = '\0';
          local_198 = pbVar24 + 2;
        }
        else {
          local_198 = local_198 + 1;
          local_159 = '\0';
        }
      }
      goto LAB_00103543;
    }
    local_188 = SUB82(pbVar21,0);
    uStack390 = (undefined6)((ulong)pbVar21 >> 0x10);
    uStack432 = 0x1038ec;
    iVar11 = vstrtoimax((char *)*local_1a0);
    if (iVar11 + 0x80000000U < 0x100000000) {
      local_18c = (uint)iVar11;
      pbVar21 = (byte *)CONCAT62(uStack390,local_188);
      local_1a0 = ppbVar27 + 1;
      uVar31 = (ulong)(iVar7 - 1);
      ppbVar25 = (byte **)(ulong)pbStack456[1];
      local_198 = pbStack456 + 2;
      local_15a = '\x01';
      pbStack456 = pbVar23;
      goto LAB_001034c3;
    }
LAB_00103ca8:
    uStack432 = 0x103cb5;
    pcVar10 = quote((char *)*local_1a0);
    uStack432 = 0x103ccb;
    uVar17 = dcgettext(0,"invalid field width: %s",5);
    uStack432 = 0x103cdf;
    error(1,0,uVar17,pcVar10);
LAB_00103cdf:
    uStack432 = 0x103cec;
    pcVar18 = quote((char *)*local_1a0);
    uStack432 = 0x103d02;
    uVar17 = dcgettext(0,"invalid precision: %s",5);
    iVar7 = 1;
    uStack432 = 0x103d16;
    error(1,0,uVar17,pcVar18);
    pcVar10 = program_name;
    uStack472 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    ppbStack448 = ppbVar27;
    pcStack440 = pcVar18;
    uStack432 = uVar31;
    if (iVar7 == 0) {
      uVar17 = dcgettext(0,"Usage: %s FORMAT [ARGUMENT]...\n  or:  %s OPTION\n",5);
      __printf_chk(1,uVar17,pcVar10,pcVar10);
      pFVar2 = stdout;
      pcVar10 = (char *)dcgettext(0,
                                  "Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:\n\n"
                                  ,5);
      fputs_unlocked(pcVar10,pFVar2);
      pFVar2 = stdout;
      pcVar10 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
      fputs_unlocked(pcVar10,pFVar2);
      pFVar2 = stdout;
      pcVar10 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
      fputs_unlocked(pcVar10,pFVar2);
      pFVar2 = stdout;
      pcVar10 = (char *)dcgettext(0,
                                  "\nFORMAT controls the output as in C printf.  Interpreted sequences are:\n\n  \\\"      double quote\n"
                                  ,5);
      fputs_unlocked(pcVar10,pFVar2);
      pFVar2 = stdout;
      pcVar10 = (char *)dcgettext(0,
                                  "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n"
                                  ,5);
      fputs_unlocked(pcVar10,pFVar2);
      pFVar2 = stdout;
      pcVar10 = (char *)dcgettext(0,
                                  "  \\NNN    byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n  \\uHHHH  Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)\n  \\UHHHHHHHH  Unicode character with hex value HHHHHHHH (8 digits)\n"
                                  ,5);
      fputs_unlocked(pcVar10,pFVar2);
      pFVar2 = stdout;
      pcVar10 = (char *)dcgettext(0,
                                  "  %%      a single %\n  %b      ARGUMENT as a string with \'\\\' escapes interpreted,\n          except that octal escapes are of the form \\0 or \\0NNN\n  %q      ARGUMENT is printed in a format that can be reused as shell input,\n          escaping non-printable characters with the proposed POSIX $\'\' syntax.\n\nand all C format specifications ending with one of diouxXfeEgGcs, with\nARGUMENTs converted to proper type first.  Variable widths are handled.\n"
                                  ,5);
      fputs_unlocked(pcVar10,pFVar2);
      uVar17 = dcgettext(0,
                         "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                         ,5);
      __printf_chk(1,uVar17,"printf");
      apbStack576[4] = (byte *)0x10a899;
      puStack592 = &DAT_0010a858;
      pcStack584 = "test invocation";
      apbStack576[0] = (byte *)0x10a8d2;
      apbStack576[1] = (byte *)0x10a86a;
      uStack496 = 0;
      uStack488 = 0;
      apbStack576[2] = (byte *)0x10a880;
      pcStack528 = "sha384sum";
      apbStack576[3] = (byte *)0x10a88a;
      pcStack536 = "sha2 utilities";
      pcStack520 = "sha2 utilities";
      pcStack512 = "sha512sum";
      pcStack504 = "sha2 utilities";
      ppuVar3 = &puStack592;
      goto LAB_00103f70;
    }
    uVar17 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar17,pcVar10);
    goto LAB_00103d7a;
  }
  pbVar14 = pbStack456;
  if (9 < (int)(char)ppbVar25 - 0x30U) {
    local_198 = pbVar23;
    local_15a = '\0';
    goto LAB_001034c3;
  }
  do {
    pbVar26 = pbVar14;
    bVar6 = pbVar26[1];
    pbVar14 = pbVar26 + 1;
    ppbVar27 = (byte **)(ulong)(uint)(int)(char)bVar6;
    pbVar23 = pbVar14 + (long)pbVar21 + -(long)pbStack456;
  } while ((int)(char)bVar6 - 0x30U < 10);
  local_15a = '\0';
  local_198 = pbVar26 + 2;
  pbVar21 = pbVar23;
  pbStack456 = pbVar14;
  if (bVar6 == 0x2e) goto LAB_001034cd;
LAB_001038cf:
  local_159 = '\0';
LAB_00103543:
  uVar8 = (int)ppbVar27 - 0x4c;
  if (((byte)uVar8 < 0x2f) && ((0x410150000001U >> ((ulong)uVar8 & 0x3f) & 1) != 0)) {
    do {
      pbVar21 = pbVar14;
      ppbVar27 = (byte **)(ulong)pbVar21[1];
      pbVar14 = pbVar21 + 1;
      uVar8 = pbVar21[1] - 0x4c;
      if (0x2e < (byte)uVar8) break;
    } while ((0x410150000001U >> ((ulong)uVar8 & 0x3f) & 1) != 0);
    local_198 = pbVar21 + 2;
  }
  if (ok[(ulong)ppbVar27 & 0xff] == '\0') {
    uStack432 = 0x103c8c;
    uVar17 = dcgettext(0,"%.*s: invalid conversion specification",5);
    uStack432 = 0x103ca8;
    error(1,0,uVar17,(long)local_198 - (long)format,format);
    pbStack456 = pbVar14;
    goto LAB_00103ca8;
  }
  local_170 = (byte *)0x10b492;
  if (0 < (int)uVar31) {
    uVar31 = (ulong)((int)uVar31 - 1);
    local_170 = *local_1a0;
    local_1a0 = local_1a0 + 1;
  }
  switch((int)ppbVar27 - 0x41U & 0xff) {
  case 0:
  case 4:
  case 5:
  case 6:
  case 0x20:
  case 0x24:
  case 0x25:
  case 0x26:
    local_178 = (byte *)0x1;
    local_168 = &DAT_0010a821;
    break;
  default:
    local_178 = (byte *)0x0;
    local_168 = (byte *)format;
    break;
  case 0x17:
  case 0x23:
  case 0x28:
  case 0x2e:
  case 0x34:
  case 0x37:
    local_178 = (byte *)0x1;
    local_168 = &DAT_0010a81e;
  }
  local_188 = SUB82(pbVar23,0);
  uStack390 = (undefined6)((ulong)pbVar23 >> 0x10);
  uStack432 = 0x103653;
  pcVar10 = (char *)xmalloc((size_t)(pbVar23 + 2 + (long)local_178));
  uStack432 = 0x103666;
  pvVar12 = mempcpy(pcVar10,format,CONCAT62(uStack390,local_188));
  uVar5 = uStack390;
  uVar4 = local_188;
  if ((uint)local_178 != 0) {
    uVar8 = 0;
    do {
      uVar28 = (ulong)uVar8;
      uVar8 = uVar8 + 1;
      *(byte *)((long)pvVar12 + uVar28) = local_168[uVar28];
    } while (uVar8 < (uint)local_178);
  }
  *(byte *)((long)pvVar12 + (long)local_178) = (byte)ppbVar27;
  ((byte *)((long)pvVar12 + (long)local_178))[1] = 0;
  local_188 = SUB82(local_170,0);
  uStack390 = (undefined6)((ulong)local_170 >> 0x10);
  switch((int)ppbVar27 - 0x41U & 0xff) {
  case 0:
  case 4:
  case 5:
  case 6:
  case 0x20:
  case 0x24:
  case 0x25:
  case 0x26:
    if (((*local_170 == 0x22) || (*local_170 == 0x27)) && (local_170[1] != 0)) {
      fVar35 = (float10)(ushort)local_170[1];
      pbVar21 = local_170 + 1;
      local_178 = local_170;
      local_188 = SUB102(fVar35,0);
      uStack390 = (undefined6)((unkuint10)fVar35 >> 0x10);
      uStack384 = (undefined2)((unkuint10)fVar35 >> 0x40);
      uStack432 = 0x103b06;
      Var36 = in_ST6;
      sVar15 = __ctype_get_mb_cur_max();
      if (sVar15 < 2) {
        bVar6 = local_178[2];
      }
      else {
        if (local_178[2] == 0) goto LAB_001037c2;
        mbstate = (mbstate_t)0x0;
        uStack432 = 0x103b36;
        sVar15 = strlen((char *)pbVar21);
        uStack432 = 0x103b4b;
        sVar16 = rpl_mbrtowc((wchar_t *)&end,(char *)pbVar21,sVar15,&mbstate);
        if (0 < (long)sVar16) {
          fVar35 = (float10)(int)end;
          pbVar21 = local_178 + sVar16;
          local_188 = SUB102(fVar35,0);
          uStack390 = (undefined6)((unkuint10)fVar35 >> 0x10);
          uStack384 = (undefined2)((unkuint10)fVar35 >> 0x40);
          Var36 = in_ST6;
        }
        bVar6 = pbVar21[1];
      }
      if ((bVar6 != 0) && (posixly_correct == false)) {
        uStack432 = 0x103b8d;
        uVar17 = dcgettext(0,
                           "warning: %s: character(s) following character constant have been ignored"
                           ,5);
        uStack432 = 0x103b9f;
        error(0,0,uVar17,pbVar21 + 1);
      }
    }
    else {
      uStack432 = 0x10378f;
      piVar13 = __errno_location();
      local_178 = (byte *)CONCAT62(uStack390,local_188);
      *piVar13 = 0;
      uStack432 = 0x1037ac;
      cl_strtold((char *)local_178,&end);
      local_188 = (undefined2)in_ST0;
      uStack390 = (undefined6)((unkuint10)in_ST0 >> 0x10);
      uStack384 = (undefined2)((unkuint10)in_ST0 >> 0x40);
      uStack432 = 0x1037c2;
      Var36 = in_ST7;
      verify_numeric((char *)local_178,(char *)CONCAT44(end._4_4_,(int)end));
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
    }
LAB_001037c2:
    if (local_15a == '\0') {
      if (local_159 == '\0') {
        uStack432 = CONCAT62(uStack382,uStack384);
        pcStack440 = (char *)CONCAT62(uStack390,local_188);
        ppbStack448 = (byte **)0x1037ea;
        xprintf(pcVar10);
        in_ST7 = Var36;
        uVar4 = local_188;
        uVar5 = uStack390;
      }
      else {
        uStack432 = CONCAT62(uStack382,uStack384);
        pcStack440 = (char *)CONCAT62(uStack390,local_188);
        ppbStack448 = (byte **)0x103abb;
        xprintf(pcVar10);
        in_ST7 = Var36;
        uVar4 = local_188;
        uVar5 = uStack390;
      }
    }
    else if (local_159 == '\0') {
      uStack432 = CONCAT62(uStack382,uStack384);
      pcStack440 = (char *)CONCAT62(uStack390,local_188);
      ppbStack448 = (byte **)0x1039f7;
      xprintf(pcVar10,(ulong)local_18c);
      in_ST7 = Var36;
      uVar4 = local_188;
      uVar5 = uStack390;
    }
    else {
      uStack432 = CONCAT62(uStack382,uStack384);
      pcStack440 = (char *)CONCAT62(uStack390,local_188);
      ppbStack448 = (byte **)0x103add;
      xprintf(pcVar10,(ulong)local_18c,(ulong)local_160);
      in_ST7 = Var36;
      uVar4 = local_188;
      uVar5 = uStack390;
    }
    break;
  case 0x17:
  case 0x2e:
  case 0x34:
  case 0x37:
    if (((*local_170 == 0x22) || (*local_170 == 0x27)) && (local_170[1] != 0)) {
      pbVar23 = local_170 + 1;
      pbVar21 = (byte *)(ulong)local_170[1];
      uStack432 = 0x103bb6;
      sVar15 = __ctype_get_mb_cur_max();
      if (sVar15 < 2) {
        bVar6 = *(byte *)(CONCAT62(uStack390,local_188) + 2);
      }
      else {
        if (*(char *)(CONCAT62(uStack390,local_188) + 2) == '\0') goto LAB_00103710;
        mbstate = (mbstate_t)0x0;
        uStack432 = 0x103be6;
        sVar15 = strlen((char *)pbVar23);
        uStack432 = 0x103bfb;
        sVar16 = rpl_mbrtowc((wchar_t *)&end,(char *)pbVar23,sVar15,&mbstate);
        if (0 < (long)sVar16) {
          pbVar21 = (byte *)(long)(int)end;
          pbVar23 = (byte *)(CONCAT62(uStack390,local_188) + sVar16);
        }
        bVar6 = pbVar23[1];
      }
      if ((bVar6 != 0) && (posixly_correct == false)) {
        uStack432 = 0x103c3a;
        uVar17 = dcgettext(0,
                           "warning: %s: character(s) following character constant have been ignored"
                           ,5);
        uStack432 = 0x103c4c;
        error(0,0,uVar17,pbVar23 + 1);
      }
    }
    else {
      uStack432 = 0x1036df;
      piVar13 = __errno_location();
      *piVar13 = 0;
      uStack432 = 0x1036fb;
      pbVar21 = (byte *)__strtoul_internal(CONCAT62(uStack390,local_188),&end,0,0);
      uStack432 = 0x103710;
      verify_numeric((char *)CONCAT62(uStack390,local_188),(char *)CONCAT44(end._4_4_,(int)end));
    }
LAB_00103710:
    if (local_15a == '\0') {
      if (local_159 == '\0') {
        uStack432 = 0x103733;
        xprintf(pcVar10);
        uVar4 = local_188;
        uVar5 = uStack390;
        break;
      }
LAB_00103a22:
      uStack432 = 0x103a30;
      xprintf(pcVar10,(ulong)local_160,pbVar21);
      uVar4 = local_188;
      uVar5 = uStack390;
      break;
    }
    if (local_159 == '\0') {
      uStack432 = 0x103a1a;
      xprintf(pcVar10,(ulong)local_18c,pbVar21);
      uVar4 = local_188;
      uVar5 = uStack390;
      break;
    }
    goto LAB_00103a5c;
  case 0x22:
    if (local_15a == '\0') {
      uStack432 = 0x103841;
      local_188 = uVar4;
      uStack390 = uVar5;
      xprintf(pcVar10);
      uVar4 = local_188;
      uVar5 = uStack390;
    }
    else {
      uStack432 = 0x1039d1;
      local_188 = uVar4;
      uStack390 = uVar5;
      xprintf(pcVar10);
      uVar4 = local_188;
      uVar5 = uStack390;
    }
    break;
  case 0x23:
  case 0x28:
    uStack432 = 0x1037fb;
    local_188 = uVar4;
    uStack390 = uVar5;
    pbVar21 = (byte *)vstrtoimax((char *)local_170);
    if (local_15a == '\0') {
      if (local_159 == '\0') {
        uStack432 = 0x103821;
        xprintf(pcVar10,pbVar21,pbVar21);
        uVar4 = local_188;
        uVar5 = uStack390;
        break;
      }
      goto LAB_00103a22;
    }
    goto joined_r0x00103a3a;
  case 0x32:
    local_188 = uVar4;
    uStack390 = uVar5;
    pbVar21 = local_170;
    if (local_15a == '\0') {
      if (local_159 == '\0') {
        uStack432 = 0x103869;
        xprintf(pcVar10);
        uVar4 = local_188;
        uVar5 = uStack390;
      }
      else {
        uStack432 = 0x103a84;
        xprintf(pcVar10,(ulong)local_160,local_170);
        uVar4 = local_188;
        uVar5 = uStack390;
      }
      break;
    }
joined_r0x00103a3a:
    if (local_159 == '\0') {
      uStack432 = 0x103a4d;
      xprintf(pcVar10,(ulong)local_18c,pbVar21);
      uVar4 = local_188;
      uVar5 = uStack390;
    }
    else {
LAB_00103a5c:
      uStack432 = 0x103a6e;
      xprintf(pcVar10,(ulong)local_18c,(ulong)local_160,pbVar21);
      uVar4 = local_188;
      uVar5 = uStack390;
    }
  }
  uStack390 = uVar5;
  local_188 = uVar4;
  uStack432 = 0x103740;
  rpl_free(pcVar10);
  pbVar21 = local_198;
LAB_001031b9:
  bVar6 = pbVar14[1];
  format = (char *)pbVar21;
joined_r0x001031bf:
  if (bVar6 == 0) goto LAB_001031e5;
  goto LAB_001031c1;
LAB_001031e5:
  iVar7 = local_190 - (int)uVar31;
  goto LAB_001031ec;
LAB_00103f70:
  do {
    puVar19 = (undefined *)ppuVar3;
    bVar32 = false;
    bVar33 = *(byte **)(puVar19 + 0x10) == (byte *)0x0;
    if (bVar33) break;
    lVar20 = 7;
    pbVar14 = (byte *)"printf";
    pbVar21 = *(byte **)(puVar19 + 0x10);
    do {
      if (lVar20 == 0) break;
      lVar20 = lVar20 + -1;
      bVar32 = *pbVar14 < *pbVar21;
      bVar33 = *pbVar14 == *pbVar21;
      pbVar14 = pbVar14 + (ulong)bVar34 * -2 + 1;
      pbVar21 = pbVar21 + (ulong)bVar34 * -2 + 1;
    } while (bVar33);
    ppuVar3 = (undefined **)(puVar19 + 0x10);
  } while ((!bVar32 && !bVar33) != bVar32);
  pcVar10 = *(char **)(puVar19 + 0x18);
  if (pcVar10 == (char *)0x0) {
    uVar17 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar17,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar10 = setlocale(5,(char *)0x0);
    if ((pcVar10 == (char *)0x0) || (iVar9 = strncmp(pcVar10,"en_",3), iVar9 == 0)) {
      uVar17 = dcgettext(0,"Full documentation <%s%s>\n",5);
      pcVar10 = "printf";
      __printf_chk(1,uVar17,"https://www.gnu.org/software/coreutils/","printf");
      pcVar18 = " invocation";
      goto LAB_00104040;
    }
    pcVar10 = "printf";
LAB_00104102:
    pFVar2 = stdout;
    pcVar18 = (char *)dcgettext(0,
                                "Report any translation bugs to <https://translationproject.org/team/>\n"
                                ,5);
    fputs_unlocked(pcVar18,pFVar2);
  }
  else {
    uVar17 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar17,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar18 = setlocale(5,(char *)0x0);
    if ((pcVar18 != (char *)0x0) && (iVar9 = strncmp(pcVar18,"en_",3), iVar9 != 0))
    goto LAB_00104102;
  }
  uVar17 = dcgettext(0,"Full documentation <%s%s>\n",5);
  pcVar18 = " invocation";
  __printf_chk(1,uVar17,"https://www.gnu.org/software/coreutils/","printf");
  if (pcVar10 != "printf") {
    pcVar18 = "";
  }
LAB_00104040:
  uVar17 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar17,pcVar10,pcVar18);
LAB_00103d7a:
                    /* WARNING: Subroutine does not return */
  exit(iVar7);
}

