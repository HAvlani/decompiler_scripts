
/* WARNING: Unknown calling convention yet parameter storage is locked */

_Bool enter_dir(void)

{
  undefined8 uVar1;
  Hash_table *table;
  _Bool _Var2;
  undefined8 *entry;
  undefined8 *puVar3;
  undefined8 *in_RDX;
  Hash_table **in_RSI;
  uint in_EDI;
  
  if ((in_EDI & 0x102) == 0) {
    _Var2 = cycle_check((cycle_check_state *)*in_RSI,(stat *)(in_RDX + 0xe));
    if (_Var2 != false) {
      *in_RDX = in_RDX;
      *(undefined2 *)(in_RDX + 0xd) = 2;
      return _Var2;
    }
  }
  else {
    entry = (undefined8 *)malloc(0x18);
    if (entry == (undefined8 *)0x0) {
      return false;
    }
    uVar1 = in_RDX[0xe];
    table = *in_RSI;
    entry[2] = in_RDX;
    *entry = uVar1;
    entry[1] = in_RDX[0xf];
    puVar3 = (undefined8 *)hash_insert(table,entry);
    if (entry != puVar3) {
      rpl_free(entry);
      if (puVar3 == (undefined8 *)0x0) {
        return false;
      }
      uVar1 = puVar3[2];
      *(undefined2 *)(in_RDX + 0xd) = 2;
      *in_RDX = uVar1;
    }
  }
  return true;
}

