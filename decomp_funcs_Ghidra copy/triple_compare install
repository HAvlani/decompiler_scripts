
_Bool triple_compare(void *x,void *y)

{
  _Bool _Var1;
  
  if ((*(long *)((long)x + 8) == *(long *)((long)y + 8)) &&
     (*(long *)((long)x + 0x10) == *(long *)((long)y + 0x10))) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    _Var1 = same_name(*x,*y);
    return _Var1;
  }
  return false;
}

