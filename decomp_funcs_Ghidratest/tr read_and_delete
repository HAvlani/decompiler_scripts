
size_t read_and_delete(char *buf,size_t size)

{
  size_t sVar1;
  ulong uVar2;
  char *buf_00;
  size_t sVar3;
  
  do {
    sVar3 = 0;
    buf_00 = buf;
    sVar1 = safe_read(0,buf,size);
    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      plain_read(sVar3,buf_00);
    }
    if (sVar1 == 0) {
      return 0;
    }
    uVar2 = 0;
    do {
      sVar3 = uVar2;
      uVar2 = sVar3 + 1;
      if (in_delete_set[(byte)buf[sVar3]] != false) goto LAB_00103e71;
    } while (sVar1 != uVar2);
    uVar2 = sVar3 + 2;
    sVar3 = sVar1;
    if (sVar1 <= uVar2) {
      return sVar1;
    }
    do {
      if (in_delete_set[(byte)buf[uVar2]] == false) {
        buf[sVar3] = buf[uVar2];
        sVar3 = sVar3 + 1;
      }
      uVar2 = uVar2 + 1;
LAB_00103e71:
    } while (uVar2 < sVar1);
  } while (sVar3 == 0);
  return sVar3;
}

