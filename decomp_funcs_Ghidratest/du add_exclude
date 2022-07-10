
void add_exclude(exclude *ex,char *pattern,int options)

{
  int *piVar1;
  exclude_segment *peVar2;
  pattern_buffer *ppVar3;
  _Bool _Var4;
  char cVar5;
  int iVar6;
  exclude_segment *peVar7;
  size_t __n;
  char *pcVar8;
  Hash_table *pHVar9;
  char *entry;
  void *pa;
  pattern_buffer *ppVar10;
  code *comparator;
  code *hasher;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  uint cflags;
  long lVar14;
  bool bVar15;
  
  peVar7 = ex->head;
  if (((options & 0x18000000U) == 0) ||
     (_Var4 = fnmatch_pattern_has_wildcards(pattern,options), _Var4 == false)) {
    if ((peVar7 == (exclude_segment *)0x0) ||
       ((peVar7->type != exclude_hash || (((peVar7->options ^ options) & 0x60000018U) != 0)))) {
      peVar7 = (exclude_segment *)xzalloc(0x28);
      comparator = string_compare_ci;
      peVar7->type = exclude_hash;
      peVar7->options = options;
      bVar15 = (options & 0x10U) == 0;
      if (bVar15) {
        comparator = string_compare;
      }
      hasher = string_hasher_ci;
      if (bVar15) {
        hasher = string_hasher;
      }
      pHVar9 = hash_initialize(0,(Hash_tuning *)0x0,hasher,comparator,string_free);
      *(Hash_table **)&peVar7->v = pHVar9;
      peVar2 = ex->head;
      ex->head = peVar7;
      peVar7->next = peVar2;
    }
    entry = xstrdup(pattern);
    pcVar8 = entry;
    pcVar11 = entry;
    if ((options & 0x10000002U) == 0x10000000) {
      do {
        cVar5 = *pcVar11;
        pcVar13 = pcVar11 + 1;
        if (cVar5 == '\\') {
          if (pcVar11[1] != '\0') {
            cVar5 = pcVar11[1];
            pcVar13 = pcVar11 + 2;
            goto LAB_00106ea0;
          }
          *pcVar8 = '\\';
        }
        else {
LAB_00106ea0:
          *pcVar8 = cVar5;
          if (cVar5 == '\0') break;
        }
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar13;
      } while( true );
    }
    pcVar8 = (char *)hash_insert(*(Hash_table **)&peVar7->v,entry);
    if (entry != pcVar8) {
      rpl_free(entry);
      return;
    }
  }
  else {
    if (((peVar7 == (exclude_segment *)0x0) || (peVar7->type != exclude_pattern)) ||
       (((peVar7->options ^ options) & 0x20000000U) != 0)) {
      peVar7 = (exclude_segment *)xzalloc(0x28);
      peVar7->type = exclude_pattern;
      peVar7->options = options;
      peVar2 = ex->head;
      ex->head = peVar7;
      peVar7->next = peVar2;
    }
    lVar14 = *(long *)&(peVar7->v).field_0x10;
    pa = *(void **)&peVar7->v;
    if (lVar14 == *(long *)&(peVar7->v).field_0x8) {
      pa = xpalloc(pa,(idx_t *)&(peVar7->v).field_0x8,1,-1,0x48);
      lVar14 = *(long *)&(peVar7->v).field_0x10;
      *(void **)&peVar7->v = pa;
    }
    *(long *)&(peVar7->v).field_0x10 = lVar14 + 1;
    piVar1 = (int *)((long)pa + lVar14 * 0x48);
    *piVar1 = options;
    if ((options & 0x8000000U) == 0) {
      if ((options & 0x4000000U) != 0) {
        pattern = xstrdup(pattern);
        ppVar10 = (pattern_buffer *)xmalloc(0x10);
        ppVar3 = ex->patbuf;
        ppVar10->base = pattern;
        ppVar10->next = ppVar3;
        ex->patbuf = ppVar10;
      }
      *(char **)(piVar1 + 2) = pattern;
      return;
    }
    cflags = options >> 3 & 2U | 9;
    if ((options & 8U) == 0) {
      iVar6 = rpl_regcomp((regex_t *)(piVar1 + 2),pattern,cflags);
LAB_00106d98:
      if (iVar6 == 0) {
        return;
      }
      lVar14 = *(long *)&(peVar7->v).field_0x10 + -1;
    }
    else {
      for (__n = strlen(pattern); __n != 0; __n = __n - 1) {
        if (pattern[__n - 1] != '/') {
          pcVar8 = (char *)ximalloc(__n + 7);
          memcpy(pcVar8,pattern,__n);
          puVar12 = (undefined4 *)(pcVar8 + __n);
          *puVar12 = 0x2a2e2f28;
          *(undefined2 *)(puVar12 + 1) = 0x3f29;
          *(undefined *)((long)puVar12 + 6) = 0;
          iVar6 = rpl_regcomp((regex_t *)(piVar1 + 2),pcVar8,cflags);
          rpl_free(pcVar8);
          goto LAB_00106d98;
        }
      }
    }
    *(long *)&(peVar7->v).field_0x10 = lVar14;
  }
  return;
}

