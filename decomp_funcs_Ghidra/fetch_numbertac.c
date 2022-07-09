
Idx fetch_number(re_string_t *input,re_token_t *token,reg_syntax_t syntax)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = -1;
  while( true ) {
    iVar3 = peek_token(token,input,syntax);
    bVar1 = *(byte *)&token->opr;
    input->cur_idx = input->cur_idx + (long)iVar3;
    cVar2 = token->field_0x8;
    if (cVar2 == '\x02') {
      return -2;
    }
    if (bVar1 == 0x2c) break;
    if (cVar2 == '\x18') {
      return lVar4;
    }
    if (((cVar2 == '\x01') && ((byte)(bVar1 - 0x30) < 10)) && (lVar4 != -2)) {
      if (lVar4 == -1) {
        lVar4 = (long)(int)(bVar1 - 0x30);
      }
      else {
        lVar4 = (ulong)bVar1 + lVar4 * 10;
        if (0x8030 < lVar4) {
          lVar4 = 0x8030;
        }
        lVar4 = lVar4 + -0x30;
      }
    }
    else {
      lVar4 = -2;
    }
  }
  return lVar4;
}

