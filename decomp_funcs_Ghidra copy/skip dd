
intmax_t skip(int fdesc,char *file,intmax_t records,idx_t blocksize,idx_t *bytes)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long __offset;
  __off_t _Var5;
  ssize_t sVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  int code;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  piVar3 = __errno_location();
  *piVar3 = 0;
  lVar4 = records * blocksize;
  if (SEXT816(lVar4) == SEXT816(records) * SEXT816(blocksize)) {
    __offset = lVar4 + *bytes;
    uVar7 = (ulong)SCARRY8(lVar4,*bytes);
    if (SCARRY8(lVar4,*bytes)) goto LAB_0010678b;
    _Var5 = lseek(fdesc,__offset,1);
    if (-1 < _Var5) {
      if (fdesc != 0) {
LAB_00106840:
        *bytes = 0;
        uVar7 = 0;
        goto LAB_0010684a;
      }
      iVar2 = ifstat(0,&st);
      if (iVar2 == 0) {
        if ((st.st_mode & 0xd000) == 0x8000) {
          if (input_offset < 0) goto LAB_0010684a;
          if (st.st_size - input_offset < __offset) {
            uVar7 = (__offset - st.st_size) / blocksize;
            __offset = st.st_size - input_offset;
          }
        }
        else if (input_offset < 0) goto LAB_0010684a;
        bVar12 = SCARRY8(input_offset,__offset);
        input_offset = input_offset + __offset;
        if (!bVar12) goto LAB_0010684a;
      }
      else {
        pcVar8 = quotearg_style(shell_escape_always_quoting_style,file);
        pcVar9 = (char *)dcgettext(0,"cannot fstat %s",5);
        nl_error(1,*piVar3,pcVar9,pcVar8);
      }
      input_offset = -1;
LAB_0010684a:
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar7;
    }
    iVar2 = *piVar3;
    _Var5 = lseek(fdesc,0,2);
    if (_Var5 < 0) goto LAB_001067ab;
    if (iVar2 != 0) goto LAB_0010695a;
  }
  else {
LAB_0010678b:
    _Var5 = lseek(fdesc,0,2);
    if (_Var5 < 0) {
      iVar2 = 0;
LAB_001067ab:
      if (fdesc == 0) {
        pcVar8 = ibuf;
        if (ibuf == (char *)0x0) {
          alloc_ibuf();
          pcVar8 = ibuf;
        }
      }
      else {
        alloc_obuf();
        pcVar8 = obuf;
      }
      do {
        uVar11 = blocksize;
        uVar7 = records;
        if (records == 0) {
          uVar7 = *bytes;
          goto LAB_00106838;
        }
        while( true ) {
          sVar6 = (*iread_fnc)(fdesc,pcVar8,uVar11);
          if (sVar6 < 0) {
            if (fdesc != 0) goto LAB_001069fd;
            pcVar8 = quotearg_style(shell_escape_always_quoting_style,file);
            pcVar9 = (char *)dcgettext(0,"error reading %s",5);
            code = 0;
            nl_error(0,*piVar3,pcVar9,pcVar8);
            if ((conversions_mask._1_1_ & 1) == 0) goto LAB_001069ed;
            print_stats();
            goto LAB_001069ed;
          }
          if (sVar6 == 0) goto LAB_0010684a;
          if (((fdesc == 0) && (-1 < input_offset)) &&
             (bVar12 = SCARRY8(sVar6,input_offset), input_offset = sVar6 + input_offset, bVar12)) {
            input_offset = -1;
          }
          if (uVar7 == 0) goto LAB_00106840;
          records = uVar7 - 1;
          if (records != 0) break;
          uVar7 = *bytes;
          if (uVar7 == 0) goto LAB_0010684a;
LAB_00106838:
          uVar11 = uVar7;
          uVar7 = 0;
        }
      } while( true );
    }
  }
  iVar2 = 0x4b;
LAB_0010695a:
  if (fdesc != 0) goto LAB_001069fd;
  uVar10 = quotearg_n_style_colon(0,3,file);
  pcVar8 = "%s: cannot skip";
  do {
    pcVar8 = (char *)dcgettext(0,pcVar8,5);
    code = 0;
    nl_error(0,iVar2,pcVar8,uVar10);
LAB_001069ed:
    quit(code);
LAB_001069fd:
    uVar10 = quotearg_n_style_colon(0,3,file);
    pcVar8 = "%s: cannot seek";
  } while( true );
}

