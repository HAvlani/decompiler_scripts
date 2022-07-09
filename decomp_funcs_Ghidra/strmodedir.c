
void strmode(mode_t mode,char *str)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = '-';
  uVar3 = mode & 0xf000;
  if ((((uVar3 != 0x8000) && (cVar2 = 'd', uVar3 != 0x4000)) && (cVar2 = 'b', uVar3 != 0x6000)) &&
     (((cVar2 = 'c', uVar3 != 0x2000 && (cVar2 = 'l', uVar3 != 0xa000)) &&
      ((cVar2 = 'p', uVar3 != 0x1000 && (cVar2 = 's', uVar3 != 0xc000)))))) {
    cVar2 = '?';
  }
  *str = cVar2;
  str[1] = (-((mode & 0x100) == 0) & 0xbbU) + 0x72;
  str[2] = (-((mode & 0x80) == 0) & 0xb6U) + 0x77;
  bVar1 = -((mode & 0x40) == 0);
  if ((mode & 0x800) == 0) {
    cVar2 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar2 = (bVar1 & 0xe0) + 0x73;
  }
  str[3] = cVar2;
  str[4] = (-((mode & 0x20) == 0) & 0xbbU) + 0x72;
  str[5] = (-((mode & 0x10) == 0) & 0xb6U) + 0x77;
  bVar1 = -((mode & 8) == 0);
  if ((mode & 0x400) == 0) {
    cVar2 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar2 = (bVar1 & 0xe0) + 0x73;
  }
  str[6] = cVar2;
  str[7] = (-((mode & 4) == 0) & 0xbbU) + 0x72;
  str[8] = (-((mode & 2) == 0) & 0xb6U) + 0x77;
  bVar1 = -((mode & 1) == 0);
  if ((mode & 0x200) != 0) {
    str[9] = (bVar1 & 0xe0) + 0x74;
    *(undefined2 *)(str + 10) = 0x20;
    return;
  }
  str[9] = (bVar1 & 0xb5) + 0x78;
  *(undefined2 *)(str + 10) = 0x20;
  return;
}

