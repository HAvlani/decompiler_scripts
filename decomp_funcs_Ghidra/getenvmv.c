
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0011dc80)();
  return pcVar1;
}
