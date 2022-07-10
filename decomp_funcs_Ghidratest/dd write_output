
void write_output(void)

{
  long lVar1;
  idx_t iVar2;
  char *pcVar3;
  char *fmt;
  uint *puVar4;
  int in_EDX;
  char *pcVar5;
  ulong uVar6;
  
  iVar2 = iwrite(obuf,output_blocksize,in_EDX);
  w_bytes = w_bytes + iVar2;
  if (output_blocksize == iVar2) {
    w_full = w_full + 1;
    oc = 0;
    return;
  }
  pcVar3 = quotearg_style(shell_escape_always_quoting_style,output_file);
  fmt = (char *)dcgettext(0,"writing to %s",5);
  puVar4 = (uint *)__errno_location();
  pcVar5 = (char *)0x0;
  uVar6 = (ulong)*puVar4;
  nl_error(0,*puVar4,fmt,pcVar3);
  if (iVar2 != 0) {
    w_partial = w_partial + 1;
  }
  quit((int)pcVar5);
  pcVar3 = pcVar5 + uVar6;
  if (uVar6 != 0) {
    do {
      while (iVar2 = col, *pcVar5 == newline_character) {
        if (col < conversion_blocksize) {
          do {
            lVar1 = oc + 1;
            obuf[oc] = space_character;
            oc = lVar1;
            if (output_blocksize <= lVar1) {
              write_output();
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < conversion_blocksize);
        }
        col = 0;
        pcVar5 = pcVar5 + 1;
        if (pcVar5 == pcVar3) {
          col = 0;
          return;
        }
      }
      if (col == conversion_blocksize) {
        r_truncate = r_truncate + 1;
      }
      else if (col < conversion_blocksize) {
        lVar1 = oc + 1;
        obuf[oc] = *pcVar5;
        oc = lVar1;
        if (output_blocksize <= lVar1) {
          write_output();
          iVar2 = col;
        }
      }
      col = iVar2 + 1;
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != pcVar3);
  }
  return;
}

