
gid_t * realloc_groupbuf(gid_t *g,size_t num)

{
  gid_t *pgVar1;
  int *piVar2;
  
  if ((-1 < (long)(num << 2)) && (num >> 0x3e == 0)) {
    pgVar1 = (gid_t *)realloc(g,num << 2);
    return pgVar1;
  }
  piVar2 = __errno_location();
  *piVar2 = 0xc;
  return (gid_t *)0x0;
}

