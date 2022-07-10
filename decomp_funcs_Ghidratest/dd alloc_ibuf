
void alloc_ibuf(void)

{
  long lVar1;
  idx_t iVar2;
  char *pcVar3;
  char *fmt;
  long in_FS_OFFSET;
  char hbuf [652];
  
  iVar2 = input_blocksize;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ibuf = (char *)aligned_alloc(page_size,(ulong)((uint)conversions_mask >> 7 & 1) + input_blocksize)
  ;
  if (ibuf == (char *)0x0) {
    pcVar3 = human_readable(iVar2,hbuf,0x1f1,1,1);
    iVar2 = input_blocksize;
    fmt = (char *)dcgettext(0,"memory exhausted by input buffer of size %td bytes (%s)",5);
    nl_error(1,0,fmt,iVar2,pcVar3);
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

