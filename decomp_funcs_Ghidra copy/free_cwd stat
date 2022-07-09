
void free_cwd(saved_cwd *cwd)

{
  if (-1 < cwd->desc) {
    close(cwd->desc);
  }
  rpl_free(cwd->name);
  return;
}

