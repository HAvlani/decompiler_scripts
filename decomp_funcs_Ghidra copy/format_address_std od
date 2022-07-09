
void format_address_std(uintmax_t address,char c)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *__s;
  long in_FS_OFFSET;
  char buf [25];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar5 = buf + 0x17;
  buf[24] = '\0';
  pcVar6 = pcVar5 + -(long)address_pad_len;
  if (address_base == 10) {
    do {
      pcVar5 = pcVar5 + -1;
      *pcVar5 = (char)address + (char)(address / 10) * -10 + '0';
      bVar2 = 9 < address;
      address = address / 10;
    } while (bVar2);
  }
  else if (address_base == 0x10) {
    do {
      pcVar5 = pcVar5 + -1;
      uVar4 = (uint)address;
      address = address >> 4;
      *pcVar5 = "0123456789abcdef"[uVar4 & 0xf];
    } while (address != 0);
  }
  else if (address_base == 8) {
    do {
      pcVar5 = pcVar5 + -1;
      bVar3 = (byte)address;
      address = address >> 3;
      *pcVar5 = (bVar3 & 7) + 0x30;
    } while (address != 0);
  }
  __s = pcVar5;
  if (pcVar6 < pcVar5) {
    do {
      pcVar5 = pcVar5 + -1;
      *pcVar5 = '0';
      __s = pcVar6;
    } while (pcVar6 != pcVar5);
  }
  buf[23] = c;
  fputs_unlocked(__s,stdout);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

