
int add_exclude_fp(anon_subr_void_exclude_ptr_char_ptr_int_void_ptr *add_func,exclude *ex,FILE *fp,
                  int options,char line_end,void *data)

{
  char cVar1;
  pattern_buffer *ppVar2;
  int iVar3;
  void *p;
  int *piVar4;
  char *pcVar5;
  pattern_buffer *ppVar6;
  ushort **ppuVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long in_FS_OFFSET;
  int local_5c;
  int local_50;
  idx_t buf_alloc;
  long local_40;
  
  lVar12 = 0;
  p = (void *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  buf_alloc = 0;
  while (iVar3 = getc((FILE *)fp), iVar3 != -1) {
    if (buf_alloc == lVar12) {
      p = xpalloc(p,&buf_alloc,1,-1,1);
    }
    *(char *)((long)p + lVar12) = (char)iVar3;
    lVar12 = lVar12 + 1;
  }
  local_5c = ferror((FILE *)fp);
  piVar4 = __errno_location();
  local_50 = 0;
  if (local_5c != 0) {
    local_5c = *piVar4;
    local_50 = -(uint)(local_5c != 0);
  }
  pcVar5 = (char *)xirealloc(p,lVar12 + 1);
  pcVar5[lVar12] = line_end;
  if (lVar12 == 0) {
    ppVar6 = (pattern_buffer *)xmalloc(0x10);
    ppVar2 = ex->patbuf;
    ppVar6->base = pcVar5;
    ppVar6->next = ppVar2;
    ex->patbuf = ppVar6;
  }
  else {
    cVar1 = pcVar5[lVar12 + -1];
    ppVar6 = (pattern_buffer *)xmalloc(0x10);
    ppVar2 = ex->patbuf;
    ppVar6->base = pcVar5;
    ppVar6->next = ppVar2;
    ex->patbuf = ppVar6;
    if (pcVar5 < pcVar5 + (ulong)(cVar1 != line_end) + lVar12) {
      pcVar9 = pcVar5;
      pcVar10 = pcVar5;
      do {
        pcVar11 = pcVar10 + 1;
        pcVar8 = pcVar9;
        if (*pcVar10 == line_end) {
          ppuVar7 = __ctype_b_loc();
          pcVar8 = pcVar11;
          if (((*ppuVar7)[(byte)line_end] & 0x2000) == 0) {
LAB_00107156:
            *pcVar10 = '\0';
            (*add_func)(ex,pcVar9,options,data);
          }
          else {
            for (; pcVar9 != pcVar10; pcVar10 = pcVar10 + -1) {
              if ((*(byte *)((long)*ppuVar7 + (ulong)(byte)pcVar10[-1] * 2 + 1) & 0x20) == 0)
              goto LAB_00107156;
            }
          }
        }
        pcVar9 = pcVar8;
        pcVar10 = pcVar11;
      } while (pcVar5 + (ulong)(cVar1 != line_end) + lVar12 != pcVar11);
    }
  }
  *piVar4 = local_5c;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_50;
}

