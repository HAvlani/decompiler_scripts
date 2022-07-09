
int rpl_fts_set(FTS *sp,FTSENT *p,int instr)

{
  int *piVar1;
  
  if ((uint)instr < 5) {
    p->fts_instr = (ushort)instr;
    return 0;
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 1;
}

