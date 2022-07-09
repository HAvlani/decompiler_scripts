
int rpl_re_compile_fastmap(re_pattern_buffer *bufp)

{
  re_dfa_t *prVar1;
  ulong uVar2;
  re_dfastate_t *prVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)bufp->fastmap;
  prVar1 = bufp->buffer;
  *puVar4 = 0;
  puVar4[0x1f] = 0;
  uVar2 = (ulong)(((int)puVar4 - (int)(undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) +
                  0x100U >> 3);
  puVar4 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  re_compile_fastmap_iter();
  prVar3 = prVar1->init_state_word;
  if (prVar1->init_state != prVar3) {
    re_compile_fastmap_iter();
    prVar3 = prVar1->init_state;
  }
  if (prVar1->init_state_nl != prVar3) {
    re_compile_fastmap_iter();
    prVar3 = prVar1->init_state;
  }
  if (prVar1->init_state_begbuf != prVar3) {
    re_compile_fastmap_iter();
  }
  bufp->field_0x38 = bufp->field_0x38 | 8;
  return 0;
}

