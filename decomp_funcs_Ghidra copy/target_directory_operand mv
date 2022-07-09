
int target_directory_operand(char *file,stat *st)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  cVar2 = *file;
  pcVar4 = file;
  do {
    if (cVar2 != '.') {
LAB_00112fac:
      iVar3 = open(file,0x210000);
      return iVar3;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    if (*pcVar1 != '/') {
      if (*pcVar1 == '\0') {
        return -100;
      }
      goto LAB_00112fac;
    }
    do {
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    } while (cVar2 == '/');
    if (cVar2 == '\0') {
      return -100;
    }
  } while( true );
}

