
int rev_strcmp_mtime(V a,V b)

{
  int iVar1;
  
  iVar1 = cmp_mtime((fileinfo *)b,(fileinfo *)a,
                    (anon_subr_int_char_ptr_char_ptr *)PTR_strcmp_00122fd8);
  return iVar1;
}
