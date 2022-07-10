
int try_link(char *dest,void *arg)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = linkat(*arg,*(char **)((long)arg + 8),*(int *)((long)arg + 0x10),dest,
                 *(int *)((long)arg + 0x14));
  return iVar1;
}

