
void matcher_error(void)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  ushort **ppuVar5;
  char cVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  
  uVar3 = dcgettext(0,"error in regular expression matcher",5);
  piVar4 = __errno_location();
  puVar10 = (undefined2 *)0x1;
  error(1,*piVar4,uVar3);
  cVar6 = *(char *)puVar10;
  puVar8 = puVar10;
joined_r0x0010628f:
  if (cVar6 != '\0') {
    puVar7 = (undefined2 *)((long)puVar10 + 1);
    if (cVar6 == '\\') {
      if (*(char *)((long)puVar10 + 1) == '\0') goto LAB_001062e3;
      switch(*(char *)((long)puVar10 + 1)) {
      case '0':
        puVar7 = puVar10 + 1;
        cVar6 = '\0';
        puVar10 = (undefined2 *)((long)puVar10 + 5);
        do {
          cVar2 = *(char *)puVar7;
          if (7 < (byte)(cVar2 - 0x30U)) goto LAB_00106333;
          puVar7 = (undefined2 *)((long)puVar7 + 1);
          cVar6 = cVar2 + -0x30 + cVar6 * '\b';
        } while (puVar10 != puVar7);
        *(char *)puVar8 = cVar6;
        puVar8 = (undefined2 *)((long)puVar8 + 1);
        cVar6 = *(char *)puVar10;
        break;
      default:
        *(undefined *)puVar8 = 0x5c;
        *(undefined *)((long)puVar8 + 1) = *(undefined *)((long)puVar10 + 1);
        cVar6 = *(char *)(puVar10 + 1);
        puVar10 = puVar10 + 1;
        puVar8 = puVar8 + 1;
        break;
      case 'a':
        *(undefined *)puVar8 = 7;
        puVar10 = puVar10 + 1;
        cVar6 = *(char *)puVar10;
        puVar8 = (undefined2 *)((long)puVar8 + 1);
        break;
      case 'b':
        *(undefined *)puVar8 = 8;
        puVar10 = puVar10 + 1;
        cVar6 = *(char *)puVar10;
        puVar8 = (undefined2 *)((long)puVar8 + 1);
        break;
      case 'c':
        goto switchD_001062d7_caseD_63;
      case 'f':
        *(undefined *)puVar8 = 0xc;
        puVar10 = puVar10 + 1;
        cVar6 = *(char *)puVar10;
        puVar8 = (undefined2 *)((long)puVar8 + 1);
        break;
      case 'n':
        *(undefined *)puVar8 = 10;
        puVar10 = puVar10 + 1;
        cVar6 = *(char *)puVar10;
        puVar8 = (undefined2 *)((long)puVar8 + 1);
        break;
      case 'r':
        *(undefined *)puVar8 = 0xd;
        puVar10 = puVar10 + 1;
        cVar6 = *(char *)puVar10;
        puVar8 = (undefined2 *)((long)puVar8 + 1);
        break;
      case 't':
        *(undefined *)puVar8 = 9;
        puVar10 = puVar10 + 1;
        cVar6 = *(char *)puVar10;
        puVar8 = (undefined2 *)((long)puVar8 + 1);
        break;
      case 'v':
        *(undefined *)puVar8 = 0xb;
        puVar10 = puVar10 + 1;
        cVar6 = *(char *)puVar10;
        puVar8 = (undefined2 *)((long)puVar8 + 1);
        break;
      case 'x':
        ppuVar5 = __ctype_b_loc();
        puVar7 = puVar10 + 1;
        iVar9 = 0;
        cVar6 = '\0';
        do {
          bVar1 = *(byte *)puVar7;
          if ((*(byte *)((long)*ppuVar5 + (ulong)bVar1 * 2 + 1) & 0x10) == 0) {
            if (iVar9 == 0) {
              *puVar8 = 0x785c;
              cVar6 = *(char *)puVar7;
              puVar10 = puVar7;
              puVar8 = puVar8 + 1;
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
          iVar9 = iVar9 + 1;
          cVar6 = cVar6 * '\x10' + cVar2;
          puVar7 = (undefined2 *)((long)puVar7 + 1);
        } while (iVar9 != 3);
LAB_00106333:
        *(char *)puVar8 = cVar6;
        cVar6 = *(char *)puVar7;
        puVar10 = puVar7;
        puVar8 = (undefined2 *)((long)puVar8 + 1);
      }
    }
    else {
      *(char *)puVar8 = cVar6;
      cVar6 = *(char *)((long)puVar10 + 1);
      puVar10 = puVar7;
      puVar8 = (undefined2 *)((long)puVar8 + 1);
    }
    goto joined_r0x0010628f;
  }
LAB_001062e3:
  *(undefined *)puVar8 = 0;
  return;
switchD_001062d7_caseD_63:
  do {
    puVar7 = (undefined2 *)((long)puVar7 + 1);
  } while (*(char *)puVar7 != '\0');
  goto LAB_001062e3;
}

