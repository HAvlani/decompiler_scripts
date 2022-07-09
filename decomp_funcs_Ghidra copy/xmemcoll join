
int xmemcoll(char *s1,size_t s1len,char *s2,size_t s2len)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = memcoll(s1,s1len,s2,s2len);
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return iVar1;
  }
  collate_error(*piVar2,s1,s1len,s2,s2len);
  return iVar1;
}

