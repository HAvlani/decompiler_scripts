
int rpl_vprintf(char *format,__va_list_tag *args)

{
  int iVar1;
  
  iVar1 = rpl_vfprintf(stdout,format,args);
  return iVar1;
}

