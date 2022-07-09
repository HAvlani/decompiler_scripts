
void free_exclude(exclude *ex)

{
  uint *puVar1;
  exclude_segment *peVar2;
  pattern_buffer *ppVar3;
  pattern_buffer *p;
  long lVar4;
  void *p_00;
  exclude_segment *p_01;
  
  peVar2 = ex->head;
  while (p_01 = peVar2, peVar2 != (exclude_segment *)0x0) {
    while( true ) {
      peVar2 = p_01->next;
      if (p_01->type == exclude_hash) break;
      if (p_01->type == exclude_pattern) {
        p_00 = *(void **)&p_01->v;
        if (0 < *(long *)&(p_01->v).field_0x10) {
          lVar4 = 0;
          do {
            while (puVar1 = (uint *)((long)p_00 + lVar4 * 0x48), (*puVar1 & 0x8000000) == 0) {
              lVar4 = lVar4 + 1;
              if (*(long *)&(p_01->v).field_0x10 <= lVar4) goto LAB_00106991;
            }
            lVar4 = lVar4 + 1;
            rpl_regfree((regex_t *)(puVar1 + 2));
            p_00 = *(void **)&p_01->v;
          } while (lVar4 < *(long *)&(p_01->v).field_0x10);
        }
LAB_00106991:
        rpl_free(p_00);
      }
      rpl_free(p_01);
      p_01 = peVar2;
      if (peVar2 == (exclude_segment *)0x0) goto LAB_001069a6;
    }
    hash_free(*(Hash_table **)&p_01->v);
    rpl_free(p_01);
  }
LAB_001069a6:
  p = ex->patbuf;
  while (p != (pattern_buffer *)0x0) {
    ppVar3 = p->next;
    rpl_free(p->base);
    rpl_free(p);
    p = ppVar3;
  }
  rpl_free(ex);
  return;
}

