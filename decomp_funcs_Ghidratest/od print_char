
void print_char(size_t fields,size_t blank,void *block,char *fmt_string,int width,int pad)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  
  if (blank < fields) {
    uVar3 = (fields - 1) * (long)pad;
    pbVar4 = (byte *)((fields - blank) + (long)block);
    iVar5 = pad;
    do {
                    /* WARNING: Load size is inaccurate */
      bVar1 = *block;
      block = (void *)((long)block + 1);
      iVar2 = (int)(uVar3 / fields);
      xprintf(fmt_string,(ulong)(uint)((iVar5 - iVar2) + width),(ulong)bVar1);
      uVar3 = uVar3 - (long)pad;
      iVar5 = iVar2;
    } while ((byte *)block != pbVar4);
  }
  return;
}

