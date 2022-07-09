
int print_esc(char *escstart,_Bool octal_0)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  char *pcVar4;
  ushort **ppuVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  _IO_FILE *p_Var14;
  uint code;
  int iVar15;
  char *pcVar16;
  
  bVar1 = escstart[1];
  uVar12 = (uint)bVar1;
  if (bVar1 == 0x78) {
    pbVar3 = (byte *)(escstart + 2);
    ppuVar5 = __ctype_b_loc();
    bVar2 = false;
    bVar7 = 0;
    while (bVar1 = *pbVar3, (*(byte *)((long)*ppuVar5 + (ulong)bVar1 * 2 + 1) & 0x10) != 0) {
      if ((byte)(bVar1 + 0x9f) < 6) {
        cVar8 = bVar1 + 0xa9;
      }
      else {
        cVar8 = bVar1 - 0x37;
        if (5 < (byte)(bVar1 + 0xbf)) {
          cVar8 = bVar1 - 0x30;
        }
      }
      bVar7 = bVar7 * '\x10' + cVar8;
      pbVar13 = pbVar3 + 1;
      if (bVar2) goto LAB_00102b30;
      pbVar3 = pbVar3 + 1;
      bVar2 = true;
    }
    pbVar13 = pbVar3;
    if (bVar2) {
LAB_00102b30:
      iVar15 = ((int)pbVar13 - (int)escstart) + -1;
      pbVar3 = (byte *)stdout->_IO_write_ptr;
      if (stdout->_IO_write_end <= pbVar3) goto LAB_00102b4c;
      goto LAB_00102a70;
    }
LAB_00102e88:
    uVar6 = dcgettext(0,"missing hexadecimal number in escape",5);
    p_Var14 = (_IO_FILE *)0x1;
    error(1,0,uVar6);
  }
  else {
    if ((byte)(bVar1 - 0x30) < 8) {
      bVar7 = 0;
      pcVar11 = escstart + (ulong)(byte)(octal_0 & bVar1 == 0x30) + 1;
      pcVar4 = pcVar11 + 3;
      do {
        cVar8 = *pcVar11;
        pcVar16 = pcVar11;
        if (7 < (byte)(cVar8 - 0x30U)) break;
        pcVar11 = pcVar11 + 1;
        bVar7 = cVar8 + -0x30 + bVar7 * '\b';
        pcVar16 = pcVar4;
      } while (pcVar11 != pcVar4);
      iVar15 = ((int)pcVar16 - (int)escstart) + -1;
      pbVar3 = (byte *)stdout->_IO_write_ptr;
      if (stdout->_IO_write_end <= pbVar3) {
LAB_00102b4c:
        __overflow(stdout,(uint)bVar7);
        return iVar15;
      }
LAB_00102a70:
      stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
      *pbVar3 = bVar7;
      return iVar15;
    }
    if (bVar1 != 0) {
      pcVar4 = strchr("\"\\abcefnrtv",(int)(char)bVar1);
      if (pcVar4 != (char *)0x0) {
        switch(bVar1) {
        case 0x61:
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\a';
            return 1;
          }
          __overflow(stdout,7);
          return 1;
        case 0x62:
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\b';
            return 1;
          }
          __overflow(stdout,8);
          return 1;
        case 99:
                    /* WARNING: Subroutine does not return */
          exit(0);
        case 0x65:
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\x1b';
            return 1;
          }
          __overflow(stdout,0x1b);
          return 1;
        case 0x66:
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\f';
            return 1;
          }
          __overflow(stdout,0xc);
          return 1;
        case 0x6e:
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\n';
            return 1;
          }
          __overflow(stdout,10);
          return 1;
        case 0x72:
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\r';
            return 1;
          }
          __overflow(stdout,0xd);
          return 1;
        case 0x74:
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\t';
            return 1;
          }
          __overflow(stdout,9);
          return 1;
        case 0x76:
          pcVar4 = stdout->_IO_write_ptr;
          if (pcVar4 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar4 + 1;
            *pcVar4 = '\v';
            return 1;
          }
          __overflow(stdout,0xb);
          return 1;
        }
switchD_00102bc4_caseD_64:
        pcVar4 = stdout->_IO_write_ptr;
        if (pcVar4 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar4 + 1;
          *pcVar4 = (char)uVar12;
          return 1;
        }
        __overflow(stdout,uVar12);
        return 1;
      }
      if ((bVar1 & 0xdf) == 0x55) {
        pcVar4 = escstart + 2;
        ppuVar5 = __ctype_b_loc();
        code = 0;
        iVar15 = (uint)(bVar1 != 0x75) * 4;
        uVar12 = iVar15 + 4;
        do {
          while( true ) {
            cVar8 = *pcVar4;
            uVar9 = (uint)cVar8;
            if ((*(byte *)((long)*ppuVar5 + (ulong)(uVar9 & 0xff) * 2 + 1) & 0x10) == 0)
            goto LAB_00102e88;
            if ((byte)(cVar8 + 0x9fU) < 6) break;
            iVar10 = uVar9 - 0x37;
            if (5 < (byte)(cVar8 + 0xbfU)) {
              iVar10 = uVar9 - 0x30;
            }
            pcVar4 = pcVar4 + 1;
            code = code * 0x10 + iVar10;
            if (pcVar4 == escstart + (ulong)(iVar15 + 3) + 3) goto LAB_00102c5d;
          }
          pcVar4 = pcVar4 + 1;
          code = code * 0x10 + (uVar9 - 0x57);
        } while (pcVar4 != escstart + (ulong)(iVar15 + 3) + 3);
LAB_00102c5d:
        if ((code < 0xa0) && (code != 0x24)) {
          if ((code & 0xffffffdf) == 0x40) {
LAB_00102c77:
            print_unicode_char((FILE *)stdout,code,0);
            return iVar15 + 5;
          }
        }
        else if (0x7ff < code - 0xd800) goto LAB_00102c77;
        uVar6 = dcgettext(0,"invalid universal character name \\%c%0*x",5);
        error(1,0,uVar6,(int)(char)bVar1,uVar12,code);
        goto switchD_00102bc4_caseD_64;
      }
    }
    pcVar4 = stdout->_IO_write_ptr;
    p_Var14 = stdout;
    if (pcVar4 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar4 + 1;
      *pcVar4 = '\\';
      goto LAB_00102ab8;
    }
  }
  __overflow(p_Var14,0x5c);
LAB_00102ab8:
  bVar1 = escstart[1];
  iVar15 = 0;
  if (bVar1 != 0) {
    pbVar3 = (byte *)stdout->_IO_write_ptr;
    if (pbVar3 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
      *pbVar3 = bVar1;
    }
    else {
      __overflow(stdout,(uint)bVar1);
    }
    iVar15 = 1;
  }
  return iVar15;
}

