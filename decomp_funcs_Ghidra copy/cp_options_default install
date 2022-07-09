
void cp_options_default(cp_options *x)

{
  __uid_t _Var1;
  ulong uVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)x = 0;
  x->src_info = (Hash_table *)0x0;
  puVar3 = (undefined8 *)((ulong)&x->interactive & 0xfffffffffffffff8);
  uVar2 = (ulong)(((int)x - (int)puVar3) + 0x58U >> 3);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _Var1 = geteuid();
  x->rename_errno = -1;
  x->owner_privileges = _Var1 == 0;
  x->chown_privileges = _Var1 == 0;
  return;
}

