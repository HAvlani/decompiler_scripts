
char get_type_indicator(_Bool stat_ok,mode_t mode,filetype type)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  if (stat_ok == false) {
    if (type == normal) {
      return '\0';
    }
    bVar3 = type == directory || type == arg_directory;
  }
  else {
    if ((mode & 0xf000) == 0x8000) {
      if (indicator_style != classify) {
        return '\0';
      }
      return ~-((mode & 0x49) == 0) & 0x2a;
    }
    bVar3 = (mode & 0xf000) == 0x4000;
  }
  cVar1 = '/';
  if ((bVar3) || (cVar1 = '\0', indicator_style == slash)) {
    return cVar1;
  }
  if (stat_ok == false) {
    if (type == symbolic_link) {
      return '@';
    }
    if (type == fifo) {
      return '|';
    }
    bVar3 = type == sock;
  }
  else {
    uVar2 = mode & 0xf000;
    if (uVar2 == 0xa000) {
      return '@';
    }
    if (uVar2 == 0x1000) {
      return '|';
    }
    bVar3 = uVar2 == 0xc000;
  }
  return -bVar3 & 0x3d;
}

