
void print_ascii(size_t fields,size_t blank,void *block,char *unused_fmt_string,int width,int pad)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  ushort **ppuVar5;
  undefined *puVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  long in_FS_OFFSET;
  char buf [4];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (blank < fields) {
    uVar8 = (fields - 1) * (long)pad;
    pbVar4 = (byte *)((fields - blank) + (long)block);
    iVar9 = pad;
    do {
                    /* WARNING: Load size is inaccurate */
      bVar1 = *block;
      block = (void *)((long)block + 1);
      iVar3 = (int)(uVar8 / fields);
      switch((ulong)bVar1) {
      case 0:
        pcVar7 = "\\0";
        break;
      default:
        ppuVar5 = __ctype_b_loc();
        puVar6 = &DAT_0010c023;
        pcVar7 = buf;
        if ((*(byte *)((long)*ppuVar5 + (ulong)bVar1 * 2 + 1) & 0x40) != 0) {
          puVar6 = &DAT_0010c020;
        }
        __sprintf_chk(pcVar7,1,4,puVar6);
        break;
      case 7:
        pcVar7 = "\\a";
        break;
      case 8:
        pcVar7 = "\\b";
        break;
      case 9:
        pcVar7 = "\\t";
        break;
      case 10:
        pcVar7 = "\\n";
        break;
      case 0xb:
        pcVar7 = "\\v";
        break;
      case 0xc:
        pcVar7 = "\\f";
        break;
      case 0xd:
        pcVar7 = "\\r";
      }
      xprintf("%*s",(ulong)(uint)((iVar9 - iVar3) + width),pcVar7);
      uVar8 = uVar8 - (long)pad;
      iVar9 = iVar3;
    } while ((byte *)block != pbVar4);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

