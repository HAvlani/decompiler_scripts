
_Bool skip(uintmax_t n_skip)

{
  long lVar1;
  FILE *fp;
  _Bool _Var2;
  _Bool _Var3;
  int iVar4;
  ulong uVar5;
  __blksize_t _Var6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  _Bool _Var10;
  long in_FS_OFFSET;
  stat file_stats;
  char buf [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n_skip == 0) {
    _Var10 = true;
LAB_00104bd1:
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return _Var10;
  }
  _Var10 = true;
  if (in_stream == (FILE *)0x0) goto LAB_00104c52;
LAB_00104b30:
  fp = in_stream;
  iVar4 = fileno((FILE *)in_stream);
  iVar4 = __fxstat(1,iVar4,(stat *)&file_stats);
  if (iVar4 != 0) goto LAB_00104c80;
  if ((file_stats.st_mode & 0xd000) == 0x8000) {
    _Var6 = file_stats.st_blksize;
    if (0x1fffffffffffffff < file_stats.st_blksize - 1U) {
      _Var6 = 0x200;
    }
    if (file_stats.st_size <= _Var6) goto LAB_00104b77;
    if ((ulong)file_stats.st_size < n_skip) {
      n_skip = n_skip - file_stats.st_size;
      goto LAB_00104c30;
    }
    iVar4 = rpl_fseeko(fp,n_skip,1);
    if (iVar4 != 0) {
      _Var10 = false;
    }
  }
  else {
    iVar4 = rpl_fseeko(fp,n_skip,1);
    if (iVar4 != 0) {
LAB_00104b77:
      uVar9 = 0x2000;
      do {
        if (n_skip < uVar9) {
          uVar9 = n_skip;
        }
        uVar5 = __fread_unlocked_chk(buf,0x2000,1,uVar9,in_stream);
        n_skip = n_skip - uVar5;
        if (uVar9 != uVar5) {
          if ((in_stream->_flags & 0x20U) != 0) {
            _Var10 = false;
            break;
          }
          if ((in_stream->_flags & 0x10U) != 0) goto LAB_00104cc0;
        }
        if (n_skip == 0) break;
      } while( true );
    }
  }
  goto LAB_00104bd1;
LAB_00104cc0:
  if (n_skip == 0) goto LAB_00104bd1;
LAB_00104c30:
  while( true ) {
    _Var2 = check_and_close(0);
    _Var3 = open_next_file();
    _Var10 = (_Bool)(_Var10 & _Var2 & _Var3);
    if (in_stream != (FILE *)0x0) break;
LAB_00104c52:
    uVar7 = dcgettext(0,"cannot skip past end of combined input",5);
    error(1,0,uVar7);
LAB_00104c80:
    _Var10 = false;
    uVar7 = quotearg_n_style_colon(0,3,input_filename);
    piVar8 = __errno_location();
    error(0,*piVar8,&DAT_0010d81b,uVar7);
  }
  goto LAB_00104b30;
}

