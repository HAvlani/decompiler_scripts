
int randread_free_body(randread_source *s)

{
  FILE *fp;
  int iVar1;
  
  fp = s->source;
  __explicit_bzero_chk(s,0x1038,0xffffffffffffffff);
  rpl_free(s);
  if (fp != (FILE *)0x0) {
    iVar1 = rpl_fclose(fp);
    return iVar1;
  }
  return 0;
}

