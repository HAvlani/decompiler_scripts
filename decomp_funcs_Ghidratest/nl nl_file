
_Bool nl_file(char *file)

{
  ulong __n;
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  linebuffer *plVar8;
  regoff_t rVar9;
  FILE *__stream;
  undefined8 uVar10;
  size_t __n_00;
  
  uVar4 = (byte)*file - 0x2d;
  if (uVar4 == 0) {
    uVar4 = (uint)(byte)file[1];
  }
  piVar7 = __errno_location();
  if (uVar4 == 0) {
    have_read_stdin = true;
    __stream = stdin;
  }
  else {
    __stream = fopen(file,"r");
    if (__stream == (FILE *)0x0) {
      uVar10 = quotearg_n_style_colon(0,3,file);
                    /* WARNING: Subroutine does not return */
      error(0,*piVar7,"%s",uVar10);
    }
  }
  fadvise((FILE *)__stream,FADVISE_SEQUENTIAL);
  while (plVar8 = readlinebuffer(&line_buf,(FILE *)__stream), sVar3 = footer_del_len,
        pcVar2 = line_buf.buffer, __n_00 = line_buf.length, plVar8 != (linebuffer *)0x0) {
    __n = line_buf.length - 1;
    if (((__n < 2) || (footer_del_len < 2)) || (*(short *)line_buf.buffer != *(short *)section_del))
    {
LAB_00103200:
      cVar1 = *current_type;
      if (cVar1 == 'p') {
        rVar9 = rpl_re_search(current_regex,line_buf.buffer,__n,0,__n,(re_registers *)0x0);
        if (rVar9 == -2) {
          uVar10 = dcgettext(0,"error in regular expression search",5);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar7,uVar10);
        }
        if (rVar9 == -1) {
LAB_00103220:
          fputs_unlocked(print_no_line_fmt,stdout);
          __n_00 = line_buf.length;
        }
        else {
          print_lineno();
          __n_00 = line_buf.length;
        }
      }
      else if (cVar1 < 'q') {
        if (cVar1 == 'a') {
          if (blank_join < 2) {
LAB_001032b6:
            print_lineno();
            __n_00 = line_buf.length;
          }
          else {
            if (((long)__n_00 < 2) &&
               (blank_lines_7404 = blank_lines_7404 + 1, blank_join != blank_lines_7404))
            goto LAB_00103220;
            print_lineno();
            blank_lines_7404 = 0;
            __n_00 = line_buf.length;
          }
        }
        else if (cVar1 == 'n') goto LAB_00103220;
      }
      else if (cVar1 == 't') {
        if (1 < (long)__n_00) goto LAB_001032b6;
        goto LAB_00103220;
      }
      fwrite_unlocked(line_buf.buffer,1,__n_00,stdout);
    }
    else {
      if ((__n == header_del_len) && (iVar5 = memcmp(line_buf.buffer,header_del,__n), iVar5 == 0)) {
        current_regex = &header_regex;
        current_type = header_type;
      }
      else if ((__n == body_del_len) && (iVar5 = memcmp(pcVar2,body_del,__n), iVar5 == 0)) {
        current_regex = &body_regex;
        current_type = body_type;
      }
      else {
        if ((__n != sVar3) || (iVar5 = memcmp(pcVar2,footer_del,__n), iVar5 != 0))
        goto LAB_00103200;
        current_regex = &footer_regex;
        current_type = footer_type;
      }
      if (reset_numbers != false) {
        line_no_overflow = false;
        line_no = starting_line_number;
      }
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
    }
  }
  iVar5 = *piVar7;
  if ((*(byte *)&__stream->_flags & 0x20) == 0) {
    iVar5 = 0;
  }
  if ((*file == '-') && (file[1] == '\0')) {
    clearerr_unlocked(__stream);
  }
  else {
    iVar6 = rpl_fclose((FILE *)__stream);
    if (iVar6 != 0) {
      if (iVar5 != 0) goto LAB_001034d0;
      iVar5 = *piVar7;
    }
  }
  if (iVar5 == 0) {
    return true;
  }
LAB_001034d0:
  uVar10 = quotearg_n_style_colon(0,3,file);
                    /* WARNING: Subroutine does not return */
  error(0,iVar5,"%s",uVar10);
}

