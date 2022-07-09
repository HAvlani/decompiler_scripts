
/* WARNING: Unknown calling convention yet parameter storage is locked */

void delseq(void)

{
  ulong uVar1;
  void **in_RSI;
  ulong *in_RDI;
  line *line;
  
  uVar1 = 0;
  if (*in_RDI != 0) {
    do {
      line = *(line **)((long)*in_RSI + uVar1 * 8);
      if (line != (line *)0x0) {
        freeline(line);
        line = *(line **)((long)*in_RSI + uVar1 * 8);
      }
      rpl_free(line);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *in_RDI);
  }
  rpl_free(*in_RSI);
  return;
}

