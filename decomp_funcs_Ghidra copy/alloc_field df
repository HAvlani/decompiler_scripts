
void alloc_field(int f,char *c)

{
  ncolumns = ncolumns + 1;
  columns = (field_data_t **)xreallocarray(columns,ncolumns,8);
  columns[ncolumns - 1] = field_data + f;
  if (c != (char *)0x0) {
    field_data[f].caption = c;
  }
  if (field_data[f].used == false) {
    field_data[f].used = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!\"field used\"","src/df.c",0x1a9,"alloc_field");
}

