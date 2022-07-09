
char * setlocale_null(int category)

{
  char *pcVar1;
  
  pcVar1 = setlocale(category,(char *)0x0);
  return pcVar1;
}

