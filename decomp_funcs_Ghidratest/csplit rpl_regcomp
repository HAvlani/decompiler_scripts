
int rpl_regcomp(regex_t *preg,char *pattern,int cflags)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  preg->buffer = (re_dfa_t *)0x0;
  uVar6 = (-(uint)((cflags & 1U) == 0) & 0xfd4fca) + 0x3b2fc;
  preg->allocated = 0;
  preg->used = 0;
  pcVar2 = (char *)malloc(0x100);
  preg->fastmap = pcVar2;
  if (pcVar2 == (char *)0x0) {
    return 0xc;
  }
  uVar4 = (cflags & 2U) << 0x15;
  uVar5 = uVar4 | uVar6;
  bVar7 = (cflags & 4U) != 0;
  if (bVar7) {
    uVar5 = uVar4 | uVar6 & 0xffffffbf | 0x100;
  }
  preg->translate = (uchar *)0x0;
  preg->field_0x38 = (byte)(((uint)cflags >> 3 & 1) << 4) | bVar7 << 7 | preg->field_0x38 & 0x6f;
  sVar3 = strlen(pattern);
  iVar1 = re_compile_internal(preg,pattern,sVar3,uVar5);
  if (iVar1 == 0x10) {
    iVar1 = 8;
  }
  else if (iVar1 == 0) {
    rpl_re_compile_fastmap(preg);
    return 0;
  }
  rpl_free(preg->fastmap);
  preg->fastmap = (char *)0x0;
  return iVar1;
}

