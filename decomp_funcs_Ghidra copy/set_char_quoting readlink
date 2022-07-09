
int set_char_quoting(quoting_options *o,char c,int i)

{
  uint uVar1;
  uint uVar2;
  
  if (o == (quoting_options *)0x0) {
    o = &default_quoting_options;
  }
  uVar1 = o->quote_these_too[(byte)c >> 5];
  uVar2 = uVar1 >> (c & 0x1fU);
  o->quote_these_too[(byte)c >> 5] = ((i ^ uVar2) & 1) << (c & 0x1fU) ^ uVar1;
  return uVar2 & 1;
}

