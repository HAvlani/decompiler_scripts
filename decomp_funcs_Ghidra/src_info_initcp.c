
void src_info_init(cp_options *x)

{
  Hash_table *pHVar1;
  
  pHVar1 = hash_initialize(0x3d,(Hash_tuning *)0x0,triple_hash_no_name,triple_compare,triple_free);
  x->src_info = pHVar1;
  if (pHVar1 != (Hash_table *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

