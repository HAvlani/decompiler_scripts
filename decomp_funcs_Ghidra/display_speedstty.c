
void display_speed(termios *mode,_Bool fancy)

{
  speed_t sVar1;
  speed_t sVar2;
  int iVar3;
  speed_map *psVar4;
  speed_map *psVar5;
  speed_t sVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  
  sVar1 = cfgetispeed((termios *)mode);
  if (sVar1 != 0) {
    sVar1 = cfgetispeed((termios *)mode);
    sVar2 = cfgetospeed((termios *)mode);
    if (sVar1 != sVar2) {
      psVar4 = speeds;
      sVar1 = cfgetospeed((termios *)mode);
      psVar5 = speeds;
      iVar3 = 0;
      sVar6 = 0;
      while (psVar5 = psVar5 + 1, sVar1 != sVar6) {
        iVar3 = iVar3 + 1;
        if (psVar5->string == (char *)0x0) {
          uVar7 = 0;
          goto LAB_001048fc;
        }
        sVar6 = psVar5->speed;
      }
      uVar7 = speeds[iVar3].value;
LAB_001048fc:
      sVar1 = cfgetispeed((termios *)mode);
      iVar3 = 0;
      sVar6 = 0;
      while (psVar4 = psVar4 + 1, sVar1 != sVar6) {
        iVar3 = iVar3 + 1;
        if (psVar4->string == (char *)0x0) {
          uVar8 = 0;
          goto LAB_00104938;
        }
        sVar6 = psVar4->speed;
      }
      uVar8 = speeds[iVar3].value;
LAB_00104938:
      pcVar9 = "ispeed %lu baud; ospeed %lu baud;";
      if (fancy == false) {
        pcVar9 = "%lu %lu\n";
      }
      wrapf(pcVar9,uVar8,uVar7);
      goto LAB_00104897;
    }
  }
  sVar1 = cfgetospeed((termios *)mode);
  psVar4 = speeds;
  iVar3 = 0;
  sVar6 = 0;
  while (psVar4 = psVar4 + 1, sVar1 != sVar6) {
    iVar3 = iVar3 + 1;
    if (psVar4->string == (char *)0x0) {
      uVar7 = 0;
      goto LAB_0010487c;
    }
    sVar6 = psVar4->speed;
  }
  uVar7 = speeds[iVar3].value;
LAB_0010487c:
  pcVar9 = "speed %lu baud;";
  if (fancy == false) {
    pcVar9 = "%lu\n";
  }
  wrapf(pcVar9,uVar7);
LAB_00104897:
  if (fancy == false) {
    current_col = 0;
  }
  return;
}

