
_Bool fold_file(char *filename,size_t width)

{
  ulong __n;
  size_t sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  _IO_FILE *__stream;
  byte *pbVar5;
  size_t column;
  ushort **ppuVar6;
  undefined8 uVar7;
  char *pcVar8;
  long extraout_RDX;
  char *pcVar9;
  char c;
  size_t __n_00;
  size_t __n_01;
  char *pcVar10;
  int *local_40;
  
  __stream = stdin;
  if ((*filename == '-') && (filename[1] == '\0')) {
    have_read_stdin = true;
    local_40 = __errno_location();
    if (__stream == (_IO_FILE *)0x0) {
LAB_00102d6b:
      uVar7 = quotearg_n_style_colon(0,3,filename);
      error(0,*local_40,"%s",uVar7);
      return false;
    }
  }
  else {
    __stream = fopen(filename,"r");
    local_40 = __errno_location();
    if (__stream == (FILE *)0x0) goto LAB_00102d6b;
  }
  __n_01 = 0;
  column = 0;
  fadvise((FILE *)__stream,FADVISE_SEQUENTIAL);
LAB_00102afa:
  pbVar5 = (byte *)__stream->_IO_read_ptr;
  if (__stream->_IO_read_end <= pbVar5) goto LAB_00102b83;
LAB_00102b04:
  __stream->_IO_read_ptr = (char *)(pbVar5 + 1);
  uVar2 = (uint)*pbVar5;
  do {
    __n = __n_01 + 1;
    if (fold_file::allocated_out <= __n) {
      fold_file::line_out = (char *)x2realloc(fold_file::line_out,&fold_file::allocated_out);
    }
    pcVar10 = fold_file::line_out;
    if (uVar2 == 10) {
      fold_file::line_out[__n_01] = '\n';
      __n_01 = 0;
      column = 0;
      fwrite_unlocked(pcVar10,1,__n,stdout);
      goto LAB_00102afa;
    }
    c = (char)uVar2;
LAB_00102b3c:
    while( true ) {
      column = adjust_column(column,c);
      if (column <= width) {
        pcVar10[__n_01] = c;
        __n_01 = __n_01 + 1;
        goto LAB_00102afa;
      }
      sVar1 = __n_01;
      if (break_spaces == false) break;
      do {
        __n_00 = sVar1;
        if (__n_00 == 0) goto LAB_00102b62;
        ppuVar6 = __ctype_b_loc();
        sVar1 = __n_00 - 1;
      } while ((*(byte *)(*ppuVar6 + (byte)pcVar10[__n_00 - 1]) & 1) == 0);
      fwrite_unlocked(pcVar10,1,__n_00,stdout);
      pcVar10 = stdout->_IO_write_ptr;
      if (pcVar10 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar10 + 1;
        *pcVar10 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
      pcVar10 = fold_file::line_out;
      __n_01 = __n_01 - __n_00;
      memmove(fold_file::line_out,fold_file::line_out + __n_00,__n_01);
      if (__n_01 == 0) {
        column = 0;
      }
      else {
        pcVar8 = pcVar10 + __n_01;
        column = 0;
        pcVar9 = pcVar10;
        do {
          column = adjust_column(column,*pcVar9);
          pcVar9 = (char *)(extraout_RDX + 1);
        } while (pcVar9 != pcVar8);
      }
    }
LAB_00102b62:
    if (__n_01 != 0) {
      pcVar10[__n_01] = '\n';
      sVar1 = __n_01 + 1;
      __n_01 = 0;
      column = 0;
      fwrite_unlocked(pcVar10,1,sVar1,stdout);
      pcVar10 = fold_file::line_out;
      goto LAB_00102b3c;
    }
    __n_01 = 1;
    *pcVar10 = c;
    pbVar5 = (byte *)__stream->_IO_read_ptr;
    if (pbVar5 < __stream->_IO_read_end) goto LAB_00102b04;
LAB_00102b83:
    uVar2 = __uflow(__stream);
    if (uVar2 == 0xffffffff) {
      iVar3 = *local_40;
      if ((*(byte *)&__stream->_flags & 0x20) == 0) {
        iVar3 = 0;
      }
      if (__n_01 != 0) {
        fwrite_unlocked(fold_file::line_out,1,__n_01,stdout);
      }
      if ((*filename == '-') && (filename[1] == '\0')) {
        clearerr_unlocked(__stream);
      }
      else {
        iVar4 = rpl_fclose((FILE *)__stream);
        if (iVar4 != 0) {
          if (iVar3 != 0) goto LAB_00102de2;
          iVar3 = *local_40;
        }
      }
      if (iVar3 == 0) {
        return true;
      }
LAB_00102de2:
      uVar7 = quotearg_n_style_colon(0,3,filename);
      error(0,iVar3,"%s",uVar7);
      return false;
    }
  } while( true );
}

