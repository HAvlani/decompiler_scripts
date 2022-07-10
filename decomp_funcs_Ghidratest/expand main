
int main(int argc,char **argv)

{
  long lVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  _IO_FILE *fp;
  ushort **ppuVar5;
  int *piVar6;
  uintmax_t uVar7;
  undefined8 uVar8;
  uintmax_t uVar9;
  uint uVar10;
  char **list;
  uintmax_t column;
  ushort uVar11;
  long in_FS_OFFSET;
  _Bool last_tab;
  size_t tab_index;
  char tab_stop [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  convert_entire_line = true;
LAB_001026e7:
  do {
    iVar4 = getopt_long(argc,argv,"it:0::1::2::3::4::5::6::7::8::9::",longopts,0);
    if (iVar4 == -1) {
      finalize_tab_stops();
      list = (char **)0x0;
      if (optind < argc) {
        list = argv + optind;
      }
      set_file_list(list);
      fp = (_IO_FILE *)next_file((FILE *)0x0);
      if (fp == (_IO_FILE *)0x0) {
LAB_001028fb:
        cleanup_file_list_stdin();
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return exit_status;
        }
LAB_00102a53:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_001027f8:
      tab_index = 0;
      column = 0;
      uVar11 = 1;
LAB_0010286a:
      pbVar3 = (byte *)fp->_IO_read_ptr;
      if (pbVar3 < fp->_IO_read_end) {
        fp->_IO_read_ptr = (char *)(pbVar3 + 1);
        uVar10 = (uint)*pbVar3;
LAB_0010287f:
        if ((char)uVar11 == '\0') goto LAB_00102846;
        if (uVar10 == 9) goto LAB_00102965;
        if (uVar10 == 8) {
          column = column - (column != 0);
          tab_index = tab_index - (tab_index != 0);
          goto LAB_001028b6;
        }
      }
      else {
        uVar10 = __uflow(fp);
        if (-1 < (int)uVar10) goto LAB_0010287f;
        fp = (_IO_FILE *)next_file((FILE *)fp);
        if (fp != (_IO_FILE *)0x0) goto LAB_0010286a;
        if ((char)uVar11 == '\0') goto LAB_001028fb;
      }
      column = column + 1;
      if (column != 0) {
        uVar11 = (ushort)convert_entire_line;
        if (convert_entire_line != false) goto LAB_0010283e;
        while( true ) {
          ppuVar5 = __ctype_b_loc();
          uVar11 = (*ppuVar5)[(int)uVar10] & 1;
LAB_0010283e:
          if ((int)uVar10 < 0) break;
LAB_00102846:
          do {
            pcVar2 = stdout->_IO_write_ptr;
            if (pcVar2 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = pcVar2 + 1;
              *pcVar2 = (char)uVar10;
LAB_00102865:
              if (uVar10 == 10) goto LAB_001027f8;
              goto LAB_0010286a;
            }
            iVar4 = __overflow(stdout,uVar10 & 0xff);
            if (-1 < iVar4) goto LAB_00102865;
            column = dcgettext(0,"write error",5);
            piVar6 = __errno_location();
            error(1,*piVar6,column);
LAB_00102965:
            uVar7 = get_next_tab_column(column,&tab_index,&last_tab);
            uVar9 = uVar7;
            if (last_tab == false) goto LAB_001029ab;
            if (column == 0xffffffffffffffff) {
              do {
                uVar8 = dcgettext(0,"input line is too long",5);
                uVar9 = error(1,0,uVar8);
LAB_001029ab:
              } while (uVar9 < column);
              do {
                while( true ) {
                  column = column + 1;
                  if (uVar7 <= column) goto LAB_00102a1b;
                  pcVar2 = stdout->_IO_write_ptr;
                  if (stdout->_IO_write_end <= pcVar2) break;
                  stdout->_IO_write_ptr = pcVar2 + 1;
                  *pcVar2 = ' ';
                }
                iVar4 = __overflow(stdout,0x20);
              } while (-1 < iVar4);
              column = dcgettext(0,"write error",5);
              piVar6 = __errno_location();
              error(1,*piVar6,column);
            }
            column = column + 1;
LAB_00102a1b:
            uVar10 = 0x20;
LAB_001028b6:
            uVar11 = (ushort)convert_entire_line;
          } while (convert_entire_line != false);
        }
        goto LAB_001028fb;
      }
      uVar8 = dcgettext(0,"input line is too long",5);
      error(1,0,uVar8);
      goto LAB_00102a53;
    }
    if (0x39 < iVar4) {
      if (iVar4 == 0x69) {
        convert_entire_line = false;
      }
      else {
        if (iVar4 != 0x74) {
LAB_00102a25:
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        parse_tab_stops(optarg);
      }
      goto LAB_001026e7;
    }
    if (iVar4 < 0x30) {
      if (iVar4 == -0x83) {
        version_etc((FILE *)stdout,"expand","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto LAB_00102a25;
    }
    if (optarg == (char *)0x0) {
      tab_stop[0] = (char)iVar4;
      tab_stop[1] = '\0';
      parse_tab_stops(tab_stop);
    }
    else {
      parse_tab_stops(optarg + -1);
    }
  } while( true );
}

