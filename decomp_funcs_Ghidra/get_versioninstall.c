
backup_type get_version(char *context,char *version)

{
  backup_type bVar1;
  
  if ((version != (char *)0x0) && (*version != '\0')) {
    bVar1 = get_version(context,version);
    return bVar1;
  }
  return numbered_existing_backups;
}

