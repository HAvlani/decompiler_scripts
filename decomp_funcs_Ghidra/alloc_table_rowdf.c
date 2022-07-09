
void alloc_table_row(void)

{
  char ***pppcVar1;
  char **ppcVar2;
  
  nrows = nrows + 1;
  table = (char ***)xreallocarray(table,nrows,8);
  pppcVar1 = table + (nrows - 1);
  ppcVar2 = (char **)xnmalloc(ncolumns,8);
  *pppcVar1 = ppcVar2;
  return;
}

