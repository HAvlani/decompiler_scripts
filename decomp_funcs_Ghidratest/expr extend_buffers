
reg_errcode_t extend_buffers(re_match_context_t *mctx,int min_len)

{
  Idx *pIVar1;
  int iVar2;
  ulong uVar3;
  reg_errcode_t rVar4;
  re_dfastate_t **pprVar5;
  long lVar6;
  uchar *puVar7;
  long lVar8;
  
  uVar3 = (mctx->input).bufs_len;
  if (0xffffffffffffffe < uVar3) {
    return _REG_ESPACE;
  }
  lVar8 = (mctx->input).len;
  lVar6 = uVar3 * 2;
  if (lVar8 < lVar6) {
    lVar6 = lVar8;
  }
  lVar8 = (long)min_len;
  if (min_len <= lVar6) {
    lVar8 = lVar6;
  }
  rVar4 = re_string_realloc_buffers(&mctx->input,lVar8);
  if (rVar4 == _REG_NOERROR) {
    if (mctx->state_log != (re_dfastate_t **)0x0) {
      pprVar5 = (re_dfastate_t **)realloc(mctx->state_log,(mctx->input).bufs_len * 8 + 8);
      if (pprVar5 == (re_dfastate_t **)0x0) {
        return _REG_ESPACE;
      }
      mctx->state_log = pprVar5;
    }
    iVar2 = (mctx->input).mb_cur_max;
    if ((mctx->input).icase != '\0') {
      if (iVar2 < 2) {
        build_upper_buffer(&mctx->input);
        return _REG_NOERROR;
      }
      rVar4 = build_wcs_upper_buffer(&mctx->input);
      return rVar4;
    }
    if (1 < iVar2) {
      build_wcs_buffer(&mctx->input);
      return _REG_NOERROR;
    }
    puVar7 = (mctx->input).trans;
    if (puVar7 != (uchar *)0x0) {
      lVar8 = (mctx->input).len;
      lVar6 = (mctx->input).valid_len;
      pIVar1 = &(mctx->input).bufs_len;
      if (*pIVar1 == lVar8 || *pIVar1 < lVar8) {
        lVar8 = (mctx->input).bufs_len;
      }
      if (lVar6 < lVar8) {
        while( true ) {
          (mctx->input).mbs[lVar6] =
               puVar7[(mctx->input).raw_mbs[(mctx->input).raw_mbs_idx + lVar6]];
          lVar6 = lVar6 + 1;
          if (lVar8 == lVar6) break;
          puVar7 = (mctx->input).trans;
        }
        (mctx->input).valid_len = lVar8;
        (mctx->input).valid_raw_len = lVar8;
      }
      else {
        (mctx->input).valid_len = lVar6;
        (mctx->input).valid_raw_len = lVar6;
      }
    }
  }
  return rVar4;
}

