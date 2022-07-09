
argv_iterator * argv_iter_init_stream(FILE *fp)

{
  argv_iterator *paVar1;
  
  paVar1 = (argv_iterator *)malloc(0x30);
  if (paVar1 != (argv_iterator *)0x0) {
    paVar1->fp = fp;
    paVar1->tok = (char *)0x0;
    paVar1->buf_len = 0;
    paVar1->item_idx = 0;
    paVar1->arg_list = (char **)0x0;
  }
  return paVar1;
}

