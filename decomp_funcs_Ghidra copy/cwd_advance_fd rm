
void cwd_advance_fd(long param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 == param_2) && (iVar1 != -100)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 == '\0') {
    if (((*(byte *)(param_1 + 0x48) & 4) == 0) && (-1 < iVar1)) {
      close(iVar1);
LAB_001054bc:
      *(int *)(param_1 + 0x2c) = param_2;
      return;
    }
  }
  else {
    iVar1 = i_ring_push((I_ring *)(param_1 + 0x60),iVar1);
    if (-1 < iVar1) {
      close(iVar1);
      goto LAB_001054bc;
    }
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}

