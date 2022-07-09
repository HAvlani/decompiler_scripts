
void write_line(line *line,FILE *fp,char *output_file)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  byte *pbVar6;
  byte *pbVar7;
  size_t sVar8;
  size_t sVar9;
  undefined8 uVar10;
  char *pcVar11;
  byte *text;
  uint uVar12;
  long lVar13;
  size_t __n;
  keyfield *pkVar14;
  long in_FS_OFFSET;
  char *tighter_lim;
  char *p;
  long local_40;
  
  text = (byte *)line->text;
  __n = line->length;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar7 = text + __n;
  if ((output_file != (char *)0x0) || (debug == false)) {
    pbVar7[-1] = eolchar;
    sVar5 = fwrite_unlocked(text,1,__n,(FILE *)fp);
    if (__n != sVar5) {
      pcVar11 = (char *)dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar11,output_file);
    }
    pbVar7[-1] = 0;
LAB_00109961:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (text < pbVar7) {
    do {
      bVar2 = *text;
      text = text + 1;
      if (bVar2 == 9) {
        pbVar6 = (byte *)fp->_IO_write_ptr;
        uVar12 = 0x3e;
        bVar2 = 0x3e;
        if (pbVar6 < fp->_IO_write_end) goto LAB_001099b4;
LAB_001099e6:
        iVar4 = __overflow((_IO_FILE *)fp,uVar12 & 0xff);
        if (iVar4 == -1) {
          pcVar11 = (char *)dcgettext(0,"write failed",5);
                    /* WARNING: Subroutine does not return */
          sort_die(pcVar11,(char *)0x0);
        }
      }
      else {
        uVar12 = (uint)(char)bVar2;
        if (pbVar7 == text) {
          uVar12 = 10;
          bVar2 = 10;
        }
        pbVar6 = (byte *)fp->_IO_write_ptr;
        if (fp->_IO_write_end <= pbVar6) goto LAB_001099e6;
LAB_001099b4:
        fp->_IO_write_ptr = (char *)(pbVar6 + 1);
        *pbVar6 = bVar2;
      }
    } while (pbVar7 != text);
    text = (byte *)line->text;
    __n = line->length;
  }
  pbVar7 = text + (__n - 1);
  pkVar14 = keylist;
  do {
    pbVar6 = text;
    if (pkVar14 != (keyfield *)0x0) {
      sVar8 = pkVar14->sword;
      if (sVar8 == 0xffffffffffffffff) {
        if (pkVar14->eword != 0xffffffffffffffff) goto LAB_00109a6d;
LAB_00109a7e:
        if ((pkVar14->skipsblanks == false) || (sVar8 != 0xffffffffffffffff)) goto LAB_00109a8b;
      }
      else {
        pbVar6 = (byte *)begfield();
        if (pkVar14->eword != 0xffffffffffffffff) {
LAB_00109a6d:
          pbVar7 = (byte *)limfield();
          goto LAB_00109a7e;
        }
LAB_00109a8b:
        if ((pkVar14->month == false) && ((*(ulong *)&pkVar14->skipsblanks & 0xffff00ff0000) == 0))
        goto LAB_00109b61;
      }
      bVar2 = *pbVar7;
      *pbVar7 = 0;
      cVar3 = blanks[*pbVar6];
      while (cVar3 != '\0') {
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        cVar3 = blanks[*pbVar1];
      }
      tighter_lim = (char *)pbVar7;
      if (pbVar6 <= pbVar7) {
        if (pkVar14->month == false) {
          if (pkVar14->general_numeric == false) {
            if ((*(ulong *)&pkVar14->skipsblanks & 0xff0000ff0000) != 0) {
              p = (char *)pbVar6;
              if (pbVar6 < pbVar7) {
                p = (char *)(pbVar6 + (*pbVar6 == 0x2d));
              }
              tighter_lim = (char *)pbVar6;
              cVar3 = traverse_raw_number(&p);
              if (('/' < cVar3) && (tighter_lim = p, pkVar14->human_numeric != false)) {
                tighter_lim = p + (""[(byte)*p] != '\0');
              }
            }
          }
          else {
            tighter_lim = (char *)pbVar6;
            strtold((char *)pbVar6,&tighter_lim);
          }
        }
        else {
          tighter_lim = (char *)pbVar6;
          getmonth((char *)pbVar6,&tighter_lim);
        }
      }
      *pbVar7 = bVar2;
      pbVar7 = (byte *)tighter_lim;
    }
LAB_00109b61:
    while( true ) {
      sVar8 = debug_width((char *)text,(char *)pbVar6);
      sVar9 = debug_width((char *)pbVar6,(char *)pbVar7);
      lVar13 = sVar8 - 1;
      if (sVar8 != 0) {
        do {
          pcVar11 = stdout->_IO_write_ptr;
          if (pcVar11 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar11 + 1;
            *pcVar11 = ' ';
          }
          else {
            __overflow(stdout,0x20);
          }
          lVar13 = lVar13 + -1;
        } while (lVar13 != -1);
      }
      if (sVar9 == 0) {
        uVar10 = dcgettext(0,"^ no match for key\n",5);
        __printf_chk(1,uVar10);
      }
      else {
        do {
          pcVar11 = stdout->_IO_write_ptr;
          if (pcVar11 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar11 + 1;
            *pcVar11 = '_';
          }
          else {
            __overflow(stdout,0x5f);
          }
          sVar9 = sVar9 - 1;
        } while (sVar9 != 0);
        pcVar11 = stdout->_IO_write_ptr;
        if (pcVar11 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar11 + 1;
          *pcVar11 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
      }
      if (pkVar14 == (keyfield *)0x0) goto LAB_00109961;
      pkVar14 = pkVar14->next;
      if (pkVar14 != (keyfield *)0x0) break;
      if ((unique != false) || (stable != false)) goto LAB_00109961;
      text = (byte *)line->text;
      pbVar7 = text + (line->length - 1);
      pbVar6 = text;
    }
    text = (byte *)line->text;
    pbVar7 = text + (line->length - 1);
  } while( true );
}

