
void extract_field(line *line,char *field,size_t len)

{
  field *p;
  ulong uVar1;
  
  uVar1 = line->nfields;
  p = line->fields;
  if (line->nfields_allocated <= uVar1) {
    p = (field *)x2nrealloc(p,&line->nfields_allocated,0x10);
    uVar1 = line->nfields;
    line->fields = p;
  }
  p[uVar1].beg = field;
  p[uVar1].len = len;
  line->nfields = uVar1 + 1;
  return;
}

