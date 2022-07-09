
argv_iterator * argv_iter_init_argv(char **argv)

{
  argv_iterator *paVar1;
  
  paVar1 = (argv_iterator *)malloc(0x30);
  if (paVar1 != (argv_iterator *)0x0) {
    paVar1->fp = (FILE *)0x0;
    paVar1->arg_list = argv;
    paVar1->p = argv;
  }
  return paVar1;
}

