
void unescape_string(char *string)

{
  byte bVar1;
  char cVar2;
  ushort **ppuVar3;
  char cVar4;
  byte *pbVar5;
  undefined2 *puVar6;
  int iVar7;
  
  bVar1 = *string;
  puVar6 = (undefined2 *)string;
joined_r0x0010628f:
  if (bVar1 != 0) {
    pbVar5 = (byte *)string + 1;
    if (bVar1 == 0x5c) {
      if (((byte *)string)[1] == 0) goto LAB_001062e3;
      switch(((byte *)string)[1]) {
      case 0x30:
        pbVar5 = (byte *)string + 2;
        cVar4 = '\0';
        string = (char *)((byte *)string + 5);
        do {
          bVar1 = *pbVar5;
          if (7 < (byte)(bVar1 - 0x30)) goto LAB_00106333;
          pbVar5 = pbVar5 + 1;
          cVar4 = (bVar1 - 0x30) + cVar4 * '\b';
        } while ((byte *)string != pbVar5);
        *(char *)puVar6 = cVar4;
        puVar6 = (undefined2 *)((long)puVar6 + 1);
        bVar1 = *string;
        break;
      default:
        *(undefined *)puVar6 = 0x5c;
        *(byte *)((long)puVar6 + 1) = ((byte *)string)[1];
        bVar1 = ((byte *)string)[2];
        string = (char *)((byte *)string + 2);
        puVar6 = puVar6 + 1;
        break;
      case 0x61:
        *(undefined *)puVar6 = 7;
        string = (char *)((byte *)string + 2);
        bVar1 = *string;
        puVar6 = (undefined2 *)((long)puVar6 + 1);
        break;
      case 0x62:
        *(undefined *)puVar6 = 8;
        string = (char *)((byte *)string + 2);
        bVar1 = *string;
        puVar6 = (undefined2 *)((long)puVar6 + 1);
        break;
      case 99:
        goto switchD_001062d7_caseD_63;
      case 0x66:
        *(undefined *)puVar6 = 0xc;
        string = (char *)((byte *)string + 2);
        bVar1 = *string;
        puVar6 = (undefined2 *)((long)puVar6 + 1);
        break;
      case 0x6e:
        *(undefined *)puVar6 = 10;
        string = (char *)((byte *)string + 2);
        bVar1 = *string;
        puVar6 = (undefined2 *)((long)puVar6 + 1);
        break;
      case 0x72:
        *(undefined *)puVar6 = 0xd;
        string = (char *)((byte *)string + 2);
        bVar1 = *string;
        puVar6 = (undefined2 *)((long)puVar6 + 1);
        break;
      case 0x74:
        *(undefined *)puVar6 = 9;
        string = (char *)((byte *)string + 2);
        bVar1 = *string;
        puVar6 = (undefined2 *)((long)puVar6 + 1);
        break;
      case 0x76:
        *(undefined *)puVar6 = 0xb;
        string = (char *)((byte *)string + 2);
        bVar1 = *string;
        puVar6 = (undefined2 *)((long)puVar6 + 1);
        break;
      case 0x78:
        ppuVar3 = __ctype_b_loc();
        pbVar5 = (byte *)string + 2;
        iVar7 = 0;
        cVar4 = '\0';
        do {
          bVar1 = *pbVar5;
          if ((*(byte *)((long)*ppuVar3 + (ulong)bVar1 * 2 + 1) & 0x10) == 0) {
            if (iVar7 == 0) {
              *puVar6 = 0x785c;
              bVar1 = *pbVar5;
              string = (char *)pbVar5;
              puVar6 = puVar6 + 1;
              goto joined_r0x0010628f;
            }
            break;
          }
          if ((byte)(bVar1 + 0x9f) < 6) {
            cVar2 = bVar1 + 0xa9;
          }
          else {
            cVar2 = bVar1 - 0x37;
            if (5 < (byte)(bVar1 + 0xbf)) {
              cVar2 = bVar1 - 0x30;
            }
          }
          iVar7 = iVar7 + 1;
          cVar4 = cVar4 * '\x10' + cVar2;
          pbVar5 = pbVar5 + 1;
        } while (iVar7 != 3);
LAB_00106333:
        *(char *)puVar6 = cVar4;
        bVar1 = *pbVar5;
        string = (char *)pbVar5;
        puVar6 = (undefined2 *)((long)puVar6 + 1);
      }
    }
    else {
      *(byte *)puVar6 = bVar1;
      bVar1 = ((byte *)string)[1];
      string = (char *)pbVar5;
      puVar6 = (undefined2 *)((long)puVar6 + 1);
    }
    goto joined_r0x0010628f;
  }
LAB_001062e3:
  *(undefined *)puVar6 = 0;
  return;
switchD_001062d7_caseD_63:
  do {
    pbVar5 = pbVar5 + 1;
  } while (*pbVar5 != 0);
  goto LAB_001062e3;
}

