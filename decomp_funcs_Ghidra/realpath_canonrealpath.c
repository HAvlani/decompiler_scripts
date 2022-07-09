
char * realpath_canon(char *fname,int can_mode)

{
  char *name;
  char *pcVar1;
  
  name = canonicalize_filename_mode(fname,can_mode);
  pcVar1 = name;
  if ((logical != false) && (name != (char *)0x0)) {
    pcVar1 = canonicalize_filename_mode(name,can_mode & ~CAN_NOLINKS);
    rpl_free(name);
  }
  return pcVar1;
}

