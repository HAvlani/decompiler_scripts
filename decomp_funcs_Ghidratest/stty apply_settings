
/* WARNING: Could not reconcile some variable overlaps */

void apply_settings(_Bool checking,char *device_name,char **settings,int n_settings,termios *mode,
                   _Bool *speed_was_set,_Bool *require_set_attr)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  speed_t sVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  control_info *pcVar11;
  long lVar12;
  char cVar13;
  mode_info *pmVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte bVar20;
  byte *pbVar21;
  char *pcVar22;
  byte *pbVar23;
  long in_FS_OFFSET;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  char *p;
  tcflag_t flag [4];
  
  bVar27 = 0;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (n_settings < 2) {
LAB_00105d91:
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar16 = 1;
LAB_00105c6c:
  pbVar23 = (byte *)settings[(int)uVar16];
  uVar15 = uVar16;
  if (pbVar23 != (byte *)0x0) {
    bVar24 = *pbVar23 < 0x2d;
    bVar25 = *pbVar23 == 0x2d;
    bVar26 = bVar25;
    if (bVar25) {
      bVar24 = (byte *)0xfffffffffffffffe < pbVar23;
      pbVar23 = pbVar23 + 1;
      bVar26 = pbVar23 == (byte *)0x0;
    }
    lVar12 = 6;
    pbVar21 = pbVar23;
    pbVar19 = (byte *)0x10d2cf;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar24 = *pbVar21 < *pbVar19;
      bVar26 = *pbVar21 == *pbVar19;
      pbVar21 = pbVar21 + (ulong)bVar27 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
    } while (bVar26);
    if ((!bVar24 && !bVar26) != bVar24) {
      pmVar14 = mode_info;
      iVar6 = 0;
      pcVar22 = "parenb";
LAB_00105ce4:
      pmVar14 = pmVar14 + 1;
      iVar4 = strcmp((char *)pbVar23,pcVar22);
      if (iVar4 != 0) goto LAB_00105cd0;
      bVar26 = (mode_info[iVar6].flags & 0x10U) == 0;
      if (!bVar26) goto LAB_00105d10;
      if (bVar25) {
        if ((mode_info[iVar6].flags & 4U) == 0) {
          *require_set_attr = true;
          goto LAB_00105f23;
        }
        puVar8 = (uint *)mode_type_flag(mode_info[iVar6].type,mode);
        if (puVar8 != (uint *)0x0) {
          *puVar8 = *puVar8 & ~((uint)mode_info[iVar6].bits | *(uint *)&mode_info[iVar6].mask);
          *require_set_attr = true;
          goto LAB_00105c5f;
        }
        iVar6 = strcmp(pcVar22,"evenp");
        if (((iVar6 == 0) || (iVar6 = strcmp(pcVar22,"parity"), iVar6 == 0)) ||
           (iVar6 = strcmp(pcVar22,"oddp"), iVar6 == 0)) {
          mode->c_cflag = mode->c_cflag & 0xfffffecf | 0x30;
          *require_set_attr = true;
          goto LAB_00105c5f;
        }
      }
      else {
        puVar8 = (uint *)mode_type_flag(mode_info[iVar6].type,mode);
        if (puVar8 != (uint *)0x0) {
          *puVar8 = ~*(uint *)&mode_info[iVar6].mask & *puVar8 | *(uint *)&mode_info[iVar6].bits;
          *require_set_attr = true;
          goto LAB_00105c5f;
        }
        iVar6 = strcmp(pcVar22,"evenp");
        if ((iVar6 == 0) || (iVar6 = strcmp(pcVar22,"parity"), iVar6 == 0)) {
          mode->c_cflag = mode->c_cflag & 0xfffffccf | 0x120;
          *require_set_attr = true;
          goto LAB_00105c5f;
        }
        iVar6 = strcmp(pcVar22,"oddp");
        if (iVar6 == 0) {
          mode->c_cflag = mode->c_cflag & 0xfffffccf | 800;
          *require_set_attr = true;
          goto LAB_00105c5f;
        }
      }
      iVar6 = strcmp(pcVar22,"nl");
      if (iVar6 == 0) {
        if (bVar25) {
          mode->c_oflag = mode->c_oflag & 0xffffffd3 | 4;
          mode->c_iflag = mode->c_iflag & 0xfffffe3f | 0x100;
          *require_set_attr = true;
        }
        else {
          *(ulong *)mode = *(ulong *)mode & 0xfffffffbfffffeff;
          *require_set_attr = true;
        }
        goto LAB_00105c5f;
      }
      iVar6 = strcmp(pcVar22,"ek");
      if (iVar6 == 0) {
        *(undefined2 *)(mode->c_cc + 2) = 0x157f;
        *require_set_attr = true;
        goto LAB_00105c5f;
      }
      iVar6 = strcmp(pcVar22,"sane");
      if (iVar6 == 0) {
        pcVar11 = control_info;
        while (pcVar11->name != (char *)0x0) {
          mode->c_cc[pcVar11->offset] = pcVar11->saneval;
          pcVar11 = pcVar11 + 1;
        }
        for (pmVar14 = mode_info; pmVar14->name != (char *)0x0; pmVar14 = pmVar14 + 1) {
          bVar2 = pmVar14->flags;
          if ((bVar2 & 0x10) == 0) {
            if ((bVar2 & 1) == 0) {
              if ((bVar2 & 2) != 0) {
                puVar8 = (uint *)mode_type_flag(pmVar14->type,mode);
                if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("bitsp","src/stty.c",0x8d2,"sane_mode");
                }
                *puVar8 = *puVar8 & ~((uint)pmVar14->bits | *(uint *)&pmVar14->mask);
              }
            }
            else {
              puVar8 = (uint *)mode_type_flag(pmVar14->type,mode);
              if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("bitsp","src/stty.c",0x8cc,"sane_mode");
              }
              *puVar8 = ~*(uint *)&pmVar14->mask & *puVar8 | *(uint *)&pmVar14->bits;
            }
          }
        }
        goto LAB_00106252;
      }
      iVar6 = strcmp(pcVar22,"cbreak");
      if (iVar6 == 0) {
        if (bVar25) {
          mode->c_lflag = mode->c_lflag | 2;
          *require_set_attr = true;
        }
        else {
          mode->c_lflag = mode->c_lflag & 0xfffffffd;
          *require_set_attr = true;
        }
        goto LAB_00105c5f;
      }
      iVar6 = strcmp(pcVar22,"pass8");
      if (iVar6 == 0) {
        uVar16 = mode->c_cflag & 0xfffffecf;
        if (bVar25) {
          mode->c_cflag = uVar16 | 0x120;
          mode->c_iflag = mode->c_iflag | 0x20;
          *require_set_attr = true;
        }
        else {
          mode->c_cflag = uVar16 | 0x30;
          mode->c_iflag = mode->c_iflag & 0xffffffdf;
          *require_set_attr = true;
        }
        goto LAB_00105c5f;
      }
      iVar6 = strcmp(pcVar22,"litout");
      if (iVar6 == 0) {
        uVar16 = mode->c_cflag & 0xfffffecf;
        if (bVar25) {
          *(ulong *)mode = *(ulong *)mode | 0x100000020;
          mode->c_cflag = uVar16 | 0x120;
          *require_set_attr = true;
        }
        else {
          mode->c_cflag = uVar16 | 0x30;
          *(ulong *)mode = *(ulong *)mode & 0xfffffffeffffffdf;
          *require_set_attr = true;
        }
        goto LAB_00105c5f;
      }
      iVar6 = strcmp(pcVar22,"raw");
      if ((iVar6 == 0) || (iVar6 = strcmp(pcVar22,"cooked"), iVar6 == 0)) {
        if (*pcVar22 == 'r') {
          if (bVar25) goto LAB_00106841;
        }
        else if ((*pcVar22 == 'c') && (!bVar25)) {
LAB_00106841:
          *(ulong *)mode = *(ulong *)mode | 0x100000526;
          mode->c_lflag = mode->c_lflag | 3;
          *require_set_attr = true;
          goto LAB_00105c5f;
        }
        mode->c_oflag = mode->c_oflag & 0xfffffffe;
        mode->c_lflag = mode->c_lflag & 0xfffffff8;
        mode->c_iflag = 0;
        *(undefined2 *)(mode->c_cc + 5) = 0x100;
        goto LAB_00106252;
      }
      iVar6 = strcmp(pcVar22,"decctlq");
      if (iVar6 == 0) {
        if (bVar25) {
          mode->c_iflag = mode->c_iflag | 0x800;
          *require_set_attr = true;
        }
        else {
          mode->c_iflag = mode->c_iflag & 0xfffff7ff;
          *require_set_attr = true;
        }
        goto LAB_00105c5f;
      }
      iVar6 = strcmp(pcVar22,"tabs");
      if (iVar6 == 0) {
        if (bVar25) {
          mode->c_oflag = mode->c_oflag | 0x1800;
          *require_set_attr = true;
        }
        else {
          mode->c_oflag = mode->c_oflag & 0xffffe7ff;
          *require_set_attr = true;
        }
        goto LAB_00105c5f;
      }
      iVar6 = strcmp(pcVar22,"lcase");
      if ((iVar6 == 0) || (iVar6 = strcmp(pcVar22,"LCASE"), iVar6 == 0)) {
        if (bVar25) {
          *(ulong *)mode = *(ulong *)mode & 0xfffffffdfffffdff;
          mode->c_lflag = mode->c_lflag & 0xfffffffb;
          *require_set_attr = true;
        }
        else {
          mode->c_lflag = mode->c_lflag | 4;
          *(ulong *)mode = *(ulong *)mode | 0x200000200;
          *require_set_attr = true;
        }
      }
      else {
        iVar6 = strcmp(pcVar22,"crt");
        if (iVar6 == 0) {
          mode->c_lflag = mode->c_lflag | 0xa10;
          *require_set_attr = true;
        }
        else {
          iVar6 = strcmp(pcVar22,"dec");
          if (iVar6 != 0) goto LAB_00106252;
          mode->c_iflag = mode->c_iflag & 0xfffff7ff;
          mode->c_lflag = mode->c_lflag | 0xa10;
          mode->c_cc[0] = '\x03';
          *(undefined2 *)(mode->c_cc + 2) = 0x157f;
          *require_set_attr = true;
        }
      }
      goto LAB_00105c5f;
    }
    tcsetattr_options = bVar25 ^ 1;
  }
  goto LAB_00105c5f;
