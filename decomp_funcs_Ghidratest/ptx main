
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  size_t s;
  undefined4 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  ushort *puVar4;
  char *pcVar5;
  char **ppcVar6;
  bool bVar7;
  ptrdiff_t pVar8;
  _Bool _Var9;
  char cVar10;
  byte bVar11;
  int iVar12;
  strtol_error sVar13;
  int iVar14;
  ptrdiff_t pVar15;
  char *pcVar16;
  long lVar17;
  __int32_t **pp_Var18;
  ushort **ppuVar19;
  regoff_t rVar20;
  ushort **ppuVar21;
  ushort **ppuVar22;
  ushort **ppuVar23;
  FILE *pFVar24;
  ushort **ppuVar25;
  char *pcVar26;
  char *pcVar27;
  undefined8 uVar28;
  int *piVar29;
  uchar *puVar30;
  ushort **ppuVar31;
  ulong uVar32;
  ulong uVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint uVar36;
  byte *pbVar37;
  long lVar38;
  intmax_t iVar39;
  byte *pbVar40;
  OCCURS *pOVar41;
  undefined8 *puVar42;
  FILE *pFVar43;
  intmax_t iVar44;
  ushort **ppuVar45;
  byte *pbVar46;
  byte *pbVar47;
  byte *pbVar48;
  char *unaff_R15;
  long in_FS_OFFSET;
  byte bVar49;
  undefined auVar50 [16];
  ushort **in_stack_ffffffffffffff28;
  char in_stack_ffffffffffffff30;
  undefined7 in_stack_ffffffffffffff31;
  BLOCK *local_c8;
  long local_c0;
  long local_78;
  intmax_t tmp;
  undefined8 uStack96;
  char ordinal_string [21];
  
  bVar49 = 0;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  pVar15 = gap_size;
  pVar8 = line_width;
