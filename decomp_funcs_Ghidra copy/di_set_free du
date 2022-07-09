
void di_set_free(di_set *dis)

{
  hash_free(dis->dev_map);
  if (dis->ino_map != (ino_map *)0x0) {
    ino_map_free(dis->ino_map);
  }
  rpl_free(dis->probe);
  rpl_free(dis);
  return;
}

