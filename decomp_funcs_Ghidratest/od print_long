
void print_long(size_t fields,size_t blank,void *block,char *fmt_string,int width,int pad)

{
  undefined uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  size_t sVar9;
  long in_FS_OFFSET;
  long u;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (blank < fields) {
    uVar5 = (fields - 1) * (long)pad;
    sVar9 = fields;
    iVar8 = pad;
    do {
      sVar9 = sVar9 - 1;
      iVar2 = (int)(uVar5 / fields);
      if (input_swap == false) {
                    /* WARNING: Load size is inaccurate */
        lVar6 = *block;
      }
      else {
        puVar7 = (undefined *)((long)block + 7);
        plVar3 = &u;
        do {
          uVar1 = *puVar7;
          plVar4 = (long *)((long)plVar3 + 1);
          puVar7 = puVar7 + -1;
          *(undefined *)plVar3 = uVar1;
          plVar3 = plVar4;
          lVar6 = u;
        } while (local_40 != plVar4);
      }
      block = (void *)((long)block + 8);
      xprintf(fmt_string,(ulong)(uint)((iVar8 - iVar2) + width),lVar6);
      uVar5 = uVar5 - (long)pad;
      iVar8 = iVar2;
    } while (sVar9 != blank);
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

