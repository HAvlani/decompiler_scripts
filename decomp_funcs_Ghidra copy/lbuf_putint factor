
void lbuf_putint(uintmax_t i,size_t min_width)

{
  long lVar1;
  long lVar2;
  char *__src;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  ulong __n;
  char *pcVar6;
  long in_FS_OFFSET;
  char buf [21];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  __src = umaxtostr(i,buf);
  pcVar6 = lbuf.end;
  __n = 0x14 - ((long)__src - (long)buf);
  if (__n < min_width) {
    lVar1 = ((long)__src - (long)buf) + -0x14;
    pcVar4 = lbuf.end + lVar1 + min_width;
    pcVar5 = lbuf.end;
    do {
      *pcVar5 = '0';
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != pcVar4);
    pcVar6 = pcVar6 + lVar1 + min_width;
  }
  pvVar3 = memcpy(pcVar6,__src,__n);
  lbuf.end = (char *)((long)pvVar3 + __n);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

