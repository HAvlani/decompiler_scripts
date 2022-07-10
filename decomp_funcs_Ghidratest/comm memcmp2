
int memcmp2(char *s1,size_t n1,char *s2,size_t n2)

{
  int iVar1;
  size_t __n;
  
  __n = n2;
  if (n1 <= n2) {
    __n = n1;
  }
  iVar1 = memcmp(s1,s2,__n);
  if (iVar1 == 0) {
    iVar1 = (uint)(n1 >= n2 && n1 != n2) - (uint)(n1 < n2);
  }
  return iVar1;
}

