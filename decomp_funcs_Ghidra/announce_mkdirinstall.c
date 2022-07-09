
void announce_mkdir(char *dir,void *options)

{
  if (*(char *)((long)options + 0x3c) == '\0') {
    return;
  }
  announce_mkdir(dir,options);
  return;
}

