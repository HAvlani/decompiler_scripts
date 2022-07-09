
void print_double(size_t fields,size_t blank,void *block,char *fmt_string,int width,int pad)

{
  char cVar1;
  long lVar2;
  int iVar3;
  anon_union_for_u *paVar4;
  anon_union_for_u *paVar5;
  char *pcVar6;
  ulong uVar7;
  int iVar8;
  size_t sVar9;
  long in_FS_OFFSET;
  double x;
  double u;
  char buf [40];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (blank < fields) {
    uVar7 = (fields - 1) * (long)pad;
    sVar9 = fields;
    iVar8 = pad;
    do {
      sVar9 = sVar9 - 1;
      iVar3 = (int)(uVar7 / fields);
      if (input_swap == false) {
                    /* WARNING: Load size is inaccurate */
        x = *block;
      }
      else {
        pcVar6 = (char *)((long)block + 7);
        paVar4 = &u;
        do {
          cVar1 = *pcVar6;
          paVar5 = (anon_union_for_u *)((long)paVar4 + 1);
          pcVar6 = pcVar6 + -1;
          *(char *)paVar4 = cVar1;
          paVar4 = paVar5;
          x = u;
        } while ((anon_union_for_u *)buf != paVar5);
      }
      dtoastr(buf,0x28,0,0,x);
      block = (void *)((long)block + 8);
      xprintf("%*s",(ulong)(uint)((iVar8 - iVar3) + width),buf);
      uVar7 = uVar7 - (long)pad;
      iVar8 = iVar3;
    } while (sVar9 != blank);
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

