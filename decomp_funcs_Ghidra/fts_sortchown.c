
FTSENT * fts_sort(FTS *sp,FTSENT *head,size_t nitems)

{
  ulong uVar1;
  _ftsent **pp_Var2;
  anon_subr_int__ftsent_ptr_ptr__ftsent_ptr_ptr_for_fts_compar *__compar;
  FTSENT **ppFVar3;
  FTSENT *pFVar4;
  long lVar5;
  FTSENT **ppFVar6;
  FTSENT *pFVar7;
  
  __compar = sp->fts_compar;
  ppFVar3 = sp->fts_array;
  if (nitems <= sp->fts_nitems) {
LAB_00104935:
    ppFVar6 = ppFVar3;
    if (head != (FTSENT *)0x0) {
      do {
        *ppFVar6 = head;
        head = head->fts_link;
        ppFVar6 = ppFVar6 + 1;
      } while (head != (_ftsent *)0x0);
    }
    qsort(ppFVar3,nitems,8,(__compar_fn_t)__compar);
    ppFVar3 = sp->fts_array;
    pFVar7 = *ppFVar3;
    pFVar4 = pFVar7;
    lVar5 = nitems - 1;
    ppFVar6 = ppFVar3;
    if (lVar5 != 0) {
      while( true ) {
        pp_Var2 = ppFVar6 + 1;
        ppFVar6 = ppFVar6 + 1;
        pFVar7->fts_link = *pp_Var2;
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) break;
        pFVar7 = *ppFVar6;
      }
      pFVar7 = ppFVar3[nitems - 1];
    }
    pFVar7->fts_link = (_ftsent *)0x0;
    return pFVar4;
  }
  uVar1 = nitems + 0x28;
  sp->fts_nitems = uVar1;
  if (uVar1 < 0x2000000000000000) {
    ppFVar3 = (FTSENT **)realloc(ppFVar3,uVar1 * 8);
    if (ppFVar3 != (FTSENT **)0x0) {
      sp->fts_array = ppFVar3;
      goto LAB_00104935;
    }
    ppFVar3 = sp->fts_array;
  }
  rpl_free(ppFVar3);
  sp->fts_array = (_ftsent **)0x0;
  sp->fts_nitems = 0;
  return head;
}

