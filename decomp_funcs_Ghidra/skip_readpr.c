
void skip_read(COLUMN *p,int column_number)

{
  _IO_FILE *__stream;
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  COLUMN *pCVar4;
  COLUMN *pCVar5;
  char cVar6;
  
  __stream = (_IO_FILE *)p->fp;
  pbVar1 = (byte *)__stream->_IO_read_ptr;
  if (pbVar1 < __stream->_IO_read_end) {
    __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
    uVar3 = (uint)*pbVar1;
  }
  else {
    uVar3 = __uflow(__stream);
  }
  cVar2 = last_line;
  if (uVar3 == 0xc) {
    if (p->full_page_printed == false) {
      if (last_line == false) {
        cVar6 = '\x01';
      }
      else {
        p->full_page_printed = true;
        cVar6 = cVar2;
LAB_001043b7:
        if (cVar2 != '\0') {
          if (parallel_files == false) {
            if (columns != 0) {
              pCVar5 = column_vector + (ulong)(columns - 1) + 1;
              pCVar4 = column_vector;
              do {
                pCVar4->full_page_printed = false;
                pCVar4 = pCVar4 + 1;
              } while (pCVar4 != pCVar5);
            }
          }
          else {
            p->full_page_printed = false;
          }
        }
      }
      pbVar1 = (byte *)__stream->_IO_read_ptr;
      if (pbVar1 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      else {
        uVar3 = __uflow(__stream);
      }
      if (uVar3 == 10) {
        hold_file();
      }
      else {
        ungetc(uVar3,__stream);
        hold_file();
      }
      goto LAB_00104300;
    }
    pbVar1 = (byte *)__stream->_IO_read_ptr;
    if (pbVar1 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar3 = (uint)*pbVar1;
    }
    else {
      uVar3 = __uflow(__stream);
    }
    if (uVar3 == 10) {
      pbVar1 = (byte *)__stream->_IO_read_ptr;
      if (pbVar1 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      else {
        uVar3 = __uflow(__stream);
      }
    }
    cVar6 = uVar3 == 0xc;
    p->full_page_printed = false;
  }
  else {
    p->full_page_printed = false;
    cVar6 = false;
  }
  cVar2 = last_line;
  if (last_line != false) {
    p->full_page_printed = true;
    cVar2 = last_line;
  }
  while (last_line = (_Bool)cVar2, uVar3 != 10) {
    if (uVar3 == 0xc) goto LAB_001043b7;
    if (uVar3 == 0xffffffff) {
      close_file(p);
      break;
    }
    pbVar1 = (byte *)__stream->_IO_read_ptr;
    if (pbVar1 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar3 = (uint)*pbVar1;
      cVar2 = last_line;
    }
    else {
      uVar3 = __uflow(__stream);
      cVar2 = last_line;
    }
  }
LAB_00104300:
  if ((skip_count != false) &&
     (((parallel_files != true || (column_number == 1)) && (cVar6 == '\0')))) {
    line_count = line_count + 1;
  }
  return;
}

