
int main(int argc,char **argv)

{
  char cVar1;
  FILE *pFVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  byte *__file;
  __off_t file_pos;
  size_t sVar8;
  size_t sVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  char *pcVar13;
  long file_pos_00;
  undefined8 uVar14;
  char **local_50;
  byte local_39;
  
  bVar3 = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  sentinel_length = 1;
  separator = "\n";
  separator_ends_record = true;
  while( true ) {
    uVar14 = 0x1029e9;
    iVar4 = getopt_long(argc,argv,&DAT_001160fe,longopts,0);
    if (iVar4 == -1) break;
    if (iVar4 == 0x62) {
      separator_ends_record = false;
    }
    else {
      if (iVar4 < 99) {
        if (iVar4 == -0x83) {
          version_etc(stdout,"tac","GNU coreutils",Version,"Jay Lepreau","David MacKenzie",0,uVar14)
          ;
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
LAB_00103066:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      if (iVar4 == 0x72) {
        sentinel_length = 0;
      }
      else {
        if (iVar4 != 0x73) goto LAB_00103066;
        separator = optarg;
      }
    }
  }
  if (sentinel_length == 0) {
    if (*separator == '\0') {
      uVar14 = dcgettext(0,"separator cannot be empty",5);
      pcVar6 = (char *)error(1,0,uVar14);
    }
    else {
      uVar11 = 0xffffffffffffffff;
      compiled_separator.buffer = (re_dfa_t *)0x0;
      compiled_separator.fastmap = compiled_separator_fastmap;
      compiled_separator.allocated = 0;
      compiled_separator.translate = (uchar *)0x0;
      pcVar6 = separator;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (ulong)bVar3 * -2 + 1;
      } while (cVar1 != '\0');
      pcVar6 = rpl_re_compile_pattern(separator,~uVar11 - 1,&compiled_separator);
      if (pcVar6 == (char *)0x0) goto LAB_00102b19;
    }
    error(1,0,"%s",pcVar6);
LAB_001030b8:
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  match_length = 1;
  sentinel_length = match_length;
  if (*separator != '\0') {
    uVar11 = 0xffffffffffffffff;
    pcVar6 = separator;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (ulong)bVar3 * -2 + 1;
    } while (cVar1 != '\0');
    match_length = ~uVar11 - 1;
    sentinel_length = match_length;
  }
LAB_00102b19:
  iVar4 = 0x32;
  read_size = 0x2000;
  uVar11 = 0x2000;
  if (0xfff < sentinel_length) {
    while (read_size = uVar11 * 2, (uVar11 & 0x7fffffffffffffff) <= sentinel_length) {
      iVar4 = iVar4 + -1;
      uVar11 = read_size;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
    }
  }
  uVar11 = read_size + 1 + sentinel_length;
  G_buffer_size = uVar11 * 2;
  if (uVar11 <= read_size || G_buffer_size <= uVar11) goto LAB_001030b8;
  pvVar7 = xmalloc(G_buffer_size);
  sVar9 = sentinel_length;
  if (sentinel_length == 0) {
    G_buffer = (char *)((long)pvVar7 + 1);
  }
  else {
    pvVar7 = memcpy(pvVar7,separator,sentinel_length + 1);
    G_buffer = (char *)((long)pvVar7 + sVar9);
  }
  if (optind < argc) {
    local_50 = argv + optind;
    __file = (byte *)*local_50;
    if (__file == (byte *)0x0) {
      local_39 = 1;
      goto LAB_00102d42;
    }
  }
  else {
    local_50 = main::default_file_list;
    __file = &DAT_001160db;
  }
  local_39 = 1;
  do {
    local_50 = (char **)((byte **)local_50 + 1);
    uVar12 = *__file - 0x2d;
    if ((uVar12 == 0) && (uVar12 = (uint)__file[1], __file[1] == 0)) {
      iVar4 = 0;
      have_read_stdin = true;
      __file = (byte *)dcgettext(0,"standard input",5);
LAB_00102c12:
      file_pos = lseek(iVar4,0,2);
      if ((file_pos < 0) || (iVar5 = isatty(iVar4), iVar5 != 0)) {
        pFVar2 = tmp_fp_7370;
        if (tempfile_7369 == (char *)0x0) {
          pcVar6 = getenv("TMPDIR");
          if (pcVar6 == (char *)0x0) {
            pcVar6 = "/tmp";
          }
          tempfile_7369 = mfile_name_concat(pcVar6,"tacXXXXXX",(char **)0x0);
          iVar5 = mkstemp_safer(tempfile_7369);
          if (iVar5 < 0) {
            pcVar6 = quotearg_style(shell_escape_always_quoting_style,pcVar6);
            uVar14 = dcgettext(0,"failed to create temporary file in %s",5);
            piVar10 = __errno_location();
            error(0,*piVar10,uVar14,pcVar6);
          }
          else {
            tmp_fp_7370 = fdopen(iVar5,"w+");
            if (tmp_fp_7370 != (FILE *)0x0) {
              unlink(tempfile_7369);
              goto LAB_00102c85;
            }
            pcVar6 = quotearg_style(shell_escape_always_quoting_style,tempfile_7369);
            uVar14 = dcgettext(0,"failed to open %s for writing",5);
            piVar10 = __errno_location();
            error(0,*piVar10,uVar14,pcVar6);
            close(iVar5);
            unlink(tempfile_7369);
          }
          bVar3 = 0;
          rpl_free(tempfile_7369);
          tempfile_7369 = (char *)0x0;
        }
        else {
          clearerr_unlocked(tmp_fp_7370);
          iVar5 = rpl_fseeko((FILE *)pFVar2,0,0);
          if (iVar5 < 0) {
LAB_00102e41:
            pcVar6 = quotearg_style(shell_escape_always_quoting_style,tempfile_7369);
            pcVar13 = "failed to rewind stream for %s";
          }
          else {
            iVar5 = fileno(tmp_fp_7370);
            iVar5 = ftruncate(iVar5,0);
            if (iVar5 < 0) goto LAB_00102e41;
LAB_00102c85:
            pcVar6 = tempfile_7369;
            pFVar2 = tmp_fp_7370;
            file_pos_00 = 0;
            while (sVar9 = safe_read(iVar4,G_buffer,read_size), sVar9 != 0) {
              if (sVar9 == 0xffffffffffffffff) {
                pcVar6 = (char *)quotearg_n_style_colon(0,3,__file);
                pcVar13 = "%s: read error";
                goto LAB_00102e19;
              }
              sVar8 = fwrite_unlocked(G_buffer,1,sVar9,pFVar2);
              if (sVar9 != sVar8) goto LAB_00102e63;
              file_pos_00 = file_pos_00 + sVar9;
            }
            iVar5 = fflush_unlocked(pFVar2);
            if (iVar5 == 0) {
              if (file_pos_00 < 0) {
                bVar3 = 0;
              }
              else {
                iVar5 = fileno(pFVar2);
                bVar3 = tac_seekable(iVar5,pcVar6,file_pos_00);
              }
              goto LAB_00102d1d;
            }
LAB_00102e63:
            pcVar6 = (char *)quotearg_n_style_colon(0,3,pcVar6);
            pcVar13 = "%s: write error";
          }
LAB_00102e19:
          uVar14 = dcgettext(0,pcVar13,5);
          piVar10 = __errno_location();
          bVar3 = 0;
          error(0,*piVar10,uVar14,pcVar6);
        }
      }
      else {
        bVar3 = tac_seekable(iVar4,(char *)__file,file_pos);
      }
LAB_00102d1d:
      if ((uVar12 != 0) && (iVar4 = close(iVar4), iVar4 != 0)) {
        pcVar6 = (char *)quotearg_n_style_colon(0,3,__file);
        pcVar13 = "%s: read error";
        goto LAB_00102da4;
      }
    }
    else {
      iVar4 = open((char *)__file,0);
      if (-1 < iVar4) goto LAB_00102c12;
      pcVar6 = quotearg_style(shell_escape_always_quoting_style,(char *)__file);
      pcVar13 = "failed to open %s for reading";
LAB_00102da4:
      uVar14 = dcgettext(0,pcVar13,5);
      piVar10 = __errno_location();
      bVar3 = 0;
      error(0,*piVar10,uVar14,pcVar6);
    }
    local_39 = local_39 & bVar3;
    __file = (byte *)*local_50;
  } while (__file != (byte *)0x0);
LAB_00102d42:
  output((char *)0x0,(char *)0x0);
  if ((have_read_stdin != false) && (iVar4 = close(0), iVar4 < 0)) {
    piVar10 = __errno_location();
    error(0,*piVar10,&DAT_001160db);
    local_39 = 0;
  }
  return (int)(local_39 ^ 1);
}

