
void * hash_find_entry(Hash_table *table,void *entry,hash_entry **bucket_head,_Bool delete)

{
  hash_entry *phVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Bool _Var5;
  hash_entry *phVar6;
  void *pvVar7;
  
  phVar6 = (hash_entry *)safe_hasher();
  *bucket_head = phVar6;
  pvVar7 = phVar6->data;
  if (pvVar7 == (void *)0x0) {
LAB_00107401:
    pvVar7 = (void *)0x0;
  }
  else {
    if (pvVar7 != entry) {
      _Var5 = (*table->comparator)(entry,pvVar7);
      if (_Var5 == false) {
        for (; phVar6->next != (hash_entry *)0x0; phVar6 = phVar6->next) {
          pvVar7 = phVar6->next->data;
          if ((pvVar7 == entry) || (_Var5 = (*table->comparator)(entry,pvVar7), _Var5 != false)) {
            phVar1 = phVar6->next;
            pvVar7 = phVar1->data;
            if (delete == false) {
              return pvVar7;
            }
            phVar6->next = phVar1->next;
            phVar1->data = (void *)0x0;
            phVar1->next = table->free_entry_list;
            table->free_entry_list = phVar1;
            return pvVar7;
          }
        }
        goto LAB_00107401;
      }
      pvVar7 = phVar6->data;
    }
    if (delete != false) {
      phVar1 = phVar6->next;
      if (phVar1 != (hash_entry *)0x0) {
        uVar2 = *(undefined4 *)((long)&phVar1->data + 4);
        uVar3 = *(undefined4 *)&phVar1->next;
        uVar4 = *(undefined4 *)((long)&phVar1->next + 4);
        *(undefined4 *)&phVar6->data = *(undefined4 *)&phVar1->data;
        *(undefined4 *)((long)&phVar6->data + 4) = uVar2;
        *(undefined4 *)&phVar6->next = uVar3;
        *(undefined4 *)((long)&phVar6->next + 4) = uVar4;
        phVar1->data = (void *)0x0;
        phVar1->next = table->free_entry_list;
        table->free_entry_list = phVar1;
        return pvVar7;
      }
      phVar6->data = (void *)0x0;
    }
  }
  return pvVar7;
}

