
/* WARNING: Unknown calling convention yet parameter storage is locked */

int keycmp(void)

{
  char *s1;
  char *s1len;
  char *s2;
  int iVar1;
  long *in_RCX;
  ulong in_RDX;
  char *pcVar2;
  long *in_RSI;
  ulong in_RDI;
  ulong in_R8;
  char **ppcVar3;
  ulong in_R9;
  char *s2len;
  
  if (in_R8 < in_RDI) {
    ppcVar3 = (char **)(in_R8 * 0x10 + *in_RSI);
    s1 = *ppcVar3;
    s1len = ppcVar3[1];
    if (in_RDX <= in_R9) {
      return (uint)(s1len != (char *)0x0);
    }
    ppcVar3 = (char **)(in_R9 * 0x10 + *in_RCX);
    s2 = *ppcVar3;
    s2len = ppcVar3[1];
    if (s1len == (char *)0x0) {
LAB_00103bdb:
      return -(uint)(s2len != (char *)0x0);
    }
    if (s2len == (char *)0x0) {
      iVar1 = 1;
    }
    else {
      if (ignore_case == false) {
        if (hard_LC_COLLATE != false) {
          iVar1 = xmemcoll(s1,(size_t)s1len,s2,(size_t)s2len);
          return iVar1;
        }
        pcVar2 = s2len;
        if (s1len <= s2len) {
          pcVar2 = s1len;
        }
        iVar1 = memcmp(s1,s2,(size_t)pcVar2);
      }
      else {
        pcVar2 = s2len;
        if (s1len <= s2len) {
          pcVar2 = s1len;
        }
        iVar1 = memcasecmp(s1,s2,(size_t)pcVar2);
      }
      if (iVar1 == 0) {
        if (s2len <= s1len) {
          return (int)(s1len != s2len);
        }
        iVar1 = -1;
      }
    }
  }
  else {
    if (in_R9 < in_RDX) {
      s2len = *(char **)(in_R9 * 0x10 + *in_RCX + 8);
      goto LAB_00103bdb;
    }
    iVar1 = 0;
  }
  return iVar1;
}

