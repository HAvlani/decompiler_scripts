
/* WARNING: Unknown calling convention yet parameter storage is locked */

_Bool setup_dir(void)

{
  Hash_table *pHVar1;
  Hash_table **in_RSI;
  uint in_EDI;
  
  if ((in_EDI & 0x102) != 0) {
    pHVar1 = hash_initialize(0x1f,(Hash_tuning *)0x0,AD_hash,AD_compare,rpl_free);
    *in_RSI = pHVar1;
    return pHVar1 != (Hash_table *)0x0;
  }
  pHVar1 = (Hash_table *)malloc(0x20);
  *in_RSI = pHVar1;
  if (pHVar1 != (Hash_table *)0x0) {
    cycle_check_init((cycle_check_state *)pHVar1);
    return true;
  }
  return false;
}

