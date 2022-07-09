
void build_upper_buffer(re_string_t *pstr)

{
  __int32_t **pp_Var1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = pstr->len;
  if (pstr->bufs_len == lVar4 || pstr->bufs_len < lVar4) {
    lVar4 = pstr->bufs_len;
  }
  lVar3 = pstr->valid_len;
  if (lVar3 < lVar4) {
    pp_Var1 = __ctype_toupper_loc();
    do {
      uVar2 = (ulong)pstr->raw_mbs[pstr->raw_mbs_idx + lVar3];
      if (pstr->trans != (uchar *)0x0) {
        uVar2 = (ulong)pstr->trans[uVar2];
      }
      pstr->mbs[lVar3] = (uchar)(*pp_Var1)[uVar2];
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
    pstr->valid_len = lVar4;
    pstr->valid_raw_len = lVar4;
    return;
  }
  pstr->valid_len = lVar3;
  pstr->valid_raw_len = lVar3;
  return;
}

