
void check_start_new_arg(splitbuf *ss)

{
  int iVar1;
  long lVar2;
  
  splitbuf_append_byte(ss,'\0');
  iVar1 = ss->argc;
  lVar2 = (long)(ss->extra_argc + iVar1 + 1);
  if (ss->half_alloc == lVar2 || ss->half_alloc < lVar2) {
    splitbuf_grow(ss);
  }
  ss->argv[(long)iVar1 + 1] = ss->argv[iVar1];
  ss->argc = iVar1 + 1;
  ss->sep = false;
  return;
}

