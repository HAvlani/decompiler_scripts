
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  char cVar1;
  char *__s1;
  _Bool _Var2;
  _Bool _Var3;
  int iVar4;
  strtol_error sVar5;
  char *pcVar6;
  ulong uVar7;
  FILE *pFVar8;
  linebuffer *plVar9;
  linebuffer *plVar10;
  undefined8 uVar11;
  int *piVar12;
  char delimiter;
  linebuffer *oldlen;
  long lVar13;
  linebuffer *new;
  char *pcVar14;
  size_t oldlen_00;
  linebuffer *linebuffer;
  linebuffer *linebuffer_00;
  linebuffer *plVar15;
  uint uVar16;
  long in_FS_OFFSET;
  _Bool posixly_correct;
  linebuffer *local_b8;
  undefined8 local_b0;
  linebuffer lb1;
  uintmax_t size;
  long local_70;
  char *local_68;
  char *file [2];
  long local_40;
  
  plVar15 = (linebuffer *)(ulong)(uint)argc;
  linebuffer_00 = (linebuffer *)&DAT_00108a10;
  oldlen = (linebuffer *)0xa;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar6 = getenv("POSIXLY_CORRECT");
  _posixly_correct = (linebuffer *)(ulong)(pcVar6 != (char *)0x0);
  new = (linebuffer *)0x0;
  pcVar6 = (char *)0x0;
  file[1] = "-";
  file[0] = "-";
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  output_first_repeated = true;
  skip_chars = 0;
  skip_fields = 0;
  check_chars = 0xffffffffffffffff;
  output_unique = true;
  output_later_repeated = false;
  countmode = count_none;
  delimit_groups = DM_NONE;
  local_b8 = (linebuffer *)0x0;
  do {
    if ((int)pcVar6 == -1) goto LAB_00102878;
LAB_001028b0:
    while ((uVar16 = (uint)new, uVar16 == 0 || (posixly_correct == false))) {
      uVar7 = getopt_long((ulong)plVar15 & 0xffffffff,argv,"-0123456789Dcdf:is:uw:z",longopts,0);
      iVar4 = (int)uVar7;
      pcVar6 = (char *)(uVar7 & 0xffffffff);
      if (iVar4 == -1) break;
      if (0x80 < iVar4) goto LAB_0010294b;
      if (0x2f < iVar4) {
        if (iVar4 - 0x30U < 0x51) {
                    /* WARNING: Could not recover jumptable at 0x001028fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (*(code *)((long)&linebuffer_00->size +
                            (long)*(int *)((long)&linebuffer_00->size + (ulong)(iVar4 - 0x30U) * 4))
                  )();
          return iVar4;
        }
        goto LAB_0010294b;
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      if (iVar4 != 1) {
        if (iVar4 == -0x83) {
          version_etc((FILE *)stdout,"uniq","GNU coreutils",Version,"Richard M. Stallman",
                      "David MacKenzie",0,uVar7);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_0010294b;
      }
      if (*optarg == '+') goto LAB_00102fc8;
LAB_00102928:
      pcVar14 = optarg;
      if (uVar16 == 2) goto LAB_00103166;
      new = (linebuffer *)(ulong)(uVar16 + 1);
      file[uVar16] = optarg;
    }
LAB_00102878:
    __s1 = file[1];
    pcVar14 = file[0];
    if ((int)plVar15 <= optind) {
      if (grouping != GM_NONE) {
        if ((char)local_b8 == '\0') {
          pcVar6 = "grouping and printing repeat counts is meaningless";
          if (countmode == count_none) goto LAB_00102984;
        }
        else {
LAB_001031e4:
          pcVar6 = "--group is mutually exclusive with -c/-d/-D/-u";
        }
LAB_00102ce1:
        uVar11 = dcgettext(0,pcVar6,5);
        error(0,0,uVar11);
LAB_0010294b:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      if ((countmode == count_occurrences) &&
         (pcVar6 = "printing all duplicated lines and repeat counts is meaningless",
         output_later_repeated != false)) goto LAB_00102ce1;
LAB_00102984:
      delimiter = (char)oldlen;
      uVar16 = (uint)delimiter;
      argv = (char **)(ulong)uVar16;
      iVar4 = strcmp(file[0],"-");
      if ((iVar4 == 0) || (pFVar8 = freopen_safer(pcVar14,"r",stdin), pFVar8 != (FILE *)0x0)) {
        iVar4 = strcmp(__s1,"-");
        if ((iVar4 != 0) && (pFVar8 = freopen_safer(__s1,"w",(FILE *)stdout), pFVar8 == (FILE *)0x0)
           ) {
          uVar11 = quotearg_n_style_colon(0,3,__s1);
          piVar12 = __errno_location();
          error(1,*piVar12,&DAT_00108bd7,uVar11);
          goto LAB_001031e4;
        }
        plVar15 = (linebuffer *)&size;
        fadvise(stdin,FADVISE_SEQUENTIAL);
        initbuffer(&lb1);
        initbuffer(plVar15);
        _Var3 = output_first_repeated;
        if (((output_unique == false) ||
            (local_b8 = (linebuffer *)(ulong)output_first_repeated, output_first_repeated == false))
           || (countmode != count_none)) {
          plVar9 = readlinebuffer_delim(plVar15,stdin,delimiter);
          pcVar6 = local_68;
          if (plVar9 != (linebuffer *)0x0) {
            lVar13 = local_70 + -1;
            plVar9 = (linebuffer *)find_field();
            new = (linebuffer *)(lVar13 - ((long)plVar9 - (long)pcVar6));
            local_b8 = plVar15;
            if ((*(byte *)&stdin->_flags & 0x10) == 0) {
              local_b0 = CONCAT71(local_b0._1_7_,1);
              linebuffer_00 = (linebuffer *)0x0;
              plVar10 = &lb1;
              plVar15 = new;
              do {
                while( true ) {
                  linebuffer = plVar10;
                  new = plVar9;
                  plVar9 = readlinebuffer_delim(linebuffer,stdin,delimiter);
                  if (plVar9 == (linebuffer *)0x0) {
                    if ((*(byte *)&stdin->_flags & 0x20) != 0) goto LAB_00102f8f;
                    goto LAB_00102e89;
                  }
                  _posixly_correct = (linebuffer *)linebuffer->buffer;
                  lVar13 = linebuffer->length;
                  argv = (char **)find_field();
                  oldlen = (linebuffer *)((lVar13 + -1) - ((long)argv - (long)_posixly_correct));
                  _Var3 = different((char *)argv,(char *)new,(size_t)oldlen,(size_t)plVar15);
                  _Var2 = (_Bool)(_Var3 ^ 1);
                  plVar9 = (linebuffer *)((long)&linebuffer_00->size + (ulong)_Var2);
                  linebuffer_00 = (linebuffer *)0xfffffffffffffffe;
                  if (plVar9 != (linebuffer *)0xffffffffffffffff) {
                    linebuffer_00 = plVar9;
                  }
                  if (delimit_groups == DM_NONE) break;
                  if (_Var3 == false) {
                    if ((plVar9 == (linebuffer *)0x1) &&
                       ((delimit_groups == DM_PREPEND ||
                        ((delimit_groups == DM_SEPARATE && ((byte)local_b0 == 0)))))) {
                      pcVar6 = stdout->_IO_write_ptr;
                      if (pcVar6 < stdout->_IO_write_end) {
                        stdout->_IO_write_ptr = pcVar6 + 1;
                        *pcVar6 = delimiter;
                      }
                      else {
                        _posixly_correct = (linebuffer *)(ulong)_Var2;
                        __overflow(stdout,uVar16);
                      }
                    }
                    goto LAB_00102e49;
                  }
                  if (plVar9 != (linebuffer *)0x0) {
                    local_b0._0_1_ = 0;
                  }
                  local_b0 = local_b0 & 0xffffffffffffff00 | (ulong)(byte)local_b0;
LAB_00102d8c:
                  writeline(local_b8,_Var2,(uintmax_t)linebuffer_00);
                  linebuffer_00 = (linebuffer *)0x0;
                  new = (linebuffer *)argv;
                  plVar10 = local_b8;
                  plVar15 = oldlen;
                  local_b8 = linebuffer;
LAB_00102db3:
                  plVar9 = new;
                  if ((*(byte *)&stdin->_flags & 0x10) != 0) goto LAB_00102e89;
                }
                if (_Var3 != false) goto LAB_00102d8c;
LAB_00102e49:
                plVar10 = linebuffer;
                if (output_later_repeated == false) goto LAB_00102db3;
                writeline(local_b8,_Var2,(uintmax_t)linebuffer_00);
                new = (linebuffer *)argv;
                plVar9 = (linebuffer *)argv;
                plVar10 = local_b8;
                plVar15 = oldlen;
                local_b8 = linebuffer;
              } while ((*(byte *)&stdin->_flags & 0x10) == 0);
            }
            else {
              linebuffer_00 = (linebuffer *)0x0;
            }
LAB_00102e89:
            writeline(local_b8,false,(uintmax_t)linebuffer_00);
          }
        }
        else {
          new = (linebuffer *)0x0;
          plVar9 = &lb1;
          _posixly_correct = plVar15;
          cVar1 = '\0';
LAB_00102a4b:
          linebuffer_00 = plVar9;
          if (((*(byte *)&stdin->_flags & 0x10) == 0) &&
             (plVar9 = readlinebuffer_delim(linebuffer_00,stdin,delimiter),
             plVar9 != (linebuffer *)0x0)) {
            lVar13 = linebuffer_00->length;
            plVar15 = (linebuffer *)linebuffer_00->buffer;
            plVar10 = (linebuffer *)find_field();
            oldlen_00 = (lVar13 + -1) - ((long)plVar10 - (long)plVar15);
            if ((new != (linebuffer *)0x0) &&
               (_Var2 = different((char *)plVar10,(char *)new,oldlen_00,local_b0), _Var2 == false))
            break;
            if ((grouping != GM_NONE) &&
               (((grouping == GM_PREPEND || (grouping == GM_BOTH)) ||
                ((cVar1 != '\0' && (grouping + ~GM_PREPEND < 2)))))) {
              pcVar6 = stdout->_IO_write_ptr;
              if (pcVar6 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar6 + 1;
                *pcVar6 = delimiter;
              }
              else {
                __overflow(stdout,uVar16);
              }
            }
            goto LAB_00102ade;
          }
          oldlen = (linebuffer *)((ulong)oldlen & 0xff);
          if (((grouping + ~GM_PREPEND & 0xfffffffd) == 0) && (cVar1 != '\0')) {
            pcVar6 = stdout->_IO_write_ptr;
            if (pcVar6 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = pcVar6 + 1;
              *pcVar6 = delimiter;
            }
            else {
              __overflow(stdout,uVar16);
            }
          }
        }
        if (((*(byte *)&stdin->_flags & 0x20) == 0) && (iVar4 = rpl_fclose(stdin), iVar4 == 0)) {
          rpl_free(lb1.buffer);
          rpl_free(local_68);
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return 0;
        }
LAB_00102f8f:
        pcVar6 = quotearg_style(shell_escape_always_quoting_style,pcVar14);
        uVar11 = dcgettext(0,"error reading %s",5);
        error(1,0,uVar11);
LAB_00102fc8:
        uVar16 = (uint)new;
        iVar4 = posix2_version();
        if ((iVar4 - 0x30db0U < 0x2b9) ||
           (sVar5 = xstrtoumax(optarg,(char **)0x0,10,&size,""), sVar5 != LONGINT_OK))
        goto LAB_00102928;
        skip_chars = size;
      }
      else {
        pcVar6 = (char *)quotearg_n_style_colon(0,3,pcVar14);
        piVar12 = __errno_location();
        error(1,*piVar12,&DAT_00108bd7);
        delimit_groups = DM_NONE;
        local_b8 = (linebuffer *)0x1;
      }
      goto LAB_001028b0;
    }
    pcVar14 = (char *)((idx_t *)argv)[optind];
    if ((int)new == 2) {
LAB_00103166:
      pcVar6 = quote(pcVar14);
      uVar11 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar11,pcVar6);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    optind = optind + 1;
    uVar7 = (ulong)new & 0xffffffff;
    new = (linebuffer *)(ulong)((int)new + 1);
    file[uVar7] = pcVar14;
  } while( true );
  plVar9 = linebuffer_00;
  if (grouping != GM_NONE) {
LAB_00102ade:
    fwrite_unlocked(linebuffer_00->buffer,1,linebuffer_00->length,stdout);
    new = plVar10;
    plVar9 = _posixly_correct;
    _posixly_correct = linebuffer_00;
    local_b0 = oldlen_00;
    cVar1 = _Var3;
  }
  goto LAB_00102a4b;
}

