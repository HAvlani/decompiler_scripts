
int find_unit_order(char *number)

{
  char cVar1;
  int iVar2;
  char cVar3;
  long in_FS_OFFSET;
  char *p;
  long local_10;
  
  cVar3 = *number;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  p = number + (cVar3 == '-');
  cVar1 = traverse_raw_number(&p);
  iVar2 = 0;
  if ('0' < cVar1) {
    iVar2 = (int)""[(byte)*p];
    if (cVar3 == '-') {
      iVar2 = -(int)""[(byte)*p];
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

