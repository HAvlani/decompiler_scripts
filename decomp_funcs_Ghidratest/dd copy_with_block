
void copy_with_block(char *buf,idx_t nread)

{
  long lVar1;
  char *pcVar2;
  idx_t iVar3;
  
  pcVar2 = buf + nread;
  if (nread != 0) {
    do {
      while (iVar3 = col, *buf == newline_character) {
        if (col < conversion_blocksize) {
          do {
            lVar1 = oc + 1;
            obuf[oc] = space_character;
            oc = lVar1;
            if (output_blocksize <= lVar1) {
              write_output();
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < conversion_blocksize);
        }
        col = 0;
        buf = buf + 1;
        if (buf == pcVar2) {
          col = 0;
          return;
        }
      }
      if (col == conversion_blocksize) {
        r_truncate = r_truncate + 1;
      }
      else if (col < conversion_blocksize) {
        lVar1 = oc + 1;
        obuf[oc] = *buf;
        oc = lVar1;
        if (output_blocksize <= lVar1) {
          write_output();
          iVar3 = col;
        }
      }
      col = iVar3 + 1;
      buf = buf + 1;
    } while (buf != pcVar2);
  }
  return;
}

