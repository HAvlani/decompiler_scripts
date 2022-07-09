
void fwrite_uppcase(FILE *fp,char *src,size_t len)

{
  byte bVar1;
  __int32_t **pp_Var2;
  byte *pbVar3;
  
  if (len != 0) {
    pbVar3 = (byte *)(src + len);
    pp_Var2 = __ctype_toupper_loc();
    do {
      bVar1 = *src;
      src = (char *)((byte *)src + 1);
      fputc((*pp_Var2)[bVar1],(FILE *)fp);
    } while ((byte *)src != pbVar3);
    return;
  }
  return;
}

