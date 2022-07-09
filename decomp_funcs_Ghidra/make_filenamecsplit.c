
char * make_filename(int num)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  
  strcpy(filename_space,prefix);
  pcVar3 = filename_space;
  pcVar2 = suffix;
  iVar1 = digits;
  if (suffix != (char *)0x0) {
    sVar4 = strlen(prefix);
    __sprintf_chk(pcVar3 + sVar4,1,0xffffffffffffffff,pcVar2,num);
    return filename_space;
  }
  sVar4 = strlen(prefix);
  __sprintf_chk(pcVar3 + sVar4,1,0xffffffffffffffff,&DAT_00118004,iVar1,num);
  return filename_space;
}

