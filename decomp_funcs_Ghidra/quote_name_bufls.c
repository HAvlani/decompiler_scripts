
size_t quote_name_buf(char **inbuf,char *name,quoting_options *options,int needs_general_quoting,
                     size_t *width,_Bool *pad,size_t bufsize)

{
  byte bVar1;
  bool bVar2;
  _Bool _Var3;
  quoting_style qVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  byte *pbVar8;
  ushort **ppuVar9;
  size_t sVar10;
  byte *pbVar11;
  size_t unaff_RBX;
  byte *pbVar12;
  size_t sVar13;
  byte *pbVar14;
  byte *s;
  long in_FS_OFFSET;
  byte *local_80;
  bool local_69;
  wchar_t local_4c;
  mbstate_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (byte *)*inbuf;
  qVar4 = get_quoting_style(options);
  local_69 = (bool)(qVar4 < shell_escape_quoting_style & qmark_funny_chars);
  if (local_69 == false) {
    bVar2 = false;
    if (needs_general_quoting == 0) {
      sVar10 = strlen(name);
      local_80 = (byte *)name;
    }
    else {
LAB_001082b4:
      sVar6 = quotearg_buffer((char *)local_80,0x2000,name,0xffffffffffffffff,options);
      if (0x1fff < sVar6) {
        local_80 = (byte *)xmalloc(sVar6 + 1);
        quotearg_buffer((char *)local_80,sVar6 + 1,name,0xffffffffffffffff,options);
      }
      local_69 = true;
      if (*name == *local_80) {
        sVar7 = strlen(name);
        local_69 = sVar6 != sVar7;
      }
      sVar10 = sVar6;
      if (bVar2) goto LAB_001083f9;
    }
    if (width == (size_t *)0x0) {
      if (align_variable_outer_quotes == false) {
        *pad = false;
        goto LAB_0010847c;
      }
LAB_00108457:
      _Var3 = (_Bool)((local_69 ^ 1U) & cwd_some_quoted);
      goto LAB_00108465;
    }
    sVar6 = __ctype_get_mb_cur_max();
    if (sVar6 < 2) {
      if (local_80 < local_80 + sVar10) {
        ppuVar9 = __ctype_b_loc();
        unaff_RBX = 0;
        pbVar8 = local_80;
        do {
          unaff_RBX = (unaff_RBX + 1) - (ulong)(((*ppuVar9)[*pbVar8] & 0x4000) == 0);
          pbVar8 = pbVar8 + 1;
        } while (local_80 + sVar10 != pbVar8);
      }
      else {
        unaff_RBX = 0;
      }
    }
    else {
      iVar5 = mbsnwidth((char *)local_80,sVar10,0);
      unaff_RBX = (size_t)iVar5;
    }
    if (align_variable_outer_quotes != false) goto LAB_00108457;
    *pad = false;
  }
  else {
    if (needs_general_quoting != 0) {
      bVar2 = true;
      goto LAB_001082b4;
    }
    sVar6 = strlen(name);
    if (0x1fff < sVar6) {
      local_80 = (byte *)xmalloc(sVar6 + 1);
    }
    memcpy(local_80,name,sVar6 + 1);
    local_69 = false;
LAB_001083f9:
    sVar7 = __ctype_get_mb_cur_max();
    pbVar8 = local_80 + sVar6;
    if (sVar7 < 2) {
      sVar10 = sVar6;
      if (local_80 < pbVar8) {
        ppuVar9 = __ctype_b_loc();
        pbVar11 = local_80;
        do {
          if ((*(byte *)((long)*ppuVar9 + (ulong)*pbVar11 * 2 + 1) & 0x40) == 0) {
            *pbVar11 = 0x3f;
          }
          pbVar11 = pbVar11 + 1;
        } while (pbVar11 != pbVar8);
      }
    }
    else if (local_80 < pbVar8) {
      sVar6 = 0;
      pbVar11 = local_80;
      pbVar14 = local_80;
      do {
        bVar1 = *pbVar14;
        if ((char)bVar1 < '`') {
          if ('@' < (char)bVar1) goto LAB_001085bc;
          if ((char)bVar1 < '$') {
            if ('\x1f' < (char)bVar1) goto LAB_001085bc;
          }
          else if ((byte)(bVar1 - 0x25) < 0x1b) goto LAB_001085bc;
LAB_001084f5:
          local_48 = (mbstate_t)0x0;
          pbVar12 = pbVar11;
LAB_00108525:
          do {
            s = pbVar14;
            sVar10 = rpl_mbrtowc(&local_4c,(char *)s,(long)pbVar8 - (long)s,(mbstate_t *)&local_48);
            pbVar11 = pbVar12 + 1;
            if (sVar10 == 0xffffffffffffffff) {
              *pbVar12 = 0x3f;
              pbVar14 = s + 1;
LAB_00108630:
              sVar6 = sVar6 + 1;
              goto LAB_001085cc;
            }
            if (sVar10 == 0xfffffffffffffffe) {
              *pbVar12 = 0x3f;
              pbVar14 = pbVar8;
              goto LAB_00108630;
            }
            sVar13 = 1;
            if (sVar10 != 0) {
              sVar13 = sVar10;
            }
            iVar5 = wcwidth(local_4c);
            if (iVar5 < 0) {
              *pbVar12 = 0x3f;
              sVar6 = sVar6 + 1;
              iVar5 = mbsinit(&local_48);
              pbVar12 = pbVar11;
              pbVar14 = s + sVar13;
              if (iVar5 != 0) break;
              goto LAB_00108525;
            }
            sVar10 = 0;
            do {
              pbVar12[sVar10] = s[sVar10];
              sVar10 = sVar10 + 1;
            } while (sVar13 != sVar10);
            pbVar11 = pbVar12 + sVar13;
            sVar6 = sVar6 + (long)iVar5;
            iVar5 = mbsinit(&local_48);
            pbVar12 = pbVar11;
            pbVar14 = s + sVar13;
          } while (iVar5 == 0);
          pbVar14 = s + sVar13;
        }
        else {
          if (0x1d < (byte)(bVar1 + 0x9f)) goto LAB_001084f5;
LAB_001085bc:
          *pbVar11 = bVar1;
          pbVar14 = pbVar14 + 1;
          sVar6 = sVar6 + 1;
          pbVar11 = pbVar11 + 1;
        }
LAB_001085cc:
      } while (pbVar14 < pbVar8);
      sVar10 = (long)pbVar11 - (long)local_80;
    }
    else {
      sVar6 = 0;
      sVar10 = 0;
    }
    unaff_RBX = sVar6;
    _Var3 = align_variable_outer_quotes;
    if (align_variable_outer_quotes != false) goto LAB_00108457;
LAB_00108465:
    *pad = _Var3;
    if (width == (size_t *)0x0) goto LAB_0010847c;
  }
  *width = unaff_RBX;
LAB_0010847c:
  *inbuf = (char *)local_80;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar10;
}

