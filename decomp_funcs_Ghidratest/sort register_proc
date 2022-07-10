
void register_proc(tempnode *temp)

{
  Hash_table *table;
  void *pvVar1;
  
  if (proctab == (Hash_table *)0x0) {
    proctab = hash_initialize(0x2f,(Hash_tuning *)0x0,proctab_hasher,proctab_comparator,
                              (Hash_data_freer *)0x0);
    if (proctab == (Hash_table *)0x0) goto LAB_001079b4;
  }
  table = proctab;
  temp->state = '\x01';
  pvVar1 = hash_insert(table,temp);
  if (pvVar1 != (void *)0x0) {
    return;
  }
LAB_001079b4:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

