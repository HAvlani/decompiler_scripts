
int xstrcoll_btime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_btime((fileinfo *)a,(fileinfo *)b,xstrcoll);
  return iVar1;
}

