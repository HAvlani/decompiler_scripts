
uintmax_t get_next_tab_column(uintmax_t column,size_t *tab_index,_Bool *last_tab)

{
  size_t sVar1;
  uintmax_t *puVar2;
  ulong uVar3;
  uintmax_t uVar4;
  
  uVar4 = tab_size;
  *last_tab = false;
  puVar2 = tab_list;
  sVar1 = first_free_tab;
  if (uVar4 == 0) {
    uVar3 = *tab_index;
    if (uVar3 < first_free_tab) {
      do {
        if (column < puVar2[uVar3]) {
          return puVar2[uVar3];
        }
        uVar3 = uVar3 + 1;
        *tab_index = uVar3;
      } while (uVar3 != sVar1);
    }
    uVar4 = extend_size;
    if (extend_size == 0) {
      if (increment_size != 0) {
        return (increment_size + column) - (column - tab_list[sVar1 - 1]) % increment_size;
      }
      *last_tab = true;
      return 0;
    }
  }
  return (uVar4 + column) - column % uVar4;
}

