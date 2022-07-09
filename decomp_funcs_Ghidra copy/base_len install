
size_t base_len(char *name)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = strlen(name);
  do {
    sVar2 = sVar1;
    if (sVar2 < 2) {
      return sVar2;
    }
    sVar1 = sVar2 - 1;
  } while (name[sVar2 - 1] == '/');
  return sVar2;
}

