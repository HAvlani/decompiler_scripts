
void print_named_ascii(size_t fields,size_t blank,void *block,char *unused_fmt_string,int width,
                      int pad)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  char (*pacVar6) [4];
  byte *pbVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  char buf [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (blank < fields) {
    uVar5 = (fields - 1) * (long)pad;
    pbVar7 = (byte *)block;
    iVar4 = pad;
    do {
      pbVar8 = pbVar7 + 1;
      iVar2 = (int)(uVar5 / fields);
      bVar3 = (byte)(*pbVar7 & 0x7f);
      pacVar6 = (char (*) [4])&DAT_0010c018;
      if (bVar3 != 0x7f) {
        if (bVar3 < 0x21) {
          pacVar6 = charname[*pbVar7 & 0x7f];
        }
        else {
          buf[1] = '\0';
          pacVar6 = (char (*) [4])buf;
          buf[0] = bVar3;
        }
      }
      uVar5 = uVar5 - (long)pad;
      xprintf("%*s",(ulong)(uint)((iVar4 - iVar2) + width),pacVar6);
      pbVar7 = pbVar8;
      iVar4 = iVar2;
    } while (pbVar8 != (byte *)((fields - blank) + (long)block));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

