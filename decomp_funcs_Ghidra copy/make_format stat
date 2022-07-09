
void make_format(char *pformat,size_t prefix_len,char *allowed_flags,char *suffix)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  uint __c;
  
  pcVar1 = pformat + prefix_len;
  pcVar5 = pformat + 1;
  pcVar6 = pcVar5;
  do {
    if (pcVar1 <= pcVar5) {
code_r0x00102644:
      (*(code *)PTR_strcpy_00116d70)(pcVar6,suffix);
      return;
    }
    cVar2 = *pcVar5;
    __c = (uint)cVar2;
    pcVar3 = strchr("\'-+ #0I",__c);
    if (pcVar3 == (char *)0x0) {
      if (pcVar5 < pcVar1) {
        lVar4 = 0;
        while( true ) {
          pcVar6[lVar4] = (char)__c;
          lVar4 = lVar4 + 1;
          if ((long)pcVar1 - (long)pcVar5 == lVar4) break;
          __c = (uint)(byte)pcVar5[lVar4];
        }
        pcVar6 = pcVar6 + ((long)pcVar1 - (long)pcVar5);
      }
      goto code_r0x00102644;
    }
    pcVar3 = strchr(allowed_flags,__c);
    if (pcVar3 != (char *)0x0) {
      *pcVar6 = cVar2;
      pcVar6 = pcVar6 + 1;
    }
    pcVar5 = pcVar5 + 1;
  } while( true );
}

