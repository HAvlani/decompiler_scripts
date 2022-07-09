
void copy_with_unblock(char *buf,idx_t nread)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  
  if (nread < 1) {
    return;
  }
  lVar4 = 0;
  do {
    cVar2 = buf[lVar4];
    lVar1 = col + 1;
    if (col < conversion_blocksize) {
      lVar4 = lVar4 + 1;
      col = lVar1;
      lVar1 = oc;
      pcVar3 = obuf;
      if (space_character == cVar2) {
        copy_with_unblock::pending_spaces = copy_with_unblock::pending_spaces + 1;
      }
      else {
        for (; copy_with_unblock::pending_spaces != 0;
            copy_with_unblock::pending_spaces = copy_with_unblock::pending_spaces + -1) {
          oc = lVar1 + 1;
          pcVar3[lVar1] = space_character;
          if (output_blocksize <= oc) {
            write_output();
            pcVar3 = obuf;
          }
          lVar1 = oc;
        }
        oc = lVar1 + 1;
        pcVar3[lVar1] = cVar2;
        if (output_blocksize <= oc) goto LAB_001066c0;
      }
    }
    else {
      copy_with_unblock::pending_spaces = 0;
      col = 0;
      lVar1 = oc + 1;
      obuf[oc] = newline_character;
      oc = lVar1;
      if (output_blocksize <= lVar1) {
LAB_001066c0:
        write_output();
      }
    }
    if (nread <= lVar4) {
      return;
    }
  } while( true );
}

