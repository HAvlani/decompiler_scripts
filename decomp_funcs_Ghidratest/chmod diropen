
/* WARNING: Unknown calling convention yet parameter storage is locked */

int diropen(void)

{
  int iVar1;
  uint flags;
  char *in_RDX;
  uint in_ESI;
  int in_EDI;
  
  flags = (in_ESI & 0x10) << 0xd | 0x90900;
  if ((in_ESI & 0x200) != 0) {
    iVar1 = openat_safer(in_EDI,in_RDX,flags);
    return iVar1;
  }
  iVar1 = open_safer(in_RDX,flags);
  return iVar1;
}

