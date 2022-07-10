
void mp_factor_insert(mp_factors *factors,__mpz_struct *prime)

{
  mpz_t *p;
  int iVar1;
  ulong *puVar2;
  long lVar3;
  __mpz_struct *p_Var4;
  long lVar5;
  ulong local_60;
  mpz_t *local_58;
  long local_50;
  ulong local_48;
  
  local_48 = factors->nfactors;
  p = factors->p;
  puVar2 = factors->e;
  lVar5 = local_48 - 1;
  if (lVar5 < 0) {
    local_58 = (mpz_t *)xrealloc(p,(local_48 + 1) * 0x10);
    puVar2 = (ulong *)xrealloc(puVar2,(local_48 + 1) * 8);
    p_Var4 = (__mpz_struct *)local_58[local_48];
    mpz_init(p_Var4);
    local_60 = local_48;
  }
  else {
    p_Var4 = (__mpz_struct *)p[lVar5];
    lVar3 = lVar5;
    do {
      iVar1 = mpz_cmp(p_Var4,prime);
      if (iVar1 < 1) {
        iVar1 = mpz_cmp(p_Var4,prime);
        if (iVar1 == 0) {
          puVar2[lVar3] = puVar2[lVar3] + 1;
          return;
        }
        local_58 = (mpz_t *)xrealloc(p,(local_48 + 1) * 0x10);
        puVar2 = (ulong *)xrealloc(puVar2,(local_48 + 1) * 8);
        mpz_init((__mpz_struct *)local_58[local_48]);
        local_60 = lVar3 + 1;
        local_50 = local_60 * 0x10;
        p_Var4 = (__mpz_struct *)local_58[local_48];
        if (lVar5 <= lVar3) goto LAB_001033e1;
        goto LAB_001033c0;
      }
      lVar3 = lVar3 + -1;
      p_Var4 = p_Var4 + -1;
    } while (lVar3 != -1);
    local_58 = (mpz_t *)xrealloc(p,(local_48 + 1) * 0x10);
    puVar2 = (ulong *)xrealloc(puVar2,(local_48 + 1) * 8);
    p_Var4 = (__mpz_struct *)local_58[local_48];
    mpz_init(p_Var4);
    local_50 = 0;
    local_60 = 0;
LAB_001033c0:
    do {
      mpz_set(p_Var4,p_Var4 + -1);
      puVar2[lVar5 + 1] = puVar2[lVar5];
      lVar5 = lVar5 + -1;
      p_Var4 = p_Var4 + -1;
    } while (lVar3 < lVar5);
LAB_001033e1:
    p_Var4 = (__mpz_struct *)((long)&(*local_58)[0]._mp_alloc + local_50);
  }
  local_48 = local_48 + 1;
  mpz_set(p_Var4,prime);
  puVar2[local_60] = 1;
  factors->e = puVar2;
  factors->p = local_58;
  factors->nfactors = local_48;
  return;
}

