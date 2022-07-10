
void fts_lfree(FTSENT *head)

{
  _ftsent *p_Var1;
  
  if (head == (FTSENT *)0x0) {
    return;
  }
  do {
    p_Var1 = head->fts_link;
    if ((DIR *)head->fts_dirp != (DIR *)0x0) {
      closedir((DIR *)head->fts_dirp);
    }
    rpl_free(head);
    head = p_Var1;
  } while (p_Var1 != (_ftsent *)0x0);
  return;
}

