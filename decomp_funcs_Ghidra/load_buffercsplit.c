
_Bool load_buffer(void)

{
  buffer_record *pbVar1;
  intmax_t iVar2;
  idx_t __n;
  buffer_record *buf;
  char *pcVar3;
  char *pcVar4;
  buffer_record *pbVar5;
  void *pvVar6;
  idx_t iVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  size_t sVar11;
  char *pcVar12;
  long lVar13;
  
  lVar13 = hold_count + 1;
  if (hold_count < 0x1fff) {
    lVar13 = 0x1fff;
  }
  do {
    buf = (buffer_record *)xmalloc(0x48);
    buf->bytes_alloc = 0;
    pcVar3 = (char *)xpalloc((void *)0x0,(idx_t *)buf,lVar13,-1,1);
    __n = hold_count;
    buf->bytes_used = 0;
    buf->buffer = pcVar3;
    iVar2 = last_line_number;
    lVar13 = buf->bytes_alloc;
    buf->num_lines = 0;
    buf->curr_line = (line *)0x0;
    buf->line_start = (line *)0x0;
    buf->first_available = iVar2 + 1;
    buf->start_line = iVar2 + 1;
    buf->next = (buffer_record *)0x0;
    if (__n == 0) {
      sVar11 = lVar13 - 1;
      if (sVar11 != 0) {
        sVar11 = safe_read(0,pcVar3,sVar11);
        if (sVar11 != 0) goto LAB_001044f1;
LAB_00104324:
        have_read_eof = true;
        iVar7 = buf->bytes_used;
        goto LAB_0010432f;
      }
    }
    else {
      pvVar6 = memcpy(pcVar3,hold_area,__n);
      hold_count = 0;
      iVar7 = buf->bytes_used + __n;
      buf->bytes_used = iVar7;
      sVar11 = (lVar13 - __n) - 1;
      if (sVar11 != 0) {
        sVar11 = safe_read(0,(void *)((long)pvVar6 + __n),sVar11);
        if (sVar11 == 0) goto LAB_00104324;
LAB_001044f1:
        if (sVar11 == 0xffffffffffffffff) {
          uVar8 = dcgettext(0,"read error",5);
          piVar9 = __errno_location();
          error(0,*piVar9,uVar8);
                    /* WARNING: Subroutine does not return */
          cleanup_fatal();
        }
        iVar7 = sVar11 + buf->bytes_used;
      }
LAB_0010432f:
      buf->bytes_used = iVar7;
      if (iVar7 != 0) {
        pcVar3 = buf->buffer;
        lVar13 = 0;
        pcVar12 = pcVar3 + iVar7;
        *pcVar12 = '\n';
        while( true ) {
          pcVar4 = (char *)rawmemchr(pcVar3,10);
          lVar10 = (long)pcVar4 - (long)pcVar3;
          if (pcVar12 == pcVar4) break;
          keep_new_line();
          pcVar3 = pcVar4 + 1;
          lVar13 = lVar13 + 1;
        }
        if (lVar10 != 0) {
          if (have_read_eof != false) {
            keep_new_line();
            buf->num_lines = lVar13 + 1;
            lVar10 = last_line_number + 1;
            last_line_number = lVar13 + 1 + last_line_number;
            buf->start_line = lVar10;
            buf->first_available = lVar10;
            goto LAB_001043ce;
          }
          pcVar3 = (char *)ximemdup(pcVar3,lVar10);
          rpl_free(hold_area);
          hold_count = lVar10;
          hold_area = pcVar3;
        }
        buf->num_lines = lVar13;
        lVar10 = last_line_number + 1;
        last_line_number = last_line_number + lVar13;
        buf->start_line = lVar10;
        buf->first_available = lVar10;
        if (lVar13 != 0) {
LAB_001043ce:
          buf->next = (buffer_record *)0x0;
          buf->curr_line = buf->line_start;
          pbVar1 = head;
          if (head == (buffer_record *)0x0) {
            head = buf;
            return true;
          }
          do {
            pbVar5 = pbVar1;
            pbVar1 = pbVar5->next;
          } while (pbVar1 != (buffer_record *)0x0);
          pbVar5->next = buf;
          return true;
        }
      }
    }
    if (have_read_eof != false) {
      free_buffer(buf);
      return false;
    }
    lVar13 = buf->bytes_alloc * 2;
    if (SEXT816(lVar13) != SEXT816(buf->bytes_alloc) * SEXT816(2)) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    free_buffer(buf);
  } while( true );
}

