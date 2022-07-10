
/* WARNING: Could not reconcile some variable overlaps */

_Bool print_it(char *format,int fd,char *filename,
              anon_subr__Bool_char_ptr_size_t_char_char_int_char_ptr_void_ptr *print_func,void *data
              )

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  _Bool _Var4;
  int fd_00;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  size_t sVar8;
  ushort **ppuVar9;
  char *pcVar10;
  int *piVar11;
  ushort uVar12;
  long lVar13;
  byte bVar14;
  char *extraout_RDX;
  byte bVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 *puVar19;
  char *directive;
  uint uVar20;
  byte *pbVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  byte bVar23;
  ulong *puStackY592;
  undefined8 uStackY584;
  ulong uStackY576;
  ulong uStackY560;
  undefined8 uStackY552;
  ulong uStackY544;
  uint uStackY536;
  undefined8 uStackY532;
  ulong uStackY520;
  undefined8 uStackY512;
  ulong uStackY504;
  undefined8 uStackY496;
  undefined8 uStackY488;
  ulong uStackY480;
  undefined8 uStackY472;
  ulong uStackY464;
  undefined8 uStackY456;
  ulong uStackY448;
  undefined8 uStackY416;
  uint uStackY400;
  undefined8 uStackY396;
  ushort uStackY388;
  undefined8 uStackY384;
  undefined8 uStackY376;
  undefined8 uStackY368;
  undefined8 uStackY352;
  uint uStackY344;
  undefined8 uStackY336;
  uint uStackY328;
  undefined8 uStackY320;
  uint uStackY312;
  undefined8 uStackY304;
  uint uStackY296;
  uint uStackY288;
  uint uStackY284;
  uint uStackY280;
  uint uStackY276;
  long lStackY152;
  ulong uStackY136;
  byte *pbStackY128;
  char *pcStackY120;
  uint *puStackY112;
  byte local_4d;
  
  bVar23 = 0;
  sVar5 = strlen(format);
  pcVar6 = (char *)xmalloc(sVar5 + 3);
  local_4d = 0;
  bVar15 = *format;
  pbStackY128 = (byte *)format;
