
_Bool read_block(size_t n,char *block,size_t *n_bytes_in_buffer)

{
  _Bool _Var1;
  _Bool _Var2;
  int *piVar3;
  size_t sVar4;
  FILE *__stream;
  size_t sVar5;
  _Bool _Var6;
  
  __stream = (FILE *)in_stream;
  if ((n != 0) && (n <= bytes_per_block)) {
    *n_bytes_in_buffer = 0;
    if (__stream == (FILE *)0x0) {
      _Var6 = true;
    }
    else {
      sVar5 = 0;
      _Var6 = true;
      while( true ) {
        sVar4 = fread_unlocked(block + sVar5,1,n - sVar5,__stream);
        *n_bytes_in_buffer = *n_bytes_in_buffer + sVar4;
        if (n - sVar5 == sVar4) break;
        piVar3 = __errno_location();
        _Var1 = check_and_close(*piVar3);
        _Var2 = open_next_file();
        _Var6 = (_Bool)(_Var6 & _Var1 & _Var2);
        if (in_stream == (FILE *)0x0) {
          return _Var6;
        }
        sVar5 = *n_bytes_in_buffer;
        __stream = (FILE *)in_stream;
      }
    }
    return _Var6;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("0 < n && n <= bytes_per_block","src/od.c",0x50d,"read_block");
}

