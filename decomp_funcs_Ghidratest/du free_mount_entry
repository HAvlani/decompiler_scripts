
void free_mount_entry(mount_entry *me)

{
  rpl_free(me->me_devname);
  rpl_free(me->me_mountdir);
  rpl_free(me->me_mntroot);
  if ((me->field_0x28 & 4) == 0) {
    rpl_free(me);
    return;
  }
  rpl_free(me->me_type);
  rpl_free(me);
  return;
}

