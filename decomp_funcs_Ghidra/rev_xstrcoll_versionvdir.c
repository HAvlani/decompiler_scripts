
int rev_xstrcoll_version(V a,V b)

{
  char *s1;
  char *s2;
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  s1 = *b;
                    /* WARNING: Load size is inaccurate */
  s2 = *a;
  iVar1 = filevercmp(s1,s2);
  if (iVar1 == 0) {
    iVar1 = strcmp(s1,s2);
    return iVar1;
  }
  return iVar1;
}

