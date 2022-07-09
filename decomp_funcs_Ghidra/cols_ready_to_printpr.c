
int cols_ready_to_print(void)

{
  COLUMN *pCVar1;
  int iVar2;
  
  iVar2 = columns;
  if (columns != 0) {
    iVar2 = 0;
    pCVar1 = column_vector;
    do {
      if (((uint)pCVar1->status < 2) ||
         (((storing_columns != false && (0 < pCVar1->lines_stored)) && (0 < pCVar1->lines_to_print))
         )) {
        iVar2 = iVar2 + 1;
      }
      pCVar1 = pCVar1 + 1;
    } while (pCVar1 != column_vector + (ulong)(columns - 1) + 1);
  }
  return iVar2;
}

