
int mb_width_aux(wint_t wc)

{
  int iVar1;
  
  iVar1 = wcwidth(wc);
  if (-1 < iVar1) {
    return iVar1;
  }
  iVar1 = iswcntrl(wc);
  return (int)(iVar1 == 0);
}

