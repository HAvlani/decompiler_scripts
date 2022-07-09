
char * make_printable_str(char *s,size_t len)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  char *__dest;
  ushort **ppuVar4;
  byte *pbVar5;
  char *__src;
  long in_FS_OFFSET;
  char buf [5];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = (char *)xnmalloc(len + 1,4);
  if (len != 0) {
    pbVar5 = (byte *)(s + len);
    __dest = pcVar3;
    do {
      bVar1 = *s;
      if ((char)bVar1 < '\x0e') {
        if ((char)bVar1 < '\a') {
LAB_00103779:
          ppuVar4 = __ctype_b_loc();
          if ((*(byte *)((long)*ppuVar4 + (ulong)bVar1 * 2 + 1) & 0x40) == 0) {
            __src = buf;
            __sprintf_chk(__src,1,5,"\\%03o");
          }
          else {
            __src = buf;
            buf[1] = '\0';
            buf[0] = bVar1;
          }
        }
        else {
          __src = "\\a";
          switch(bVar1) {
          case 8:
            __src = "\\b";
            break;
          case 9:
            __src = "\\t";
            break;
          case 10:
            __src = "\\n";
            break;
          case 0xb:
            __src = "\\v";
            break;
          case 0xc:
            __src = "\\f";
            break;
          case 0xd:
            __src = "\\r";
          }
        }
      }
      else {
        __src = "\\";
        if (bVar1 != 0x5c) goto LAB_00103779;
      }
      s = (char *)((byte *)s + 1);
      __dest = stpcpy(__dest,__src);
    } while (pbVar5 != (byte *)s);
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar3;
}

