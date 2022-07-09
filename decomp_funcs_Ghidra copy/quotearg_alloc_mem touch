
char * quotearg_alloc_mem(char *arg,size_t argsize,size_t *size,quoting_options *o)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  int e;
  
  if (o == (quoting_options *)0x0) {
    o = &default_quoting_options;
  }
  uVar6 = 0x10b771;
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(size == (size_t *)0x0) | o->flags;
  sVar3 = quotearg_buffer_restyled
                    (0,0,arg,argsize,o->style,uVar5,o->quote_these_too,o->left_quote,o->right_quote,
                     uVar6);
  uVar6 = 0x10b7cc;
  pcVar4 = xcharalloc(sVar3 + 1);
  quotearg_buffer_restyled
            (pcVar4,sVar3 + 1,arg,argsize,o->style,uVar5,o->quote_these_too,o->left_quote,
             o->right_quote,uVar6);
  *piVar2 = iVar1;
  if (size != (size_t *)0x0) {
    *size = sVar3;
  }
  return pcVar4;
}

