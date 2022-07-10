
void freea(ulong param_1)

{
  if ((param_1 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_1 & 0x10) == 0) {
    return;
  }
  rpl_free((void *)(param_1 - *(byte *)(param_1 - 1)));
  return;
}

