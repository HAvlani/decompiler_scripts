
char * savedir(char *dir,savedir_option option)

{
  int iVar1;
  DIR *dirp;
  char *p;
  
  dirp = opendir_safer(dir);
  if (dirp == (DIR *)0x0) {
    return (char *)0x0;
  }
  p = streamsavedir(dirp,option);
  iVar1 = closedir((DIR *)dirp);
  if (iVar1 == 0) {
    return p;
  }
  rpl_free(p);
  return (char *)0x0;
}

