
void * xpalloc(void *pa,idx_t *pn,idx_t n_incr_min,ptrdiff_t n_max,idx_t s)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  size_t s_00;
  long lVar4;
  
  lVar1 = *pn;
  lVar3 = (lVar1 >> 1) + lVar1;
  if (SCARRY8(lVar1 >> 1,lVar1)) {
    lVar3 = 0x7fffffffffffffff;
  }
  if ((-1 < n_max) && (n_max < lVar3)) {
    lVar3 = n_max;
  }
  s_00 = lVar3 * s;
  if (SEXT816((long)s_00) == SEXT816(lVar3) * SEXT816(s)) {
    if (0x7f < (long)s_00) goto joined_r0x00106f26;
    lVar4 = 0x80;
  }
  else {
    lVar4 = 0x7fffffffffffffff;
  }
  lVar3 = lVar4 / s;
  s_00 = lVar4 - lVar4 % s;
joined_r0x00106f26:
  if (pa == (void *)0x0) {
    *pn = 0;
  }
  if ((lVar3 - lVar1 < n_incr_min) &&
     ((lVar3 = lVar1 + n_incr_min, SCARRY8(lVar1,n_incr_min) ||
      (((n_max < lVar3 && (-1 < n_max)) ||
       (s_00 = lVar3 * s, SEXT816((long)s_00) != SEXT816(lVar3) * SEXT816(s))))))) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  pvVar2 = xrealloc(pa,s_00);
  *pn = lVar3;
  return pvVar2;
}

