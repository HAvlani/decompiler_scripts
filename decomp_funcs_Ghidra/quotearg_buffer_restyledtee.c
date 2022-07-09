
ulong quotearg_buffer_restyled
                (undefined *param_1,ulong param_2,char *param_3,ulong param_4,quoting_style param_5,
                uint param_6,long param_7,char *param_8,char *param_9)

{
  byte *__s1;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  ushort **ppuVar9;
  size_t sVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  size_t local_c8;
  char *local_98;
  ulong local_90;
  char *local_78;
  char *local_70;
  bool local_64;
  wint_t local_4c;
  mbstate_t local_48;
  long local_40;
  
  local_70 = param_8;
  local_78 = param_9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar25 = 0x103b4d;
  sVar8 = __ctype_get_mb_cur_max();
  uVar12 = param_6 & 2;
  bVar20 = uVar12 != 0;
  switch(param_5) {
  case literal_quoting_style:
    bVar6 = true;
    bVar2 = false;
    uVar18 = 0;
    local_64 = false;
    local_90 = 0;
    bVar20 = false;
    bVar1 = false;
    local_c8 = 0;
    local_98 = (char *)0x0;
    break;
  case shell_always_quoting_style:
    if (uVar12 == 0) {
      bVar1 = false;
LAB_00103fa7:
      if (param_2 == 0) {
        local_90 = 0;
        bVar2 = false;
        bVar6 = true;
        local_64 = false;
        goto LAB_00103fc9;
      }
      bVar2 = false;
      local_64 = false;
      bVar6 = true;
      uVar13 = 0;
      local_90 = param_2;
      goto LAB_00104566;
    }
    bVar2 = false;
    uVar18 = 0;
    bVar6 = true;
    local_64 = false;
    local_90 = 0;
    bVar20 = true;
    bVar1 = false;
    local_c8 = 1;
    local_98 = "\'";
    break;
  case shell_escape_quoting_style:
    bVar1 = true;
    goto LAB_00103f1f;
  case shell_escape_always_quoting_style:
    if (uVar12 == 0) {
      bVar1 = true;
      goto LAB_00103fa7;
    }
  case shell_quoting_style:
    bVar1 = false;
LAB_00103f1f:
    bVar6 = true;
    local_64 = false;
    bVar20 = true;
    local_90 = 0;
    bVar2 = false;
    uVar18 = 0;
    param_5 = shell_always_quoting_style;
    local_c8 = 1;
    local_98 = "\'";
    break;
  case c_quoting_style:
    if (uVar12 == 0) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      bVar6 = true;
      local_64 = false;
      local_90 = 0;
      bVar2 = false;
      bVar20 = false;
      uVar18 = 1;
      bVar1 = true;
      local_c8 = 1;
      local_98 = "\"";
    }
    else {
      bVar2 = false;
      uVar18 = 0;
      bVar6 = true;
      local_64 = false;
      local_90 = 0;
      bVar20 = true;
      bVar1 = true;
      local_c8 = 1;
      local_98 = "\"";
    }
    break;
  case c_maybe_quoting_style:
    bVar2 = false;
    uVar18 = 0;
    bVar6 = true;
    local_64 = false;
    param_5 = c_quoting_style;
    local_90 = 0;
    bVar20 = true;
    bVar1 = true;
    local_c8 = 1;
    local_98 = "\"";
    break;
  case escape_quoting_style:
    bVar6 = true;
    bVar2 = false;
    uVar18 = 0;
    local_64 = false;
    local_90 = 0;
    bVar20 = false;
    bVar1 = true;
    local_c8 = 0;
    local_98 = (char *)0x0;
    break;
  case locale_quoting_style:
  case clocale_quoting_style:
  case custom_quoting_style:
    if (param_5 != custom_quoting_style) {
      local_70 = (char *)dcgettext(0,&DAT_0010772b,5);
      if (local_70 == "`") {
        local_70 = gettext_quote("`",param_5);
      }
      local_78 = (char *)dcgettext(0,&DAT_00107729,5);
      if (local_78 == "\'") {
        local_78 = gettext_quote("\'",param_5);
      }
    }
    uVar18 = 0;
    if (uVar12 == 0) {
      cVar11 = *local_70;
      while (cVar11 != '\0') {
        if (uVar18 < param_2) {
          param_1[uVar18] = cVar11;
        }
        uVar18 = uVar18 + 1;
        cVar11 = local_70[uVar18];
      }
    }
    bVar2 = false;
    uVar25 = 0x103c31;
    local_c8 = strlen(local_78);
    local_98 = local_78;
    bVar6 = true;
    local_64 = false;
    local_90 = 0;
    bVar1 = true;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
    uVar13 = 0;
    bVar4 = local_64;
LAB_00103c68:
    bVar21 = param_4 != uVar13;
    if (param_4 == 0xffffffffffffffff) {
      bVar21 = param_3[uVar13] != '\0';
    }
    bVar24 = bVar1;
    if (bVar21) {
      bVar23 = (bool)(param_5 != shell_always_quoting_style & bVar1);
      __s1 = (byte *)(param_3 + uVar13);
      uVar17 = uVar13;
      bVar3 = bVar2;
      bVar5 = bVar23;
      if (!bVar23) {
        uVar15 = (ulong)*__s1;
        switch(uVar15) {
        case 0:
          if (bVar1) goto switchD_001044d0_caseD_0;
          bVar5 = false;
          uVar15 = 0;
          if ((param_6 & 1) != 0) goto code_r0x0010446b;
          goto LAB_0010425b;
        default:
switchD_00104380_caseD_1:
          bVar22 = bVar1;
          if (sVar8 != 1) {
            local_48 = (mbstate_t)0x0;
            if (param_4 == 0xffffffffffffffff) {
              param_4 = strlen(param_3);
            }
            uVar17 = 0;
            do {
              uVar19 = uVar13 + uVar17;
              uVar25 = 0x1046a5;
              sVar10 = rpl_mbrtowc((wchar_t *)&local_4c,param_3 + uVar19,param_4 - uVar19,
                                   (mbstate_t *)&local_48);
              if (sVar10 == 0) break;
              if (sVar10 == 0xffffffffffffffff) {
                bVar21 = false;
                goto LAB_00104758;
              }
              if (sVar10 == 0xfffffffffffffffe) goto joined_r0x00104b6a;
              if (((param_5 == shell_always_quoting_style) && (bVar20)) && (sVar10 != 1)) {
                pcVar16 = param_3 + uVar19 + 1;
                do {
                  if (((byte)(*pcVar16 + 0xa5U) < 0x22) &&
                     ((1 << (*pcVar16 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
                    param_5 = shell_always_quoting_style;
                    goto force_outer_quoting_style;
                  }
                  pcVar16 = pcVar16 + 1;
                } while (param_3 + uVar19 + sVar10 != pcVar16);
              }
              iVar7 = iswprint(local_4c);
              if (iVar7 == 0) {
                bVar21 = false;
              }
              uVar17 = uVar17 + sVar10;
              uVar25 = 0x10470b;
              iVar7 = mbsinit(&local_48);
            } while (iVar7 == 0);
            bVar22 = (bool)((bVar21 ^ 1U) & bVar1);
            goto LAB_00104758;
          }
          uVar25 = 0x103ea8;
          ppuVar9 = __ctype_b_loc();
          uVar17 = 1;
          bVar22 = ((*ppuVar9)[uVar15] & 0x4000) == 0;
          bVar21 = !bVar22;
          bVar22 = (bool)(bVar22 & bVar1);
          goto LAB_00103ee1;
        case 7:
          uVar15 = 7;
          bVar14 = 0x61;
          break;
        case 8:
          uVar15 = 8;
          bVar14 = 0x62;
          break;
        case 9:
          uVar15 = 9;
          bVar14 = 0x74;
          goto c_and_shell_escape;
        case 10:
          uVar15 = 10;
          bVar14 = 0x6e;
          goto c_and_shell_escape;
        case 0xb:
          uVar15 = 0xb;
          bVar14 = 0x76;
          break;
        case 0xc:
          uVar15 = 0xc;
          bVar14 = 0x66;
          break;
        case 0xd:
          uVar15 = 0xd;
          bVar14 = 0x72;
c_and_shell_escape:
          bVar23 = (bool)(param_5 == shell_always_quoting_style & bVar20);
          if (bVar23) goto LAB_00104137;
          break;
        case 0x20:
          uVar15 = 0x20;
          goto LAB_00104124;
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x5b:
        case 0x5e:
        case 0x60:
        case 0x7c:
          bVar21 = false;
LAB_00104124:
          bVar22 = param_5 == shell_always_quoting_style;
          bVar23 = bVar21;
          if ((!bVar20) || (!bVar22)) goto LAB_00103e48;
          goto LAB_00104137;
        case 0x23:
        case 0x7e:
LAB_0010411b:
          bVar22 = param_5 == shell_always_quoting_style;
          if (uVar13 == 0) goto LAB_00104124;
          goto LAB_00103e45;
        case 0x25:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5d:
        case 0x5f:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
          goto switchD_00104380_caseD_25;
        case 0x27:
switchD_00104380_caseD_27:
          bVar4 = bVar21;
          if (param_5 != shell_always_quoting_style) {
            bVar22 = false;
            uVar15 = 0x27;
            bVar23 = bVar21;
            goto LAB_00103e48;
          }
          if (!bVar20) {
            if ((param_2 == 0) || (uVar13 = 0, uVar15 = param_2, local_90 != 0)) {
              if (uVar18 < param_2) {
                param_1[uVar18] = 0x27;
              }
              if (uVar18 + 1 < param_2) {
                param_1[uVar18 + 1] = 0x5c;
              }
              uVar13 = param_2;
              uVar15 = local_90;
              if (uVar18 + 2 < param_2) {
                param_1[uVar18 + 2] = 0x27;
              }
            }
            bVar14 = 0x27;
            uVar18 = uVar18 + 3;
            param_2 = uVar13;
            local_90 = uVar15;
            bVar3 = false;
            bVar22 = false;
            goto joined_r0x00103e6b;
          }
          goto force_outer_quoting_style;
        case 0x3f:
switchD_00104380_caseD_3f:
          if (param_5 != shell_always_quoting_style) {
            if ((((param_5 == c_quoting_style) && ((param_6 & 4) != 0)) &&
                (uVar17 = uVar13 + 2, uVar17 < param_4)) && (param_3[uVar13 + 1] == '?')) {
              uVar15 = (ulong)(byte)param_3[uVar17];
              switch(param_3[uVar17]) {
              case '!':
              case '\'':
              case '(':
              case ')':
              case '-':
              case '/':
              case '<':
              case '=':
              case '>':
                goto switchD_00104ace_caseD_21;
              default:
                break;
              }
            }
            bVar22 = false;
            uVar15 = 0x3f;
            bVar23 = false;
            goto LAB_00103e48;
          }
          if (!bVar20) {
            bVar14 = 0x3f;
            bVar22 = false;
            bVar21 = false;
            goto joined_r0x00103e6b;
          }
          goto force_outer_quoting_style;
        case 0x5c:
          if (param_5 != shell_always_quoting_style) goto switchD_00103d70_caseD_5c;
          if (!bVar20) {
LAB_001043b8:
            uVar13 = uVar13 + 1;
            bVar21 = false;
            bVar14 = 0x5c;
            goto store_c;
          }
          goto force_outer_quoting_style;
        case 0x7b:
        case 0x7d:
switchD_00104380_caseD_7b:
          bVar23 = param_4 != 1;
          if (param_4 == 0xffffffffffffffff) {
            bVar23 = param_3[1] != '\0';
          }
          bVar22 = param_5 == shell_always_quoting_style;
          if (!bVar23) goto LAB_0010411b;
LAB_00103e45:
          bVar23 = false;
          goto LAB_00103e48;
        }
c_escape:
        bVar5 = bVar23;
        if (!bVar1) {
LAB_0010425b:
          bVar14 = (byte)uVar15;
          bVar23 = false;
          bVar21 = false;
          bVar22 = false;
          if (!bVar20) goto LAB_00103e68;
          goto LAB_00103d90;
        }
LAB_00104290:
        bVar21 = false;
        goto joined_r0x001042a1;
      }
      if (local_c8 != 0) {
        if ((param_4 == 0xffffffffffffffff) && (1 < local_c8)) {
          uVar25 = 0x103cdf;
          param_4 = strlen(param_3);
        }
        if (param_4 < uVar13 + local_c8) goto LAB_001044b0;
        uVar25 = 0x103d27;
        iVar7 = memcmp(__s1,local_98,local_c8);
        if (iVar7 != 0) goto LAB_001044b0;
        if (!bVar20) {
          uVar15 = (ulong)*__s1;
          switch(uVar15) {
          case 0:
            goto switchD_00103d70_caseD_0;
          default:
            goto switchD_00104380_caseD_1;
          case 7:
            goto switchD_001044d0_caseD_7;
          case 8:
            goto switchD_001044d0_caseD_8;
          case 9:
            goto switchD_00103d70_caseD_9;
          case 10:
            goto switchD_001044d0_caseD_a;
          case 0xb:
            goto switchD_001044d0_caseD_b;
          case 0xc:
            goto switchD_001044d0_caseD_c;
          case 0xd:
            goto switchD_001044d0_caseD_d;
          case 0x20:
            goto LAB_001044f9;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x5b:
          case 0x5e:
          case 0x60:
          case 0x7c:
            goto switchD_00103d70_caseD_21;
          case 0x23:
          case 0x7e:
            goto LAB_001044e1;
          case 0x25:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x5d:
          case 0x5f:
          case 0x61:
          case 0x62:
          case 99:
          case 100:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x6e:
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7a:
            goto LAB_00103d80;
          case 0x27:
            goto switchD_00104380_caseD_27;
          case 0x3f:
            goto switchD_00104380_caseD_3f;
          case 0x5c:
            goto switchD_00103d70_caseD_5c;
          case 0x7b:
          case 0x7d:
            goto switchD_00104380_caseD_7b;
          }
        }
        goto LAB_0010414e;
      }
LAB_001044b0:
      uVar15 = (ulong)*__s1;
      switch(uVar15) {
      case 0:
switchD_001044d0_caseD_0:
        if (!bVar20) {
          bVar5 = false;
switchD_00103d70_caseD_0:
          bVar24 = param_5 == shell_always_quoting_style;
          bVar3 = (bool)((bVar2 ^ 1U) & bVar24);
          if (bVar3) {
            if (uVar18 < param_2) {
              param_1[uVar18] = 0x27;
            }
            if (uVar18 + 1 < param_2) {
              param_1[uVar18 + 1] = 0x24;
            }
            if (uVar18 + 2 < param_2) {
              param_1[uVar18 + 2] = 0x27;
            }
            uVar15 = uVar18 + 3;
            bVar2 = bVar3;
            if (param_2 <= uVar18 + 3) {
              bVar14 = 0x30;
              uVar18 = uVar18 + 4;
              bVar22 = bVar3;
              bVar21 = false;
              goto joined_r0x00103e6b;
            }
LAB_0010490b:
            param_1[uVar15] = 0x5c;
            uVar18 = uVar15;
          }
          else {
            uVar15 = uVar18;
            if (uVar18 < param_2) goto LAB_0010490b;
          }
          uVar19 = uVar18 + 1;
          bVar22 = bVar21;
          if (param_5 != shell_always_quoting_style) {
            uVar15 = 0x30;
            if ((uVar13 + 1 < param_4) && ((byte)(param_3[uVar13 + 1] - 0x30U) < 10)) {
              if (uVar19 < param_2) {
                param_1[uVar19] = 0x30;
              }
              if (uVar18 + 2 < param_2) {
                param_1[uVar18 + 2] = 0x30;
              }
              uVar19 = uVar18 + 3;
              uVar15 = 0x30;
            }
            goto LAB_00104948;
          }
          bVar14 = 0x30;
          uVar18 = uVar19;
          bVar3 = bVar2;
          bVar21 = false;
          goto joined_r0x00103e6b;
        }
        bVar24 = param_5 == shell_always_quoting_style;
        goto force_outer_quoting_style;
      default:
        bVar23 = false;
        goto switchD_00104380_caseD_1;
      case 7:
switchD_001044d0_caseD_7:
        bVar14 = 0x61;
        break;
      case 8:
switchD_001044d0_caseD_8:
        bVar14 = 0x62;
        break;
      case 9:
        bVar23 = false;
switchD_00103d70_caseD_9:
        uVar15 = 9;
        bVar14 = 0x74;
        goto c_escape;
      case 10:
switchD_001044d0_caseD_a:
        bVar14 = 0x6e;
        goto LAB_00104290;
      case 0xb:
switchD_001044d0_caseD_b:
        bVar14 = 0x76;
        goto LAB_00104290;
      case 0xc:
switchD_001044d0_caseD_c:
        bVar14 = 0x66;
        break;
      case 0xd:
switchD_001044d0_caseD_d:
        bVar14 = 0x72;
        goto LAB_00104290;
      case 0x20:
        bVar5 = false;
LAB_001044f9:
        uVar15 = 0x20;
        goto LAB_00103d80;
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x5b:
      case 0x5e:
      case 0x60:
      case 0x7c:
        bVar5 = false;
switchD_00103d70_caseD_21:
        bVar22 = false;
        goto LAB_00103e45;
      case 0x23:
      case 0x7e:
        bVar5 = false;
LAB_001044e1:
        if (uVar13 == 0) {
          bVar22 = false;
          goto LAB_00103e48;
        }
        bVar23 = false;
        bVar22 = false;
        goto LAB_00103d90;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5d:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
        bVar5 = false;
LAB_00103d80:
        bVar22 = false;
        goto LAB_00103d90;
      case 0x27:
        bVar5 = false;
        goto switchD_00104380_caseD_27;
      case 0x3f:
        bVar5 = false;
        goto switchD_00104380_caseD_3f;
      case 0x5c:
        bVar23 = false;
switchD_00103d70_caseD_5c:
        if (((bool)(bVar1 & bVar20)) && (local_c8 != 0)) goto LAB_001043b8;
        uVar15 = 0x5c;
        bVar14 = 0x5c;
        goto c_escape;
      case 0x7b:
      case 0x7d:
        bVar5 = false;
        goto switchD_00104380_caseD_7b;
      }
      if (bVar20) goto LAB_001042b0;
      bVar21 = false;
      goto LAB_00103e06;
    }
    if ((uVar18 == 0) && ((bool)(bVar20 & param_5 == shell_always_quoting_style))) {
LAB_00104137:
      param_5 = shell_always_quoting_style;
force_outer_quoting_style:
      if (bVar24) {
        param_5 = shell_escape_always_quoting_style;
      }
LAB_0010414e:
      uVar13 = quotearg_buffer_restyled
                         (param_1,param_2,param_3,param_4,param_5,param_6 & 0xfffffffd,0,local_70,
                          local_78,uVar25);
      goto LAB_00104188;
    }
    bVar21 = (bool)(param_5 == shell_always_quoting_style & (bVar20 ^ 1U));
    bVar20 = (bool)(bVar20 ^ 1U);
    if ((!bVar21) || (bVar20 = bVar21, !bVar4)) {
LAB_00104bd5:
      uVar13 = uVar18;
      if (((local_98 != (char *)0x0) && (bVar20)) && (cVar11 = *local_98, cVar11 != '\0')) {
        do {
          if (uVar13 < param_2) {
            param_1[uVar13] = cVar11;
          }
          uVar13 = uVar13 + 1;
          cVar11 = local_98[uVar13 - uVar18];
        } while (cVar11 != '\0');
      }
      if (uVar13 < param_2) {
        param_1[uVar13] = 0;
      }
LAB_00104188:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar13;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (bVar6) {
      uVar13 = quotearg_buffer_restyled
                         (param_1,local_90,param_3,param_4,5,param_6,param_7,local_70,local_78,
                          uVar25);
      goto LAB_00104188;
    }
    local_64 = param_2 == 0 && local_90 != 0;
    uVar13 = local_90;
    bVar20 = bVar4;
    if (param_2 != 0 || local_90 == 0) goto LAB_00104bd5;
LAB_00104566:
    *param_1 = 0x27;
    param_2 = local_90;
    local_90 = uVar13;
LAB_00103fc9:
    bVar20 = false;
    uVar18 = 1;
    param_5 = shell_always_quoting_style;
    local_c8 = 1;
    local_98 = "\'";
  } while( true );
code_r0x0010446b:
  uVar13 = uVar13 + 1;
  goto LAB_00103c68;
switchD_00104ace_caseD_21:
  if (!bVar20) {
    if (uVar18 < param_2) {
      param_1[uVar18] = 0x3f;
    }
    if (uVar18 + 1 < param_2) {
      param_1[uVar18 + 1] = 0x22;
    }
    if (uVar18 + 2 < param_2) {
      param_1[uVar18 + 2] = 0x22;
    }
    if (uVar18 + 3 < param_2) {
      param_1[uVar18 + 3] = 0x3f;
    }
    uVar19 = uVar18 + 4;
    bVar24 = false;
    bVar22 = false;
LAB_00104948:
    bVar14 = (byte)uVar15;
    bVar23 = false;
    bVar21 = false;
    uVar13 = uVar17;
    uVar18 = uVar19;
    bVar3 = bVar2;
    if ((bool)(bVar1 ^ 1U | bVar24)) goto joined_r0x00103e6b;
    goto LAB_00103d90;
  }
  goto LAB_0010414e;
joined_r0x00104b6a:
  while ((uVar19 < param_4 && (param_3[uVar19] != '\0'))) {
    uVar17 = uVar17 + 1;
    uVar19 = uVar13 + uVar17;
  }
  bVar21 = false;
LAB_00104758:
  if (1 < uVar17) {
LAB_00104762:
    bVar24 = false;
    uVar17 = uVar17 + uVar13;
    uVar19 = uVar13;
    do {
      bVar14 = (byte)uVar15;
      if (bVar22) {
        bVar24 = param_5 == shell_always_quoting_style;
        if (bVar20) goto force_outer_quoting_style;
        bVar24 = (bool)(bVar24 & (bVar3 ^ 1U));
        if (bVar24) {
          if (uVar18 < param_2) {
            param_1[uVar18] = 0x27;
          }
          if (uVar18 + 1 < param_2) {
            param_1[uVar18 + 1] = 0x24;
          }
          if (uVar18 + 2 < param_2) {
            param_1[uVar18 + 2] = 0x27;
          }
          uVar18 = uVar18 + 3;
          bVar3 = bVar24;
        }
        if (uVar18 < param_2) {
          param_1[uVar18] = 0x5c;
        }
        if (uVar18 + 1 < param_2) {
          param_1[uVar18 + 1] = (char)(uVar15 >> 6) + '0';
        }
        if (uVar18 + 2 < param_2) {
          param_1[uVar18 + 2] = ((byte)(uVar15 >> 3) & 7) + 0x30;
        }
        uVar13 = uVar19 + 1;
        uVar18 = uVar18 + 3;
        bVar14 = (bVar14 & 7) + 0x30;
        bVar24 = bVar22;
        if (uVar17 <= uVar13) goto LAB_00103e18;
      }
      else {
        bVar2 = (bool)((bVar24 ^ 1U) & bVar3);
        if (bVar23) {
          if (uVar18 < param_2) {
            param_1[uVar18] = 0x5c;
          }
          uVar18 = uVar18 + 1;
        }
        uVar13 = uVar19 + 1;
        if (uVar17 <= uVar13) goto store_c;
        if (bVar2) {
          if (uVar18 < param_2) {
            param_1[uVar18] = 0x27;
          }
          if (uVar18 + 1 < param_2) {
            param_1[uVar18 + 1] = 0x27;
          }
          uVar18 = uVar18 + 2;
          bVar23 = false;
          bVar3 = false;
        }
        else {
          bVar23 = false;
        }
      }
      uVar19 = uVar19 + 1;
      if (uVar18 < param_2) {
        param_1[uVar18] = bVar14;
      }
      uVar15 = (ulong)(byte)param_3[uVar19];
      uVar18 = uVar18 + 1;
    } while( true );
  }
LAB_00103ee1:
  bVar5 = bVar23;
  if (bVar22) {
    bVar21 = false;
    bVar22 = bVar1;
    goto LAB_00104762;
  }
switchD_00104380_caseD_25:
  bVar22 = param_5 == shell_always_quoting_style;
  bVar23 = bVar21;
LAB_00103e48:
  bVar14 = (byte)uVar15;
  bVar22 = (bool)(bVar22 | bVar1 ^ 1U);
  if ((!bVar22) || (bVar22 = false, bVar21 = bVar23, bVar20)) {
LAB_00103d90:
    bVar14 = (byte)uVar15;
    uVar17 = uVar13;
    bVar3 = bVar2;
    bVar21 = bVar23;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar15 >> 5) * 4) >> (bVar14 & 0x1f) & 1) == 0))
    goto joined_r0x00103e6b;
  }
  else {
LAB_00103e68:
    uVar17 = uVar13;
    bVar22 = false;
joined_r0x00103e6b:
    uVar13 = uVar17;
    bVar2 = bVar3;
    if (!bVar5) {
      uVar13 = uVar17 + 1;
      bVar2 = (bool)((bVar22 ^ 1U) & bVar3);
store_c:
      if (bVar2) {
        if (uVar18 < param_2) {
          param_1[uVar18] = 0x27;
        }
        if (uVar18 + 1 < param_2) {
          param_1[uVar18 + 1] = 0x27;
        }
        uVar18 = uVar18 + 2;
        bVar3 = false;
      }
      goto LAB_00103e18;
    }
  }
joined_r0x001042a1:
  if (bVar20) {
LAB_001042b0:
    bVar24 = (bool)(bVar1 & param_5 == shell_always_quoting_style);
    goto force_outer_quoting_style;
  }
  bVar24 = (bool)((bVar2 ^ 1U) & param_5 == shell_always_quoting_style);
  if (bVar24) {
    if (uVar18 < param_2) {
      param_1[uVar18] = 0x27;
    }
    if (uVar18 + 1 < param_2) {
      param_1[uVar18 + 1] = 0x24;
    }
    if (uVar18 + 2 < param_2) {
      param_1[uVar18 + 2] = 0x27;
    }
    uVar18 = uVar18 + 3;
    bVar2 = bVar24;
  }
LAB_00103e06:
  if (uVar18 < param_2) {
    param_1[uVar18] = 0x5c;
  }
  uVar18 = uVar18 + 1;
  uVar13 = uVar13 + 1;
  bVar3 = bVar2;
LAB_00103e18:
  bVar2 = bVar3;
  if (uVar18 < param_2) {
    param_1[uVar18] = bVar14;
  }
  uVar18 = uVar18 + 1;
  if (!bVar21) {
    bVar6 = false;
  }
  goto LAB_00103c68;
}

