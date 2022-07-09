
int rpl_fts_close(FTS *sp)

{
  _ftsent *p;
  _ftsent *p_Var1;
  Hash_table *table;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  p = sp->fts_cur;
  if (p != (_ftsent *)0x0) {
    lVar2 = p->fts_level;
    while (-1 < lVar2) {
      p_Var1 = p->fts_link;
      if (p_Var1 == (_ftsent *)0x0) {
        p_Var1 = p->fts_parent;
        rpl_free(p);
        lVar2 = p_Var1->fts_level;
        p = p_Var1;
      }
      else {
        rpl_free(p);
        lVar2 = p_Var1->fts_level;
        p = p_Var1;
      }
    }
    rpl_free(p);
  }
  if (sp->fts_child != (FTSENT *)0x0) {
    fts_lfree(sp->fts_child);
  }
  rpl_free(sp->fts_array);
  rpl_free(sp->fts_path);
  if ((sp->fts_options & 0x200U) == 0) {
    if ((sp->fts_options & 4U) == 0) {
      iVar3 = fchdir(sp->fts_rfd);
      if (iVar3 == 0) {
        iVar3 = close(sp->fts_rfd);
        if (iVar3 == 0) goto LAB_0010543a;
        piVar5 = __errno_location();
      }
      else {
        piVar5 = __errno_location();
        iVar3 = *piVar5;
        iVar4 = close(sp->fts_rfd);
        if ((iVar3 != 0) || (iVar4 == 0)) goto LAB_0010543d;
      }
      iVar3 = *piVar5;
      goto LAB_0010543d;
    }
  }
  else if ((-1 < sp->fts_cwd_fd) && (iVar3 = close(sp->fts_cwd_fd), iVar3 != 0)) {
    piVar5 = __errno_location();
    iVar3 = *piVar5;
    goto LAB_0010543d;
  }
LAB_0010543a:
  iVar3 = 0;
LAB_0010543d:
  fd_ring_clear(&sp->fts_fd_ring);
  if (sp->fts_leaf_optimization_works_ht != (Hash_table *)0x0) {
    hash_free(sp->fts_leaf_optimization_works_ht);
  }
  table = (Hash_table *)sp->fts_cycle;
  if ((sp->fts_options & 0x102U) == 0) {
    rpl_free(table);
  }
  else if (table != (Hash_table *)0x0) {
    hash_free(table);
  }
  rpl_free(sp);
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    *piVar5 = iVar3;
    iVar3 = -1;
  }
  return iVar3;
}

