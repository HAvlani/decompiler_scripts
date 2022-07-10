
_Bool same_nameat(int source_dfd,char *source,int dest_dfd,char *dest)

{
  _Bool _Var1;
  int iVar2;
  char *name;
  char *name_00;
  size_t __n;
  size_t sVar3;
  
  name = last_component(source);
  name_00 = last_component(dest);
  __n = base_len(name);
  sVar3 = base_len(name_00);
  if (__n == sVar3) {
    iVar2 = memcmp(name,name_00,__n);
    if (iVar2 == 0) {
      _Var1 = same_nameat(source_dfd,source,dest_dfd,dest);
      return _Var1;
    }
  }
  return false;
}

