
void free_dfa_content(re_dfa_t *dfa)

{
  re_dfastate_t **pprVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  re_token_t *prVar5;
  re_state_table_entry *prVar6;
  
  prVar5 = dfa->nodes;
  if ((prVar5 != (re_token_t *)0x0) && (dfa->nodes_len != 0)) {
    uVar3 = 0;
    while( true ) {
      uVar2 = uVar3 + 1;
      free_token(prVar5 + uVar3);
      if (dfa->nodes_len < uVar2 || dfa->nodes_len == uVar2) break;
      prVar5 = dfa->nodes;
      uVar3 = uVar2;
    }
  }
  uVar3 = 0;
  rpl_free(dfa->nexts);
  if (dfa->nodes_len != 0) {
    do {
      if (dfa->eclosures != (re_node_set *)0x0) {
        rpl_free(dfa->eclosures[uVar3].elems);
      }
      if (dfa->inveclosures != (re_node_set *)0x0) {
        rpl_free(dfa->inveclosures[uVar3].elems);
      }
      if (dfa->edests != (re_node_set *)0x0) {
        rpl_free(dfa->edests[uVar3].elems);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= dfa->nodes_len && dfa->nodes_len != uVar3);
  }
  uVar3 = 0;
  rpl_free(dfa->edests);
  rpl_free(dfa->eclosures);
  rpl_free(dfa->inveclosures);
  rpl_free(dfa->nodes);
  prVar6 = dfa->state_table;
  if (prVar6 != (re_state_table_entry *)0x0) {
    while( true ) {
      lVar4 = 0;
      prVar6 = prVar6 + uVar3;
      if (0 < prVar6->num) {
        do {
          pprVar1 = prVar6->array + lVar4;
          lVar4 = lVar4 + 1;
          free_state(*pprVar1);
        } while (prVar6->num != lVar4 && lVar4 <= prVar6->num);
      }
      uVar3 = uVar3 + 1;
      rpl_free(prVar6->array);
      if (dfa->state_hash_mask < uVar3) break;
      prVar6 = dfa->state_table;
    }
    prVar6 = dfa->state_table;
  }
  rpl_free(prVar6);
  if (dfa->sb_char != utf8_sb_map) {
    rpl_free(dfa->sb_char);
  }
  rpl_free(dfa->subexp_map);
  rpl_free(dfa);
  return;
}

