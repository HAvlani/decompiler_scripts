
void mb_copy(mbchar_t *new_mbc,mbchar_t *old_mbc)

{
  _Bool _Var1;
  char *pcVar2;
  size_t __n;
  
  pcVar2 = old_mbc->ptr;
  __n = old_mbc->bytes;
  if (pcVar2 == old_mbc->buf) {
    pcVar2 = (char *)memcpy(new_mbc->buf,pcVar2,__n);
    __n = old_mbc->bytes;
    new_mbc->ptr = pcVar2;
  }
  else {
    new_mbc->ptr = pcVar2;
  }
  _Var1 = old_mbc->wc_valid;
  new_mbc->bytes = __n;
  new_mbc->wc_valid = _Var1;
  if (_Var1 != false) {
    new_mbc->wc = old_mbc->wc;
  }
  return;
}

