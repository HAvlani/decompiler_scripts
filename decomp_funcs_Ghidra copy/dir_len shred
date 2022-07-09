
size_t dir_len(char *file)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  
  cVar1 = *file;
  pcVar3 = last_component(file);
  sVar2 = (long)pcVar3 - (long)file;
  do {
    sVar4 = sVar2;
    if (sVar4 <= (cVar1 == '/')) {
      return sVar4;
    }
    sVar2 = sVar4 - 1;
  } while (file[sVar4 - 1] == '/');
  return sVar4;
}

