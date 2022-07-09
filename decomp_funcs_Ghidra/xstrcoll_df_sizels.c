
int xstrcoll_df_size(V a,V b)

{
  int iVar1;
  
  iVar1 = dirfirst_check((fileinfo *)a,(fileinfo *)b,xstrcoll_size);
  return iVar1;
}

