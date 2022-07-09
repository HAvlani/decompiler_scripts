
Idx re_dfa_add_node(re_dfa_t *dfa,re_token_t token)

{
  ulong uVar1;
  re_token_t *prVar2;
  Idx *pIVar3;
  Idx *pIVar4;
  re_node_set *prVar5;
  re_node_set *prVar6;
  size_t sVar7;
  undefined8 in_RDX;
  undefined8 in_RSI;
  ulong uVar8;
  bool bVar9;
  
  uVar8 = dfa->nodes_len;
  uVar1 = dfa->nodes_alloc;
  if (uVar8 < uVar1) {
LAB_00111618:
    prVar2 = dfa->nodes + uVar8;
    bVar9 = (char)in_RDX == '\x06';
    *(undefined8 *)&prVar2->field_0x8 = in_RDX;
    prVar2->opr = in_RSI;
    *(uint *)&prVar2->field_0x8 = (uint)in_RDX & 0xfffc00ff;
    if ((char)in_RDX == '\x05') {
      bVar9 = 1 < dfa->mb_cur_max;
    }
    prVar2->field_0xa = prVar2->field_0xa & 0xef | bVar9 << 4;
    dfa->nexts[uVar8] = -1;
    sVar7 = dfa->nodes_len;
    prVar5 = dfa->edests;
    prVar5[sVar7].elems = (Idx *)0x0;
    *(undefined (*) [16])(prVar5 + sVar7) = (undefined  [16])0x0;
    sVar7 = dfa->nodes_len;
    prVar5 = dfa->eclosures;
    prVar5[sVar7].elems = (Idx *)0x0;
    *(undefined (*) [16])(prVar5 + sVar7) = (undefined  [16])0x0;
    sVar7 = dfa->nodes_len;
    dfa->nodes_len = sVar7 + 1;
  }
  else {
    if (uVar1 * 2 < 0xaaaaaaaaaaaaaab) {
      prVar2 = (re_token_t *)realloc(dfa->nodes,uVar1 << 5);
      if (prVar2 != (re_token_t *)0x0) {
        dfa->nodes_alloc = uVar1 * 2;
        dfa->nodes = prVar2;
        pIVar3 = (Idx *)realloc(dfa->nexts,uVar1 << 4);
        if (pIVar3 != (Idx *)0x0) {
          dfa->nexts = pIVar3;
        }
        pIVar4 = (Idx *)realloc(dfa->org_indices,uVar1 << 4);
        if (pIVar4 != (Idx *)0x0) {
          dfa->org_indices = pIVar4;
        }
        prVar5 = (re_node_set *)realloc(dfa->edests,uVar1 * 0x30);
        if (prVar5 != (re_node_set *)0x0) {
          dfa->edests = prVar5;
        }
        prVar6 = (re_node_set *)realloc(dfa->eclosures,uVar1 * 0x30);
        if ((((prVar6 != (re_node_set *)0x0) && (dfa->eclosures = prVar6, pIVar3 != (Idx *)0x0)) &&
            (pIVar4 != (Idx *)0x0)) && (prVar5 != (re_node_set *)0x0)) {
          uVar8 = dfa->nodes_len;
          goto LAB_00111618;
        }
      }
    }
    sVar7 = 0xffffffffffffffff;
  }
  return sVar7;
}

