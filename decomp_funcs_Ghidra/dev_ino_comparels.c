
_Bool dev_ino_compare(void *x,void *y)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if (*x != *y) {
    return false;
  }
  return *(long *)((long)x + 8) == *(long *)((long)y + 8);
}

