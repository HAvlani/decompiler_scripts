
void reset_status(void)

{
  bool bVar1;
  COLUMN *pCVar2;
  COLUMN *pCVar3;
  int iVar4;
  COLUMN *pCVar5;
  
  pCVar2 = column_vector;
  if (columns != 0) {
    bVar1 = false;
    pCVar5 = column_vector + (ulong)(columns - 1) + 1;
    pCVar3 = column_vector;
    iVar4 = files_ready_to_read;
    do {
      if (pCVar3->status == FADVISE_SEQUENTIAL) {
        pCVar3->status = FADVISE_NORMAL;
        iVar4 = iVar4 + 1;
        bVar1 = true;
      }
      pCVar3 = pCVar3 + 1;
    } while (pCVar3 != pCVar5);
    if (bVar1) {
      files_ready_to_read = iVar4;
    }
  }
  if (storing_columns != false) {
    files_ready_to_read = (int)(pCVar2->status != CLOSED);
  }
  return;
}

