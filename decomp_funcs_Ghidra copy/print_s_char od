
void print_s_char(size_t fields,size_t blank,void *block,char *fmt_string,int width,int pad)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  
  if (blank < fields) {
    uVar3 = (fields - 1) * (long)pad;
    pcVar4 = (char *)((fields - blank) + (long)block);
    iVar5 = pad;
    do {
                    /* WARNING: Load size is inaccurate */
      cVar1 = *block;
      block = (void *)((long)block + 1);
      iVar2 = (int)(uVar3 / fields);
      xprintf(fmt_string,(ulong)(uint)((iVar5 - iVar2) + width),(ulong)(uint)(int)cVar1);
      uVar3 = uVar3 - (long)pad;
      iVar5 = iVar2;
    } while ((char *)block != pcVar4);
  }
  return;
}

