
void match_ctx_clean(re_match_context_t *mctx)

{
  re_sub_match_top_t *p;
  re_sub_match_last_t *p_00;
  long lVar1;
  long lVar2;
  
  if (0 < mctx->nsub_tops) {
    lVar2 = 0;
    do {
      p = mctx->sub_tops[lVar2];
      if (0 < p->nlasts) {
        lVar1 = 0;
        do {
          p_00 = p->lasts[lVar1];
          lVar1 = lVar1 + 1;
          rpl_free((p_00->path).array);
          rpl_free(p_00);
        } while (p->nlasts != lVar1 && lVar1 <= p->nlasts);
      }
      rpl_free(p->lasts);
      if (p->path != (state_array_t *)0x0) {
        rpl_free(p->path->array);
        rpl_free(p->path);
      }
      lVar2 = lVar2 + 1;
      rpl_free(p);
    } while (mctx->nsub_tops != lVar2 && lVar2 <= mctx->nsub_tops);
  }
  mctx->nsub_tops = 0;
  mctx->nbkref_ents = 0;
  return;
}

