
int strcmp_df_atime(V a,V b)

{
  int iVar1;
  
  iVar1 = dirfirst_check((fileinfo *)a,(fileinfo *)b,strcmp_atime);
  return iVar1;
}
