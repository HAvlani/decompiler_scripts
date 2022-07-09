
RM_status excise(FTS *fts,FTSENT *ent,rm_options *x,_Bool is_dir)

{
  _Bool _Var1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  _ftsent *p_Var5;
  long lVar6;
  int iVar7;
  RM_status RVar8;
  uint *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  stat st;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = unlinkat(fts->fts_cwd_fd,ent->fts_accpath,(uint)(is_dir != false) << 9);
  if (iVar7 == 0) {
    RVar8 = RM_OK;
    if (x->verbose != false) {
      pcVar10 = quotearg_style(shell_escape_always_quoting_style,ent->fts_path);
      if (is_dir == false) {
        uVar11 = dcgettext(0,"removed %s\n",5);
      }
      else {
        uVar11 = dcgettext(0,"removed directory %s\n",5);
      }
      __printf_chk(1,uVar11,pcVar10);
      RVar8 = RM_OK;
    }
    goto LAB_001034ef;
  }
  puVar9 = (uint *)__errno_location();
  uVar3 = *puVar9;
  uVar12 = (ulong)uVar3;
  if (uVar3 == 0x1e) {
    iVar7 = __fxstatat(1,fts->fts_cwd_fd,ent->fts_accpath,(stat *)&st,0x100);
    if ((iVar7 == 0) || (*puVar9 != 2)) {
      _Var1 = x->ignore_missing_files;
      *puVar9 = 0x1e;
      if (_Var1 == false) goto LAB_00103488;
    }
    else {
      RVar8 = RM_OK;
      uVar12 = 2;
      if (x->ignore_missing_files != false) goto LAB_001034ef;
    }
    if (ent->fts_info == 4) goto LAB_0010353b;
  }
  else {
    if (x->ignore_missing_files == false) {
LAB_00103479:
      uVar2 = ent->fts_info;
    }
    else {
      RVar8 = RM_OK;
      if (uVar3 == 0x16) goto LAB_001034ef;
      if ((int)uVar3 < 0x17) {
        if ((uVar3 == 2) || (uVar3 == 0x14)) goto LAB_001034ef;
        goto LAB_00103479;
      }
      if (uVar3 == 0x54) goto LAB_001034ef;
      uVar2 = ent->fts_info;
    }
    if ((uVar2 == 4) && (uVar3 < 0x28)) {
LAB_0010353b:
      if (((0x8000320000U >> (uVar12 & 0x3f) & 1) != 0) &&
         ((uVar3 = ent->fts_errno, uVar3 == 1 || (uVar3 == 0xd)))) {
        *puVar9 = uVar3;
      }
    }
  }
LAB_00103488:
  pcVar10 = quotearg_style(shell_escape_always_quoting_style,ent->fts_path);
  uVar11 = dcgettext(0,"cannot remove %s",5);
  error(0,*puVar9,uVar11,pcVar10);
  p_Var5 = ent->fts_parent;
  lVar6 = p_Var5->fts_level;
  while ((-1 < lVar6 && (p_Var5->fts_number == 0))) {
    p_Var5->fts_number = 1;
    p_Var5 = p_Var5->fts_parent;
    lVar6 = p_Var5->fts_level;
  }
  RVar8 = RM_ERROR;
LAB_001034ef:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return RVar8;
}

