
int re_string_char_size_at(re_string_t *pstr,Idx idx)

{
  int iVar1;
  long lVar2;
  
  lVar2 = idx + 1;
  if (pstr->valid_len <= lVar2) {
    return 1;
  }
  iVar1 = 1;
  do {
    if (pstr->wcs[lVar2] != 0xffffffff) {
      return iVar1;
    }
    lVar2 = lVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (lVar2 != pstr->valid_len);
  return iVar1;
}

