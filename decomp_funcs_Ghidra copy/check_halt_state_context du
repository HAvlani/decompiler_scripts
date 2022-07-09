
Idx check_halt_state_context(re_match_context_t *mctx,re_dfastate_t *state,Idx idx)

{
  uint uVar1;
  long lVar2;
  re_token_t *prVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar6 = re_string_context_at(&mctx->input,idx,mctx->eflags);
  lVar2 = (state->nodes).nelem;
  if (0 < lVar2) {
    lVar8 = 0;
    prVar3 = mctx->dfa->nodes;
    do {
      lVar4 = (state->nodes).elems[lVar8];
      uVar1 = *(uint *)&prVar3[lVar4].field_0x8;
      uVar7 = uVar1 >> 8;
      if (prVar3[lVar4].field_0x8 == '\x02') {
        if ((uVar1 & 0x3ff00) == 0) {
          return lVar4;
        }
        if ((uVar7 & 4) == 0) {
          uVar5 = uVar6 & 1;
          if ((uVar7 & 8) != 0) goto joined_r0x00116000;
LAB_00115fd5:
          if ((((uVar1 & 0x2000) == 0) || ((uVar6 & 2) != 0)) &&
             (((uVar1 & 0x8000) == 0 || ((uVar6 & 8) != 0)))) {
            return lVar4;
          }
        }
        else if ((uVar6 & 1) != 0) {
          uVar5 = uVar7 & 8;
joined_r0x00116000:
          if (uVar5 == 0) goto LAB_00115fd5;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar2);
  }
  return 0;
}

