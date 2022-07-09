
void set_simple_backup_suffix(char *s)

{
  char *pcVar1;
  
  if ((((s != (char *)0x0) || (s = getenv("SIMPLE_BACKUP_SUFFIX"), s != (char *)0x0)) &&
      (*s != '\0')) && (pcVar1 = last_component(s), s == pcVar1)) {
    simple_backup_suffix = s;
    return;
  }
  simple_backup_suffix = "~";
  return;
}

