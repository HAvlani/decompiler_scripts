
int peek_token(re_token_t *token,re_string_t *input,reg_syntax_t syntax)

{
  long lVar1;
  wint_t wVar2;
  long lVar3;
  long lVar4;
  uchar *puVar5;
  wint_t *pwVar6;
  int iVar7;
  int iVar8;
  ushort **ppuVar9;
  byte bVar10;
  wint_t *pwVar11;
  uint uVar12;
  long in_FS_OFFSET;
  uint local_5c;
  re_token_t next;
  
  lVar3 = input->cur_idx;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = 0;
  if (input->stop == lVar3 || input->stop < lVar3) {
    token->field_0x8 = 2;
    goto LAB_0011b75f;
  }
  puVar5 = input->mbs;
  iVar8 = input->mb_cur_max;
  bVar10 = puVar5[lVar3];
  token->field_0xa = token->field_0xa & 0x9f;
  *(byte *)&token->opr = bVar10;
  uVar12 = (uint)syntax;
  if (iVar8 < 2) {
    if (bVar10 == 0x5c) goto LAB_0011b7f0;
    ppuVar9 = __ctype_b_loc();
    *(uint *)&token->field_0x8 =
         ((*ppuVar9)[bVar10] >> 3 & 1 | (uint)(bVar10 == 0x5f)) << 0x16 | 1 |
         *(uint *)&token->field_0x8 & 0xffbfff00;
    if (bVar10 < 0x40) {
LAB_0011b724:
      if (bVar10 < 10) goto switchD_0011b7e4_caseD_5c;
      switch(bVar10) {
      case 10:
        iVar8 = 1;
        if ((syntax & 0x800) == 0) break;
LAB_0011b8ee:
        token->field_0x8 = 10;
        iVar8 = 1;
        break;
      default:
        goto switchD_0011b7e4_caseD_5c;
      case 0x24:
        if (((syntax & 8) == 0) && (lVar3 + 1 != input->len)) {
          input->cur_idx = lVar3 + 1;
          peek_token(&next,input,syntax);
          input->cur_idx = input->cur_idx + -1;
          iVar8 = 1;
          if (1 < (byte)(next._8_1_ - 9U)) break;
        }
        token->field_0x8 = 0xc;
        iVar8 = 1;
        *(undefined4 *)&token->opr = 0x20;
        break;
      case 0x28:
        iVar8 = 1;
        iVar7 = 1;
        if ((syntax & 0x2000) == 0) break;
        goto LAB_0011b967;
      case 0x29:
        iVar8 = 1;
        iVar7 = 1;
        if ((syntax & 0x2000) == 0) break;
        goto LAB_0011b982;
      case 0x2a:
        token->field_0x8 = 0xb;
        iVar8 = 1;
        break;
      case 0x2b:
        iVar8 = 1;
        iVar7 = 1;
        if ((syntax & 0x402) != 0) break;
        goto LAB_0011b9ab;
      case 0x2e:
        token->field_0x8 = 5;
        iVar8 = 1;
        break;
      case 0x3f:
        iVar8 = 1;
        iVar7 = 1;
        if ((syntax & 0x402) != 0) break;
        goto LAB_0011b9d4;
      }
      goto LAB_0011b75f;
    }
LAB_0011b7cb:
    switch(bVar10) {
    case 0x5b:
      token->field_0x8 = 0x14;
      iVar8 = 1;
      goto LAB_0011b75f;
    case 0x5e:
      if ((((syntax & 0x800008) != 0) || (lVar3 == 0)) ||
         ((puVar5[lVar3 + -1] == '\n' && ((syntax & 0x800) != 0)))) {
        token->field_0x8 = 0xc;
        iVar8 = 1;
        *(undefined4 *)&token->opr = 0x10;
        goto LAB_0011b75f;
      }
      break;
    case 0x7b:
      iVar8 = 1;
      iVar7 = 1;
      if ((uVar12 & 0x1200) != 0x1200) goto LAB_0011b75f;
      goto LAB_0011ba2b;
    case 0x7c:
      if ((uVar12 & 0x8400) == 0x8000) goto LAB_0011b8ee;
      break;
    case 0x7d:
      iVar8 = 1;
      iVar7 = 1;
      if ((uVar12 & 0x1200) != 0x1200) goto LAB_0011b75f;
      goto LAB_0011b8d3;
    }
switchD_0011b7e4_caseD_5c:
    iVar8 = 1;
  }
  else {
    if ((lVar3 != input->valid_len) && (input->wcs[lVar3] == 0xffffffff)) {
      *(uint *)&token->field_0x8 = *(uint *)&token->field_0x8 & 0xffdfff00 | 0x200001;
      iVar8 = 1;
      goto LAB_0011b75f;
    }
    if (bVar10 != 0x5c) {
      pwVar6 = input->wcs;
      token->field_0x8 = 1;
      wVar2 = pwVar6[lVar3];
      iVar8 = iswalnum(wVar2);
      token->field_0xa = token->field_0xa & 0xbf | (iVar8 != 0 || wVar2 == 0x5f) << 6;
      if (0x3f < bVar10) goto LAB_0011b7cb;
      goto LAB_0011b724;
    }
LAB_0011b7f0:
    lVar1 = lVar3 + 1;
    if (input->len <= lVar1) {
      token->field_0x8 = 0x24;
      iVar8 = 1;
      goto LAB_0011b75f;
    }
    if (input->mbs_allocated == '\0') {
LAB_0011b82f:
      local_5c = (uint)puVar5[lVar3 + 1];
LAB_0011b83b:
      bVar10 = (byte)local_5c;
      *(byte *)&token->opr = bVar10;
      token->field_0x8 = 1;
      if (1 < iVar8) {
        pwVar11 = input->wcs + lVar1;
        goto LAB_0011b854;
      }
      ppuVar9 = __ctype_b_loc();
      token->field_0xa =
           (byte)(((*ppuVar9)[local_5c] >> 3 & 1 | (uint)(bVar10 == 0x5f)) << 6) |
           token->field_0xa & 0xbf;
    }
    else {
      if (iVar8 < 2) {
LAB_0011bcdb:
        if (input->offsets_needed == '\0') {
          local_5c = (uint)input->raw_mbs[input->raw_mbs_idx + lVar1];
        }
        else {
          bVar10 = input->raw_mbs[input->offsets[lVar1] + input->raw_mbs_idx];
          local_5c = (uint)bVar10;
          if ((bVar10 & 0x80) != 0) goto LAB_0011b82f;
        }
        goto LAB_0011b83b;
      }
      pwVar11 = input->wcs + lVar1;
      if ((*pwVar11 != 0xffffffff) &&
         ((input->valid_len == lVar3 + 2 || (input->wcs[lVar3 + 2] != 0xffffffff))))
      goto LAB_0011bcdb;
      bVar10 = puVar5[lVar3 + 1];
      token->field_0x8 = 1;
      *(byte *)&token->opr = bVar10;
      local_5c = (uint)bVar10;
LAB_0011b854:
      wVar2 = *pwVar11;
      iVar8 = iswalnum(wVar2);
      token->field_0xa = token->field_0xa & 0xbf | (iVar8 != 0 || wVar2 == 0x5f) << 6;
    }
    switch(bVar10) {
    case 0x27:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0xc;
        *(undefined4 *)&token->opr = 0x80;
      }
      break;
    case 0x28:
      iVar8 = 2;
      iVar7 = 2;
      if ((syntax & 0x2000) != 0) break;
LAB_0011b967:
      iVar8 = iVar7;
      token->field_0x8 = 8;
      break;
    case 0x29:
      iVar8 = 2;
      iVar7 = 2;
      if ((syntax & 0x2000) != 0) break;
LAB_0011b982:
      iVar8 = iVar7;
      token->field_0x8 = 9;
      break;
    default:
      iVar8 = 2;
      break;
    case 0x2b:
      iVar8 = 2;
      iVar7 = 2;
      if ((uVar12 & 0x402) != 2) break;
LAB_0011b9ab:
      iVar8 = iVar7;
      token->field_0x8 = 0x12;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      iVar8 = 2;
      if ((syntax & 0x4000) == 0) {
        token->field_0x8 = 4;
        token->opr = (long)(int)(local_5c - 0x31);
      }
      break;
    case 0x3c:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0xc;
        *(undefined4 *)&token->opr = 6;
      }
      break;
    case 0x3e:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0xc;
        *(undefined4 *)&token->opr = 9;
      }
      break;
    case 0x3f:
      iVar8 = 2;
      iVar7 = 2;
      if ((uVar12 & 0x402) != 2) break;
