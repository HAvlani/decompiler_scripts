
undefined8 decode_format_string_part_0(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  size_t sVar5;
  lconv *plVar6;
  code *pcVar7;
  output_format oVar8;
  ulong uVar9;
  tspec *ptVar10;
  char *pcVar11;
  undefined *puVar12;
  char *pcVar13;
  size_spec sVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  ulong local_48;
  
  if (*param_1 == '\0') {
    return 1;
  }
  pcVar3 = param_1;
  if (n_specs_allocated <= n_specs) goto LAB_001052e4;
LAB_00105138:
  ptVar10 = spec + n_specs;
  pcVar11 = pcVar3;
  if (ptVar10 == (tspec *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("tspec != NULL","src/od.c",0x288,"decode_one_format");
  }
  do {
    cVar1 = *pcVar11;
    switch(cVar1) {
    case 'a':
      pcVar3 = pcVar11 + 1;
      uVar16 = 3;
      oVar8 = NAMED_CHARACTER;
      sVar14 = CHAR;
      pcVar7 = print_named_ascii;
      break;
    default:
      pcVar3 = quote(param_1);
      cVar1 = *pcVar11;
      uVar4 = dcgettext(0,"invalid character \'%c\' in type string %s",5);
      error(0,0,uVar4,(int)cVar1,pcVar3);
      return 0;
    case 'c':
      pcVar3 = pcVar11 + 1;
      uVar16 = 3;
      oVar8 = CHARACTER;
      sVar14 = CHAR;
      pcVar7 = print_ascii;
      break;
    case 'd':
    case 'o':
    case 'u':
    case 'x':
      cVar2 = pcVar11[1];
      if (cVar2 == 'L') {
        pcVar3 = pcVar11 + 2;
        local_48 = 8;
        sVar14 = integral_type_size[8];
LAB_001051ec:
        if (cVar1 != 'u') goto LAB_001051f6;
LAB_00105453:
        uVar16 = bytes_to_unsigned_dec_digits[local_48];
        __sprintf_chk(ptVar10->fmt_string,1,8,"%%*%s");
        oVar8 = UNSIGNED_DECIMAL;
      }
      else {
        sVar14 = integral_type_size[4];
        if (cVar2 < 'M') {
          if (cVar2 == 'C') {
            pcVar3 = pcVar11 + 2;
            local_48 = 1;
            sVar14 = integral_type_size[1];
          }
          else if (cVar2 == 'I') {
            pcVar3 = pcVar11 + 2;
            local_48 = 4;
          }
          else {
            pcVar3 = pcVar11 + 1;
            if ((int)cVar2 - 0x30U < 10) {
              pcVar3 = pcVar11 + 2;
              uVar9 = (ulong)(int)((int)cVar2 - 0x30U);
              local_48 = 0;
              while( true ) {
                local_48 = uVar9 + local_48 * 10;
                if (9 < (int)*pcVar3 - 0x30U) break;
                uVar9 = (ulong)(int)((int)*pcVar3 - 0x30U);
                pcVar3 = pcVar3 + 1;
                if (~uVar9 / 10 < local_48) {
LAB_0010539a:
                  pcVar3 = quote(param_1);
                  uVar4 = dcgettext(0,"invalid type string %s",5);
                  error(0,0,uVar4,pcVar3);
                  return 0;
                }
              }
              if (pcVar11 + 1 != pcVar3) {
                if ((8 < local_48) ||
                   (sVar14 = integral_type_size[local_48], integral_type_size[local_48] == NO_SIZE))
                {
                  pcVar3 = quote(param_1);
                  pcVar11 = 
                  "invalid type string %s;\nthis system doesn\'t provide a %lu-byte integral type";
                  goto LAB_0010575f;
                }
                goto LAB_001051ec;
              }
            }
LAB_001057d8:
            local_48 = 4;
          }
          goto LAB_001051ec;
        }
        if (cVar2 != 'S') {
          pcVar3 = pcVar11 + 1;
          goto LAB_001057d8;
        }
        pcVar3 = pcVar11 + 2;
        local_48 = 2;
        sVar14 = integral_type_size[2];
        if (cVar1 == 'u') goto LAB_00105453;
LAB_001051f6:
        if (cVar1 < 'v') {
          if (cVar1 == 'd') {
            uVar16 = bytes_to_signed_dec_digits[local_48];
            __sprintf_chk(ptVar10->fmt_string,1,8);
            oVar8 = SIGNED_DECIMAL;
          }
          else {
            if (cVar1 != 'o') {
              uVar4 = decode_format_string_part_0_cold();
              return uVar4;
            }
            puVar12 = &DAT_0010c064;
            if (1 < sVar14 + ~INT) {
              puVar12 = &DAT_0010c026;
            }
            uVar16 = bytes_to_oct_digits[local_48];
            __sprintf_chk(ptVar10->fmt_string,1,8,"%%*.%d%s",uVar16,puVar12);
            oVar8 = OCTAL;
          }
        }
        else {
          if (cVar1 != 'x') {
            uVar4 = decode_format_string_part_0_cold();
            return uVar4;
          }
          pcVar13 = "lx";
          if (1 < sVar14 + ~INT) {
            pcVar13 = "x";
          }
          uVar16 = bytes_to_hex_digits[local_48];
          __sprintf_chk(ptVar10->fmt_string,1,8,"%%*.%d%s",uVar16,pcVar13);
          oVar8 = HEXADECIMAL;
        }
      }
      sVar5 = strlen(ptVar10->fmt_string);
      if (7 < sVar5) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("strlen (tspec->fmt_string) < FMT_BYTES_ALLOCATED","src/od.c",0x2eb,
                      "decode_one_format");
      }
      switch(sVar14) {
      default:
code_r0x00102800:
                    /* WARNING: Subroutine does not return */
        abort();
      case CHAR:
        pcVar7 = print_s_char;
        if (oVar8 != SIGNED_DECIMAL) {
          pcVar7 = print_char;
        }
        break;
      case SHORT:
        pcVar7 = print_s_short;
        if (oVar8 != SIGNED_DECIMAL) {
          pcVar7 = print_short;
        }
        break;
      case INT:
        pcVar7 = print_int;
        break;
      case LONG:
        pcVar7 = print_long;
        break;
      case LONG_LONG:
        pcVar7 = print_long_long;
      }
      break;
    case 'f':
      cVar1 = pcVar11[1];
      if (cVar1 == 'F') {
        pcVar3 = pcVar11 + 2;
        sVar14 = fp_type_size[4];
      }
      else if (cVar1 == 'L') {
        pcVar3 = pcVar11 + 2;
        sVar14 = fp_type_size[16];
      }
      else {
        sVar14 = fp_type_size[8];
        if (cVar1 == 'D') {
          pcVar3 = pcVar11 + 2;
        }
        else {
          pcVar3 = pcVar11 + 1;
          pcVar13 = pcVar11 + 2;
          local_48 = 0;
          uVar9 = (ulong)(int)((int)cVar1 - 0x30U);
          if ((int)cVar1 - 0x30U < 10) {
            while( true ) {
              local_48 = uVar9 + local_48 * 10;
              if (9 < (int)*pcVar13 - 0x30U) break;
              uVar9 = (ulong)(int)((int)*pcVar13 - 0x30U);
              pcVar13 = pcVar13 + 1;
              if (~uVar9 / 10 < local_48) goto LAB_0010539a;
            }
            bVar17 = pcVar3 != pcVar13;
            pcVar3 = pcVar13;
            if ((bVar17) &&
               ((0x10 < local_48 ||
                (sVar14 = fp_type_size[local_48], fp_type_size[local_48] == NO_SIZE)))) {
              pcVar3 = quote(param_1);
              pcVar11 = 
              "invalid type string %s;\nthis system doesn\'t provide a %lu-byte floating point type"
              ;
LAB_0010575f:
              uVar4 = dcgettext(0,pcVar11,5);
              error(0,0,uVar4,pcVar3,local_48);
              return 0;
            }
          }
        }
      }
      plVar6 = localeconv();
      iVar15 = 1;
      if (*plVar6->decimal_point != '\0') {
        sVar5 = strlen(plVar6->decimal_point);
        iVar15 = (int)sVar5;
      }
      if (sVar14 == FLOAT_DOUBLE) {
        uVar16 = iVar15 + 0x17;
        pcVar7 = print_double;
        oVar8 = FLOATING_POINT;
      }
      else if (sVar14 == FLOAT_LONG_DOUBLE) {
        uVar16 = iVar15 + 0x1c;
        pcVar7 = print_long_double;
        oVar8 = FLOATING_POINT;
      }
      else {
        if (sVar14 != FLOAT_SINGLE) goto code_r0x00102800;
        uVar16 = iVar15 + 0xe;
        pcVar7 = print_float;
        oVar8 = FLOATING_POINT;
      }
    }
    ptVar10->print_function = pcVar7;
    ptVar10->size = sVar14;
    ptVar10->fmt = oVar8;
    ptVar10->field_width = uVar16;
    cVar1 = *pcVar3;
    ptVar10->hexl_mode_trailer = cVar1 == 'z';
    pcVar3 = pcVar3 + (cVar1 == 'z');
    if (pcVar3 == pcVar11) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("s != next","src/od.c",0x3e5,"decode_format_string");
    }
    n_specs = n_specs + 1;
    if (*pcVar3 == '\0') {
      return 1;
    }
    if (n_specs < n_specs_allocated) goto LAB_00105138;
LAB_001052e4:
    spec = (tspec *)x2nrealloc(spec,&n_specs_allocated,0x28);
    ptVar10 = spec + n_specs;
    pcVar11 = pcVar3;
  } while( true );
}

