
char * quotearg_style_mem(quoting_style s,char *arg,size_t argsize)

{
  char *pcVar1;
  
  pcVar1 = (char *)quotearg_n_style_mem(0,s,arg,argsize);
  return pcVar1;
}

