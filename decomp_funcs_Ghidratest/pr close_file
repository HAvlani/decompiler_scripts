
void close_file(COLUMN *p)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  COLUMN *pCVar4;
  undefined8 uVar5;
  COLUMN *pCVar6;
  
  if (p->status == CLOSED) {
    return;
  }
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  if ((*(byte *)&((FILE *)p->fp)->_flags & 0x20) == 0) {
    iVar1 = 0;
  }
  iVar2 = fileno((FILE *)p->fp);
  if (iVar2 == 0) {
    clearerr_unlocked((FILE *)p->fp);
LAB_0010393a:
    if (iVar1 == 0) {
      if (parallel_files == false) {
        if (columns != 0) {
          pCVar6 = column_vector + (ulong)(columns - 1) + 1;
          pCVar4 = column_vector;
          do {
            pCVar4->status = CLOSED;
            if (pCVar4->lines_stored == 0) {
              pCVar4->lines_to_print = 0;
            }
            pCVar4 = pCVar4 + 1;
          } while (pCVar4 != pCVar6);
        }
        files_ready_to_read = files_ready_to_read + -1;
        return;
      }
      goto LAB_001039d8;
    }
  }
  else {
    iVar2 = rpl_fclose((FILE *)(FILE *)p->fp);
    if (iVar2 == 0) goto LAB_0010393a;
    if (iVar1 == 0) {
      iVar1 = *piVar3;
      goto LAB_0010393a;
    }
  }
  uVar5 = quotearg_n_style_colon(0,3,p->name);
  error(1,iVar1,"%s",uVar5);
LAB_001039d8:
  p->status = CLOSED;
  p->lines_to_print = 0;
  files_ready_to_read = files_ready_to_read + -1;
  return;
}

