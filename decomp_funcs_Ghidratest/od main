
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  byte bVar1;
  size_spec sVar2;
  long lVar3;
  byte *pbVar4;
  size_t sVar5;
  _Bool _Var6;
  int iVar7;
  strtol_error sVar8;
  size_spec *psVar9;
  ptrdiff_t pVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  tspec *ptVar19;
  size_t sVar20;
  tspec *n_bytes_in_buffer;
  size_spec *psVar21;
  ulong uVar22;
  uint uVar23;
  ushort **ppuVar24;
  int *in_R9;
  int *in_R11;
  anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function *paVar25;
  ushort **offset;
  char cVar26;
  uintmax_t uVar27;
  long in_FS_OFFSET;
  undefined auVar28 [16];
  undefined8 local_88;
  int *local_80;
  uint local_74;
  uintmax_t *local_70;
  int oi;
  undefined4 uStack100;
  uintmax_t tmp;
  char *block [2];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  psVar9 = integral_type_size;
  do {
    *psVar9 = NO_SIZE;
    psVar9 = psVar9 + 1;
  } while (psVar9 != (size_spec *)&have_read_stdin);
  integral_type_size[4] = INT;
  integral_type_size[8] = LONG_LONG;
  integral_type_size._4_8_ = 0x200000001;
  psVar9 = fp_type_size;
  do {
    *psVar9 = NO_SIZE;
    psVar9 = psVar9 + 1;
  } while (psVar9 != (size_spec *)&DAT_00112164);
  local_88 = (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function *)
             ((ulong)local_88 & 0xffffffffffffff00);
  n_bytes_in_buffer = (tspec *)0x1;
  cVar26 = '\0';
  fp_type_size[4] = FLOAT_SINGLE;
  offset = (ushort **)&oi;
  fp_type_size[16] = FLOAT_LONG_DOUBLE;
  fp_type_size[8] = FLOAT_DOUBLE;
  n_specs = 0;
  n_specs_allocated = 0;
  spec = (tspec *)0x0;
  format_address = format_address_std;
  address_base = 8;
  address_pad_len = 7;
  flag_dump_strings = false;
