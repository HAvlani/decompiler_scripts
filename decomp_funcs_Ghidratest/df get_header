
void get_header(void)

{
  field_data_t *pfVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  char *__s;
  char *pcVar5;
  char *format;
  ulong uVar6;
  uint opts;
  field_data_t **ppfVar7;
  ulong uVar8;
  ulong uVar9;
  uintmax_t uVar10;
  uintmax_t uVar11;
  long in_FS_OFFSET;
  char *local_2d0;
  char local_2c8 [664];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  alloc_table_row();
  if (ncolumns != 0) {
    uVar8 = 0;
    ppfVar7 = columns;
    do {
      local_2d0 = (char *)0x0;
      __s = (char *)dcgettext(0,ppfVar7[uVar8]->caption,5);
      if (ppfVar7[uVar8]->field != SIZE_FIELD) goto LAB_00105380;
      if (header_mode == 0) {
LAB_001054b8:
        uVar10 = output_block_size;
        uVar11 = output_block_size;
        do {
          uVar6 = (ulong)((uint)uVar11 & 0x3ff);
          uVar9 = uVar10 + ((uVar10 >> 3) / 0x7d) * -1000;
          uVar10 = (uVar10 >> 3) / 0x7d;
          uVar11 = uVar11 >> 10;
        } while ((uVar9 | uVar6) == 0);
        if ((uVar9 == 0) < (uVar6 == 0)) {
          opts = human_output_opts & 0x124U | 0xb8;
LAB_00105522:
          if ((opts & 0x20) == 0) goto LAB_00105596;
        }
        else {
          if ((uVar9 == 0) <= (uVar6 == 0)) {
            opts = human_output_opts & 0x124U | 0x98;
            goto LAB_00105522;
          }
          opts = human_output_opts & 0x104U | 0x98;
LAB_00105596:
          opts = (uint)CONCAT11(1,(char)opts);
        }
        pcVar5 = human_readable(output_block_size,local_2c8,opts,1,1);
        __s = (char *)dcgettext(0,"blocks",5);
LAB_0010545c:
        format = (char *)dcgettext(0,"%s-%s",5);
        iVar3 = rpl_asprintf(&local_2d0,format,pcVar5,__s);
        if (iVar3 == -1) {
          local_2d0 = (char *)0x0;
        }
      }
      else {
        if (header_mode == 4) {
          if ((human_output_opts & 0x10U) == 0) goto LAB_001054b8;
        }
        else if (header_mode == 3) {
          pcVar5 = umaxtostr(output_block_size,local_2c8);
          goto LAB_0010545c;
        }
LAB_00105380:
        local_2d0 = strdup(__s);
      }
      if (local_2d0 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
      replace_problematic_chars(local_2d0);
      table[nrows - 1][uVar8] = local_2d0;
      iVar3 = gnu_mbswidth(local_2d0,0);
      ppfVar7 = columns;
      sVar2 = ncolumns;
      sVar4 = (size_t)iVar3;
      pfVar1 = columns[uVar8];
      if (sVar4 <= pfVar1->width) {
        sVar4 = pfVar1->width;
      }
      uVar8 = uVar8 + 1;
      pfVar1->width = sVar4;
    } while (uVar8 < sVar2);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

