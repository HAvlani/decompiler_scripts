
_Bool path_prefix(char *prefix,char *path)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = prefix[1];
  pcVar2 = prefix + 1;
  pcVar3 = path + 1;
  if (cVar1 == '\0') {
    return path[1] != '/';
  }
  if ((cVar1 == '/') && (prefix[2] == '\0')) {
    return path[1] == '/';
  }
  while ((*pcVar3 != '\0' && (*pcVar3 == cVar1))) {
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') {
      return *pcVar3 == '/' || *pcVar3 == '\0';
    }
  }
  return false;
}

