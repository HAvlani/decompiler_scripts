
/* WARNING: Could not reconcile some variable overlaps */

void print_long_double(size_t fields,size_t blank,void *block,char *fmt_string,int width,int pad)

{
  undefined uVar1;
  long lVar2;
  int iVar3;
  anon_union_for_u *paVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  size_t sVar9;
  long in_FS_OFFSET;
  unkbyte10 Var10;
  undefined6 in_stack_ffffffffffffff52;
  anon_union_for_u u;
  char buf [45];
  
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
        Var10 = *block;
      }
      else {
        puVar6 = (undefined *)((long)block + 0xf);
        paVar4 = &u;
        do {
          uVar1 = *puVar6;
          puVar5 = &paVar4->field_0x1;
          puVar6 = puVar6 + -1;
          *(undefined *)paVar4 = uVar1;
          paVar4 = (anon_union_for_u *)puVar5;
          Var10 = u._0_10_;
        } while (buf != puVar5);
      }
      block = (void *)((long)block + 0x10);
      ldtoastr(buf,0x2d,0,0,(longdouble)CONCAT610(in_stack_ffffffffffffff52,Var10));
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

