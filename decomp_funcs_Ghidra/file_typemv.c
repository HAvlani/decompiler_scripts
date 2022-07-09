
char * file_type(stat *st)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = st->st_mode & 0xf000;
  if (uVar1 == 0x8000) {
    if (st->st_size == 0) {
      pcVar2 = (char *)dcgettext(0,"regular empty file",5);
      return pcVar2;
    }
    pcVar2 = (char *)dcgettext(0,"regular file",5);
    return pcVar2;
  }
  if (uVar1 == 0x4000) {
    pcVar2 = (char *)dcgettext(0,"directory",5);
    return pcVar2;
  }
  if (uVar1 == 0xa000) {
    pcVar2 = (char *)dcgettext(0,"symbolic link",5);
    return pcVar2;
  }
  if (uVar1 != 0x6000) {
    if (uVar1 == 0x2000) {
      pcVar2 = (char *)dcgettext(0,"character special file",5);
      return pcVar2;
    }
    if (uVar1 != 0x1000) {
      if (uVar1 != 0xc000) {
        pcVar2 = (char *)dcgettext(0,"weird file",5);
        return pcVar2;
      }
      pcVar2 = (char *)dcgettext(0,"socket",5);
      return pcVar2;
    }
    pcVar2 = (char *)dcgettext(0,&DAT_00117a59,5);
    return pcVar2;
  }
  pcVar2 = (char *)dcgettext(0,"block special file",5);
  return pcVar2;
}

