
char * quotearg_custom(char *left_quote,char *right_quote,char *arg)

{
  char *pcVar1;
  
  pcVar1 = (char *)quotearg_n_custom_mem(0,left_quote,right_quote,arg,0xffffffffffffffff);
  return pcVar1;
}

