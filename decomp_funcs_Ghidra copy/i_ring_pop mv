
undefined4 i_ring_pop(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  puVar1 = (undefined4 *)(param_1 + (ulong)uVar2 * 4);
  uVar3 = *puVar1;
  *puVar1 = *(undefined4 *)(param_1 + 0x10);
  if (uVar2 != *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 0x14) = uVar2 + 3 & 3;
    return uVar3;
  }
  *(undefined *)(param_1 + 0x1c) = 1;
  return uVar3;
}

