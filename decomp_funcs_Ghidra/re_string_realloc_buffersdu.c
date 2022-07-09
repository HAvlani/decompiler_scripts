
reg_errcode_t re_string_realloc_buffers(re_string_t *pstr,Idx new_buf_len)

{
  wint_t *pwVar1;
  Idx *pIVar2;
  uchar *puVar3;
  
  if (1 < pstr->mb_cur_max) {
    if (0x1fffffffffffffff < (ulong)new_buf_len) {
      return _REG_ESPACE;
    }
    pwVar1 = (wint_t *)realloc(pstr->wcs,new_buf_len * 4);
    if (pwVar1 == (wint_t *)0x0) {
      return _REG_ESPACE;
    }
    pstr->wcs = pwVar1;
    if (pstr->offsets != (Idx *)0x0) {
      pIVar2 = (Idx *)realloc(pstr->offsets,new_buf_len * 8);
      if (pIVar2 == (Idx *)0x0) {
        return _REG_ESPACE;
      }
      pstr->offsets = pIVar2;
    }
  }
  if (pstr->mbs_allocated != '\0') {
    puVar3 = (uchar *)realloc(pstr->mbs,new_buf_len);
    if (puVar3 == (uchar *)0x0) {
      return _REG_ESPACE;
    }
    pstr->mbs = puVar3;
  }
  pstr->bufs_len = new_buf_len;
  return _REG_NOERROR;
}

