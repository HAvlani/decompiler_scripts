
ulong num_processors_via_affinity_mask(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  cpu_set_t set;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = sched_getaffinity(0,0x80,(cpu_set_t *)&set);
  if (iVar2 == 0) {
    iVar2 = __sched_cpucount(0x80,(cpu_set_t *)&set);
    uVar3 = (ulong)iVar2;
    if (uVar3 != 0) goto LAB_0010f333;
  }
  uVar3 = 0;
LAB_0010f333:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

