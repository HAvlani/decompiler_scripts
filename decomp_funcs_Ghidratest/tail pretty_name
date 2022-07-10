
char * pretty_name(File_spec *f)

{
  char *pcVar1;
  
  if ((*(char *)&f->name == '-') && (*(char *)((long)&f->name + 1) == '\0')) {
    pcVar1 = (char *)dcgettext(0,"standard input",5);
    return pcVar1;
  }
  return (char *)f;
}

