
void version_etc_ar(FILE *stream,char *command_name,char *package,char *version,char **authors)

{
  char *pcVar1;
  size_t n_authors;
  
  n_authors = 0;
  pcVar1 = *authors;
  while (pcVar1 != (char *)0x0) {
    n_authors = n_authors + 1;
    pcVar1 = authors[n_authors];
  }
  version_etc_arn(stream,command_name,package,version,authors,n_authors);
  return;
}

