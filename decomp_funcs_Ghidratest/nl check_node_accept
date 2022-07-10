
_Bool check_node_accept(re_match_context_t *mctx,re_token_t *node,Idx idx)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  _Bool _Var4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  bVar1 = (mctx->input).mbs[idx];
  bVar2 = node->field_0x8;
  if (bVar2 != 5) {
    if (bVar2 < 6) {
      if (bVar2 == 1) {
        if (*(byte *)&node->opr != bVar1) {
          return false;
        }
      }
      else {
        if (bVar2 != 3) {
          return false;
        }
        uVar6 = *(ulong *)(node->opr + ((long)(ulong)bVar1 >> 6) * 8) >> (bVar1 & 0x3f);
        if ((uVar6 & 1) == 0) {
          return (_Bool)((byte)uVar6 & 1);
        }
      }
      goto LAB_0010a307;
    }
    if (bVar2 != 7) {
      return false;
    }
    if ((char)bVar1 < '\0') {
      return false;
    }
  }
  if (bVar1 == 10) {
    if ((*(byte *)&mctx->dfa->syntax & 0x40) == 0) {
      return false;
    }
  }
  else if ((bVar1 == 0) && ((*(byte *)&mctx->dfa->syntax & 0x80) != 0)) {
    return false;
  }
LAB_0010a307:
  uVar3 = *(uint *)&node->field_0x8;
  _Var4 = true;
  if ((uVar3 & 0x3ff00) != 0) {
    uVar7 = uVar3 >> 8;
    uVar5 = re_string_context_at(&mctx->input,idx,mctx->eflags);
    if ((uVar7 & 4) == 0) {
      if (((uVar7 & 8) != 0) && ((uVar5 & 1) != 0)) {
        return false;
      }
    }
    else {
      if ((uVar5 & 1) == 0) {
        return false;
      }
      if ((uVar7 & 8) != 0) {
        return false;
      }
    }
    if (((uVar3 & 0x2000) == 0) || (_Var4 = false, (uVar5 & 2) != 0)) {
      _Var4 = true;
      if ((uVar3 & 0x8000) != 0) {
        _Var4 = (_Bool)((byte)(uVar5 >> 3) & 1);
      }
    }
  }
  return _Var4;
}

