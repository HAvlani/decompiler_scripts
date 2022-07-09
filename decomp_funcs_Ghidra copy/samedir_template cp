
char * samedir_template(char *dstname,char *buf)

{
  ulong __size;
  char *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = last_component(dstname);
  __size = ((long)pcVar1 - (long)dstname) + 9;
  if ((0x100 < __size) && (buf = (char *)malloc(__size), buf == (char *)0x0)) {
    return (char *)0x0;
  }
  puVar2 = (undefined8 *)mempcpy(buf,dstname,(long)pcVar1 - (long)dstname);
  *puVar2 = simple_pattern._0_8_;
  *(char *)(puVar2 + 1) = simple_pattern[8];
  return buf;
}

