
_Bool cycle_warning_required(FTS *fts,FTSENT *ent)

{
  uint uVar1;
  _Bool _Var2;
  
  _Var2 = true;
  uVar1 = fts->fts_options & 0x11;
  if ((uVar1 != 0x10) && (_Var2 = false, uVar1 == 0x11)) {
    return ent->fts_level != 0;
  }
  return _Var2;
}

