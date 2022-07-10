
/* WARNING: Unknown calling convention yet parameter storage is locked */

void hold_file(void)

{
  COLUMN *pCVar1;
  COLUMN *pCVar2;
  undefined4 *in_RSI;
  undefined4 *in_RDI;
  bool bVar3;
  
  if (parallel_files == false) {
    if (columns != 0) {
      bVar3 = storing_columns == false;
      pCVar2 = column_vector + (ulong)(columns - 1) + 1;
      pCVar1 = column_vector;
      do {
        pCVar1->status = ~-(uint)bVar3 + FADVISE_SEQUENTIAL;
        pCVar1 = pCVar1 + 1;
      } while (pCVar1 != pCVar2);
    }
    files_ready_to_read = files_ready_to_read + -1;
    *in_RSI = 0;
    return;
  }
  *in_RDI = 2;
  files_ready_to_read = files_ready_to_read + -1;
  *in_RSI = 0;
  return;
}

