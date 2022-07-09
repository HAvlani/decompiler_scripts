
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort **ppuVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  undefined8 uVar11;
  char **ppcVar12;
  char **ppcVar13;
  byte bVar14;
  char **unaff_RBP;
  char **ppcVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  undefined auVar17 [16];
  undefined8 uStack280;
  undefined8 local_110;
  char **local_108;
  char **local_100;
  char **local_f8;
  stat *local_f0;
  ulong local_e8;
  char **local_e0;
  stat sb;
  
  bVar2 = false;
  local_108._0_4_ = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  while (iVar4 = getopt_long(argc,argv,"cor:s:",longopts,0), ppcVar12 = (char **)ref_file,
        iVar4 != -1) {
    if (iVar4 == 0x6f) {
      block_mode = true;
    }
    else if (iVar4 < 0x70) {
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      if (iVar4 != 99) {
        if (iVar4 == -0x83) {
          version_etc(stdout,"truncate","GNU coreutils",Version,"Padraig Brady",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00102773;
      }
      no_create = true;
    }
    else if (iVar4 == 0x72) {
      ref_file = (char *)optarg;
    }
    else {
      if (iVar4 != 0x73) goto LAB_00102773;
      ppuVar7 = __ctype_b_loc();
      pbVar3 = optarg;
      do {
        optarg = pbVar3;
        bVar14 = *optarg;
        pbVar3 = optarg + 1;
      } while ((*(byte *)((long)*ppuVar7 + (ulong)bVar14 * 2 + 1) & 0x20) != 0);
      if (bVar14 == 0x3c) {
        local_108._0_4_ = 3;
        pbVar3 = optarg + 1;
      }
      else if ((char)bVar14 < '=') {
        if (bVar14 == 0x25) {
          local_108._0_4_ = 5;
          pbVar3 = optarg + 1;
        }
        else {
          pbVar3 = optarg;
          if (bVar14 == 0x2f) {
            local_108._0_4_ = 4;
            pbVar3 = optarg + 1;
          }
        }
      }
      else {
        pbVar3 = optarg;
        if (bVar14 == 0x3e) {
          local_108._0_4_ = 2;
          pbVar3 = optarg + 1;
        }
      }
      do {
        optarg = pbVar3;
        pbVar3 = optarg + 1;
      } while ((*(byte *)((long)*ppuVar7 + (ulong)*optarg * 2 + 1) & 0x20) != 0);
      if ((*optarg - 0x2b & 0xfd) == 0) {
        if ((uint)local_108 != 0) {
          pcVar8 = "multiple relative modifiers specified";
          goto LAB_00102bf3;
        }
        local_108._0_4_ = 1;
        bVar2 = true;
        pcVar8 = (char *)dcgettext(0,"Invalid number",5);
        unaff_RBP = (char **)xdectoimax((char *)optarg,-0x8000000000000000,0x7fffffffffffffff,
                                        "EgGkKmMPtTYZ0",pcVar8,0);
      }
      else {
        pcVar8 = (char *)dcgettext(0,"Invalid number",5);
        unaff_RBP = (char **)xdectoimax((char *)optarg,-0x8000000000000000,0x7fffffffffffffff,
                                        "EgGkKmMPtTYZ0",pcVar8,0);
        if (((uint)local_108 - 4 < 2) && (unaff_RBP == (char **)0x0)) {
          uVar11 = dcgettext(0,"division by zero",5);
          error(1,0,uVar11);
          goto LAB_00102fcd;
        }
        bVar2 = true;
      }
    }
  }
  ppcVar13 = argv + optind;
  iVar4 = argc - optind;
  if (ref_file == (char *)0x0) {
    if (!bVar2) {
      pcVar8 = quote_n(1,"--reference");
      pcVar9 = quote_n(0,"--size");
      pcVar16 = "you must specify either %s or %s";
      goto LAB_00102a11;
    }
    if (iVar4 < 1) {
LAB_00102be7:
      pcVar8 = "missing file operand";
LAB_00102bf3:
      uVar11 = dcgettext(0,pcVar8,5);
      error(0,0,uVar11);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    local_f8 = (char **)0xffffffffffffffff;
    ppcVar15 = unaff_RBP;
LAB_00102a8f:
    pcVar8 = *ppcVar13;
    local_110 = (uint *)((ulong)local_110 & 0xffffffffffffff00);
    iVar4 = (-(uint)(no_create == false) & 0x40) + 0x801;
    if (pcVar8 != (char *)0x0) {
      local_f0 = &sb;
      local_e8 = (ulong)local_f8 >> 0x3f;
      local_100 = ppcVar15;
      do {
        iVar5 = open(pcVar8,iVar4,0x1b6);
        if (iVar5 < 0) {
          piVar10 = __errno_location();
          if ((no_create == false) || (*piVar10 != 2)) {
            pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
            uVar11 = dcgettext(0,"cannot open %s for writing",5);
            error(0,*piVar10,uVar11,pcVar8);
            local_110 = (uint *)CONCAT71(local_110._1_7_,1);
          }
        }
        else {
          if (block_mode == false) {
            unaff_RBP = local_100;
            if (((uint)local_108 == 0) || ((char)local_e8 == '\0')) {
LAB_00102c17:
              ppcVar15 = unaff_RBP;
              if ((uint)local_108 != 0) {
                ppcVar12 = local_f8;
                if (local_f8 == (char **)0xffffffffffffffff) goto LAB_00102de4;
                goto LAB_00102c2d;
              }
              goto LAB_00102c5a;
            }
            iVar6 = __fxstat(1,iVar5,(stat *)local_f0);
            unaff_RBP = local_100;
            if (iVar6 != 0) goto LAB_00102b88;
LAB_00102de4:
            if ((sb.st_mode & 0xd000) == 0x8000) {
              ppcVar12 = (char **)sb.st_size;
              if (-1 < sb.st_size) goto LAB_00102c2d;
              pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
              pcVar16 = "%s has unusable, apparently negative size";
LAB_00102e22:
              uVar11 = dcgettext(0,pcVar16,5);
              bVar14 = 0;
              error(0,0,uVar11,pcVar9);
            }
            else {
              ppcVar12 = (char **)lseek(iVar5,0,2);
              if ((long)ppcVar12 < 0) {
                local_108 = (char **)quotearg_style(shell_escape_always_quoting_style,pcVar8);
                pcVar9 = "cannot get the size of %s";
                goto LAB_00102ba6;
              }
LAB_00102c2d:
              ppcVar15 = unaff_RBP;
              if ((uint)local_108 == 2) {
                if ((long)unaff_RBP < (long)ppcVar12) {
                  ppcVar15 = ppcVar12;
                }
              }
              else if ((uint)local_108 == 3) {
                if ((long)ppcVar12 < (long)unaff_RBP) {
                  ppcVar15 = ppcVar12;
                }
              }
              else if ((uint)local_108 == 4) {
                ppcVar15 = (char **)((long)ppcVar12 - (long)ppcVar12 % (long)unaff_RBP);
              }
              else {
                if ((uint)local_108 == 5) {
LAB_00102f64:
                  ppcVar15 = ppcVar12;
                  if ((long)ppcVar12 % (long)unaff_RBP == 0) goto LAB_00102c5a;
                  unaff_RBP = (char **)((long)unaff_RBP - (long)ppcVar12 % (long)unaff_RBP);
                }
                ppcVar15 = (char **)((long)unaff_RBP + (long)ppcVar12);
                if (SCARRY8((long)unaff_RBP,(long)ppcVar12)) {
                  pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
                  pcVar16 = "overflow extending size of file %s";
                  goto LAB_00102e22;
                }
              }
LAB_00102c5a:
              local_108 = (char **)0x0;
              if (-1 < (long)ppcVar15) {
                local_108 = ppcVar15;
              }
              bVar14 = 1;
              iVar6 = ftruncate(iVar5,(__off_t)local_108);
              if (iVar6 != 0) {
                local_e0 = local_108;
                local_108 = (char **)quotearg_style(shell_escape_always_quoting_style,pcVar8);
                uVar11 = dcgettext(0,"failed to truncate %s at %ld bytes",5);
                piVar10 = __errno_location();
                bVar14 = 0;
                error(0,*piVar10,uVar11,local_108,local_e0);
              }
            }
          }
          else {
            iVar6 = __fxstat(1,iVar5,(stat *)local_f0);
            if (iVar6 == 0) {
              ppcVar12 = (char **)sb.st_blksize;
              if (0x1fffffffffffffff < sb.st_blksize - 1U) {
                ppcVar12 = (char **)0x200;
              }
              unaff_RBP = (char **)((long)local_100 * (long)ppcVar12);
              if (SEXT816((long)(char **)((long)local_100 * (long)ppcVar12)) ==
                  SEXT816((long)local_100) * SEXT816((long)ppcVar12)) goto LAB_00102c17;
              local_108 = ppcVar12;
              pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
              uVar11 = dcgettext(0,"overflow in %ld * %ld byte blocks for file %s",5);
              bVar14 = 0;
              error(0,0,uVar11,local_100,local_108,pcVar9);
            }
            else {
LAB_00102b88:
              local_108 = (char **)quotearg_style(shell_escape_always_quoting_style,pcVar8);
              pcVar9 = "cannot fstat %s";
LAB_00102ba6:
              uVar11 = dcgettext(0,pcVar9,5);
              piVar10 = __errno_location();
              bVar14 = 0;
              error(0,*piVar10,uVar11,local_108);
            }
          }
          iVar5 = close(iVar5);
          if (iVar5 == 0) {
            local_110 = (uint *)((ulong)local_110 & 0xffffffffffffff00 |
                                (ulong)(byte)((byte)local_110 | bVar14 ^ 1));
          }
          else {
            pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
            uVar11 = dcgettext(0,"failed to close %s",5);
            piVar10 = __errno_location();
            error(0,*piVar10,uVar11,pcVar8);
            local_110 = (uint *)CONCAT71(local_110._1_7_,1);
          }
        }
        pcVar8 = ppcVar13[1];
        ppcVar13 = ppcVar13 + 1;
      } while (pcVar8 != (char *)0x0);
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (int)(byte)local_110;
    }
LAB_00102fcd:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (((uint)local_108 == 0) && (bVar2)) {
    pcVar8 = quote_n(1,"--reference");
    pcVar9 = quote_n(0,"--size");
    pcVar16 = "you must specify a relative %s with %s";
  }
  else {
    if ((block_mode != true) || (bVar2)) {
      if (iVar4 < 1) goto LAB_00102be7;
      iVar5 = __xstat(1,ref_file,(stat *)&sb);
      if (iVar5 != 0) {
        pcVar8 = quotearg_style(shell_escape_always_quoting_style,(char *)ppcVar12);
        uVar11 = dcgettext(0,"cannot stat %s",5);
        piVar10 = __errno_location();
        auVar17 = error(1,*piVar10,uVar11,pcVar8);
        uVar11 = uStack280;
        uStack280 = SUB168(auVar17,0);
        (*(code *)PTR___libc_start_main_0010afd0)
                  (main,uVar11,&local_110,__libc_csu_init,__libc_csu_fini,SUB168(auVar17 >> 0x40,0),
                   &uStack280);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if ((sb.st_mode & 0xd000) == 0x8000) {
        ppcVar12 = (char **)sb.st_size;
        if (sb.st_size < 0) goto LAB_00102f21;
      }
      else {
        iVar4 = open((char *)ppcVar12,0);
        local_110 = (uint *)__errno_location();
        if (iVar4 < 0) {
LAB_00102f21:
          iVar5 = (int)ppcVar12;
          ppcVar13 = (char **)quotearg_style(shell_escape_always_quoting_style,ref_file);
          pcVar8 = (char *)dcgettext(0,"cannot get the size of %s",5);
          piVar10 = __errno_location();
          ppcVar12 = ppcVar13;
          error(1,*piVar10,pcVar8);
          goto LAB_00102f64;
        }
        ppcVar12 = (char **)lseek(iVar4,0,2);
        local_108 = (char **)((ulong)local_108 & 0xffffffff00000000 | (ulong)*local_110);
        close(iVar4);
        if ((long)ppcVar12 < 0) {
          *local_110 = (uint)local_108;
          goto LAB_00102f21;
        }
      }
      local_f8 = (char **)0xffffffffffffffff;
      ppcVar15 = ppcVar12;
      if (bVar2) {
        ppcVar15 = unaff_RBP;
        local_f8 = ppcVar12;
      }
      goto LAB_00102a8f;
    }
    pcVar8 = quote_n(1,"--size");
    pcVar9 = quote_n(0,"--io-blocks");
    pcVar16 = "%s was specified but %s was not";
  }
LAB_00102a11:
  uVar11 = dcgettext(0,pcVar16,5);
  error(0,0,uVar11,pcVar9,pcVar8);
LAB_00102773:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

