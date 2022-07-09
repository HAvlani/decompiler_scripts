
void add_range_pair(uintmax_t lo,uintmax_t hi)

{
  field_range_pair *pfVar1;
  
  if (n_frp == n_frp_allocated) {
    frp = (field_range_pair *)x2nrealloc(frp,&n_frp_allocated,0x10);
  }
  pfVar1 = frp + n_frp;
  pfVar1->lo = lo;
  pfVar1->hi = hi;
  n_frp = n_frp + 1;
  return;
}

