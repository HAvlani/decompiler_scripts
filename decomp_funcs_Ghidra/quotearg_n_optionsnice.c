
char * quotearg_n_options(uint param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  size_t n;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  slotvec *psVar8;
  ulong uVar9;
  char *p;
  long n_incr_min;
  long in_FS_OFFSET;
  undefined8 uVar10;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = 0x1043df;
  piVar7 = __errno_location();
  iVar1 = *piVar7;
  if (0x7ffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  psVar8 = slotvec;
  if (nslots <= (int)param_1) {
    local_48 = (long)nslots;
    n_incr_min = (long)(int)((param_1 - nslots) + 1);
    if (slotvec == &slotvec0) {
      psVar8 = (slotvec *)xpalloc((void *)0x0,&local_48,n_incr_min,0x7fffffff,0x10);
      uVar6 = slotvec0.val._4_4_;
      uVar5 = slotvec0.val._0_4_;
      uVar3 = slotvec0.size._4_4_;
      slotvec = psVar8;
      *(undefined4 *)&psVar8->size = (undefined4)slotvec0.size;
      *(undefined4 *)((long)&psVar8->size + 4) = uVar3;
      *(undefined4 *)&psVar8->val = uVar5;
      *(undefined4 *)((long)&psVar8->val + 4) = uVar6;
    }
    else {
      psVar8 = (slotvec *)xpalloc(slotvec,&local_48,n_incr_min,0x7fffffff,0x10);
      slotvec = psVar8;
    }
    uVar10 = 0x10446b;
    memset(psVar8 + nslots,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  psVar8 = psVar8 + (int)param_1;
  uVar2 = param_4[1];
  uVar4 = psVar8->size;
  p = psVar8->val;
  uVar9 = quotearg_buffer_restyled
                    (p,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                     *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc),uVar10);
  if (uVar4 <= uVar9) {
    n = uVar9 + 1;
    psVar8->size = n;
    if (p != slot0) {
      rpl_free(p);
    }
    uVar10 = 0x1044fa;
    p = xcharalloc(n);
    uVar3 = *param_4;
    psVar8->val = p;
    quotearg_buffer_restyled
              (p,n,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,*(undefined8 *)(param_4 + 10),
               *(undefined8 *)(param_4 + 0xc),uVar10);
  }
  *piVar7 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return p;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

