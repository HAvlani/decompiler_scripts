
int rev_strcmp_df_ctime(V a,V b)

{
  int iVar1;
  
  iVar1 = dirfirst_check((fileinfo *)a,(fileinfo *)b,rev_strcmp_ctime);
  return iVar1;
}

