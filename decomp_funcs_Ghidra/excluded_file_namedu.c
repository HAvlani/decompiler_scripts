
_Bool excluded_file_name(exclude *ex,char *f)

{
  exclude_type eVar1;
  uint uVar2;
  exclude_segment *peVar3;
  Hash_table *table;
  exclude_segment *peVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  char *pcVar10;
  size_t sVar11;
  char *__dest;
  byte bVar12;
  regex_t *preg;
  long lVar13;
  
  peVar3 = ex->head;
  if (peVar3 == (exclude_segment *)0x0) {
    return false;
  }
  eVar1 = peVar3->type;
  __dest = (char *)0x0;
  while( true ) {
    if (eVar1 == exclude_hash) {
      if (__dest == (char *)0x0) {
        sVar11 = strlen(f);
        __dest = (char *)xmalloc(sVar11 + 1);
      }
      uVar2 = peVar3->options;
      table = *(Hash_table **)&peVar3->v;
      pcVar10 = f;
      while( true ) {
        strcpy(__dest,pcVar10);
        pvVar8 = hash_lookup(table,__dest);
        while( true ) {
          if (pvVar8 != (void *)0x0) goto LAB_00106b58;
          if (((uVar2 & 8) == 0) || (pcVar9 = strrchr(__dest,0x2f), pcVar9 == (char *)0x0)) break;
          *pcVar9 = '\0';
          pvVar8 = hash_lookup(table,__dest);
        }
        if (((uVar2 & 0x40000000) != 0) || (pcVar10 = strchr(pcVar10,0x2f), pcVar10 == (char *)0x0))
        break;
        pcVar10 = pcVar10 + 1;
      }
    }
    else {
      lVar5 = *(long *)&(peVar3->v).field_0x10;
      if (0 < lVar5) {
        preg = (regex_t *)(*(long *)&peVar3->v + 8);
        lVar13 = 0;
        do {
          if ((*(uint *)&preg[-1].field_0x38 & 0x8000000) == 0) {
            cVar6 = exclude_fnmatch((char *)preg->buffer,f,*(uint *)&preg[-1].field_0x38);
          }
          else {
            iVar7 = rpl_regexec(preg,f,0,(regmatch_t *)0x0,0);
            cVar6 = iVar7 == 0;
          }
          if (cVar6 != '\0') goto LAB_00106b58;
          lVar13 = lVar13 + 1;
          preg = (regex_t *)&preg[1].allocated;
        } while (lVar5 != lVar13);
      }
    }
    peVar4 = peVar3->next;
    if (peVar4 == (exclude_segment *)0x0) break;
    eVar1 = peVar4->type;
    peVar3 = peVar4;
  }
  bVar12 = 1;
LAB_00106b5a:
  rpl_free(__dest);
  return (_Bool)(((byte)((uint)peVar3->options >> 0x1d) ^ 1) & 1 ^ bVar12);
LAB_00106b58:
  bVar12 = 0;
  goto LAB_00106b5a;
}

