
int xmemcoll0(char *s1,size_t s1size,char *s2,size_t s2size)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = memcoll0(s1,s1size,s2,s2size);
  piVar2 = __errno_location();
  if (*piVar2 == 0) {
    return iVar1;
  }
  collate_error(*piVar2,s1,s1size - 1,s2,s2size - 1);
  return iVar1;
}

