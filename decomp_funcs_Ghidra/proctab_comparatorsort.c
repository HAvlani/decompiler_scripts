
_Bool proctab_comparator(void *e1,void *e2)

{
  return *(int *)((long)e1 + 8) == *(int *)((long)e2 + 8);
}

