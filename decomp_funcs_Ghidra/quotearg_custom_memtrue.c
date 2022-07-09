
char * quotearg_custom_mem(char *left_quote,char *right_quote,char *arg,size_t argsize)

{
  char *pcVar1;
  
  pcVar1 = (char *)quotearg_n_custom_mem(0,left_quote,right_quote,arg,argsize);
  return pcVar1;
}

