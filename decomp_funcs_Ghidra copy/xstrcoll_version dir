
int xstrcoll_version(V a,V b)

{
  char *s1;
  char *s2;
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  s1 = *a;
                    /* WARNING: Load size is inaccurate */
  s2 = *b;
  iVar1 = filevercmp(s1,s2);
  if (iVar1 == 0) {
    iVar1 = strcmp(s1,s2);
    return iVar1;
  }
  return iVar1;
}

