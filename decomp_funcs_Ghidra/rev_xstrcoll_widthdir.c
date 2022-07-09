
int rev_xstrcoll_width(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_width((fileinfo *)b,(fileinfo *)a,xstrcoll);
  return iVar1;
}