LAB_00102990:
  while( true ) {
    oi = -1;
    ppuVar24 = offset;
    iVar7 = getopt_long(argc,argv,"A:aBbcDdeFfHhIij:LlN:OoS:st:vw::Xx",long_options);
    if (iVar7 == -1) break;
    if (0x81 < iVar7) goto switchD_001029e4_caseD_43;
    if (iVar7 < 0x41) {
      if (iVar7 == -0x83) {
        version_etc((FILE *)stdout,"od","GNU coreutils",Version,"Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar7 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001029e4_caseD_43;
    }
    uVar23 = (uint)n_bytes_in_buffer;
    switch(iVar7) {
    case 0x41:
      cVar26 = *optarg;
      if (cVar26 == 'o') {
        cVar26 = '\x01';
        address_base = 8;
        format_address = format_address_std;
        address_pad_len = 7;
      }
      else if (cVar26 < 'p') {
        if (cVar26 == 'd') {
          cVar26 = '\x01';
          address_base = 10;
          format_address = format_address_std;
          address_pad_len = 7;
        }
        else {
          if (cVar26 != 'n') goto LAB_0010398c;
          cVar26 = '\x01';
          address_pad_len = 0;
          format_address = format_address_none;
        }
      }
      else {
        if (cVar26 != 'x') goto LAB_0010398c;
        cVar26 = '\x01';
        address_base = 0x10;
        format_address = format_address_std;
        address_pad_len = 6;
      }
      break;
    case 0x42:
    case 0x6f:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    default:
      goto switchD_001029e4_caseD_43;
    case 0x44:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x46:
    case 0x65:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x48:
    case 0x58:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x4e:
      limit_bytes_to_format = true;
      sVar8 = xstrtoumax(optarg,(char **)0x0,0,&max_bytes_to_format,"bEGKkMmPTYZ0");
      if (sVar8 == LONGINT_OK) goto LAB_00102b07;
      xstrtol_fatal(sVar8,oi,0x4e,long_options,optarg);
    case 0x49:
    case 0x4c:
    case 0x6c:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x4f:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x53:
      if (optarg == (char *)0x0) {
        string_min = 3;
      }
      else {
        sVar8 = xstrtoumax(optarg,(char **)0x0,0,&tmp,"bEGKkMmPTYZ0");
        if (sVar8 != LONGINT_OK) goto LAB_001039b4;
        string_min = tmp;
      }
      flag_dump_strings = true;
      cVar26 = '\x01';
      break;
    case 0x61:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x62:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 99:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 100:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x66:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x68:
    case 0x78:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x69:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x6a:
      sVar8 = xstrtoumax(optarg,(char **)0x0,0,&n_bytes_to_skip,"bEGKkMmPTYZ0");
      if (sVar8 != LONGINT_OK) {
        xstrtol_fatal(sVar8,oi,0x6a,long_options,optarg);
        goto LAB_001038e3;
      }
LAB_00102b07:
      cVar26 = '\x01';
      break;
    case 0x73:
      uVar18 = decode_format_string_part_0();
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x74:
      if (optarg == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("s != NULL","src/od.c",0x3d9,"decode_format_string");
      }
      uVar18 = decode_format_string_part_0();
      cVar26 = '\x01';
      n_bytes_in_buffer = (tspec *)(ulong)(uVar23 & uVar18);
      break;
    case 0x76:
      abbreviate_duplicate_blocks = false;
      cVar26 = '\x01';
      break;
    case 0x77:
      if (optarg == (char *)0x0) {
        local_88 = (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function *)
                   CONCAT71(local_88._1_7_,1);
        cVar26 = '\x01';
        local_80 = (int *)&DAT_00000020;
      }
      else {
        sVar8 = xstrtoumax(optarg,(char **)0x0,10,&tmp,"");
        if (sVar8 != LONGINT_OK) goto LAB_0010396e;
        local_80 = (int *)tmp;
        local_88 = (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function *)
                   CONCAT71(local_88._1_7_,1);
        cVar26 = '\x01';
      }
      break;
    case 0x80:
      traditional = true;
      break;
    case 0x81:
      goto switchD_001029e4_caseD_81;
    }
  }
  if ((char)n_bytes_in_buffer == '\0') {
    uVar23 = 1;
LAB_00103240:
    if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar23;
  }
  if ((flag_dump_strings != false) && (n_specs != 0)) {
    uVar13 = dcgettext(0,"no type may be specified when dumping strings",5);
    sVar8 = error(1,0,uVar13);
LAB_0010396e:
    xstrtol_fatal(sVar8,oi,0x77,long_options,optarg);
LAB_0010398c:
    uVar13 = dcgettext(0,"invalid output address radix \'%c\'; it must be one character from [doxn]"
                       ,5);
    sVar8 = error(1,0,uVar13,(int)cVar26);
LAB_001039b4:
    auVar28 = xstrtol_fatal(sVar8,oi,0x53,long_options,optarg);
    paVar25 = local_88;
    local_88 = SUB168(auVar28,0);
    (*(code *)PTR___libc_start_main_00111fd8)
              (main,paVar25,&local_80,__libc_csu_init,__libc_csu_fini,SUB168(auVar28 >> 0x40,0),
               &local_88);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  lVar11 = (long)optind;
  iVar7 = argc - optind;
  if (cVar26 == '\0') {
    if (iVar7 == 2) {
      pcVar12 = argv[lVar11 + 1];
      if (((traditional != false) || (*pcVar12 == '+')) || ((int)*pcVar12 - 0x30U < 10)) {
LAB_001033a5:
        _Var6 = parse_old_offset(pcVar12,&tmp);
        if (_Var6 == false) {
          iVar7 = 2;
LAB_00103387:
          if (traditional != false) {
            lVar11 = (long)optind;
LAB_00102e18:
            pcVar12 = quote(argv[lVar11 + 1]);
            uVar13 = dcgettext(0,"extra operand %s",5);
            error(0,0,uVar13,pcVar12);
            uVar13 = dcgettext(0,"compatibility mode supports at most one file",5);
            error(0,0,&DAT_0010d81b,uVar13);
switchD_001029e4_caseD_43:
                    /* WARNING: Subroutine does not return */
            usage(1);
          }
        }
        else if ((traditional == false) ||
                (_Var6 = parse_old_offset(argv[optind],(uintmax_t *)offset), _Var6 == false)) {
          iVar7 = 1;
          n_bytes_to_skip = tmp;
          argv[(long)optind + 1] = argv[optind];
          argv = argv + 1;
        }
        else {
          n_bytes_to_skip = CONCAT44(uStack100,oi);
          flag_pseudo_start = true;
          argv = argv + 2;
          iVar7 = 0;
          local_70 = (uintmax_t *)tmp;
        }
      }
    }
    else if (iVar7 == 3) {
      if (traditional != false) {
LAB_0010336c:
        _Var6 = parse_old_offset(argv[lVar11 + 1],(uintmax_t *)offset);
        if ((_Var6 == false) ||
           (_Var6 = parse_old_offset(argv[(long)optind + 2],&tmp), _Var6 == false)) {
          iVar7 = 3;
          goto LAB_00103387;
        }
        n_bytes_to_skip = CONCAT44(uStack100,oi);
        flag_pseudo_start = true;
        iVar7 = 1;
        local_70 = (uintmax_t *)tmp;
        argv[(long)optind + 2] = argv[optind];
        argv = argv + 2;
      }
    }
    else if (iVar7 == 1) {
      pcVar12 = argv[lVar11];
      if ((traditional != false) || (*pcVar12 == '+')) {
LAB_00102efb:
        _Var6 = parse_old_offset(pcVar12,(uintmax_t *)offset);
        if (_Var6 != false) {
          n_bytes_to_skip = CONCAT44(uStack100,oi);
          argv = argv + 1;
          iVar7 = 0;
          goto LAB_00102f1e;
        }
      }
      iVar7 = 1;
    }
    else if (traditional != false) goto LAB_00102e0e;
  }
  else if (traditional != false) {
    if (iVar7 == 2) {
      pcVar12 = argv[lVar11 + 1];
      goto LAB_001033a5;
    }
    if (iVar7 == 3) goto LAB_0010336c;
    if (iVar7 == 1) {
      pcVar12 = argv[lVar11];
      goto LAB_00102efb;
    }
LAB_00102e0e:
    if (1 < iVar7) goto LAB_00102e18;
  }
LAB_00102f1e:
  if (flag_pseudo_start != false) {
    if (format_address == format_address_none) {
      address_base = 8;
      address_pad_len = 7;
      format_address = format_address_paren;
    }
    else {
      format_address = format_address_label;
    }
  }
  if ((limit_bytes_to_format != false) &&
     (end_offset = max_bytes_to_format + n_bytes_to_skip,
     CARRY8(max_bytes_to_format,n_bytes_to_skip))) {
LAB_001038e3:
    uVar13 = dcgettext(0,"skip-bytes + read-bytes is too large",5);
    error(1,0,uVar13);
LAB_00103907:
                    /* WARNING: Subroutine does not return */
    __assert_fail("n_bytes_read == bytes_per_block","src/od.c",0x58a,
                  (char *)&__PRETTY_FUNCTION___7898);
  }
  if (n_specs == 0) {
    decode_format_string_part_0(&DAT_0010c1cd);
  }
  file_list = default_file_list;
  if (0 < iVar7) {
    file_list = argv + optind;
  }
  _Var6 = open_next_file();
  ptVar19 = (tspec *)(CONCAT71(extraout_var,_Var6) & 0xffffffff);
  if (in_stream == (FILE *)0x0) goto cleanup;
  _Var6 = skip(n_bytes_to_skip);
  local_74 = (uint)ptVar19 & (uint)CONCAT71(extraout_var_00,_Var6);
  ptVar19 = (tspec *)(ulong)local_74;
  local_74 = local_74 & 0xff;
  if (in_stream == (FILE *)0x0) goto cleanup;
  pseudo_offset = 0;
  if (flag_pseudo_start != false) {
    pseudo_offset = (long)local_70 - n_bytes_to_skip;
  }
  in_R11 = (int *)n_specs;
  if (n_specs == 0) {
    ppuVar24 = (ushort **)0x1;
    if ((char)local_88 == '\0') goto LAB_00103349;
    if (local_80 != (int *)0x0) goto LAB_00103772;
    sVar20 = 1;
    uVar23 = 1;
  }
  else {
    ppuVar24 = (ushort **)0x1;
    in_R9 = width_bytes;
    psVar9 = &spec->size;
    do {
      sVar2 = *psVar9;
      uVar22 = (long)(int)ppuVar24;
      uVar16 = (long)width_bytes[sVar2];
      do {
        uVar17 = uVar16;
        uVar16 = uVar22 % uVar17;
        uVar22 = uVar17;
      } while (uVar16 != 0);
      psVar9 = psVar9 + 10;
      uVar23 = (int)ppuVar24 * (int)((ulong)(long)width_bytes[sVar2] / uVar17);
      ppuVar24 = (ushort **)(ulong)uVar23;
    } while (&spec[n_specs].size != psVar9);
    ptVar19 = spec;
    if ((char)local_88 == '\0') goto LAB_001032b8;
    sVar20 = (size_t)(int)uVar23;
    if ((local_80 != (int *)0x0) && ((ulong)local_80 % sVar20 == 0)) {
LAB_00103772:
      bytes_per_block = (size_t)local_80;
      goto LAB_001030b6;
    }
  }
  local_88 = (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function *)
             ((ulong)local_88 & 0xffffffff00000000 | (ulong)uVar23);
  uVar13 = dcgettext(0,"warning: invalid width %lu; using %d instead",5);
  ppuVar24 = (ushort **)((ulong)local_88 & 0xffffffff);
  error(0,0,uVar13,local_80);
  in_R11 = (int *)n_specs;
  bytes_per_block = sVar20;
LAB_001030b6:
  uVar23 = (uint)n_bytes_in_buffer;
  in_R9 = width_bytes;
  ptVar19 = spec;
  if (in_R11 == (int *)0x0) goto LAB_0010313a;
LAB_001030c9:
  ppuVar24 = (ushort **)bytes_per_block;
  uVar23 = (uint)n_bytes_in_buffer;
  psVar9 = &ptVar19->size;
  uVar18 = 0;
  ptVar19 = ptVar19 + (long)in_R11;
  psVar21 = psVar9;
  do {
    in_R11 = (int *)(long)in_R9[*psVar21];
    uVar15 = (psVar21[6] + 1) * (int)(bytes_per_block / (ulong)in_R11);
    if (uVar18 < uVar15) {
      uVar18 = uVar15;
    }
    psVar21 = psVar21 + 10;
  } while (&ptVar19->size != psVar21);
  do {
    psVar21 = psVar9 + 10;
    psVar9[7] = uVar18 - (int)((ulong)ppuVar24 / (ulong)(long)in_R9[*psVar9]) * psVar9[6];
    psVar9 = psVar21;
  } while (&ptVar19->size != psVar21);
LAB_0010313a:
  uVar18 = (uint)flag_dump_strings;
  if (flag_dump_strings != false) {
    tmp = 100;
    if (99 < string_min) {
      tmp = string_min;
    }
    local_88 = (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function *)
               xmalloc(tmp);
    local_70 = &tmp;
    n_bytes_in_buffer = (tspec *)n_bytes_to_skip;
LAB_0010318b:
    do {
      if ((limit_bytes_to_format != false) &&
         ((end_offset < string_min || ((tspec *)(end_offset - string_min) <= n_bytes_in_buffer)))) {
        rpl_free(local_88);
        _Var6 = check_and_close(0);
        uVar18 = uVar18 & _Var6;
        goto LAB_0010322a;
      }
      sVar20 = string_min;
      if (string_min != 0) {
        local_80 = (int *)((long)&n_bytes_in_buffer->fmt + 1);
        sVar20 = 0;
        do {
          _Var6 = read_char((int *)offset);
          iVar7 = oi;
          uVar18 = uVar18 & _Var6;
          n_bytes_in_buffer = (tspec *)((long)local_80 + sVar20);
          if (oi < 0) goto LAB_0010321e;
          ppuVar24 = __ctype_b_loc();
          sVar5 = string_min;
          if ((*(byte *)((long)*ppuVar24 + (long)iVar7 * 2 + 1) & 0x40) == 0) goto LAB_0010318b;
          local_88[sVar20] =
               (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function)
               (byte)iVar7;
          sVar20 = sVar20 + 1;
        } while (sVar20 < sVar5);
      }
      while ((limit_bytes_to_format == false || (n_bytes_in_buffer < end_offset))) {
        if (tmp == sVar20) {
          local_88 = (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function *)
                     x2realloc(local_88,local_70);
        }
        n_bytes_in_buffer = (tspec *)((long)&n_bytes_in_buffer->fmt + 1);
        _Var6 = read_char((int *)offset);
        iVar7 = oi;
        uVar18 = uVar18 & _Var6;
        if (oi < 0) goto LAB_0010321e;
        if (oi == 0) break;
        ppuVar24 = __ctype_b_loc();
        if ((*(byte *)((long)*ppuVar24 + (long)iVar7 * 2 + 1) & 0x40) == 0) goto LAB_0010318b;
        local_88[sVar20] =
             (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function)(byte)iVar7;
        sVar20 = sVar20 + 1;
      }
      paVar25 = local_88;
      local_88[sVar20] =
           (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function)0x0;
      (*format_address)((uintmax_t)(n_bytes_in_buffer->fmt_string + (~sVar20 - 0x10)),' ');
      while( true ) {
        bVar1 = (byte)*paVar25;
        oi = (int)(char)bVar1;
        if (bVar1 == 0) break;
        switch(bVar1) {
        case 7:
          fwrite_unlocked(&DAT_0010c03d,1,2,stdout);
          break;
        case 8:
          fwrite_unlocked(&DAT_0010c02b,1,2,stdout);
          break;
        case 9:
          fwrite_unlocked(&DAT_0010c037,1,2,stdout);
          break;
        case 10:
          fwrite_unlocked(&DAT_0010c031,1,2,stdout);
          break;
        case 0xb:
          fwrite_unlocked(&DAT_0010c03a,1,2,stdout);
          break;
        case 0xc:
          fwrite_unlocked(&DAT_0010c02e,1,2,stdout);
          break;
        case 0xd:
          fwrite_unlocked(&DAT_0010c034,1,2,stdout);
          break;
        default:
          pbVar4 = (byte *)stdout->_IO_write_ptr;
          if (pbVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(pbVar4 + 1);
            *pbVar4 = bVar1;
          }
          else {
            __overflow(stdout,(uint)bVar1);
          }
        }
        paVar25 = paVar25 + 1;
      }
      pcVar12 = stdout->_IO_write_ptr;
      if (pcVar12 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar12 + 1;
        *pcVar12 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
    } while( true );
  }
  local_88 = (anon_subr_void_size_t_size_t_void_ptr_char_ptr_int_int_for_print_function *)
             xnmalloc(2,bytes_per_block);
  uVar15 = (uint)limit_bytes_to_format;
  block[0] = (char *)local_88;
  block[1] = (char *)(local_88 + bytes_per_block);
  uVar27 = n_bytes_to_skip;
  if (limit_bytes_to_format == false) {
    offset = (ushort **)0x0;
    uVar15 = uVar23;
    while( true ) {
      n_bytes_in_buffer = (tspec *)block[(int)offset];
      _Var6 = read_block(bytes_per_block,(char *)n_bytes_in_buffer,&tmp);
      uVar15 = uVar15 & _Var6;
      if (tmp < bytes_per_block) break;
      if (tmp != bytes_per_block) goto LAB_00103907;
      uVar18 = uVar18 ^ 1;
      offset = (ushort **)(ulong)uVar18;
      write_block(uVar27,tmp,block[uVar18],(char *)n_bytes_in_buffer);
      uVar27 = uVar27 + tmp;
    }
LAB_00103540:
    ptVar19 = spec;
    in_R9 = (int *)tmp;
    if (tmp != 0) {
      iVar7 = 1;
      in_R11 = width_bytes;
      for (sVar20 = 0; uVar22 = (ulong)iVar7, sVar20 != n_specs; sVar20 = sVar20 + 1) {
        uVar16 = (long)width_bytes[spec[sVar20].size];
        do {
          uVar17 = uVar16;
          uVar16 = uVar22 % uVar17;
          uVar22 = uVar17;
        } while (uVar16 != 0);
        iVar7 = iVar7 * (int)((ulong)(long)width_bytes[spec[sVar20].size] / uVar17);
      }
      pcVar12 = block[(long)offset];
      local_80 = (int *)tmp;
      ppuVar24 = (ushort **)n_specs;
      memset(pcVar12 + tmp,0,(((uVar22 - 1) + tmp) / uVar22) * uVar22 - tmp);
      in_R9 = local_80;
      write_block(uVar27,(size_t)local_80,block[uVar18 ^ 1],pcVar12);
      uVar27 = uVar27 + tmp;
      n_bytes_in_buffer = ptVar19;
    }
  }
  else {
    n_bytes_in_buffer = (tspec *)&tmp;
    for (; uVar27 < end_offset; uVar27 = uVar27 + tmp) {
      offset = (ushort **)(ulong)uVar18;
      pcVar12 = block[uVar18];
      uVar22 = end_offset - uVar27;
      if (bytes_per_block < end_offset - uVar27) {
        uVar22 = bytes_per_block;
      }
      _Var6 = read_block(uVar22,pcVar12,(size_t *)n_bytes_in_buffer);
      uVar15 = uVar15 & _Var6;
      if (tmp < bytes_per_block) goto LAB_00103540;
      if (tmp != bytes_per_block) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("n_bytes_read == bytes_per_block","src/od.c",0x57c,
                      (char *)&__PRETTY_FUNCTION___7898);
      }
      uVar18 = uVar18 ^ 1;
      write_block(uVar27,tmp,block[uVar18],pcVar12);
    }
    tmp = 0;
  }
  (*format_address)(uVar27,'\n');
  if ((limit_bytes_to_format != false) && (end_offset <= uVar27)) {
    _Var6 = check_and_close(0);
    uVar15 = uVar15 & _Var6;
  }
  rpl_free(local_88);
  uVar18 = uVar15;
  goto LAB_0010322a;
LAB_0010321e:
  rpl_free(local_88);
LAB_0010322a:
  ptVar19 = (tspec *)(ulong)(uVar18 & local_74 & 1);
cleanup:
  if ((have_read_stdin == false) || (iVar7 = rpl_fclose(stdin), iVar7 != -1)) {
    uVar23 = ((uint)ptVar19 ^ 1) & 0xff;
    goto LAB_00103240;
  }
  uVar13 = dcgettext(0,"standard input",5);
  piVar14 = __errno_location();
  error(1,*piVar14,uVar13);
LAB_001032b8:
  if ((int)ppuVar24 < 0x10) goto LAB_00103349;
  bytes_per_block = (size_t)(int)ppuVar24;
  goto LAB_001030c9;
LAB_00103349:
  bytes_per_block = (size_t)((int)(0x10 / (long)(int)ppuVar24) * (int)ppuVar24);
  goto LAB_001030b6;
switchD_001029e4_caseD_81:
  in_R9 = (int *)argmatch_die;
  pVar10 = __xargmatch_internal("--endian",optarg,endian_args,endian_types,4,argmatch_die,true);
  if (endian_types[pVar10] == endian_little) {
    input_swap = false;
  }
  else if (endian_types[pVar10] == endian_big) {
    input_swap = true;
  }
  goto LAB_00102990;
}

