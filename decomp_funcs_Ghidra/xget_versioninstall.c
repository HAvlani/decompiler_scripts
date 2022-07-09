
backup_type xget_version(char *context,char *version)

{
  backup_type bVar1;
  
  if ((version == (char *)0x0) || (*version == '\0')) {
    version = getenv("VERSION_CONTROL");
    if ((version == (char *)0x0) || (*version == '\0')) {
      return numbered_existing_backups;
    }
    context = "$VERSION_CONTROL";
  }
  bVar1 = get_version(context,version);
  return bVar1;
}

