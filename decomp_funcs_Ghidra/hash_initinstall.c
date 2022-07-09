
void hash_init(void)

{
  src_to_dest = hash_initialize(0x67,(Hash_tuning *)0x0,src_to_dest_hash,src_to_dest_compare,
                                src_to_dest_free);
  if (src_to_dest != (Hash_table *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

