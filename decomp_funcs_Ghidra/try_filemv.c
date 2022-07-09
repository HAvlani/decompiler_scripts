
int try_file(char *tmpl,void *flags)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = open(tmpl,*flags & 0xffffff3c | 0xc2,0x180);
  return iVar1;
}

