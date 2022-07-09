
/* WARNING: Unknown calling convention yet parameter storage is locked */

void keep_new_line(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long in_RCX;
  long in_RDX;
  long **in_RSI;
  long **in_RDI;
  
  if (*in_RDI == (long *)0x0) {
    plVar4 = (long *)xmalloc(0x520);
    *in_RSI = plVar4;
    plVar4[0xa3] = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    *in_RDI = plVar4;
  }
  plVar4 = *in_RSI;
  lVar2 = *plVar4;
  if (lVar2 == 0x50) {
    puVar3 = (undefined8 *)xmalloc(0x520);
    puVar3[0xa3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    plVar4[0xa3] = (long)puVar3;
    plVar4 = (long *)(*in_RSI)[0xa3];
    *in_RSI = plVar4;
    lVar2 = *plVar4;
  }
  lVar1 = plVar4[1];
  plVar4[lVar1 * 2 + 4] = in_RDX;
  plVar4[lVar1 * 2 + 3] = in_RCX;
  *plVar4 = lVar2 + 1;
  plVar4[1] = lVar1 + 1;
  return;
}

