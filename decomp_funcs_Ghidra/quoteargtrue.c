
char * quotearg(char *arg)

{
  char *pcVar1;
  
  pcVar1 = (char *)quotearg_n_options(0,arg,0xffffffffffffffff,&default_quoting_options);
  return pcVar1;
}

