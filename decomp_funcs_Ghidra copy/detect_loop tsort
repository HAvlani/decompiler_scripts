
_Bool detect_loop(item *k)

{
  size_t *psVar1;
  item *piVar2;
  successor *psVar3;
  successor **ppsVar4;
  
  if (k->count == 0) {
    return false;
  }
  if (loop == (item *)0x0) {
    loop = k;
    return false;
  }
  psVar3 = k->top;
  ppsVar4 = &k->top;
  if (psVar3 != (successor *)0x0) {
    while (loop != psVar3->suc) {
      ppsVar4 = &psVar3->next;
      psVar3 = psVar3->next;
      if (psVar3 == (successor *)0x0) {
        return false;
      }
    }
    if (k->qlink != (item *)0x0) {
      do {
        piVar2 = loop->qlink;
        error(0,0,"%s",loop->str);
        if (k == loop) {
          psVar3 = (*ppsVar4)->next;
          psVar1 = &(*ppsVar4)->suc->count;
          *psVar1 = *psVar1 - 1;
          *ppsVar4 = psVar3;
          do {
            piVar2 = loop->qlink;
            loop->qlink = (item *)0x0;
            loop = piVar2;
          } while (piVar2 != (item *)0x0);
          loop = (item *)0x0;
          return true;
        }
        loop->qlink = (item *)0x0;
        loop = piVar2;
      } while (piVar2 != (item *)0x0);
      return true;
    }
    k->qlink = loop;
    loop = k;
  }
  return false;
}

