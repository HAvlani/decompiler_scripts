
FTSENT * rpl_fts_children(FTS *sp,int instr)

{
  _ftsent *p_Var1;
  int __fd;
  int iVar2;
  int *piVar3;
  FTSENT *pFVar4;
  
  piVar3 = __errno_location();
  if ((instr & 0xffffefffU) != 0) {
    *piVar3 = 0x16;
    return (FTSENT *)0x0;
  }
  p_Var1 = sp->fts_cur;
  *piVar3 = 0;
  if ((*(byte *)((long)&sp->fts_options + 1) & 0x20) == 0) {
    if (p_Var1->fts_info == 9) {
      return p_Var1->fts_link;
    }
    pFVar4 = (FTSENT *)0x0;
    if (p_Var1->fts_info == 1) {
      if (sp->fts_child != (FTSENT *)0x0) {
        fts_lfree(sp->fts_child);
      }
      iVar2 = 1;
      if (instr == 0x1000) {
        sp->fts_options = sp->fts_options | 0x1000;
        iVar2 = 2;
      }
      if (((p_Var1->fts_level == 0) && (*p_Var1->fts_accpath != '/')) &&
         ((sp->fts_options & 4U) == 0)) {
        __fd = diropen();
        if (__fd < 0) {
          sp->fts_child = (_ftsent *)0x0;
          pFVar4 = (FTSENT *)0x0;
        }
        else {
          pFVar4 = fts_build(sp,iVar2);
          sp->fts_child = pFVar4;
          if ((*(byte *)((long)&sp->fts_options + 1) & 2) == 0) {
            iVar2 = fchdir(__fd);
            if (iVar2 != 0) {
              iVar2 = *piVar3;
              close(__fd);
              *piVar3 = iVar2;
              return (FTSENT *)0x0;
            }
            close(__fd);
          }
          else {
            cwd_advance_fd(sp,__fd,1);
          }
          pFVar4 = sp->fts_child;
        }
      }
      else {
        pFVar4 = fts_build(sp,iVar2);
        sp->fts_child = pFVar4;
      }
    }
    return pFVar4;
  }
  return (FTSENT *)0x0;
}

