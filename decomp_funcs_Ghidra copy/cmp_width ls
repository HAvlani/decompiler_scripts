
int cmp_width(fileinfo *a,fileinfo *b,anon_subr_int_char_ptr_char_ptr *cmp)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  
  sVar2 = a->width;
  if (sVar2 == 0) {
    sVar2 = fileinfo_name_width(a);
  }
  sVar1 = b->width;
  if (sVar1 == 0) {
    sVar1 = fileinfo_name_width(b);
  }
  iVar3 = (int)sVar2 - (int)sVar1;
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00109129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*cmp)(a->name,b->name);
    return iVar3;
  }
  return iVar3;
}

