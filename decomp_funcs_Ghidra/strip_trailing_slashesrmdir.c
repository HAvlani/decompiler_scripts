
_Bool strip_trailing_slashes(char *file)

{
  char cVar1;
  char *name;
  size_t sVar2;
  
  name = last_component(file);
  if (*name == '\0') {
    name = file;
  }
  sVar2 = base_len(name);
  cVar1 = name[sVar2];
  name[sVar2] = '\0';
  return cVar1 != '\0';
}

