
int rev_strcmp_df_mtime(V a,V b)

{
  int iVar1;
  
  iVar1 = dirfirst_check((fileinfo *)a,(fileinfo *)b,rev_strcmp_mtime);
  return iVar1;
}