LAB_0011b9d4:
      iVar8 = iVar7;
      token->field_0x8 = 0x13;
      break;
    case 0x42:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0xc;
        *(undefined4 *)&token->opr = 0x200;
      }
      break;
    case 0x53:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0x23;
      }
      break;
    case 0x57:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0x21;
      }
      break;
    case 0x60:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0xc;
        *(undefined4 *)&token->opr = 0x40;
      }
      break;
    case 0x62:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0xc;
        *(undefined4 *)&token->opr = 0x100;
      }
      break;
    case 0x73:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0x22;
      }
      break;
    case 0x77:
      iVar8 = 2;
      if ((syntax & 0x80000) == 0) {
        token->field_0x8 = 0x20;
      }
      break;
    case 0x7b:
      iVar8 = 2;
      iVar7 = 2;
      if ((uVar12 & 0x1200) != 0x200) break;
LAB_0011ba2b:
      iVar8 = iVar7;
      token->field_0x8 = 0x17;
      break;
    case 0x7c:
      iVar8 = 2;
      if ((syntax & 0x8400) == 0) {
        token->field_0x8 = 10;
      }
      break;
    case 0x7d:
      iVar8 = 2;
      iVar7 = 2;
      if ((uVar12 & 0x1200) != 0x200) break;
LAB_0011b8d3:
      iVar8 = iVar7;
      token->field_0x8 = 0x18;
    }
  }
LAB_0011b75f:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}

