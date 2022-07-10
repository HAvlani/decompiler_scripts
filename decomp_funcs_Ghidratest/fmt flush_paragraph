
void flush_paragraph(void)

{
  WORD *pWVar1;
  char *pcVar2;
  long lVar3;
  WORD *pWVar4;
  WORD *pWVar5;
  long lVar6;
  char *pcVar7;
  WORD *finish;
  COST CVar8;
  
  pWVar1 = word_limit;
  if (word_limit == unused_word_type) {
    fwrite_unlocked(parabuf,1,(size_t)(wptr + -0x115d80),stdout);
    wptr = parabuf;
    return;
  }
  fmt_paragraph();
  finish = pWVar1;
  if (pWVar1 != unused_word_type[0].next_break) {
    lVar3 = 0x7fffffffffffffff;
    pWVar4 = unused_word_type[0].next_break;
    CVar8 = (unused_word_type[0].next_break)->best_cost;
    do {
      pWVar5 = pWVar4->next_break;
      lVar6 = CVar8 - pWVar5->best_cost;
      if (lVar6 < lVar3) {
        lVar3 = lVar6;
        finish = pWVar4;
      }
      if (lVar3 < 0x7ffffffffffffff7) {
        lVar3 = lVar3 + 9;
      }
      pWVar4 = pWVar5;
      CVar8 = pWVar5->best_cost;
    } while (pWVar1 != pWVar5);
  }
  put_paragraph(finish);
  pcVar2 = wptr;
  __memmove_chk(parabuf,finish->text,(long)wptr - (long)finish->text,5000);
  pWVar1 = word_limit;
  pcVar7 = finish->text;
  lVar3 = (long)((int)pcVar7 + -0x115d80);
  wptr = pcVar2 + -lVar3;
  pWVar4 = finish;
  if (finish <= word_limit) {
    while( true ) {
      pWVar5 = pWVar4 + 1;
      pWVar4->text = pcVar7 + -lVar3;
      if (pWVar1 < pWVar5) break;
      pcVar7 = pWVar5->text;
      pWVar4 = pWVar5;
    }
  }
  __memmove_chk(unused_word_type,finish,(long)pWVar1 + (0x28 - (long)finish),40000);
  word_limit = (WORD *)((long)pWVar1 - (long)&finish[-0x6b3b].best_cost);
  return;
}

