
void print_s_short(size_t fields,size_t blank,void *block,char *fmt_string,int width,int pad)

{
  long lVar1;
  int iVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (blank < fields) {
    uVar4 = (fields - 1) * (long)pad;
    lVar6 = 0;
    iVar5 = pad;
    do {
      iVar2 = (int)(uVar4 / fields);
      if (input_swap == false) {
        sVar3 = *(short *)((long)block + lVar6 * 2);
      }
      else {
        sVar3 = CONCAT11(*(undefined *)((long)block + lVar6 * 2),
                         *(undefined *)((long)block + lVar6 * 2 + 1));
      }
      lVar6 = lVar6 + 1;
      xprintf(fmt_string,(ulong)(uint)((iVar5 - iVar2) + width),(ulong)(uint)(int)sVar3);
      uVar4 = uVar4 - (long)pad;
      iVar5 = iVar2;
    } while (fields - blank != lVar6);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
