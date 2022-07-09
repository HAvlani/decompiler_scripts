
reg_errcode_t clean_state_log_if_needed(re_match_context_t *mctx,Idx next_state_log_idx)

{
  long lVar1;
  long lVar2;
  reg_errcode_t rVar3;
  
  lVar1 = (mctx->input).bufs_len;
  lVar2 = mctx->state_log_top;
  if ((next_state_log_idx < lVar1) || ((mctx->input).len <= lVar1)) {
    lVar1 = (mctx->input).valid_len;
    if ((next_state_log_idx < lVar1) || ((mctx->input).len <= lVar1)) goto LAB_001129ef;
    rVar3 = extend_buffers(mctx,(int)next_state_log_idx + 1);
  }
  else {
    rVar3 = extend_buffers(mctx,(int)next_state_log_idx + 1);
  }
  if (rVar3 != _REG_NOERROR) {
    return rVar3;
  }
LAB_001129ef:
  if (lVar2 < next_state_log_idx) {
    memset(mctx->state_log + lVar2 + 1,0,(next_state_log_idx - lVar2) * 8);
    mctx->state_log_top = next_state_log_idx;
  }
  return _REG_NOERROR;
}

