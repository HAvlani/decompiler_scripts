
_Bool get_funky_string(char **dest,char **src,_Bool equals_end,size_t *output_count)

{
  char cVar1;
  size_t sVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  bool bVar8;
  
  pbVar5 = (byte *)*src;
  pbVar6 = (byte *)*dest;
  sVar2 = 0;
LAB_00106965:
  do {
    bVar3 = *pbVar5;
    cVar1 = bVar3 + 0xa4;
    bVar8 = bVar3 == 0x5c;
    pbVar4 = pbVar5;
    while (!bVar8) {
      if (bVar8 || SBORROW1(bVar3,'\\') != cVar1 < '\0') {
        if (bVar3 == 0x3d) {
          if (equals_end != false) goto LAB_00106a15;
        }
        else if (((char)bVar3 < '>') && ((bVar3 == 0 || (bVar3 == 0x3a)))) {
          equals_end = true;
          goto LAB_00106a15;
        }
      }
      else if (bVar3 == 0x5e) {
        bVar3 = pbVar4[1];
        pbVar5 = pbVar4 + 1;
        if ((byte)(bVar3 - 0x40) < 0x3f) {
          pbVar5 = pbVar4 + 2;
          bVar3 = bVar3 & 0x1f;
          goto LAB_001069ed;
        }
        if (bVar3 != 0x3f) goto LAB_00106ae1;
        *pbVar6 = 0x7f;
        sVar2 = sVar2 + 1;
        pbVar6 = pbVar6 + 1;
        goto LAB_00106965;
      }
      pbVar4 = pbVar4 + 1;
      *pbVar6 = bVar3;
      sVar2 = sVar2 + 1;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar4;
      cVar1 = bVar3 + 0xa4;
      bVar8 = cVar1 == '\0';
    }
    bVar3 = pbVar4[1];
    pbVar5 = pbVar4 + 2;
    if (bVar3 == 0) {
LAB_00106ae1:
      equals_end = false;
      pbVar4 = pbVar5;
LAB_00106a15:
      *dest = (char *)pbVar6;
      *src = (char *)pbVar4;
      *output_count = sVar2;
      return equals_end;
    }
    bVar7 = bVar3 - 0x30;
    switch(bVar7) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      for (; (byte)(*pbVar5 - 0x30) < 8; pbVar5 = pbVar5 + 1) {
        bVar7 = (*pbVar5 - 0x30) + bVar7 * '\b';
      }
      *pbVar6 = bVar7;
      sVar2 = sVar2 + 1;
      pbVar6 = pbVar6 + 1;
      goto LAB_00106965;
    case 0xf:
      bVar3 = 0x7f;
      break;
    case 0x28:
    case 0x48:
      bVar3 = 0;
LAB_00106a45:
      do {
        bVar7 = *pbVar5;
        while ((char)bVar7 < 'G') {
          if ('@' < (char)bVar7) {
            pbVar5 = pbVar5 + 1;
            bVar3 = (bVar7 - 0x37) + bVar3 * '\x10';
            goto LAB_00106a45;
          }
          if (9 < (byte)(bVar7 - 0x30)) goto LAB_001069ed;
          pbVar5 = pbVar5 + 1;
          bVar3 = (bVar7 - 0x30) + bVar3 * '\x10';
          bVar7 = *pbVar5;
        }
        if (5 < (byte)(bVar7 + 0x9f)) goto LAB_001069ed;
        pbVar5 = pbVar5 + 1;
        bVar3 = bVar7 + 0xa9 + bVar3 * '\x10';
      } while( true );
    case 0x2f:
      bVar3 = 0x20;
      break;
    case 0x31:
      bVar3 = 7;
      break;
    case 0x32:
      bVar3 = 8;
      break;
    case 0x35:
      bVar3 = 0x1b;
      break;
    case 0x36:
      bVar3 = 0xc;
      break;
    case 0x3e:
      bVar3 = 10;
      break;
    case 0x42:
      bVar3 = 0xd;
      break;
    case 0x44:
      bVar3 = 9;
      break;
    case 0x46:
      bVar3 = 0xb;
    }
    *pbVar6 = bVar3;
    sVar2 = sVar2 + 1;
    pbVar6 = pbVar6 + 1;
  } while( true );
LAB_001069ed:
  *pbVar6 = bVar3;
  sVar2 = sVar2 + 1;
  pbVar6 = pbVar6 + 1;
  goto LAB_00106965;
}

