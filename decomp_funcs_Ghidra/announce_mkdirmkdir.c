
void announce_mkdir(char *dir,void *options)

{
  if (*(long *)((long)options + 0x20) != 0) {
    announce_mkdir(dir,options);
    return;
  }
  return;
}