LAB_00105cd0:
  pcVar22 = pmVar14->name;
  iVar6 = iVar6 + 1;
  if (pcVar22 == (char *)0x0) goto LAB_00105db8;
  goto LAB_00105ce4;
LAB_00105db8:
  if (bVar25) {
LAB_00105f23:
    pcVar22 = quote((char *)(pbVar23 + -1));
    pcVar17 = "invalid argument %s";
    goto LAB_00105f3b;
  }
  pcVar11 = control_info;
  iVar6 = 0;
  pbVar21 = &DAT_0010d1c4;
  do {
    pcVar11 = pcVar11 + 1;
    iVar4 = strcmp((char *)pbVar23,(char *)pbVar21);
    if (iVar4 == 0) {
      if ((n_settings - 1U == uVar16) ||
         (pbVar19 = (byte *)settings[(long)(int)uVar16 + 1], pbVar19 == (byte *)0x0))
      goto LAB_00106401;
      lVar12 = 4;
      bVar26 = 0xfffffffe < uVar16;
      bVar24 = uVar16 + 1 == 0;
      pbVar23 = pbVar21;
      pbVar18 = &DAT_0010d24d;
      goto code_r0x00105e3d;
    }
    pbVar21 = (byte *)pcVar11->name;
    iVar6 = iVar6 + 1;
    bVar26 = pbVar21 == (byte *)0x0;
  } while (!bVar26);
