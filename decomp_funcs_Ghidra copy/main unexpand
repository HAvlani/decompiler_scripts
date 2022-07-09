
int main(int argc,char **argv)

{
  char *pcVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  _IO_FILE *fp;
  undefined *__ptr;
  size_t sVar7;
  ushort **ppuVar8;
  uintmax_t uVar9;
  int *piVar10;
  undefined8 uVar11;
  uint uVar12;
  char **list;
  byte bVar13;
  uint uVar14;
  ulong in_R10;
  uintmax_t column;
  uint uVar15;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar16;
  byte local_5b;
  byte local_5a;
  _Bool last_tab;
  size_t tab_index;
  long local_40;
  
  bVar3 = false;
  bVar4 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
LAB_00102710:
  iVar5 = getopt_long(argc,argv,",0123456789at:",longopts,0);
  if (iVar5 == -1) {
    if (bVar4) {
      convert_entire_line = false;
    }
    if (bVar3) {
      add_tab_stop(unaff_R15);
    }
    finalize_tab_stops();
    list = (char **)0x0;
    if (optind < argc) {
      list = argv + optind;
    }
    set_file_list(list);
    fp = (_IO_FILE *)next_file((FILE *)0x0);
    if (fp != (_IO_FILE *)0x0) {
      __ptr = (undefined *)xmalloc(max_column_width);
      do {
        local_5b = 1;
        uVar6 = 0;
        column = 0;
        uVar12 = 1;
        tab_index = 0;
        local_5a = 0;
LAB_00102983:
        do {
          pbVar2 = (byte *)fp->_IO_read_ptr;
          if (pbVar2 < fp->_IO_read_end) {
            fp->_IO_read_ptr = (char *)(pbVar2 + 1);
            uVar15 = (uint)*pbVar2;
LAB_0010299d:
            if ((char)uVar12 == '\0') goto LAB_00102959;
            ppuVar8 = __ctype_b_loc();
            uVar14 = (*ppuVar8)[(int)uVar15] & 1;
            in_R10 = (ulong)uVar14;
            bVar13 = (byte)uVar14;
            if (((*ppuVar8)[(int)uVar15] & 1) == 0) {
              if (uVar15 == 8) {
                column = column - (column != 0);
                tab_index = tab_index - (tab_index != 0);
                if (uVar6 != 0) goto LAB_00102903;
                uVar12 = convert_entire_line | uVar14;
                local_5b = bVar13;
                goto LAB_00102959;
              }
              goto LAB_001028ea;
            }
LAB_001029c2:
            uVar9 = get_next_tab_column(column,&tab_index,&last_tab);
            in_R10 = (ulong)bVar13;
            if (last_tab != false) goto LAB_00102b01;
            if (uVar9 < column) goto LAB_00102c0c;
            if (uVar15 == 9) {
              if (uVar6 != 0) {
                *__ptr = 9;
              }
LAB_00102a1e:
              uVar6 = (ulong)local_5a;
              uVar12 = 1;
              uVar15 = 9;
              column = uVar9;
              goto LAB_001028f9;
            }
            column = column + 1;
            local_5b = local_5b ^ 1 | uVar9 != column;
            uVar12 = (uint)local_5b;
            if (local_5b == 0) {
              *__ptr = 9;
              uVar9 = column;
              goto LAB_00102a1e;
            }
            __ptr[uVar6] = (char)uVar15;
            if (uVar9 == column) {
              local_5a = local_5b;
            }
            uVar6 = uVar6 + 1;
          }
          else {
            uVar15 = __uflow(fp);
            if (-1 < (int)uVar15) goto LAB_0010299d;
            fp = (_IO_FILE *)next_file((FILE *)fp);
            if (fp != (_IO_FILE *)0x0) goto LAB_00102983;
            if ((char)uVar12 == '\0') {
LAB_00102b1c:
              rpl_free(__ptr);
              goto LAB_00102b24;
            }
            ppuVar8 = __ctype_b_loc();
            uVar12 = (*ppuVar8)[(int)uVar15] & 1;
            in_R10 = (ulong)uVar12;
            bVar13 = (byte)uVar12;
            if (((*ppuVar8)[(int)uVar15] & 1) != 0) goto LAB_001029c2;
LAB_001028ea:
            column = column + 1;
            if (column == 0) {
LAB_00102bc4:
              uVar11 = dcgettext(0,"input line is too long",5);
              error(1,0,uVar11);
              goto LAB_00102be8;
            }
            uVar12 = 1;
LAB_001028f9:
            while( true ) {
              bVar13 = (byte)in_R10;
              local_5b = bVar13;
              if (uVar6 != 0) {
LAB_00102903:
                if ((1 < uVar6) && (local_5a != 0)) {
                  *__ptr = 9;
                }
                sVar7 = fwrite_unlocked(__ptr,1,uVar6,stdout);
                if (uVar6 != sVar7) {
                  uVar11 = dcgettext(0,"write error",5);
                  piVar10 = __errno_location();
                  error(1,*piVar10,uVar11);
                  goto LAB_00102bc4;
                }
                local_5a = 0;
                local_5b = bVar13;
              }
              in_R10 = (ulong)(local_5b | convert_entire_line);
              uVar12 = uVar12 & (local_5b | convert_entire_line);
              if ((int)uVar15 < 0) goto LAB_00102b1c;
              uVar6 = 0;
LAB_00102959:
              pcVar1 = stdout->_IO_write_ptr;
              if (pcVar1 < stdout->_IO_write_end) break;
              iVar5 = __overflow(stdout,uVar15 & 0xff);
              if (-1 < iVar5) goto LAB_00102979;
              column = dcgettext(0,"write error",5);
              piVar10 = __errno_location();
              error(1,*piVar10,column);
LAB_00102b01:
              uVar12 = 0;
            }
            stdout->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = (char)uVar15;
          }
LAB_00102979:
        } while (uVar15 != 10);
      } while( true );
    }
LAB_00102b24:
    cleanup_file_list_stdin();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return exit_status;
    }
    goto LAB_00102c30;
  }
  if (iVar5 == 0x61) {
    convert_entire_line = true;
    goto LAB_00102710;
  }
  if (iVar5 < 0x62) {
    if (iVar5 == 0x2c) {
      if (bVar3) {
        bVar3 = false;
        add_tab_stop(unaff_R15);
      }
      goto LAB_00102710;
    }
    if (iVar5 < 0x2d) {
      if (iVar5 == -0x83) {
        version_etc((FILE *)stdout,"unexpand","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
    }
    else if (iVar5 == 0x3f) {
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
  }
  else {
    if (iVar5 == 0x74) {
      convert_entire_line = true;
      parse_tab_stops(optarg);
      goto LAB_00102710;
    }
    if (iVar5 == 0x80) {
      bVar4 = true;
      goto LAB_00102710;
    }
  }
  if (bVar3) {
    if ((0x1999999999999999 < unaff_R15) ||
       (uVar6 = (long)(iVar5 + -0x30) + unaff_R15 * 10, bVar16 = uVar6 < unaff_R15,
       unaff_R15 = uVar6, bVar16)) {
LAB_00102be8:
      uVar11 = dcgettext(0,"tab stop value is too large",5);
      error(1,0,uVar11);
LAB_00102c0c:
      uVar11 = dcgettext(0,"input line is too long",5);
      error(1,0,uVar11);
LAB_00102c30:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    bVar3 = true;
    unaff_R15 = (long)(iVar5 + -0x30);
  }
  goto LAB_00102710;
}

