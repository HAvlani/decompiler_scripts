
idx_t base32_encode_alloc(char *in,idx_t inlen,char **out)

{
  char *out_00;
  long lVar1;
  long lVar2;
  size_t __size;
  
  lVar1 = inlen / 5 + (ulong)(inlen != (inlen / 5) * 5);
  lVar2 = lVar1 * 8;
  if ((inlen < 0) || (SEXT816(lVar2) != SEXT816(lVar1) * SEXT816(8))) {
    *out = (char *)0x0;
    __size = 0;
  }
  else {
    __size = lVar2 + 1;
    out_00 = (char *)malloc(__size);
    *out = out_00;
    if (out_00 != (char *)0x0) {
      base32_encode(in,inlen,out_00,__size);
      return lVar2;
    }
  }
  return __size;
}

