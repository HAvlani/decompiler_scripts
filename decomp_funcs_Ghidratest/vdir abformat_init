
void abformat_init(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  byte *__s;
  char *pcVar5;
  ushort **ppuVar6;
  size_t sVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  int __item;
  char (*__s_00) [128];
  ulong uVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  undefined8 uVar13;
  long local_678;
  ulong local_660;
  char *local_658;
  long local_650;
  char local_648 [1536];
  char local_48 [8];
  long local_40;
  
  lVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    pcVar4 = *(char **)((long)long_time_format + lVar10);
    cVar2 = *pcVar4;
    while (cVar2 != '\0') {
      cVar8 = pcVar4[1];
      if (cVar2 == '%') {
        if (cVar8 == '%') {
          cVar8 = pcVar4[2];
          pcVar4 = pcVar4 + 1;
        }
        else if (cVar8 == 'b') goto LAB_00106cfe;
      }
      pcVar4 = pcVar4 + 1;
      cVar2 = cVar8;
    }
    pcVar4 = (char *)0x0;
LAB_00106cfe:
    *(char **)((long)&local_658 + lVar10) = pcVar4;
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x10);
  if ((local_658 != (char *)0x0) || (local_650 != 0)) {
    uVar11 = 0xc;
    do {
      __item = 0x2000e;
      uVar9 = 0;
      pcVar4 = local_648;
      do {
        local_660 = uVar11;
        __s = (byte *)nl_langinfo(__item);
        pcVar5 = strchr((char *)__s,0x25);
        if (pcVar5 != (char *)0x0) goto LAB_00106de4;
        ppuVar6 = __ctype_b_loc();
        uVar13 = 0x106da3;
        sVar7 = mbsalign((char *)__s,pcVar4,0x80,&local_660,
                         (*ppuVar6)[*__s] >> 0xb & MBS_ALIGN_RIGHT,0);
        if (0x7f < sVar7) goto LAB_00106de4;
        if (uVar9 < local_660) {
          uVar9 = local_660;
        }
        __item = __item + 1;
        pcVar4 = pcVar4 + 0x80;
      } while (pcVar4 != local_48);
      bVar1 = uVar9 < uVar11;
      uVar11 = uVar9;
    } while (bVar1);
    local_678 = 0;
    while( true ) {
      pcVar4 = long_time_format[local_678];
      pcVar5 = (&local_658)[local_678];
      __s_00 = (char (*) [128])abformat[local_678];
      pcVar12 = local_648;
      do {
        if (pcVar5 == (char *)0x0) {
          uVar13 = 0x106ed7;
          uVar3 = snprintf((char *)__s_00,0x80,"%s",pcVar4);
        }
        else {
          if (0x80 < (long)pcVar5 - (long)pcVar4) goto LAB_00106de4;
          uVar3 = __snprintf_chk(__s_00,0x80,1,0xffffffffffffffff,"%.*s%s%s",
                                 (long)pcVar5 - (long)pcVar4 & 0xffffffff,pcVar4,pcVar12,pcVar5 + 2,
                                 uVar13);
        }
        if (0x7f < uVar3) goto LAB_00106de4;
        __s_00 = __s_00[1];
        pcVar12 = pcVar12 + 0x80;
      } while (pcVar12 != local_48);
      if (local_678 == 1) break;
      local_678 = 1;
    }
    use_abformat = true;
  }
LAB_00106de4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