switchD_00103bf3_caseD_74:
  line_width = pVar8;
  gap_size = pVar15;
  iVar12 = getopt_long(argc,argv,"AF:GM:ORS:TW:b:i:fg:o:trw:",long_options);
  if (iVar12 == -1) {
    if (optind == argc) {
      input_file_name = (char **)xmalloc(8);
      file_line_count = (intmax_t *)xmalloc(8);
      text_buffers = (BLOCK *)xmalloc(0x10);
      number_input_files = 1;
      *input_file_name = (char *)0x0;
      goto LAB_00103fa6;
    }
    if (gnu_extensions != false) {
      number_input_files = argc - optind;
      input_file_name = (char **)xnmalloc((long)number_input_files,8);
      file_line_count = (intmax_t *)xnmalloc((long)number_input_files,8);
      text_buffers = (BLOCK *)xnmalloc((long)number_input_files,0x10);
      ppcVar6 = input_file_name;
      if (0 < number_input_files) {
        lVar17 = (long)optind;
        uVar36 = number_input_files - 1;
        lVar38 = (long)(optind + 1);
        do {
          pcVar16 = argv[lVar38 + -1];
          if ((*pcVar16 == '\0') || (iVar12 = strcmp(pcVar16,"-"), iVar12 == 0)) {
            ppcVar6[(lVar38 + -1) - lVar17] = (char *)0x0;
          }
          else {
            ppcVar6[(lVar38 + -1) - lVar17] = pcVar16;
          }
          optind = (int)lVar38;
          lVar38 = lVar38 + 1;
        } while (lVar17 + 2 + (ulong)uVar36 != lVar38);
      }
      goto LAB_00103fa6;
    }
    number_input_files = 1;
    input_file_name = (char **)xmalloc(8);
    file_line_count = (intmax_t *)xmalloc(8);
    text_buffers = (BLOCK *)xmalloc(0x10);
    iVar12 = optind;
    lVar17 = (long)optind;
    pcVar16 = argv[lVar17];
    if ((*pcVar16 == '\0') || (iVar14 = strcmp(pcVar16,"-"), iVar14 == 0)) {
      *input_file_name = (char *)0x0;
    }
    else {
      *input_file_name = pcVar16;
    }
    optind = iVar12 + 1;
    if (argc <= optind) goto LAB_00103fa6;
    pFVar24 = freopen_safer(argv[lVar17 + 1],"w",(FILE *)stdout);
    if (pFVar24 == (FILE *)0x0) {
      uVar28 = quotearg_n_style_colon(0,3,argv[optind]);
      piVar29 = __errno_location();
      error(1,*piVar29,&DAT_0011dd94,uVar28);
      goto LAB_0010602c;
    }
    optind = optind + 1;
    if (argc <= optind) goto LAB_00103fa6;
    pcVar16 = quote(argv[optind]);
    uVar28 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar28,pcVar16);
  }
  else if (iVar12 < 0x78) {
    if (9 < iVar12) goto code_r0x00103bec;
    if (iVar12 == -0x83) {
      pcVar16 = proper_name_utf8("F. Pinard",&DAT_0011dc0e);
      version_etc((FILE *)stdout,"ptx","GNU coreutils",Version,pcVar16,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar12 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
  }
  goto switchD_00103bf3_caseD_b;
LAB_00103fa6:
  if (output_format == UNKNOWN_FORMAT) {
    output_format = ~-(uint)(gnu_extensions == false) + ROFF_FORMAT;
  }
  if (ignore_case != false) {
    pp_Var18 = __ctype_toupper_loc();
    lVar17 = 0;
    puVar30 = folded_chars;
    do {
      puVar1 = (undefined4 *)((long)*pp_Var18 + lVar17);
      lVar17 = lVar17 + 4;
      *puVar30 = (uchar)*puVar1;
      puVar30 = puVar30 + 1;
    } while (lVar17 != 0x400);
  }
  if (context_regex.string == (char *)0x0) {
    if ((gnu_extensions == false) || (input_reference != false)) {
      context_regex.string = "\n";
    }
    else {
      context_regex.string = "[.?!][]\"\')}]*\\($\\|\t\\|  \\)[ \t\n]*";
    }
  }
  else if (*context_regex.string == '\0') {
    context_regex.string = (char *)0x0;
    goto LAB_0010401f;
  }
  compile_regex(&context_regex);
LAB_0010401f:
  if (word_regex.string == (char *)0x0) goto LAB_00104a72;
  compile_regex(&word_regex);
  if (break_file != (char *)0x0) goto LAB_00104a82;
  goto LAB_00104049;
code_r0x00103bec:
  pVar15 = gap_size;
  pVar8 = line_width;
  switch(iVar12) {
  case 10:
    pVar15 = __xargmatch_internal("--format",optarg,format_args,format_vals,4,argmatch_die,true);
    output_format = format_vals[pVar15];
    pVar15 = gap_size;
    pVar8 = line_width;
    goto switchD_00103bf3_caseD_74;
  default:
    goto switchD_00103bf3_caseD_b;
  case 0x41:
    auto_reference = true;
    goto switchD_00103bf3_caseD_74;
  case 0x46:
    truncation_string = optarg;
    unescape_string(optarg);
    pVar15 = gap_size;
    pVar8 = line_width;
    goto switchD_00103bf3_caseD_74;
  case 0x47:
    gnu_extensions = false;
    goto switchD_00103bf3_caseD_74;
  case 0x4d:
    macro_name = optarg;
    goto switchD_00103bf3_caseD_74;
  case 0x4f:
    output_format = ROFF_FORMAT;
    goto switchD_00103bf3_caseD_74;
  case 0x52:
    right_reference = true;
    goto switchD_00103bf3_caseD_74;
  case 0x53:
    context_regex.string = optarg;
    unescape_string(optarg);
    pVar15 = gap_size;
    pVar8 = line_width;
    goto switchD_00103bf3_caseD_74;
  case 0x54:
    output_format = TEX_FORMAT;
    goto switchD_00103bf3_caseD_74;
  case 0x57:
    word_regex.string = optarg;
    unescape_string(optarg);
    pVar15 = gap_size;
    pVar8 = line_width;
    if (*word_regex.string == '\0') {
      word_regex.string = (char *)0x0;
    }
    goto switchD_00103bf3_caseD_74;
  case 0x62:
    break_file = optarg;
    goto switchD_00103bf3_caseD_74;
  case 0x66:
    ignore_case = true;
    goto switchD_00103bf3_caseD_74;
  case 0x67:
    sVar13 = xstrtoimax(optarg,(char **)0x0,0,&tmp,"");
    if ((sVar13 == LONGINT_OK) && (pVar15 = tmp, pVar8 = line_width, 0 < tmp))
    goto switchD_00103bf3_caseD_74;
LAB_0010602c:
    pcVar16 = quote(optarg);
    uVar28 = dcgettext(0,"invalid gap width: %s",5);
    error(1,0,uVar28,pcVar16);
    break;
  case 0x69:
    ignore_file = optarg;
    goto switchD_00103bf3_caseD_74;
  case 0x6f:
    only_file = optarg;
    goto switchD_00103bf3_caseD_74;
  case 0x72:
    input_reference = true;
  case 0x74:
    goto switchD_00103bf3_caseD_74;
  case 0x77:
    sVar13 = xstrtoimax(optarg,(char **)0x0,0,&tmp,"");
    if ((sVar13 == LONGINT_OK) && (pVar15 = gap_size, pVar8 = tmp, 0 < tmp))
    goto switchD_00103bf3_caseD_74;
  }
  pcVar16 = quote(optarg);
  uVar28 = dcgettext(0,"invalid line width: %s",5);
  auVar50 = error(1,0,uVar28);
LAB_00106098:
  lVar17 = 0;
LAB_00105cc3:
  lVar38 = 0;
  if (head_truncation != false) {
    lVar38 = truncation_string_length;
  }
  print_spaces(((SUB168(auVar50,0) - lVar17) - (SUB168(auVar50 >> 0x40,0) - (long)pcVar16)) - lVar38
              );
  if (head_truncation != false) {
    fputs_unlocked(truncation_string,stdout);
  }
  print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                              CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
LAB_00105d06:
  if (auto_reference != false) goto LAB_00105501;
LAB_001054f8:
  if (input_reference != false) {
LAB_00105501:
    if (right_reference != false) {
      print_spaces(gap_size);
      print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                  CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
    }
  }
LAB_00105529:
  pcVar16 = stdout->_IO_write_ptr;
  if (pcVar16 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar16 + 1;
    *pcVar16 = '\n';
  }
  else {
    __overflow(stdout,10);
  }
LAB_00105549:
  local_c8 = (BLOCK *)((long)&local_c8->start + 1);
  lVar17 = CONCAT71(in_stack_ffffffffffffff31,in_stack_ffffffffffffff30) + 0x30;
  in_stack_ffffffffffffff30 = (char)lVar17;
  in_stack_ffffffffffffff31 = (undefined7)((ulong)lVar17 >> 8);
  if (number_of_occurs <= (long)local_c8) {
LAB_00105567:
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00104990:
  ppcVar6 = (char **)CONCAT71(in_stack_ffffffffffffff31,in_stack_ffffffffffffff30);
  pcVar26 = *ppcVar6;
  pcVar27 = ppcVar6[2];
  pbVar47 = (byte *)(ppcVar6[1] + (long)pcVar26);
  pcVar16 = pcVar26 + (long)pcVar27;
  pbVar46 = (byte *)(ppcVar6[3] + (long)pcVar26);
  pcVar5 = text_buffers[*(int *)(ppcVar6 + 5)].start;
  pbVar37 = (byte *)text_buffers[*(int *)(ppcVar6 + 5)].end;
  lVar17 = keyafter_max_width;
  keyafter.start = pcVar26;
  keyafter.end = (char *)pbVar47;
  if (pbVar47 < pbVar46) {
    do {
      if (pcVar26 + lVar17 < pbVar47) break;
      keyafter.end = (char *)pbVar47;
      if (word_regex.string == (char *)0x0) {
        if (*(byte *)((long)unaff_R15 + (ulong)*pbVar47) == 0) {
          pbVar47 = pbVar47 + 1;
        }
        else {
          if (pbVar46 <= pbVar47) break;
          do {
            pbVar47 = pbVar47 + 1;
            if (pbVar46 == pbVar47) {
              pcVar27 = *(char **)(CONCAT71(in_stack_ffffffffffffff31,in_stack_ffffffffffffff30) +
                                  0x10);
              pbVar47 = pbVar46;
              goto LAB_00104d7c;
            }
          } while (*(byte *)((long)unaff_R15 + (ulong)*pbVar47) != 0);
        }
      }
      else {
        lVar17 = rpl_re_match(&word_regex.pattern,(char *)pbVar47,(long)pbVar46 - (long)pbVar47,0,
                              (re_registers *)0x0);
        if (lVar17 == -2) goto LAB_00104a6d;
        if (lVar17 == -1) {
          lVar17 = 1;
        }
        pbVar47 = pbVar47 + lVar17;
        lVar17 = keyafter_max_width;
        pcVar26 = keyafter.start;
      }
    } while (pbVar47 < pbVar46);
    pcVar27 = *(char **)(CONCAT71(in_stack_ffffffffffffff31,in_stack_ffffffffffffff30) + 0x10);
  }
LAB_00104d7c:
  if (pbVar47 <= keyafter.start + lVar17) {
    keyafter.end = (char *)pbVar47;
  }
  keyafter_truncation = truncation_string != (char *)0x0 && keyafter.end < pbVar46;
  if (keyafter.start < keyafter.end) {
    bVar7 = false;
    pcVar26 = keyafter.end;
    do {
      if ((*(byte *)((long)*in_stack_ffffffffffffff28 + (ulong)(byte)pcVar26[-1] * 2 + 1) & 0x20) ==
          0) {
        if (bVar7) {
          keyafter.end = pcVar26;
        }
        goto LAB_00104df9;
      }
      pcVar26 = pcVar26 + -1;
      bVar7 = true;
    } while (keyafter.start != pcVar26);
    keyafter.end = keyafter.start;
  }
LAB_00104df9:
  lVar17 = maximum_word_length + half_line_width;
  if ((char *)-lVar17 == pcVar27 || -(long)pcVar27 < lVar17) {
    pbVar47 = (byte *)(keyafter.start + (long)pcVar27);
LAB_00104e56:
    before.end = keyafter.start;
    pbVar35 = (byte *)before.end;
    if (pbVar47 < keyafter.start) {
      bVar7 = false;
      pbVar48 = (byte *)keyafter.start;
      do {
        if ((*(byte *)((long)*in_stack_ffffffffffffff28 + (ulong)pbVar48[-1] * 2 + 1) & 0x20) == 0)
        {
          pbVar35 = (byte *)before.end;
          if (bVar7) {
            pbVar35 = pbVar48;
          }
          break;
        }
        pbVar48 = pbVar48 + -1;
        bVar7 = true;
        pbVar35 = pbVar47;
      } while (pbVar47 != pbVar48);
    }
    before.end = (char *)pbVar35;
    pbVar35 = (byte *)before.end;
    lVar17 = before_max_width;
    before.start = (char *)pbVar47;
    if (pbVar47 + before_max_width < before.end) {
LAB_00104f18:
      do {
        if (word_regex.string == (char *)0x0) {
          if (*(byte *)((long)unaff_R15 + (ulong)(byte)*before.start) == 0) {
            before.start = before.start + 1;
            if (pbVar35 <= before.start + lVar17) break;
            goto LAB_00104f18;
          }
          bVar7 = false;
          pbVar34 = (byte *)before.start;
          pbVar48 = (byte *)before.start;
          if (before.start < pbVar35) {
            do {
              if (*(byte *)((long)unaff_R15 + (ulong)*pbVar34) == 0) {
                pbVar48 = (byte *)before.start;
                if (bVar7) {
                  pbVar48 = pbVar34;
                }
                break;
              }
              pbVar34 = pbVar34 + 1;
              bVar7 = true;
              pbVar48 = pbVar35;
            } while (pbVar34 != pbVar35);
          }
        }
        else {
          lVar38 = rpl_re_match(&word_regex.pattern,before.start,(long)pbVar35 - (long)before.start,
                                0,(re_registers *)0x0);
          if (lVar38 == -2) goto LAB_00104a6d;
          if (lVar38 == -1) {
            lVar38 = 1;
          }
          pbVar35 = (byte *)before.end;
          lVar17 = before_max_width;
          pbVar48 = (byte *)(before.start + lVar38);
        }
        before.start = (char *)pbVar48;
      } while (before.start + lVar17 < pbVar35);
    }
    if (truncation_string == (char *)0x0) {
      before_truncation = false;
    }
    else {
      pcVar26 = before.start;
      if (pcVar5 < before.start) {
        pcVar27 = before.start;
        do {
          pcVar26 = pcVar27;
          if ((*(byte *)((long)*in_stack_ffffffffffffff28 + (ulong)(byte)pcVar27[-1] * 2 + 1) & 0x20
              ) == 0) break;
          pcVar27 = pcVar27 + -1;
          pcVar26 = pcVar5;
        } while (pcVar5 != pcVar27);
      }
      before_truncation = pcVar16 < pcVar26;
    }
    pbVar48 = (byte *)before.start;
    pbVar34 = (byte *)before.start;
    if (before.start < pbVar37) {
      bVar7 = false;
      pbVar40 = (byte *)before.start;
      do {
        if ((*(byte *)((long)*in_stack_ffffffffffffff28 + (ulong)*pbVar40 * 2 + 1) & 0x20) == 0) {
          pbVar48 = pbVar40;
          pbVar34 = (byte *)before.start;
          if (bVar7) {
            pbVar34 = pbVar40;
          }
          break;
        }
        pbVar40 = pbVar40 + 1;
        bVar7 = true;
        pbVar48 = pbVar37;
        pbVar34 = pbVar37;
      } while (pbVar37 != pbVar40);
    }
    before.start = (char *)pbVar34;
    lVar17 = (lVar17 - ((long)pbVar35 - (long)pbVar48)) - gap_size;
    if (0 < lVar17) {
      pbVar48 = (byte *)keyafter.end;
      tail.end = keyafter.end;
      pbVar35 = (byte *)keyafter.end;
      tail.start = keyafter.end;
      if (keyafter.end < pbVar37) {
        bVar7 = false;
        do {
          if ((*(byte *)((long)*in_stack_ffffffffffffff28 + (ulong)*pbVar48 * 2 + 1) & 0x20) == 0) {
            tail.end = (char *)pbVar48;
            tail.start = keyafter.end;
            if (!bVar7) goto joined_r0x00105048;
            break;
          }
          pbVar48 = pbVar48 + 1;
          bVar7 = true;
        } while (pbVar37 != pbVar48);
        tail.end = (char *)pbVar48;
        pbVar35 = pbVar48;
        tail.start = (char *)pbVar48;
      }
joined_r0x00105048:
      do {
        pbVar37 = pbVar48;
        if ((pbVar46 <= pbVar37) || (pbVar35 + lVar17 <= pbVar37)) goto LAB_0010515d;
        tail.end = (char *)pbVar37;
        if (word_regex.string == (char *)0x0) {
          if (*(byte *)((long)unaff_R15 + (ulong)*pbVar37) == 0) {
            pbVar48 = pbVar37 + 1;
          }
          else {
            pbVar48 = pbVar37;
            if (pbVar46 <= pbVar37) goto LAB_0010515d;
            do {
              pbVar48 = pbVar48 + 1;
              pbVar37 = pbVar46;
              if (pbVar46 == pbVar48) goto LAB_0010515d;
            } while (*(byte *)((long)unaff_R15 + (ulong)*pbVar48) != 0);
          }
        }
        else {
          lVar38 = rpl_re_match(&word_regex.pattern,(char *)pbVar37,(long)pbVar46 - (long)pbVar37,0,
                                (re_registers *)0x0);
          if (lVar38 == -2) goto LAB_00104a6d;
          if (lVar38 == -1) {
            lVar38 = 1;
          }
          pbVar48 = pbVar37 + lVar38;
          pbVar35 = (byte *)tail.start;
        }
      } while( true );
    }
    tail_truncation = false;
    tail.start = (char *)0x0;
    tail.end = (char *)0x0;
    pbVar37 = (byte *)tail.end;
    goto LAB_0010518a;
  }
  pbVar47 = (byte *)(keyafter.start + -lVar17);
  if (word_regex.string == (char *)0x0) {
    if (*(byte *)((long)unaff_R15 + (ulong)*pbVar47) == 0) {
      pbVar47 = pbVar47 + 1;
    }
    else if (pbVar47 < keyafter.start) {
      do {
        pbVar47 = pbVar47 + 1;
        if ((byte *)keyafter.start == pbVar47) break;
      } while (*(byte *)((long)unaff_R15 + (ulong)*pbVar47) != 0);
    }
    goto LAB_00104e56;
  }
  lVar17 = rpl_re_match(&word_regex.pattern,(char *)pbVar47,lVar17,0,(re_registers *)0x0);
  if (lVar17 != -2) {
    if (lVar17 == -1) {
      lVar17 = 1;
    }
    pbVar47 = pbVar47 + lVar17;
    goto LAB_00104e56;
  }
  goto LAB_00104a6d;
LAB_0010515d:
  if (pbVar37 < (byte *)tail.start + lVar17) {
    tail.end = (char *)pbVar37;
  }
  if (tail.start < tail.end) {
    keyafter_truncation = false;
    bVar7 = false;
    tail_truncation = truncation_string != (char *)0x0 && tail.end < pbVar46;
    pbVar35 = (byte *)tail.end;
    do {
      if ((*(byte *)((long)*in_stack_ffffffffffffff28 + (ulong)pbVar35[-1] * 2 + 1) & 0x20) == 0) {
        pbVar37 = (byte *)tail.end;
        if (bVar7) {
          pbVar37 = pbVar35;
        }
        break;
      }
      pbVar35 = pbVar35 + -1;
      bVar7 = true;
      pbVar37 = (byte *)tail.start;
    } while ((byte *)tail.start != pbVar35);
  }
  else {
    tail_truncation = false;
    pbVar37 = (byte *)tail.end;
  }
LAB_0010518a:
  tail.end = (char *)pbVar37;
  lVar17 = (keyafter_max_width - ((long)keyafter.end - (long)keyafter.start)) - gap_size;
  if (lVar17 < 1) {
    head.start = (char *)0x0;
    head.end = (char *)0x0;
    head_truncation = false;
  }
  else {
    head.end = before.start;
    pcVar26 = head.end;
    if (pcVar5 < before.start) {
      bVar7 = false;
      pcVar27 = before.start;
      do {
        if ((*(byte *)((long)*in_stack_ffffffffffffff28 + (ulong)(byte)pcVar27[-1] * 2 + 1) & 0x20)
            == 0) {
          pcVar26 = head.end;
          if (bVar7) {
            pcVar26 = pcVar27;
          }
          break;
        }
        pcVar27 = pcVar27 + -1;
        bVar7 = true;
        pcVar26 = pcVar5;
      } while (pcVar5 != pcVar27);
    }
    head.end = pcVar26;
    pbVar37 = (byte *)head.end;
    head.start = (char *)pbVar47;
    if (pbVar47 + lVar17 < head.end) {
LAB_00105263:
      do {
        if (word_regex.string == (char *)0x0) {
          if (*(byte *)((long)unaff_R15 + (ulong)(byte)*head.start) == 0) {
            head.start = head.start + 1;
            if (pbVar37 <= head.start + lVar17) break;
            goto LAB_00105263;
          }
          bVar7 = false;
          pbVar35 = (byte *)head.start;
          pbVar47 = (byte *)head.start;
          if (head.start < pbVar37) {
            do {
              if (*(byte *)((long)unaff_R15 + (ulong)*pbVar35) == 0) {
                pbVar47 = (byte *)head.start;
                if (bVar7) {
                  pbVar47 = pbVar35;
                }
                break;
              }
              pbVar35 = pbVar35 + 1;
              bVar7 = true;
              pbVar47 = pbVar37;
            } while (pbVar35 != pbVar37);
          }
        }
        else {
          lVar38 = rpl_re_match(&word_regex.pattern,head.start,(long)pbVar37 - (long)head.start,0,
                                (re_registers *)0x0);
          if (lVar38 == -2) goto LAB_00104a6d;
          if (lVar38 == -1) {
            lVar38 = 1;
          }
          pbVar37 = (byte *)head.end;
          pbVar47 = (byte *)(head.start + lVar38);
        }
        head.start = (char *)pbVar47;
      } while (head.start + lVar17 < pbVar37);
    }
    if (head.start < pbVar37) {
      before_truncation = false;
      head_truncation = truncation_string != (char *)0x0 && pcVar16 < head.start;
      bVar7 = false;
      pbVar47 = (byte *)head.start;
      do {
        if ((*(byte *)((long)*in_stack_ffffffffffffff28 + (ulong)*pbVar47 * 2 + 1) & 0x20) == 0) {
          if (!bVar7) goto LAB_00105304;
          break;
        }
        pbVar47 = pbVar47 + 1;
        bVar7 = true;
      } while (pbVar47 != pbVar37);
      head.start = (char *)pbVar47;
    }
    else {
      head_truncation = false;
    }
  }
LAB_00105304:
  if (auto_reference == false) {
    if ((input_reference != false) &&
       (reference.start =
             keyafter.start +
             *(long *)(CONCAT71(in_stack_ffffffffffffff31,in_stack_ffffffffffffff30) + 0x20),
       reference.end = (char *)(byte *)reference.start, reference.start < pbVar46)) {
      pbVar37 = (byte *)reference.start;
      cVar10 = auto_reference;
      do {
        if ((*(byte *)((long)*in_stack_ffffffffffffff28 + (ulong)*pbVar37 * 2 + 1) & 0x20) != 0) {
          reference.end = (char *)(byte *)reference.start;
          if (cVar10 != '\0') {
            reference.end = (char *)pbVar37;
          }
          break;
        }
        pbVar37 = pbVar37 + 1;
        reference.end = (char *)pbVar46;
        cVar10 = input_reference;
      } while (pbVar46 != pbVar37);
    }
  }
  else {
    pcVar16 = input_file_name
              [*(int *)(CONCAT71(in_stack_ffffffffffffff31,in_stack_ffffffffffffff30) + 0x28)];
    if (pcVar16 == (char *)0x0) {
      pcVar16 = "";
    }
    pcVar16 = stpcpy(reference.start,pcVar16);
    iVar12 = __sprintf_chk(pcVar16,1,0xffffffffffffffff,&DAT_0011dc57);
    reference.end = pcVar16 + iVar12;
  }
  if (output_format == ROFF_FORMAT) {
    __printf_chk(1,&DAT_0011dc5c,macro_name);
    print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
    if (tail_truncation != false) {
      fputs_unlocked(truncation_string,stdout);
    }
    pcVar16 = stdout->_IO_write_ptr;
    if (pcVar16 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar16 + 1;
      *pcVar16 = '\"';
    }
    else {
      __overflow(stdout,0x22);
    }
    fwrite_unlocked(&DAT_0011dc5f,1,2,stdout);
    if (before_truncation != false) {
      fputs_unlocked(truncation_string,stdout);
    }
    print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
    pcVar16 = stdout->_IO_write_ptr;
    if (pcVar16 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar16 + 1;
      *pcVar16 = '\"';
    }
    else {
      __overflow(stdout,0x22);
    }
    fwrite_unlocked(&DAT_0011dc5f,1,2,stdout);
    print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
    if (keyafter_truncation != false) {
      fputs_unlocked(truncation_string,stdout);
    }
    pcVar16 = stdout->_IO_write_ptr;
    if (pcVar16 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar16 + 1;
      *pcVar16 = '\"';
    }
    else {
      __overflow(stdout,0x22);
    }
    fwrite_unlocked(&DAT_0011dc5f,1,2,stdout);
    if (head_truncation != false) {
      fputs_unlocked(truncation_string,stdout);
    }
    print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
    pcVar16 = stdout->_IO_write_ptr;
    if (pcVar16 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar16 + 1;
      *pcVar16 = '\"';
    }
    else {
      __overflow(stdout,0x22);
    }
    if ((auto_reference != false) || (input_reference != false)) {
      fwrite_unlocked(&DAT_0011dc5f,1,2,stdout);
      print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                  CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
      pcVar16 = stdout->_IO_write_ptr;
      if (pcVar16 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar16 + 1;
        *pcVar16 = '\"';
      }
      else {
        __overflow(stdout,0x22);
      }
    }
    goto LAB_00105529;
  }
  if (output_format < TEX_FORMAT) goto code_r0x001053aa;
  if (output_format != TEX_FORMAT) goto LAB_00105549;
  __printf_chk(1,&DAT_0011dc62,macro_name);
  pcVar16 = stdout->_IO_write_ptr;
  if (pcVar16 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar16 + 1;
    *pcVar16 = '{';
  }
  else {
    __overflow(stdout,0x7b);
  }
  print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                              CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
  fwrite_unlocked(&DAT_0011dc67,1,2,stdout);
  print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                              CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
  fwrite_unlocked(&DAT_0011dc67,1,2,stdout);
  if (word_regex.string != (char *)0x0) {
    rVar20 = rpl_re_match(&word_regex.pattern,keyafter.start,
                          (long)keyafter.end - (long)keyafter.start,0,(re_registers *)0x0);
    if (rVar20 != -2) goto LAB_001056df;
LAB_00104a6d:
    matcher_error();
LAB_00104a72:
    if (break_file == (char *)0x0) {
      if (gnu_extensions == false) {
        puVar42 = (undefined8 *)word_fastmap;
        for (lVar17 = 0x20; lVar17 != 0; lVar17 = lVar17 + -1) {
          *puVar42 = 0x101010101010101;
          puVar42 = puVar42 + (ulong)bVar49 * -2 + 1;
        }
        word_fastmap[32] = '\0';
        word_fastmap._9_2_ = 0;
      }
      else {
        ppuVar25 = __ctype_b_loc();
        lVar17 = 0;
        pbVar37 = (byte *)word_fastmap;
        do {
          puVar2 = (undefined2 *)((long)*ppuVar25 + lVar17);
          lVar17 = lVar17 + 2;
          *pbVar37 = (byte)((ushort)*puVar2 >> 10) & 1;
          pbVar37 = pbVar37 + 1;
        } while (lVar17 != 0x200);
      }
    }
    else {
LAB_00104a82:
      swallow_file_in_memory();
      puVar42 = (undefined8 *)word_fastmap;
      for (lVar17 = 0x20; lVar17 != 0; lVar17 = lVar17 + -1) {
        *puVar42 = 0x101010101010101;
        puVar42 = puVar42 + (ulong)bVar49 * -2 + 1;
      }
      pbVar37 = (byte *)tmp;
      if ((ulong)tmp < uStack96) {
        do {
          bVar11 = *pbVar37;
          pbVar37 = pbVar37 + 1;
          word_fastmap[bVar11] = '\0';
        } while (pbVar37 != uStack96);
      }
      if (gnu_extensions == false) {
        word_fastmap[32] = '\0';
        word_fastmap._9_2_ = 0;
      }
      rpl_free((void *)tmp);
    }
LAB_00104049:
    if ((ignore_file != (char *)0x0) &&
       (digest_word_file(ignore_file,&ignore_table), ignore_table.length == 0)) {
      ignore_file = (char *)0x0;
    }
    if ((only_file != (char *)0x0) &&
       (digest_word_file(only_file,&only_table), only_table.length == 0)) {
      only_file = (char *)0x0;
    }
    number_of_occurs = 0;
    total_line_count = 0;
    maximum_word_length = 0;
    reference_max_width = 0;
    local_78 = 0;
    if (0 < number_input_files) {
LAB_001040e5:
      swallow_file_in_memory();
      local_c8 = text_buffers + local_78;
      ppuVar25 = (ushort **)local_c8->start;
      unaff_R15 = (char *)ppuVar25;
      ppuVar31 = ppuVar25;
      if (input_reference == false) {
        local_c0 = 0;
        in_stack_ffffffffffffff28 = (ushort **)local_c8->end;
      }
      else {
        in_stack_ffffffffffffff28 = (ushort **)local_c8->end;
        ppuVar45 = ppuVar25;
        if (ppuVar25 < in_stack_ffffffffffffff28) {
          ppuVar19 = __ctype_b_loc();
          do {
            if ((*(byte *)((long)*ppuVar19 + (ulong)(byte)*unaff_R15 * 2 + 1) & 0x20) != 0) {
              local_c0 = (long)unaff_R15 - (long)ppuVar25;
              if (in_stack_ffffffffffffff28 <= unaff_R15) goto LAB_001041c0;
              goto LAB_00104199;
            }
            unaff_R15 = (char *)((long)unaff_R15 + 1);
            ppuVar45 = in_stack_ffffffffffffff28;
          } while ((ushort **)unaff_R15 != in_stack_ffffffffffffff28);
        }
        local_c0 = (long)ppuVar45 - (long)ppuVar25;
        unaff_R15 = (char *)ppuVar45;
      }
      if (ppuVar25 < in_stack_ffffffffffffff28) goto LAB_001041c0;
      goto LAB_00104793;
    }
LAB_001047dc:
    if (auto_reference == false) {
LAB_001047e9:
      if (input_reference != false) goto LAB_001047f2;
    }
    else {
      reference_max_width = 0;
      for (uVar32 = 0; uVar32 < (ulong)(long)number_input_files; uVar32 = uVar32 + 1) {
        iVar12 = __sprintf_chk(ordinal_string,1,0x15);
        lVar17 = (long)iVar12;
        if (input_file_name[uVar32] != (char *)0x0) {
          uVar33 = 0xffffffffffffffff;
          pcVar16 = input_file_name[uVar32];
          do {
            if (uVar33 == 0) break;
            uVar33 = uVar33 - 1;
            cVar10 = *pcVar16;
            pcVar16 = pcVar16 + (ulong)bVar49 * -2 + 1;
          } while (cVar10 != '\0');
          lVar17 = (~uVar33 - 1) + (long)iVar12;
        }
        if (reference_max_width < lVar17) {
          reference_max_width = lVar17;
        }
      }
      s = reference_max_width + 2;
      reference_max_width = reference_max_width + 1;
      reference.start = (char *)xmalloc(s);
      if (auto_reference == false) goto LAB_001047e9;
LAB_001047f2:
      if (right_reference == false) {
        line_width = line_width - (gap_size + reference_max_width);
      }
    }
    if (line_width < 0) {
      line_width = 0;
    }
    half_line_width = line_width / 2;
    before_max_width = half_line_width - gap_size;
    if ((truncation_string == (char *)0x0) || (*truncation_string == '\0')) {
      truncation_string = (char *)0x0;
    }
    else {
      uVar32 = 0xffffffffffffffff;
      pcVar16 = truncation_string;
      do {
        if (uVar32 == 0) break;
        uVar32 = uVar32 - 1;
        cVar10 = *pcVar16;
        pcVar16 = pcVar16 + (ulong)bVar49 * -2 + 1;
      } while (cVar10 != '\0');
      truncation_string_length = ~uVar32 - 1;
    }
    if (gnu_extensions == false) {
      lVar17 = -(truncation_string_length * 2 + 1);
    }
    else {
      before_max_width = before_max_width + truncation_string_length * -2;
      if (before_max_width < 0) {
        before_max_width = 0;
      }
      lVar17 = truncation_string_length * -2;
    }
    keyafter_max_width = half_line_width + lVar17;
    in_stack_ffffffffffffff28 = __ctype_b_loc();
    lVar17 = 0;
    puVar4 = *in_stack_ffffffffffffff28;
    do {
      edited_flag[lVar17] = (byte)(puVar4[lVar17] >> 0xd) & 1;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0x100);
    edited_flag[12] = '\x01';
    if (output_format == ROFF_FORMAT) {
      edited_flag[34] = '\x01';
    }
    else if (output_format == TEX_FORMAT) {
      pbVar37 = &DAT_0011dbcf;
      bVar11 = 0x24;
      do {
        pbVar37 = pbVar37 + 1;
        edited_flag[bVar11] = '\x01';
        bVar11 = *pbVar37;
      } while (bVar11 != 0);
    }
    tail.start = (char *)0x0;
    unaff_R15 = word_fastmap;
    tail.end = (char *)0x0;
    tail_truncation = false;
    head.start = (char *)0x0;
    head.end = (char *)0x0;
    head_truncation = false;
    in_stack_ffffffffffffff30 = (char)occurs_table;
    in_stack_ffffffffffffff31 = (undefined7)((ulong)occurs_table >> 8);
    local_c8 = (BLOCK *)0x0;
    if (number_of_occurs < 1) goto LAB_00105567;
    goto LAB_00104990;
  }
  pbVar37 = (byte *)keyafter.start;
  if (*(byte *)((long)unaff_R15 + (ulong)(byte)*keyafter.start) != 0) {
    while ((pbVar37 < keyafter.end && (*(byte *)((long)unaff_R15 + (ulong)*pbVar37) != 0))) {
      pbVar37 = pbVar37 + 1;
    }
  }
LAB_001056df:
  print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                              CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
  fwrite_unlocked(&DAT_0011dc67,1,2,stdout);
  print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                              CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
  fwrite_unlocked(&DAT_0011dc67,1,2,stdout);
  print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                              CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
  pcVar16 = stdout->_IO_write_ptr;
  if (pcVar16 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar16 + 1;
    *pcVar16 = '}';
  }
  else {
    __overflow(stdout,0x7d);
  }
  if ((auto_reference != false) || (input_reference != false)) {
    pcVar16 = stdout->_IO_write_ptr;
    if (pcVar16 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar16 + 1;
      *pcVar16 = '{';
    }
    else {
      __overflow(stdout,0x7b);
    }
    print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
    pcVar16 = stdout->_IO_write_ptr;
    if (pcVar16 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar16 + 1;
      *pcVar16 = '}';
    }
    else {
      __overflow(stdout,0x7d);
    }
  }
  goto LAB_00105529;
code_r0x001053aa:
  if (right_reference == false) {
    if (auto_reference == false) {
      print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                  CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
      print_spaces((gap_size + reference_max_width) - ((long)reference.end - (long)reference.start))
      ;
    }
    else {
      print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                  CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
      pcVar16 = stdout->_IO_write_ptr;
      pFVar43 = stdout;
      if (pcVar16 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar16 + 1;
        *pcVar16 = ':';
      }
      else {
LAB_00105fe5:
        __overflow(pFVar43,0x3a);
      }
      print_spaces(((gap_size + reference_max_width) - ((long)reference.end - (long)reference.start)
                   ) + -1);
    }
  }
  if (tail.start < tail.end) {
    print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                                CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
    if (tail_truncation == false) {
      lVar17 = (half_line_width - gap_size) - ((long)before.end - (long)before.start);
      if (before_truncation == false) {
        lVar17 = lVar17 - ((long)tail.end - (long)tail.start);
        lVar38 = 0;
        goto LAB_00105460;
      }
LAB_00105eaa:
      pVar15 = truncation_string_length;
    }
    else {
      fputs_unlocked(truncation_string,stdout);
      lVar17 = (half_line_width - gap_size) - ((long)before.end - (long)before.start);
      pVar15 = 0;
      if (before_truncation != false) goto LAB_00105eaa;
    }
    lVar17 = (lVar17 - pVar15) - ((long)tail.end - (long)tail.start);
    if (tail_truncation == false) {
      lVar38 = 0;
      goto LAB_00105460;
    }
  }
  else {
    lVar17 = (half_line_width - gap_size) - ((long)before.end - (long)before.start);
    lVar38 = 0;
    if (before_truncation == false) goto LAB_00105460;
  }
  lVar38 = truncation_string_length;
LAB_00105460:
  print_spaces(lVar17 - lVar38);
  if (before_truncation != false) {
    fputs_unlocked(truncation_string,stdout);
  }
  print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                              CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
  print_spaces(gap_size);
  print_field((BLOCK)CONCAT79(in_stack_ffffffffffffff31,
                              CONCAT18(in_stack_ffffffffffffff30,in_stack_ffffffffffffff28)));
  if (keyafter_truncation == false) {
    if (head.start < head.end) {
      auVar50 = CONCAT88(head.end,half_line_width - ((long)keyafter.end - (long)keyafter.start));
      pcVar16 = head.start;
      lVar17 = 0;
      goto LAB_00105cc3;
    }
  }
  else {
    fputs_unlocked(truncation_string,stdout);
    if (head.start < head.end) {
      auVar50 = CONCAT88(head.end,half_line_width - ((long)keyafter.end - (long)keyafter.start));
      pcVar16 = head.start;
      lVar17 = truncation_string_length;
      if (keyafter_truncation != false) goto LAB_00105cc3;
      goto LAB_00106098;
    }
  }
  if (auto_reference == false) {
    if (input_reference == false) goto LAB_00105529;
    if (right_reference == false) goto LAB_001054f8;
  }
  else if (right_reference == false) goto LAB_00105529;
  lVar17 = 0;
  if (keyafter_truncation != false) {
    lVar17 = truncation_string_length;
  }
  print_spaces((half_line_width - ((long)keyafter.end - (long)keyafter.start)) - lVar17);
  goto LAB_00105d06;
  while (unaff_R15 = (char *)((long)unaff_R15 + 1),
        (ushort **)unaff_R15 != in_stack_ffffffffffffff28) {
LAB_00104199:
    if ((*(byte *)((long)*ppuVar19 + (ulong)(byte)*unaff_R15 * 2 + 1) & 0x20) == 0) break;
  }
LAB_001041c0:
  do {
    if ((context_regex.string != (char *)0x0) &&
       (rVar20 = rpl_re_search(&context_regex.pattern,(char *)ppuVar25,
                               (long)in_stack_ffffffffffffff28 - (long)ppuVar25,0,
                               (long)in_stack_ffffffffffffff28 - (long)ppuVar25,&context_regs),
       rVar20 != -1)) {
      if (rVar20 == 0) {
        pcVar16 = quote(context_regex.string);
        uVar28 = dcgettext(0,"error: regular expression has a match of length zero: %s",5);
        pFVar43 = (_IO_FILE *)0x1;
        error(1,0,uVar28,pcVar16);
        goto LAB_00105fe5;
      }
      if (rVar20 == -2) goto LAB_00104a6d;
      in_stack_ffffffffffffff28 = (ushort **)(*context_regs.end + (long)ppuVar25);
    }
    pcVar16 = word_regex.string;
    ppuVar45 = ppuVar25;
    ppuVar19 = in_stack_ffffffffffffff28;
    if (ppuVar25 < in_stack_ffffffffffffff28) {
      ppuVar21 = __ctype_b_loc();
      do {
        pcVar16 = word_regex.string;
        if ((*(byte *)((long)*ppuVar21 +
                      (ulong)*(byte *)((long)in_stack_ffffffffffffff28 + -1) * 2 + 1) & 0x20) == 0)
        break;
        in_stack_ffffffffffffff28 = (ushort **)((long)in_stack_ffffffffffffff28 + -1);
      } while (in_stack_ffffffffffffff28 != ppuVar25);
    }
LAB_001043e5:
    ppuVar21 = ppuVar45;
    if (pcVar16 == (char *)0x0) {
      if (ppuVar21 < in_stack_ffffffffffffff28) {
        while (word_fastmap[*(byte *)ppuVar21] == '\0') {
          ppuVar21 = (ushort **)((long)ppuVar21 + 1);
          if (ppuVar21 == in_stack_ffffffffffffff28) goto LAB_00104670;
        }
        if (in_stack_ffffffffffffff28 == ppuVar21) goto LAB_00104670;
        ppuVar45 = ppuVar21;
        if (ppuVar21 < in_stack_ffffffffffffff28) {
          do {
            if (word_fastmap[*(byte *)ppuVar45] == '\0') {
              pcVar16 = word_regex.string;
              if (ppuVar21 == ppuVar45) goto LAB_0010446a;
              break;
            }
            ppuVar45 = (ushort **)((long)ppuVar45 + 1);
          } while (ppuVar45 != in_stack_ffffffffffffff28);
          goto LAB_001042b5;
        }
      }
      else if (ppuVar21 == in_stack_ffffffffffffff28) goto LAB_00104670;
LAB_0010446a:
      ppuVar45 = (ushort **)((long)ppuVar21 + 1);
      goto LAB_001043e5;
    }
    rVar20 = rpl_re_search(&word_regex.pattern,(char *)ppuVar21,
                           (long)in_stack_ffffffffffffff28 - (long)ppuVar21,0,
                           (long)in_stack_ffffffffffffff28 - (long)ppuVar21,&word_regs);
    if (rVar20 == -2) goto LAB_00104a6d;
    if (rVar20 != -1) {
      ppuVar45 = (ushort **)(*word_regs.end + (long)ppuVar21);
      ppuVar21 = (ushort **)((long)ppuVar21 + *word_regs.start);
      pcVar16 = word_regex.string;
      if (ppuVar21 == ppuVar45) goto LAB_0010446a;
LAB_001042b5:
      uStack96 = (byte *)((long)ppuVar45 - (long)ppuVar21);
      if (maximum_word_length < (long)uStack96) {
        maximum_word_length = (ptrdiff_t)uStack96;
      }
      in_stack_ffffffffffffff30 = input_reference;
      tmp = (intmax_t)ppuVar21;
      if (input_reference != false) goto LAB_00104580;
      goto LAB_001042e8;
    }
LAB_00104670:
    ppuVar25 = ppuVar19;
    in_stack_ffffffffffffff28 = (ushort **)local_c8->end;
  } while (ppuVar25 < in_stack_ffffffffffffff28);
LAB_00104793:
  lVar17 = local_78 + 1;
  total_line_count = total_line_count + 1;
  file_line_count[local_78] = total_line_count;
  local_78 = lVar17;
  if (number_input_files <= (int)lVar17) {
    if (number_of_occurs != 0) {
      qsort(occurs_table,number_of_occurs,0x30,compare_occurs);
    }
    goto LAB_001047dc;
  }
  goto LAB_001040e5;
LAB_00104580:
  if (unaff_R15 < ppuVar21) {
    iVar39 = total_line_count;
    cVar10 = '\0';
    do {
      while (bVar11 = *unaff_R15, unaff_R15 = (char *)((long)unaff_R15 + 1), bVar11 == 10) {
        iVar39 = iVar39 + 1;
        ppuVar31 = (ushort **)local_c8->end;
        ppuVar23 = (ushort **)unaff_R15;
        if (unaff_R15 < ppuVar31) {
          ppuVar22 = __ctype_b_loc();
          do {
            if ((*(byte *)((long)*ppuVar22 + (ulong)*(byte *)ppuVar23 * 2 + 1) & 0x20) != 0) break;
            ppuVar23 = (ushort **)((long)ppuVar23 + 1);
          } while (ppuVar23 != ppuVar31);
          local_c0 = (long)ppuVar23 - (long)unaff_R15;
        }
        else {
          local_c0 = 0;
        }
        ppuVar31 = (ushort **)unaff_R15;
        unaff_R15 = (char *)ppuVar23;
        cVar10 = in_stack_ffffffffffffff30;
        if (ppuVar21 <= ppuVar23) goto LAB_00104620;
      }
    } while (unaff_R15 < ppuVar21);
LAB_00104620:
    if (cVar10 != '\0') {
      total_line_count = iVar39;
    }
  }
  pcVar16 = word_regex.string;
  if (ppuVar21 < unaff_R15) goto LAB_001043e5;
LAB_001042e8:
  if (((ignore_file != (char *)0x0) &&
      (_Var9 = search_table(), pcVar16 = word_regex.string, _Var9 != false)) ||
     ((only_file != (char *)0x0 &&
      (_Var9 = search_table(), pcVar16 = word_regex.string, _Var9 == false)))) goto LAB_001043e5;
  if (number_of_occurs == occurs_alloc) {
    occurs_table = (OCCURS *)x2nrealloc(occurs_table,occurs_alloc,0x30);
    in_stack_ffffffffffffff30 = input_reference;
  }
  _Var9 = auto_reference;
  iVar39 = total_line_count;
  lVar17 = number_of_occurs;
  pOVar41 = occurs_table + number_of_occurs;
  if (auto_reference == false) {
    if (in_stack_ffffffffffffff30 == '\0') goto LAB_001043a9;
    pOVar41->reference = (long)ppuVar31 - (long)ppuVar21;
    if (reference_max_width < local_c0) {
      reference_max_width = local_c0;
    }
  }
  else {
    if (unaff_R15 < ppuVar21) {
      iVar44 = total_line_count;
      ppuVar23 = (ushort **)unaff_R15;
      cVar10 = '\0';
LAB_001044ba:
      do {
        bVar11 = *(byte *)ppuVar23;
        ppuVar23 = (ushort **)((long)ppuVar23 + 1);
        unaff_R15 = (char *)ppuVar23;
        if (bVar11 == 10) {
          iVar44 = iVar44 + 1;
          ppuVar22 = (ushort **)local_c8->end;
          ppuVar31 = ppuVar23;
          cVar10 = _Var9;
          if (ppuVar23 < ppuVar22) {
            ppuVar23 = __ctype_b_loc();
            do {
              if ((*(byte *)((long)*ppuVar23 + (ulong)(byte)*unaff_R15 * 2 + 1) & 0x20) != 0) break;
              unaff_R15 = (char *)((long)unaff_R15 + 1);
            } while ((ushort **)unaff_R15 != ppuVar22);
            ppuVar23 = (ushort **)unaff_R15;
            if (ppuVar21 <= unaff_R15) break;
            goto LAB_001044ba;
          }
        }
      } while (ppuVar23 < ppuVar21);
      if (cVar10 != '\0') {
        iVar39 = iVar44;
        total_line_count = iVar44;
      }
    }
    pOVar41->reference = iVar39;
  }
  if (((ppuVar31 == ppuVar25) && (in_stack_ffffffffffffff30 != '\0')) &&
     (ppuVar25 < in_stack_ffffffffffffff28)) {
    in_stack_ffffffffffffff30 = (char)lVar17;
    in_stack_ffffffffffffff31 = (undefined7)((ulong)lVar17 >> 8);
    ppuVar23 = __ctype_b_loc();
    lVar17 = CONCAT71(in_stack_ffffffffffffff31,in_stack_ffffffffffffff30);
    do {
      if ((*(byte *)((long)*ppuVar23 + (ulong)*(byte *)ppuVar25 * 2 + 1) & 0x20) != 0) {
        if (ppuVar25 < in_stack_ffffffffffffff28) goto LAB_001046e8;
        break;
      }
      ppuVar25 = (ushort **)((long)ppuVar25 + 1);
    } while (ppuVar25 != in_stack_ffffffffffffff28);
  }
LAB_001043a9:
  number_of_occurs = lVar17 + 1;
  pOVar41->left = (long)ppuVar25 - (long)ppuVar21;
  *(undefined4 *)&(pOVar41->key).start = (undefined4)tmp;
  *(undefined4 *)((long)&(pOVar41->key).start + 4) = tmp._4_4_;
  *(undefined4 *)&(pOVar41->key).size = (undefined4)uStack96;
  *(undefined4 *)((long)&(pOVar41->key).size + 4) = uStack96._4_4_;
  pOVar41->right = (long)in_stack_ffffffffffffff28 - (long)ppuVar21;
  pOVar41->file_index = (int)local_78;
  pcVar16 = word_regex.string;
  goto LAB_001043e5;
  while ((*(byte *)((long)*ppuVar23 + (ulong)*(byte *)ppuVar25 * 2 + 1) & 0x20) != 0) {
LAB_001046e8:
    ppuVar25 = (ushort **)((long)ppuVar25 + 1);
    if (ppuVar25 == in_stack_ffffffffffffff28) break;
  }
  goto LAB_001043a9;
switchD_00103bf3_caseD_b:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

