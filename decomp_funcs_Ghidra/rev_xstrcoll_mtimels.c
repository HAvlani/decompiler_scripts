
int rev_xstrcoll_mtime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_mtime((fileinfo *)b,(fileinfo *)a,xstrcoll);
  return iVar1;
}

