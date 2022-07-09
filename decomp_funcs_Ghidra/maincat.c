
int main(int argc,char **argv)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  idx_t alignment;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined2 *__dest;
  undefined2 *__dest_00;
  uint *puVar10;
  int *piVar11;
  __off_t _Var12;
  undefined8 uVar13;
  size_t sVar14;
  size_t sVar15;
  char *pcVar16;
  byte bVar17;
  byte bVar18;
  long lVar19;
  size_t sVar20;
  undefined2 *puVar21;
  byte bVar22;
  byte *__file;
  char **bpout;
  size_t sVar23;
  long in_FS_OFFSET;
  bool bVar24;
  undefined auVar25 [16];
  undefined8 uVar26;
  undefined8 uStack360;
  uint *local_160;
  uint *local_158;
  uint *local_150;
  size_t local_148;
  byte local_140;
  byte local_13f;
  byte local_13e;
  char local_13d;
  int local_13c;
  char **local_138;
  long local_130;
  uint *local_128;
  undefined2 *local_120;
  byte local_117;
  byte local_116;
  byte local_115;
  uint local_114;
  stat *local_110;
  long local_108;
  uint local_100;
  byte local_fc;
  byte local_fb;
  byte local_fa;
  char local_f9;
  __dev_t local_f8;
  __ino_t local_f0;
  int n_to_read;
  stat stat_buf;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = argc;
  local_138 = argv;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  local_13e = 0;
  local_13f = 0;
  local_117 = 0;
  local_116 = 0;
  local_115 = 0;
  local_140 = 0;
  do {
    uVar26 = 0x1027c9;
    iVar6 = getopt_long(local_13c,local_138,"benstuvAET",main::long_options,0);
    if (iVar6 == -1) {
      local_110 = &stat_buf;
      iVar7 = __fxstat(1,1,(stat *)local_110);
      iVar6 = optind;
      if (iVar7 < 0) {
        uVar26 = dcgettext(0,"standard output",5);
        piVar11 = __errno_location();
        auVar25 = error(1,*piVar11,uVar26);
        uVar26 = uStack360;
        uStack360 = SUB168(auVar25,0);
        (*(code *)PTR___libc_start_main_0010afd0)
                  (main,uVar26,&local_160,__libc_csu_init,__libc_csu_fini,SUB168(auVar25 >> 0x40,0),
                   &uStack360);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      infile = "-";
      sVar23 = stat_buf.st_blksize;
      if (0x1ffffffffffe0000 < stat_buf.st_blksize - 0x20000U) {
        sVar23 = 0x20000;
      }
      local_f8 = stat_buf.st_dev;
      local_f0 = stat_buf.st_ino;
      local_100 = stat_buf.st_mode & 0xf000;
      local_fb = local_140 | local_117;
      iVar7 = getpagesize();
      local_fa = 1;
      local_108 = (long)iVar7;
      local_f9 = '\0';
      local_130 = (long)iVar6;
      if (iVar6 < local_13c) goto LAB_00102a28;
      __file = &DAT_001070f8;
      local_114 = DAT_001070f8 - 0x2d;
      if (local_114 != 0) goto LAB_00102a4d;
LAB_00102981:
      local_114 = (uint)__file[1];
      if (local_114 != 0) goto LAB_00102a4d;
      input_desc = 0;
      local_f9 = '\x01';
LAB_00102a66:
      iVar6 = input_desc;
      iVar7 = __fxstat(1,input_desc,(stat *)local_110);
      if (iVar7 < 0) {
        uVar26 = quotearg_n_style_colon(0,3,infile);
        piVar11 = __errno_location();
        error(0,*piVar11,"%s",uVar26);
        local_fa = 0;
        goto contin;
      }
      local_148 = 0x20000;
      if (stat_buf.st_blksize - 0x20000U < 0x1ffffffffffe0001) {
        local_148 = stat_buf.st_blksize;
      }
      fdadvise(iVar6,0,0,2);
      if ((((local_100 == 0x8000) && (stat_buf.st_dev == local_f8)) && (stat_buf.st_ino == local_f0)
          ) && (_Var12 = lseek(input_desc,0,1), _Var12 < stat_buf.st_size)) {
        uVar26 = quotearg_n_style_colon(0,3,infile);
        uVar13 = dcgettext(0,"%s: input file is output file",5);
        error(0,0,uVar13,uVar26);
        local_fa = 0;
        goto contin;
      }
      alignment = local_108;
      uVar4 = local_148;
      if ((local_fb != 0) || (bVar18 = local_13f | local_13e | local_116, bVar18 != 0)) {
        puVar9 = (uint *)xalignalloc(local_108,local_148 + 1);
        lVar19 = uVar4 * 4;
        if (((-1 < lVar19) && ((uVar4 >> 0x3e == 0 && (!SCARRY8(lVar19,sVar23))))) &&
           (!SCARRY8(lVar19 + sVar23,0x13))) {
          __dest = (undefined2 *)xalignalloc(alignment,lVar19 + sVar23 + 0x13);
          local_120 = (undefined2 *)((long)__dest + sVar23);
          local_13d = '\x01';
          local_fc = local_115 ^ 1;
          puVar10 = (uint *)((long)puVar9 + 1);
          __dest_00 = __dest;
          iVar6 = newlines2;
          local_160 = puVar9;
          local_158 = puVar9;
          local_128 = (uint *)((long)puVar9 + 1);
LAB_00102b78:
          do {
            puVar21 = __dest;
            if (local_120 <= __dest_00) {
              do {
                sVar20 = full_write(1,puVar21,sVar23);
                if (sVar20 != sVar23) {
                  uVar26 = dcgettext(0,"write error",5);
                  piVar11 = __errno_location();
                  error(1,*piVar11,uVar26);
                  goto switchD_001027f3_caseD_42;
                }
                puVar21 = (undefined2 *)((long)puVar21 + sVar23);
                puVar9 = (uint *)((long)__dest_00 - (long)puVar21);
              } while ((long)sVar23 <= (long)puVar9);
              local_150 = puVar9;
              memmove(__dest,puVar21,(size_t)puVar9);
              __dest_00 = (undefined2 *)((long)__dest + (long)local_150);
            }
            iVar7 = input_desc;
            if (local_160 < puVar10) {
              n_to_read = 0;
              if (local_13d == '\0') {
LAB_00102ba4:
                puVar9 = (uint *)(ulong)(uint)input_desc;
                sVar20 = (long)__dest_00 - (long)__dest;
                iVar7 = input_desc;
                if (0 < (long)sVar20) {
                  bpout = (char **)0x1;
                  puVar21 = __dest;
                  sVar15 = full_write(1,__dest,sVar20);
                  __dest_00 = __dest;
                  iVar7 = input_desc;
                  if (sVar20 != sVar15) goto LAB_0010319e;
                }
              }
              else {
                iVar8 = ioctl(input_desc,0x541b,&n_to_read);
                if (iVar8 < 0) {
                  puVar10 = (uint *)__errno_location();
                  puVar9 = local_158;
                  uVar2 = *puVar10;
                  bVar24 = uVar2 == 0x5f;
                  if (uVar2 < 0x27) {
                    bVar24 = (bool)(bVar24 | (byte)(0x4002480000 >> ((byte)uVar2 & 0x3f)) & 1);
                  }
                  if (bVar24 == false) {
                    local_160 = puVar10;
                    pcVar16 = quotearg_style(shell_escape_always_quoting_style,infile);
                    uVar26 = dcgettext(0,"cannot do ioctl on %s",5);
                    error(0,*local_160,uVar26,pcVar16);
                    local_fa = 0;
                    goto LAB_001029f7;
                  }
                  local_13d = '\0';
                }
                if (n_to_read == 0) goto LAB_00102ba4;
              }
              sVar20 = safe_read(iVar7,local_158,local_148);
              puVar9 = local_158;
              if (sVar20 == 0xffffffffffffffff) {
                sVar15 = (long)__dest_00 - (long)__dest;
                sVar20 = quotearg_n_style_colon(0,3,infile);
                piVar11 = __errno_location();
                error(0,*piVar11,"%s",sVar20);
                if (0 < (long)sVar15) {
                  bpout = (char **)0x1;
                  puVar21 = __dest;
                  sVar14 = full_write(1,__dest,sVar15);
                  if (sVar15 != sVar14) goto LAB_0010319e;
                }
                local_fa = 0;
                goto LAB_001029f7;
              }
              if (sVar20 == 0) goto LAB_00102f90;
              local_160 = (uint *)(sVar20 + (long)local_158);
              *(char *)local_160 = '\n';
              puVar9 = local_128;
              puVar10 = local_158;
            }
            else {
              iVar6 = iVar6 + 1;
              puVar9 = (uint *)((long)puVar10 + 1);
              if (iVar6 < 1) {
LAB_00102db0:
                if (local_117 != 0) {
                  puVar21 = __dest_00;
                  if (pending_cr != false) {
                    pending_cr = false;
                    puVar21 = __dest_00 + 1;
                    *__dest_00 = 0x4d5e;
                  }
                  *(undefined *)puVar21 = 0x24;
                  __dest_00 = (undefined2 *)((long)puVar21 + 1);
                }
                *(undefined *)__dest_00 = 10;
                __dest_00 = (undefined2 *)((long)__dest_00 + 1);
              }
              else if ((iVar6 == 1) || (iVar6 = 2, local_116 == 0)) {
                if ((local_fc != 0) && (local_140 != 0)) {
                  local_150 = puVar9;
                  next_line_num();
                  __dest_00 = (undefined2 *)stpcpy((char *)__dest_00,line_num_print);
                  puVar9 = local_150;
                }
                goto LAB_00102db0;
              }
            }
            bVar18 = *(byte *)puVar10;
            puVar10 = puVar9;
            if (bVar18 != 10) {
              if (pending_cr != false) {
                pending_cr = false;
                *(undefined *)__dest_00 = 0xd;
                __dest_00 = (undefined2 *)((long)__dest_00 + 1);
              }
              if ((-1 < iVar6) && (local_140 != 0)) {
                next_line_num();
                __dest_00 = (undefined2 *)stpcpy((char *)__dest_00,line_num_print);
              }
              if (local_13f != 0) {
                do {
                  if (bVar18 < 0x20) {
                    if ((bVar18 == 9) && (local_13e != 1)) {
                      *(undefined *)__dest_00 = 9;
                      puVar21 = (undefined2 *)((long)__dest_00 + 1);
                    }
                    else {
                      if (bVar18 == 10) goto LAB_00102e81;
                      *(undefined *)__dest_00 = 0x5e;
                      puVar21 = __dest_00 + 1;
                      *(byte *)((long)__dest_00 + 1) = bVar18 + 0x40;
                    }
                  }
                  else if (bVar18 < 0x7f) {
                    *(byte *)__dest_00 = bVar18;
                    puVar21 = (undefined2 *)((long)__dest_00 + 1);
                  }
                  else if (bVar18 == 0x7f) {
                    puVar21 = __dest_00 + 1;
                    *__dest_00 = 0x3f5e;
                  }
                  else {
                    *__dest_00 = 0x2d4d;
                    if (bVar18 < 0xa0) {
                      *(undefined *)(__dest_00 + 1) = 0x5e;
                      puVar21 = __dest_00 + 2;
                      *(byte *)((long)__dest_00 + 3) = bVar18 - 0x40;
                    }
                    else if (bVar18 == 0xff) {
                      puVar21 = __dest_00 + 2;
                      __dest_00[1] = 0x3f5e;
                    }
                    else {
                      puVar21 = (undefined2 *)((long)__dest_00 + 3);
                      *(byte *)(__dest_00 + 1) = bVar18 + 0x80;
                    }
                  }
                  bVar18 = *(byte *)puVar9;
                  puVar9 = (uint *)((long)puVar9 + 1);
                  __dest_00 = puVar21;
                } while( true );
              }
              bVar22 = 0;
              bVar5 = pending_cr;
              do {
                if ((bVar18 == 9) && (local_13e != 0)) {
                  bVar18 = *(byte *)puVar9;
                  puVar21 = __dest_00 + 1;
                  *__dest_00 = 0x495e;
                }
                else {
                  if (bVar18 == 10) goto LAB_00102e78;
                  bVar1 = *(byte *)puVar9;
                  if ((bVar18 == 0xd) && (bVar17 = bVar1 == 10 & local_117, bVar17 != 0)) {
                    if (puVar9 == local_160) {
                      bVar18 = 10;
                      puVar21 = __dest_00;
                      bVar5 = bVar17;
                      bVar22 = bVar17;
                    }
                    else {
                      bVar18 = 10;
                      *__dest_00 = 0x4d5e;
                      puVar21 = __dest_00 + 1;
                    }
                  }
                  else {
                    *(byte *)__dest_00 = bVar18;
                    puVar21 = (undefined2 *)((long)__dest_00 + 1);
                    bVar18 = bVar1;
                  }
                }
                puVar9 = (uint *)((long)puVar9 + 1);
                __dest_00 = puVar21;
              } while( true );
            }
          } while( true );
        }
LAB_001033e5:
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
      if ((local_100 == 0x8000) && (bVar24 = false, (stat_buf.st_mode & 0xf000) == 0x8000)) {
        while (lVar19 = copy_file_range(input_desc,0,1,0,0x7fffffffc0000000,0), lVar19 != -1) {
          if (lVar19 == 0) {
            iVar6 = 1;
            if (bVar24) goto LAB_001032f5;
            goto LAB_001030e7;
          }
          bVar24 = true;
        }
        puVar9 = (uint *)__errno_location();
        uVar2 = *puVar9;
        bVar5 = 1;
        if (uVar2 < 0x27) {
          bVar5 = ~(byte)(0x4004440202 >> ((byte)uVar2 & 0x3f)) & 1;
        }
        if ((bVar5 == 0) || (uVar2 == 0x5f)) goto LAB_001030e7;
        uVar26 = quotearg_n_style_colon(0,3,infile);
        error(0,*puVar9,"%s",uVar26);
        iVar6 = -1;
LAB_001032f5:
        puVar9 = (uint *)0x0;
        local_fa = local_fa & 0 < iVar6;
      }
      else {
LAB_001030e7:
        sVar20 = local_148;
        if ((long)local_148 <= (long)sVar23) {
          sVar20 = sVar23;
        }
        puVar9 = (uint *)xalignalloc(local_108,sVar20);
        while (sVar15 = safe_read(input_desc,puVar9,sVar20), sVar15 != 0xffffffffffffffff) {
          if (sVar15 == 0) {
            bVar18 = 1;
            goto LAB_0010317c;
          }
          sVar14 = full_write(1,puVar9,sVar15);
          if (sVar15 != sVar14) {
            uVar26 = dcgettext(0,"write error",5);
            piVar11 = __errno_location();
            error(1,*piVar11,uVar26);
            goto LAB_00103416;
          }
        }
        uVar26 = quotearg_n_style_colon(0,3,infile);
        piVar11 = __errno_location();
        error(0,*piVar11,"%s",uVar26);
LAB_0010317c:
        local_fa = local_fa & bVar18;
      }
      goto LAB_001029ff;
    }
    if (0x76 < iVar6) goto switchD_001027f3_caseD_42;
    if (iVar6 < 0x41) {
      if (iVar6 == -0x83) {
        version_etc(stdout,"cat","GNU coreutils",Version,"Torbjorn Granlund","Richard M. Stallman",0
                    ,uVar26);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001027f3_caseD_42;
    }
    switch(iVar6) {
    case 0x41:
      local_13e = 1;
      local_13f = 1;
      local_117 = 1;
      break;
    default:
switchD_001027f3_caseD_42:
                    /* WARNING: Subroutine does not return */
      usage(1);
    case 0x54:
      local_13e = 1;
      break;
    case 0x62:
      local_115 = 1;
      local_140 = 1;
      break;
    case 0x65:
      local_13f = 1;
    case 0x45:
      local_117 = 1;
      break;
    case 0x6e:
      local_140 = 1;
      break;
    case 0x73:
      local_116 = 1;
      break;
    case 0x74:
      local_13e = 1;
      local_13f = 1;
      break;
    case 0x75:
      break;
    case 0x76:
      local_13f = 1;
    }
  } while( true );
LAB_00102f90:
  sVar20 = (long)__dest_00 - (long)__dest;
  if (0 < (long)sVar20) {
    while( true ) {
      bpout = (char **)0x1;
      puVar21 = __dest;
      sVar15 = full_write(1,__dest,sVar20);
      if (sVar20 == sVar15) break;
LAB_0010319e:
      write_pending(bpout,(char *)puVar21);
    }
  }
LAB_001029f7:
  newlines2 = iVar6;
  rpl_free(__dest);
LAB_001029ff:
  rpl_free(puVar9);
contin:
  if ((local_114 != 0) && (iVar6 = close(input_desc), iVar6 < 0)) goto LAB_00102fc3;
  do {
    local_130 = local_130 + 1;
    if (local_13c <= (int)local_130) {
      if (pending_cr != false) goto LAB_00103399;
      do {
        if ((local_f9 == '\0') || (iVar6 = close(0), -1 < iVar6)) {
          if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
            return (int)(local_fa ^ 1);
          }
LAB_00103416:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar26 = dcgettext(0,"closing standard input",5);
        piVar11 = __errno_location();
        error(1,*piVar11,uVar26);
LAB_00103399:
        sVar23 = full_write(1,&DAT_0010712e,1);
      } while (sVar23 == 1);
      uVar26 = dcgettext(0,"write error",5);
      piVar11 = __errno_location();
      error(1,*piVar11,uVar26);
      goto LAB_001033e5;
    }
LAB_00102a28:
    __file = (byte *)local_138[local_130];
    local_114 = *__file - 0x2d;
    infile = (char *)__file;
    if (local_114 == 0) goto LAB_00102981;
LAB_00102a4d:
    input_desc = open((char *)__file,0);
    if (-1 < input_desc) goto LAB_00102a66;
LAB_00102fc3:
    uVar26 = quotearg_n_style_colon(0,3,infile);
    piVar11 = __errno_location();
    error(0,*piVar11,"%s",uVar26);
    local_fa = 0;
  } while( true );
LAB_00102e78:
  if (bVar22 != 0) {
    pending_cr = (_Bool)bVar5;
  }
LAB_00102e81:
  iVar6 = -1;
  puVar10 = puVar9;
  goto LAB_00102b78;
}

