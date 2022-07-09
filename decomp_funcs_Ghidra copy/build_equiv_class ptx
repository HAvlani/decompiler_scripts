
reg_errcode_t
build_equiv_class(bitset_word_t *sbcset,uchar *name,Idx *equiv_class_alloc,re_charset_t *mbcset)

{
  ulong *puVar1;
  size_t sVar2;
  
  sVar2 = strlen((char *)name);
  if (sVar2 == 1) {
    puVar1 = (ulong *)((long)sbcset + (ulong)(*name >> 3 & 0x18));
    *puVar1 = *puVar1 | 1 << (*name & 0x3f);
    return _REG_NOERROR;
  }
  return _REG_ECOLLATE;
}

