
int rev_xstrcoll_df_version(V a,V b)

{
  int iVar1;
  
  iVar1 = dirfirst_check((fileinfo *)a,(fileinfo *)b,rev_xstrcoll_version);
  return iVar1;
}
