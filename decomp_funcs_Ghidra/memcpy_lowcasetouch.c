
char * memcpy_lowcase(char *dest,char *src,size_t len)

{
  __int32_t **pp_Var1;
  long lVar2;
  
  if (len != 0) {
    lVar2 = len - 1;
    pp_Var1 = __ctype_tolower_loc();
    do {
      dest[lVar2] = (char)(*pp_Var1)[(byte)src[lVar2]];
      lVar2 = lVar2 + -1;
    } while (lVar2 != -1);
  }
  return dest;
}

