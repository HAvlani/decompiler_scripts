
_Bool dc_parse_stream(FILE *fp,char *filename)

{
  byte bVar1;
  ushort *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  __ssize_t _Var8;
  ushort **ppuVar9;
  char *arg;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *__s;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  long lVar18;
  long in_FS_OFFSET;
  char *local_80;
  _Bool local_71;
  char *input_line;
  size_t input_line_size;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  input_line = (char *)0x0;
  input_line_size = 0;
  pcVar6 = getenv("TERM");
  if (pcVar6 == (char *)0x0) {
    local_80 = "none";
  }
  else {
    local_80 = "none";
    if (*pcVar6 != '\0') {
      local_80 = pcVar6;
    }
  }
  __s = "# Configuration file for dircolors, a utility to help you set the";
  pcVar7 = getenv("COLORTERM");
  cVar3 = '\x03';
  local_71 = true;
  pcVar6 = "";
  if (pcVar7 != (char *)0x0) {
    pcVar6 = pcVar7;
  }
  lVar18 = 0;
LAB_001030e0:
  lVar18 = lVar18 + 1;
  if (fp == (FILE *)0x0) goto LAB_00103236;
LAB_001030ed:
  _Var8 = __getdelim(&input_line,&input_line_size,10,(FILE *)fp);
  pbVar17 = (byte *)__s;
  pbVar14 = (byte *)input_line;
  if (_Var8 < 1) {
    rpl_free(input_line);
LAB_00103413:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return local_71;
  }
  do {
    __s = (char *)pbVar17;
    ppuVar9 = __ctype_b_loc();
    while (bVar1 = *pbVar14, (*(byte *)((long)*ppuVar9 + (ulong)bVar1 * 2 + 1) & 0x20) != 0) {
      pbVar14 = pbVar14 + 1;
    }
    if ((bVar1 == 0) || (pbVar17 = pbVar14, bVar1 == 0x23)) goto LAB_001030e0;
    do {
      pbVar15 = pbVar17 + 1;
      pbVar17 = pbVar17 + 1;
    } while ((*pbVar15 != 0 & ((byte)((*ppuVar9)[*pbVar15] >> 0xd) ^ 1)) != 0);
    pcVar7 = ximemdup0(pbVar14,(long)pbVar17 - (long)pbVar14);
    if (*pbVar17 == 0) {
LAB_00103390:
      uVar11 = quotearg_n_style_colon(0,3,filename);
      uVar12 = dcgettext(0,"%s:%lu: invalid line;  missing second token",5);
      error(0,0,uVar12,uVar11,lVar18);
      rpl_free(pcVar7);
      local_71 = false;
      goto LAB_001030e0;
    }
    puVar2 = *ppuVar9;
    do {
      bVar1 = pbVar17[1];
      pbVar17 = pbVar17 + 1;
    } while ((*(byte *)((long)puVar2 + (ulong)bVar1 * 2 + 1) & 0x20) != 0);
    if ((bVar1 == 0) || (pbVar14 = pbVar17, bVar1 == 0x23)) goto LAB_00103390;
    do {
      pbVar15 = pbVar14;
      pbVar14 = pbVar15 + 1;
    } while (pbVar15[1] != 0 && pbVar15[1] != 0x23);
    bVar1 = *(byte *)((long)puVar2 + (ulong)*pbVar15 * 2 + 1);
    while ((bVar1 & 0x20) != 0) {
      bVar1 = *(byte *)((long)puVar2 + (ulong)pbVar15[-1] * 2 + 1);
      pbVar14 = pbVar15;
      pbVar15 = pbVar15 + -1;
    }
    arg = ximemdup0(pbVar17,(long)pbVar14 - (long)pbVar17);
    iVar5 = c_strcasecmp(pcVar7,"TERM");
    pcVar16 = local_80;
    if ((iVar5 == 0) || (iVar5 = c_strcasecmp(pcVar7,"COLORTERM"), pcVar16 = pcVar6, iVar5 == 0)) {
      if (cVar3 != '\x02') {
        iVar5 = fnmatch(arg,pcVar16,0);
        cVar3 = (iVar5 == 0) * '\x02';
      }
    }
    else if (cVar3 == '\x02') {
      cVar4 = *pcVar7;
      cVar3 = '\x01';
      if (cVar4 != '.') goto LAB_001032e1;
LAB_001033f4:
      append_entry('*',pcVar7,arg);
    }
    else if (cVar3 != '\0') {
      cVar4 = *pcVar7;
      if (cVar4 == '.') goto LAB_001033f4;
LAB_001032e1:
      if (cVar4 == '*') {
        append_entry('\0',pcVar7,arg);
      }
      else {
        iVar5 = c_strcasecmp(pcVar7,"OPTIONS");
        if (((iVar5 != 0) && (iVar5 = c_strcasecmp(pcVar7,"COLOR"), iVar5 != 0)) &&
           (iVar5 = c_strcasecmp(pcVar7,"EIGHTBIT"), iVar5 != 0)) {
          lVar13 = 0;
          pcVar16 = "NORMAL";
          do {
            iVar5 = c_strcasecmp(pcVar7,pcVar16);
            if (iVar5 == 0) {
              append_entry('\0',ls_codes[(int)lVar13],arg);
              goto LAB_00103219;
            }
            lVar13 = lVar13 + 1;
            pcVar16 = slack_codes[lVar13];
          } while (pcVar16 != (char *)0x0);
          if (cVar3 != '\x03') {
            if (filename == (char *)0x0) {
              uVar11 = dcgettext(0,"<internal>",5);
            }
            else {
              uVar11 = quotearg_n_style_colon(0,3);
            }
            uVar12 = dcgettext(0,"%s:%lu: unrecognized keyword %s",5);
            error(0,0,uVar12,uVar11,lVar18,pcVar7);
            local_71 = false;
          }
        }
      }
    }
LAB_00103219:
    lVar18 = lVar18 + 1;
    rpl_free(pcVar7);
    rpl_free(arg);
    if (fp != (FILE *)0x0) goto LAB_001030ed;
LAB_00103236:
    if (__s == &DAT_00108ac8) goto LAB_00103413;
    sVar10 = strlen(__s);
    pbVar17 = (byte *)__s + sVar10 + 1;
    pbVar14 = (byte *)__s;
  } while( true );
}

