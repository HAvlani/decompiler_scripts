
char * make_printable_char(uchar c)

{
  uchar *puVar1;
  ushort **ppuVar2;
  
  puVar1 = (uchar *)xmalloc(5);
  ppuVar2 = __ctype_b_loc();
  if ((*(byte *)((long)*ppuVar2 + (ulong)c * 2 + 1) & 0x40) != 0) {
    *puVar1 = c;
    puVar1[1] = '\0';
    return (char *)puVar1;
  }
  __sprintf_chk(puVar1,1,5,"\\%03o",c);
  return (char *)puVar1;
}

