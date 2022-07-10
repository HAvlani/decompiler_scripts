
void call_freefun(obstack *h,void *old_chunk)

{
  if ((h->field_0x50 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00107cee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)h->freefun)(h->extra_arg);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00107cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)h->freefun)(old_chunk);
  return;
}

