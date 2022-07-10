
void perform_basename(char *string,char *suffix,_Bool use_nuls)

{
  char *file;
  size_t sVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  file = base_name(string);
  strip_trailing_slashes(file);
  if ((suffix != (char *)0x0) && (*file != '/')) {
    sVar1 = strlen(file);
    pcVar4 = file + sVar1;
    sVar1 = strlen(suffix);
    pcVar2 = suffix + sVar1;
    while (file < pcVar4) {
      if (pcVar2 <= suffix) {
        if (file < pcVar4) {
          *pcVar4 = '\0';
        }
        break;
      }
      pcVar4 = pcVar4 + -1;
      pcVar2 = pcVar2 + -1;
      if (*pcVar4 != *pcVar2) break;
    }
  }
  fputs_unlocked(file,stdout);
  pcVar4 = stdout->_IO_write_ptr;
  uVar3 = -(uint)(use_nuls == false) & 10;
  if (pcVar4 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar4 + 1;
    *pcVar4 = (char)uVar3;
  }
  else {
    __overflow(stdout,uVar3);
  }
  rpl_free(file);
  return;
}

