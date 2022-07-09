
int peek_token_bracket(re_token_t *token,re_string_t *input,reg_syntax_t syntax)

{
  uchar uVar1;
  int iVar2;
  long lVar3;
  uchar *puVar4;
  
  lVar3 = input->cur_idx;
  if (input->stop == lVar3 || input->stop < lVar3) {
    token->field_0x8 = 2;
    return 0;
  }
  puVar4 = input->mbs;
  iVar2 = input->mb_cur_max;
  uVar1 = puVar4[lVar3];
  *(uchar *)&token->opr = uVar1;
  if (((iVar2 < 2) || (lVar3 == input->valid_len)) || (input->wcs[lVar3] != 0xffffffff)) {
    if (uVar1 == '\\') {
      if (((syntax & 1) != 0) && (lVar3 + 1 < input->len)) {
        input->cur_idx = lVar3 + 1;
        uVar1 = puVar4[lVar3 + 1];
        token->field_0x8 = 1;
        *(uchar *)&token->opr = uVar1;
        return 1;
      }
    }
    else {
      if (uVar1 == '[') {
        if (lVar3 + 1 < input->len) {
          uVar1 = puVar4[lVar3 + 1];
          *(uchar *)&token->opr = uVar1;
          if (uVar1 == ':') {
            if ((syntax & 4) != 0) {
              token->field_0x8 = 0x1e;
              return 2;
            }
          }
          else {
            if (uVar1 == '=') {
              token->field_0x8 = 0x1c;
              return 2;
            }
            if (uVar1 == '.') {
              token->field_0x8 = 0x1a;
              return 2;
            }
          }
        }
        token->field_0x8 = 1;
        *(undefined *)&token->opr = 0x5b;
        return 1;
      }
      if (uVar1 == ']') {
        token->field_0x8 = 0x15;
        return 1;
      }
      if (uVar1 == '^') {
        token->field_0x8 = 0x19;
        return 1;
      }
      if (uVar1 == '-') {
        token->field_0x8 = 0x16;
        return 1;
      }
    }
  }
  token->field_0x8 = 1;
  return 1;
}

