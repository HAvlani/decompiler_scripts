
int xstrcoll_width(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_width((fileinfo *)a,(fileinfo *)b,xstrcoll);
  return iVar1;
}

