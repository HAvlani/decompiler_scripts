
size_t quotearg_buffer(char *buffer,size_t buffersize,char *arg,size_t argsize,quoting_options *o)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  undefined8 uVar4;
  
  if (o == (quoting_options *)0x0) {
    o = &default_quoting_options;
  }
  uVar4 = 0x104d86;
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  sVar3 = quotearg_buffer_restyled
                    (buffer,buffersize,arg,argsize,o->style,o->flags,o->quote_these_too,
                     o->left_quote,o->right_quote,uVar4);
  *piVar2 = iVar1;
  return sVar3;
}

