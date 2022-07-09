
size_t format_code_offset(char *directive)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  
  sVar1 = strspn(directive + 1,"\'-+ #0I");
  sVar2 = strspn(directive + sVar1 + 1,"0123456789");
  pcVar3 = directive + sVar1 + 1 + sVar2;
  if (*pcVar3 == '.') {
    sVar1 = strspn(pcVar3 + 1,"0123456789");
    pcVar3 = pcVar3 + sVar1 + 1;
  }
  return (long)pcVar3 - (long)directive;
}

