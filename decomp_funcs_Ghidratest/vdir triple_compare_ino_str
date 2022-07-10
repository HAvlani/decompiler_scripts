
_Bool triple_compare_ino_str(void *x,void *y)

{
  int iVar1;
  
  if ((*(long *)((long)x + 8) == *(long *)((long)y + 8)) &&
     (*(long *)((long)x + 0x10) == *(long *)((long)y + 0x10))) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    iVar1 = strcmp(*x,*y);
    return iVar1 == 0;
  }
  return false;
}