LAB_00105d10:
  bVar24 = false;
  lVar12 = 7;
  pbVar21 = pbVar23;
  pbVar19 = (byte *)"ispeed";
  do {
    if (lVar12 == 0) break;
    lVar12 = lVar12 + -1;
    bVar24 = *pbVar21 < *pbVar19;
    bVar26 = *pbVar21 == *pbVar19;
    pbVar21 = pbVar21 + (ulong)bVar27 * -2 + 1;
    pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
  } while (bVar26);
  bVar25 = false;
  bVar26 = (!bVar24 && !bVar26) == bVar24;
  if (bVar26) {
    if ((n_settings - 1U == uVar16) || (settings[(long)(int)uVar16 + 1] == (char *)0x0))
    goto LAB_00106401;
    uVar15 = uVar16 + 1;
    if (checking == false) {
      sVar5 = string_to_baud(settings[(long)(int)uVar16 + 1]);
      uVar16 = uVar16 + 2;
      cfsetispeed((termios *)mode,sVar5);
      *speed_was_set = true;
      *require_set_attr = true;
      goto joined_r0x00105c66;
    }
  }
  else {
    lVar12 = 7;
    pbVar21 = pbVar23;
    pbVar19 = (byte *)"ospeed";
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar25 = *pbVar21 < *pbVar19;
      bVar26 = *pbVar21 == *pbVar19;
      pbVar21 = pbVar21 + (ulong)bVar27 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
    } while (bVar26);
    bVar24 = false;
    bVar26 = (!bVar25 && !bVar26) == bVar25;
    if (bVar26) {
      if ((n_settings - 1U == uVar16) ||
         (lVar12 = (long)(int)uVar16, settings[lVar12 + 1] == (char *)0x0)) goto LAB_00106401;
      uVar16 = uVar16 + 1;
      uVar15 = uVar16;
      if (checking == false) {
        sVar5 = string_to_baud(settings[lVar12 + 1]);
LAB_00105eff:
        cfsetospeed((termios *)mode,sVar5);
        *speed_was_set = true;
        *require_set_attr = true;
        uVar15 = uVar16;
      }
    }
    else {
      lVar12 = 5;
      pbVar21 = pbVar23;
      pbVar19 = &DAT_0010d266;
      do {
        if (lVar12 == 0) break;
        lVar12 = lVar12 + -1;
        bVar24 = *pbVar21 < *pbVar19;
        bVar26 = *pbVar21 == *pbVar19;
        pbVar21 = pbVar21 + (ulong)bVar27 * -2 + 1;
        pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
      } while (bVar26);
      bVar25 = false;
      bVar26 = (!bVar24 && !bVar26) == bVar24;
      if (bVar26) {
        if ((n_settings - 1U == uVar16) || (settings[(long)(int)uVar16 + 1] == (char *)0x0))
        goto LAB_00106401;
        uVar15 = uVar16 + 1;
        if (checking == false) {
          uVar9 = integer_arg(settings[(long)(int)uVar16 + 1],0x7fffffff);
          set_window_size((int)uVar9,-1,device_name);
        }
      }
      else {
        lVar12 = 5;
        pbVar21 = pbVar23;
        pbVar19 = &DAT_0010d26b;
        do {
          if (lVar12 == 0) break;
          lVar12 = lVar12 + -1;
          bVar25 = *pbVar21 < *pbVar19;
          bVar26 = *pbVar21 == *pbVar19;
          pbVar21 = pbVar21 + (ulong)bVar27 * -2 + 1;
          pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
        } while (bVar26);
        if (((!bVar25 && !bVar26) == bVar25) ||
           (iVar6 = strcmp((char *)pbVar23,"columns"), iVar6 == 0)) {
          if ((n_settings - 1U == uVar16) || (settings[(long)(int)uVar16 + 1] == (char *)0x0))
          goto LAB_00106401;
          uVar15 = uVar16 + 1;
          if (checking == false) {
            uVar9 = integer_arg(settings[(long)(int)uVar16 + 1],0x7fffffff);
            set_window_size(-1,(int)uVar9,device_name);
          }
        }
        else {
          iVar6 = strcmp((char *)pbVar23,"size");
          if (iVar6 == 0) {
            if (checking == false) {
              max_col = screen_columns();
              current_col = 0;
              display_window_size(false,device_name);
            }
          }
          else {
            iVar6 = strcmp((char *)pbVar23,"line");
            if (iVar6 == 0) {
              if (n_settings - 1U != uVar16) {
                lVar12 = (long)(int)uVar16;
                pcVar22 = settings[lVar12 + 1];
                if (pcVar22 != (char *)0x0) {
                  uVar16 = uVar16 + 1;
                  uVar9 = integer_arg(pcVar22,0xffffffffffffffff);
                  mode->c_line = (cc_t)uVar9;
                  if ((uVar9 & 0xffffffffffffff00) != 0) {
                    pcVar22 = quote(settings[lVar12 + 1]);
                    uVar7 = dcgettext(0,"invalid line discipline %s",5);
                    error(0,0,uVar7,pcVar22);
                  }
LAB_00106252:
                  *require_set_attr = true;
                  uVar15 = uVar16;
                  goto LAB_00105c5f;
                }
              }
LAB_00106401:
              pcVar22 = quote((char *)pbVar23);
              pcVar17 = "missing argument to %s";
LAB_00105f3b:
              uVar7 = dcgettext(0,pcVar17,5);
              error(0,0,uVar7,pcVar22);
                    /* WARNING: Subroutine does not return */
              usage(1);
            }
            iVar6 = strcmp((char *)pbVar23,"speed");
            if (iVar6 == 0) {
              if (checking == false) {
                max_col = screen_columns();
                display_speed(mode,false);
              }
            }
            else {
              sVar5 = string_to_baud((char *)pbVar23);
              if (sVar5 == 0xffffffff) {
                piVar10 = __errno_location();
                lVar12 = 0;
                pbVar21 = pbVar23;
                do {
                  *piVar10 = 0;
                  uVar9 = strtoul((char *)pbVar21,&p,0x10);
                  if ((((*piVar10 != 0) || (*p != ':')) || ((byte *)p == pbVar21)) ||
                     (uVar9 != (uVar9 & 0xffffffff))) goto LAB_001065db;
                  flag[lVar12] = (tcflag_t)uVar9;
                  lVar12 = lVar12 + 1;
                  pbVar21 = (byte *)(p + 1);
                } while (lVar12 != 4);
                lVar12 = 0;
                *(undefined8 *)mode = flag._0_8_;
                *(undefined8 *)&mode->c_cflag = flag._8_8_;
                cVar13 = ':';
                while( true ) {
                  *piVar10 = 0;
                  uVar9 = strtoul((char *)pbVar21,&p,0x10);
                  if (((*piVar10 != 0) || (*p != cVar13)) ||
                     ((bVar26 = pbVar21 == (byte *)p, bVar26 || ((uVar9 & 0xffffffffffffff00) != 0))
                     )) goto LAB_001065db;
                  pbVar21 = (byte *)(p + 1);
                  mode->c_cc[lVar12] = (cc_t)uVar9;
                  lVar12 = lVar12 + 1;
                  if (lVar12 == 0x20) break;
                  cVar13 = ':';
                  if (lVar12 == 0x1f) {
                    cVar13 = bVar26;
                  }
                }
                *require_set_attr = true;
              }
              else if (checking == false) {
                cfsetispeed((termios *)mode,sVar5);
                goto LAB_00105eff;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_00105c5f;
  while( true ) {
    lVar12 = lVar12 + -1;
    bVar26 = *pbVar23 < *pbVar18;
    bVar24 = *pbVar23 == *pbVar18;
    pbVar23 = pbVar23 + (ulong)bVar27 * -2 + 1;
    pbVar18 = pbVar18 + (ulong)bVar27 * -2 + 1;
    if (!bVar24) break;
code_r0x00105e3d:
    if (lVar12 == 0) break;
  }
  bVar25 = false;
  bVar26 = (!bVar26 && !bVar24) == bVar26;
  if (bVar26) {
LAB_00106012:
    uVar9 = integer_arg((char *)pbVar19,0xff);
    bVar20 = (byte)uVar9;
  }
  else {
    lVar12 = 5;
    pbVar23 = &DAT_0010d251;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar25 = *pbVar21 < *pbVar23;
      bVar26 = *pbVar21 == *pbVar23;
      pbVar21 = pbVar21 + (ulong)bVar27 * -2 + 1;
      pbVar23 = pbVar23 + (ulong)bVar27 * -2 + 1;
    } while (bVar26);
    if ((!bVar25 && !bVar26) == bVar25) goto LAB_00106012;
    bVar2 = *pbVar19;
    bVar20 = bVar2;
    if ((bVar2 != 0) && (bVar1 = pbVar19[1], bVar1 != 0)) {
      iVar4 = strcmp((char *)pbVar19,"^-");
      bVar20 = 0;
      if ((iVar4 != 0) && (iVar4 = strcmp((char *)pbVar19,"undef"), iVar4 != 0)) {
        if (bVar2 != 0x5e) goto LAB_00106012;
        if (bVar1 == 0x3f) {
          bVar20 = 0x7f;
        }
        else {
          bVar20 = bVar1 & 0x9f;
        }
      }
    }
  }
  mode->c_cc[control_info[iVar6].offset] = bVar20;
  *require_set_attr = true;
  uVar15 = uVar16 + 1;
LAB_00105c5f:
  uVar16 = uVar15 + 1;
joined_r0x00105c66:
  if (n_settings <= (int)uVar16) goto LAB_00105d91;
  goto LAB_00105c6c;
LAB_001065db:
  pcVar22 = quote((char *)pbVar23);
  pcVar17 = "invalid argument %s";
  goto LAB_00105f3b;
}

