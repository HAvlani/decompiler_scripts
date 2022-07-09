
size_t rpl_mbrtowc(wchar_t *pwc,char *s,size_t n,mbstate_t *ps)

{
  _Bool _Var1;
  size_t sVar2;
  long in_FS_OFFSET;
  wchar_t wc;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pwc == (wchar_t *)0x0) {
    pwc = &wc;
  }
  sVar2 = mbrtowc(pwc,s,n,(mbstate_t *)ps);
  if ((0xfffffffffffffffd < sVar2) && (n != 0)) {
    _Var1 = hard_locale(0);
    if (_Var1 == false) {
      sVar2 = 1;
      *pwc = (uint)(byte)*s;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

