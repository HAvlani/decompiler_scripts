
void bytes_split(uintmax_t n_bytes,char *buf,size_t bufsize,size_t initial_read,uintmax_t max_files)

{
  __off_t _Var1;
  undefined8 uVar2;
  int *piVar3;
  _Bool new_file_flag;
  byte bVar4;
  char *bp;
  uintmax_t bytes;
  uintmax_t uVar5;
  bool bVar6;
  
  uVar5 = 0;
  bVar4 = 1;
  new_file_flag = true;
  bytes = n_bytes;
  if (initial_read == 0xffffffffffffffff) goto LAB_00105697;
  bVar6 = initial_read < bufsize;
  if (initial_read < n_bytes) goto LAB_001056cf;
  do {
    bp = buf;
    do {
      bVar4 = bVar4 | new_file_flag;
      if (bVar4 != 0) {
        bVar4 = cwrite(new_file_flag,bp,bytes);
      }
      uVar5 = uVar5 + new_file_flag;
      new_file_flag = uVar5 < max_files || max_files == 0;
      if ((uVar5 >= max_files && max_files != 0) && (bVar4 == 0)) {
        return;
      }
      initial_read = initial_read - bytes;
      bp = bp + bytes;
      bytes = n_bytes;
    } while (n_bytes <= initial_read);
    if (initial_read != 0) goto LAB_00105708;
    while( true ) {
      if (bVar6) {
        if (max_files <= uVar5) {
          return;
        }
        do {
          uVar5 = uVar5 + 1;
          cwrite(true,(char *)0x0,0);
        } while (max_files != uVar5);
        return;
      }
LAB_00105697:
      if ((bVar4 == 0) && (_Var1 = lseek(0,bytes,1), _Var1 != -1)) {
        new_file_flag = true;
        bytes = n_bytes;
      }
      initial_read = safe_read(0,buf,bufsize);
      if (initial_read == 0xffffffffffffffff) {
        uVar2 = quotearg_n_style_colon(0,3,infile);
        piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar3,"%s",uVar2);
      }
      bVar6 = initial_read == 0;
      if (bytes <= initial_read) break;
LAB_001056cf:
      if (initial_read != 0) {
        bp = buf;
        if ((bVar4 | new_file_flag) == 0) {
          bVar4 = 0;
          new_file_flag = max_files == uVar5;
          if (new_file_flag) {
            return;
          }
        }
        else {
LAB_00105708:
          bVar4 = cwrite(new_file_flag,bp,initial_read);
          uVar5 = uVar5 + new_file_flag;
          new_file_flag = (_Bool)(max_files == uVar5 & (bVar4 ^ 1));
          if (new_file_flag != false) {
            return;
          }
        }
        bytes = bytes - initial_read;
      }
    }
  } while( true );
}

