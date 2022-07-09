
void print_float(size_t fields,size_t blank,void *block,char *fmt_string,int width,int pad)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float x;
  int iVar5;
  long in_FS_OFFSET;
  char buf [31];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (blank < fields) {
    lVar4 = 0;
    uVar3 = (fields - 1) * (long)pad;
    iVar5 = pad;
    do {
      iVar2 = (int)(uVar3 / fields);
      if (input_swap == false) {
        x = *(float *)((long)block + lVar4 * 4);
      }
      else {
        x = (float)CONCAT13(*(undefined *)((long)block + lVar4 * 4),
                            CONCAT12(*(undefined *)((long)block + lVar4 * 4 + 1),
                                     CONCAT11(*(undefined *)((long)block + lVar4 * 4 + 2),
                                              *(undefined *)((long)block + lVar4 * 4 + 3))));
      }
      ftoastr(buf,0x1f,0,0,x);
      lVar4 = lVar4 + 1;
      xprintf("%*s",(ulong)(uint)((iVar5 - iVar2) + width),buf);
      uVar3 = uVar3 - (long)pad;
      iVar5 = iVar2;
    } while (fields - blank != lVar4);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

