
int strcmp_df_name(V a,V b)

{
  int iVar1;
  
  iVar1 = dirfirst_check((fileinfo *)a,(fileinfo *)b,strcmp_name);
  return iVar1;
}

