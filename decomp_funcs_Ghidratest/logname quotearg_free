
void quotearg_free(void)

{
  char *p;
  slotvec *p_00;
  int iVar1;
  char **ppcVar2;
  
  p_00 = slotvec;
  if (1 < nslots) {
    ppcVar2 = &slotvec[1].val;
    iVar1 = 1;
    do {
      p = *ppcVar2;
      iVar1 = iVar1 + 1;
      ppcVar2 = ppcVar2 + 2;
      rpl_free(p);
    } while (iVar1 < nslots);
  }
  if (p_00->val != slot0) {
    rpl_free(p_00->val);
    slotvec0.val = slot0;
    slotvec0.size = 0x100;
  }
  if (p_00 != &slotvec0) {
    rpl_free(p_00);
    slotvec = &slotvec0;
  }
  nslots = 1;
  return;
}

