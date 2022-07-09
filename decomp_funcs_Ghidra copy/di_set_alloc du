
di_set * di_set_alloc(void)

{
  di_set *p;
  Hash_table *pHVar1;
  di_set *pdVar2;
  
  p = (di_set *)malloc(0x18);
  pdVar2 = p;
  if (p != (di_set *)0x0) {
    pHVar1 = hash_initialize(0xb,(Hash_tuning *)0x0,di_ent_hash,di_ent_compare,di_ent_free);
    p->dev_map = pHVar1;
    if (pHVar1 == (Hash_table *)0x0) {
      pdVar2 = (di_set *)0x0;
      rpl_free(p);
    }
    else {
      p->ino_map = (ino_map *)0x0;
      p->probe = (di_ent *)0x0;
    }
  }
  return pdVar2;
}