joined_r0x00104eef:
  if (bVar15 == 0) {
    rpl_free(pcVar6);
    fputs_unlocked(trailing_delim,stdout);
    return (_Bool)local_4d;
  }
  if (bVar15 == 0x25) {
    sVar8 = format_code_offset((char *)pbStackY128);
    pbVar21 = pbStackY128 + sVar8;
    bVar15 = *pbVar21;
    uStackY136 = (ulong)bVar15;
    memcpy(pcVar6,pbStackY128,sVar8);
    if (bVar15 == 0x25) {
LAB_00105029:
      if (1 < sVar8) {
        pcVar6[sVar8] = bVar15;
        pcVar6[sVar8 + 1] = '\0';
        pcStackY120 = quote(pcVar6);
        uVar7 = dcgettext(0,"%s: invalid directive",5);
        pcVar6 = (char *)0x0;
        pcVar18 = (char *)0x1;
        error(1,0,uVar7,pcStackY120);
        lVar13 = 0x20;
        puStackY112 = &switchD_00105213::switchdataD_00111950;
        lStackY152 = *(long *)(in_FS_OFFSET + 0x28);
        if ((*pcVar18 == '-') && (uVar22 = (ulong)(byte)pcVar18[1], pcVar18[1] == 0)) {
          pcVar17 = "";
          uVar20 = 0x1000;
          puVar19 = &uStackY416;
          for (; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar19 = 0;
            puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
          }
        }
        else {
          puVar19 = &uStackY416;
          for (; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar19 = 0;
            puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
          }
          uVar22 = 0xffffff9c;
          uVar20 = -(uint)(follow_links == false) & 0x100;
          pcVar17 = pcVar18;
        }
        puStackY592 = &uStackY560;
        uStackY576 = 0xffffffffffffffff;
        uStackY584 = 0xffffffffffffffff;
        if (dont_sync == false) {
          if (force_sync == false) goto LAB_001056a4;
          uVar20 = uVar20 | 0x2000;
        }
        else {
          uVar20 = uVar20 | 0x4000;
          if (force_sync == false) {
LAB_001056a4:
            uVar20 = uVar20 | 0x800;
          }
        }
        cVar3 = *pcVar6;
        if (cVar3 == '\0') {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          directive = pcVar6;
          do {
            while (cVar3 != '%') {
              cVar3 = directive[1];
              directive = directive + 1;
              if (cVar3 == '\0') goto LAB_001054ed;
            }
            sVar8 = format_code_offset(directive);
            pcVar10 = directive + sVar8;
            if (*pcVar10 == '\0') break;
            bVar15 = *pcVar10 + 0xbf;
            if (bVar15 < 0x3a) {
              uVar12 = uVar12 | *(ushort *)(CSWTCH_124 + (ulong)bVar15 * 2);
            }
            directive = pcVar10 + 1;
            cVar3 = pcVar10[1];
          } while (cVar3 != '\0');
        }
LAB_001054ed:
        fd_00 = statx(uVar22,pcVar17,uVar20,uVar12);
        if (fd_00 < 0) {
          piVar11 = __errno_location();
          if ((uVar20 & 0x1000) == 0) {
            pcVar6 = quotearg_style(shell_escape_always_quoting_style,pcVar18);
            uVar7 = dcgettext(0,"cannot statx %s",5);
            error(0,*piVar11,uVar7,pcVar6);
            bVar15 = 0;
          }
          else {
            uVar7 = dcgettext(0,"cannot stat standard input",5);
            error(0,*piVar11,uVar7);
            bVar15 = 0;
          }
        }
        else {
          uStackY536 = (uint)uStackY388;
          pcVar17 = extraout_RDX;
          if ((uStackY388 & 0xb000) != 0x2000) {
            pcVar17 = pcVar6;
          }
          uStackY560 = ((ulong)uStackY276 & 0xffffff00) << 0xc |
                       ((ulong)uStackY280 & 0xfffff000) << 0x20 | (ulong)((uStackY280 & 0xfff) << 8)
                       | (ulong)(byte)uStackY276;
          uStackY552 = uStackY384;
          uStackY544 = (ulong)uStackY400;
          uStackY532 = uStackY396;
          uStackY520 = ((ulong)uStackY284 & 0xffffff00) << 0xc |
                       ((ulong)uStackY288 & 0xfffff000) << 0x20 | (ulong)((uStackY288 & 0xfff) << 8)
                       | (ulong)uStackY284 & 0xff;
          uStackY512 = uStackY376;
          uStackY504 = (ulong)uStackY416._4_4_;
          uStackY496 = uStackY368;
          uStackY488 = uStackY352;
          uStackY480 = (ulong)uStackY344;
          uStackY472 = uStackY304;
          uStackY464 = (ulong)uStackY296;
          uStackY456 = uStackY320;
          uStackY448 = (ulong)uStackY312;
          if ((uStackY416._1_1_ & 8) != 0) {
            uStackY584 = uStackY336;
            uStackY576 = (ulong)uStackY328;
          }
          _Var4 = print_it(pcVar17,fd_00,pcVar18,print_stat,&puStackY592);
          bVar15 = _Var4 ^ 1;
        }
        if (lStackY152 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (_Bool)bVar15;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pbVar16 = pbVar21 + 1;
      pcVar18 = stdout->_IO_write_ptr;
      if (pcVar18 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar18 + 1;
        *pcVar18 = '%';
      }
      else {
        __overflow(stdout,0x25);
      }
    }
    else {
      if ((char)bVar15 < '&') {
        if (bVar15 == 0) {
          pbVar21 = pbVar21 + -1;
          goto LAB_00105029;
        }
LAB_00105069:
        pbVar16 = pbVar21 + 1;
        bVar14 = 0;
      }
      else {
        if ((bVar15 & 0xfb) != 0x48) goto LAB_00105069;
        bVar1 = pbVar21[1];
        pbVar2 = pbVar21 + 1;
        pbVar16 = pbVar2;
        bVar14 = 0;
        if ((print_func == print_stat) && ((bVar1 == 100 || (bVar1 == 0x72)))) {
          pbVar16 = pbVar21 + 2;
          pbVar21 = pbVar2;
          bVar14 = bVar15;
          bVar15 = bVar1;
        }
      }
      puStackY112 = (uint *)0x105091;
      _Var4 = (*print_func)(pcVar6,sVar8,bVar14,bVar15,fd,filename,data);
      local_4d = local_4d | _Var4;
    }
  }
  else {
    pbVar21 = pbStackY128;
    if (bVar15 == 0x5c) {
      pbVar21 = pbStackY128 + 1;
      if (interpret_backslash_escapes == false) {
LAB_00104f90:
        pcVar18 = stdout->_IO_write_ptr;
        if (pcVar18 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar18 + 1;
          *pcVar18 = '\\';
          bVar15 = pbStackY128[1];
          pbStackY128 = pbVar21;
          goto joined_r0x00104eef;
        }
        __overflow(stdout,0x5c);
        pbVar16 = pbVar21;
        pbVar21 = pbStackY128;
      }
      else {
        bVar15 = pbStackY128[1];
        if ((byte)(bVar15 - 0x30) < 8) {
          bVar15 = bVar15 - 0x30;
          if ((byte)(pbStackY128[2] - 0x30) < 8) {
            bVar15 = (pbStackY128[2] - 0x30) + bVar15 * '\b';
            if ((byte)(pbStackY128[3] - 0x30) < 8) {
              bVar15 = (pbStackY128[3] - 0x30) + bVar15 * '\b';
              pbVar16 = pbStackY128 + 4;
            }
            else {
              pbVar16 = pbStackY128 + 3;
            }
          }
          else {
            pbVar16 = pbStackY128 + 2;
          }
          pbVar21 = (byte *)stdout->_IO_write_ptr;
          if (pbVar21 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(pbVar21 + 1);
            *pbVar21 = bVar15;
          }
          else {
            __overflow(stdout,(uint)bVar15);
          }
          pbVar21 = pbVar16 + -1;
        }
        else {
          if (bVar15 == 0x78) {
            ppuVar9 = __ctype_b_loc();
            bVar1 = pbStackY128[2];
            if ((*(byte *)((long)*ppuVar9 + (ulong)bVar1 * 2 + 1) & 0x10) != 0) {
              if ((byte)(bVar1 + 0x9f) < 6) {
                bVar15 = bVar1 + 0xa9;
              }
              else {
                bVar15 = bVar1 - 0x37;
                if (5 < (byte)(bVar1 + 0xbf)) {
                  bVar15 = bVar1 - 0x30;
                }
              }
              bVar1 = pbStackY128[3];
              pbVar21 = pbStackY128 + 2;
              if ((*(byte *)((long)*ppuVar9 + (ulong)bVar1 * 2 + 1) & 0x10) != 0) {
                pbVar21 = pbStackY128 + 3;
                if ((byte)(bVar1 + 0x9f) < 6) {
                  cVar3 = bVar1 + 0xa9;
                }
                else {
                  cVar3 = bVar1 - 0x30;
                  if ((byte)(bVar1 + 0xbf) < 6) {
                    cVar3 = bVar1 - 0x37;
                  }
                }
                bVar15 = bVar15 * '\x10' + cVar3;
              }
              pbVar16 = pbVar21 + 1;
              pbVar2 = (byte *)stdout->_IO_write_ptr;
              if (pbVar2 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
                *pbVar2 = bVar15;
              }
              else {
                __overflow(stdout,(uint)bVar15);
              }
              goto LAB_00104f29;
            }
            uVar20 = 0x78;
LAB_001051fd:
            switch(bVar15) {
            case 0x5c:
              break;
            default:
              uVar7 = dcgettext(0,"warning: unrecognized escape \'\\%c\'",5);
              error(0,0,uVar7);
              break;
            case 0x61:
              uVar20 = 7;
              bVar15 = 7;
              break;
            case 0x62:
              uVar20 = 8;
              bVar15 = 8;
              break;
            case 0x65:
              uVar20 = 0x1b;
              bVar15 = 0x1b;
              break;
            case 0x66:
              uVar20 = 0xc;
              bVar15 = 0xc;
              break;
            case 0x6e:
              uVar20 = 10;
              bVar15 = 10;
              break;
            case 0x72:
              uVar20 = 0xd;
              bVar15 = 0xd;
              break;
            case 0x74:
              uVar20 = 9;
              bVar15 = 9;
              break;
            case 0x76:
              uVar20 = 0xb;
              bVar15 = 0xb;
            }
          }
          else {
            if (bVar15 == 0) {
              uVar7 = dcgettext(0,"warning: backslash at end of format",5);
              error(0,0,uVar7);
              goto LAB_00104f90;
            }
            uVar20 = (uint)(char)bVar15;
            if (bVar15 != 0x22) goto LAB_001051fd;
            uVar20 = 0x22;
          }
          pbVar16 = pbStackY128 + 2;
          pbVar2 = (byte *)stdout->_IO_write_ptr;
          if (pbVar2 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
            *pbVar2 = bVar15;
          }
          else {
            __overflow(stdout,uVar20 & 0xff);
          }
        }
      }
    }
    else {
      pbVar16 = pbStackY128 + 1;
      pbVar2 = (byte *)stdout->_IO_write_ptr;
      if (pbVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = bVar15;
      }
      else {
        __overflow(stdout,(uint)bVar15);
      }
    }
  }
LAB_00104f29:
  bVar15 = pbVar21[1];
  pbStackY128 = pbVar16;
  goto joined_r0x00104eef;
}

