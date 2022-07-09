
int process_line(char *line,_Bool newline)

{
  byte *pbVar1;
  char *pcVar2;
  uchar *puVar3;
  uchar uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ushort **ppuVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  
  lVar13 = 1;
  iVar7 = 1;
  bVar11 = *line;
  pbVar14 = (byte *)line;
  iVar6 = delimiter;
  if (delimiter == 0x80) goto LAB_00105192;
  while( true ) {
    pbVar14 = (byte *)line;
    if ((char)bVar11 == iVar6) goto LAB_001051d7;
    pbVar9 = (byte *)line;
    if (bVar11 == 0) break;
    do {
      pbVar1 = pbVar9 + 1;
      if (*pbVar1 == 0) goto LAB_001051e0;
      pbVar10 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
    } while ((char)*pbVar1 != iVar6);
    while( true ) {
      *pbVar10 = 0;
      cVar5 = process_field(pbVar14,lVar13);
      iVar6 = delimiter;
      if (cVar5 == '\0') {
        iVar7 = 0;
      }
      pcVar2 = stdout->_IO_write_ptr;
      uVar12 = 0x20;
      if (delimiter != 0x80) {
        uVar12 = delimiter;
      }
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = (char)uVar12;
      }
      else {
        __overflow(stdout,uVar12 & 0xff);
        iVar6 = delimiter;
      }
      line = (char *)(pbVar10 + 1);
      lVar13 = lVar13 + 1;
      bVar11 = *line;
      pbVar14 = (byte *)line;
      if (iVar6 != 0x80) break;
LAB_00105192:
      if (bVar11 == 0) goto LAB_001051e0;
      ppuVar8 = __ctype_b_loc();
      line = (char *)pbVar14;
      while (((*(byte *)(*ppuVar8 + bVar11) & 1) != 0 || (bVar11 == 10))) {
        bVar11 = ((byte *)line)[1];
        line = (char *)((byte *)line + 1);
        if (bVar11 == 0) goto LAB_001051e0;
      }
      bVar11 = *line;
      while( true ) {
        if (bVar11 == 0) goto LAB_001051e0;
        if (((*(byte *)(*ppuVar8 + bVar11) & 1) != 0) || (bVar11 == 10)) break;
        bVar11 = ((byte *)line)[1];
        line = (char *)((byte *)line + 1);
      }
      bVar11 = *line;
LAB_001051d7:
      pbVar10 = (byte *)line;
      if (bVar11 == 0) goto LAB_001051e0;
    }
  }
LAB_001051e0:
  cVar5 = process_field(pbVar14);
  uVar4 = line_delim;
  if (cVar5 == '\0') {
    iVar7 = 0;
  }
  if (newline != false) {
    puVar3 = (uchar *)stdout->_IO_write_ptr;
    if (puVar3 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = (char *)(puVar3 + 1);
      *puVar3 = uVar4;
    }
    else {
      __overflow(stdout,(uint)line_delim);
    }
  }
  return iVar7;
}

