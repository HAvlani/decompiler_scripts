
char * file_escape(char *str,_Bool path)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  byte *pbVar4;
  
  sVar3 = strlen(str);
  pbVar4 = (byte *)xnmalloc(3,sVar3 + 1);
  bVar1 = *str;
  pbVar2 = pbVar4;
  do {
    while( true ) {
      if (bVar1 == 0) {
        *pbVar2 = 0;
        return (char *)pbVar4;
      }
      str = (char *)((byte *)str + 1);
      if ((bVar1 != 0x2f) || (path == false)) break;
      *pbVar2 = 0x2f;
LAB_001074f7:
      bVar1 = *str;
      pbVar2 = pbVar2 + 1;
    }
    if (RFC3986[bVar1] != '\0') {
      *pbVar2 = bVar1;
      goto LAB_001074f7;
    }
    __sprintf_chk(pbVar2,1,0xffffffffffffffff,"%%%02x",bVar1);
    bVar1 = *str;
    pbVar2 = pbVar2 + 3;
  } while( true );
}

