
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

size_t __strftime_internal(FILE *s,char *format,tm *tp,_Bool upcase,int yr_spec,int width,
                          _Bool *tzset_called,timezone_t tz,int ns)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  char *__s;
  ulong uVar7;
  byte *pbVar8;
  time_t tVar9;
  size_t len;
  byte bVar10;
  int iVar11;
  int iVar12;
  time_t tVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  char *pcVar19;
  int iVar20;
  uint yr_spec_00;
  char cVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  char *pcVar26;
  char cVar27;
  char *pcVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  uint local_4f4;
  _Bool negative_year;
  char *local_4b0;
  tm ltm;
  char ufmt [5];
  char buf [23];
  char local_431 [1009];
  long local_40;
  
  uVar18 = (ulong)width;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  uVar16 = tp->tm_hour;
  iVar1 = *piVar6;
  __s = "";
  if (tp->tm_zone != (char *)0x0) {
    __s = tp->tm_zone;
  }
  if ((int)uVar16 < 0xd) {
    local_4f4 = 0xc;
    if (uVar16 != 0) {
      local_4f4 = uVar16;
    }
  }
  else {
    local_4f4 = uVar16 - 0xc;
  }
  cVar21 = *format;
  uVar29 = 0;
  do {
    if (cVar21 == '\0') {
      *piVar6 = iVar1;
LAB_001037b6:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar29;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_4b0 = format;
    if (cVar21 != '%') {
      uVar7 = 0;
      if (-1 < (int)uVar18) {
        uVar7 = uVar18;
      }
      uVar25 = 1;
      if (uVar7 != 0) {
        uVar25 = uVar7;
      }
      if (~uVar29 <= uVar25) goto LAB_001037a8;
      if (s != (FILE *)0x0) {
        if (1 < (int)uVar18) {
          uVar18 = 0;
          do {
            uVar18 = uVar18 + 1;
            fputc(0x20,(FILE *)s);
          } while (uVar18 < uVar7 - 1);
        }
        fputc((int)*format,(FILE *)s);
      }
      uVar29 = uVar29 + uVar25;
      goto LAB_0010377d;
    }
    uVar5 = 0;
    uVar16 = 0;
    cVar21 = upcase;
    do {
      while( true ) {
        do {
          yr_spec_00 = uVar16;
          cVar14 = (char)uVar5;
          pcVar26 = local_4b0 + 1;
          uVar22 = (uint)*pcVar26;
          local_4b0 = local_4b0 + 1;
          bVar10 = *pcVar26 - 0x23;
          if (0x3c < bVar10) goto LAB_00103885;
          uVar7 = 1 << (bVar10 & 0x3f);
          uVar16 = uVar22;
        } while ((uVar7 & 0x1000000000002500) != 0);
        uVar16 = yr_spec_00;
        if ((uVar7 & 0x800000000000000) == 0) break;
        cVar21 = true;
      }
      uVar5 = (uint)uVar7 & 1;
    } while ((uVar7 & 1) != 0);
LAB_00103885:
    if (uVar22 - 0x30 < 10) {
      uVar18 = 0;
      do {
        lVar24 = (long)(int)uVar18 * 10;
        iVar17 = (int)lVar24;
        if ((iVar17 != lVar24) ||
           (uVar18 = (ulong)(uint)(iVar17 + *local_4b0 + -0x30), SCARRY4(iVar17,*local_4b0 + -0x30))
           ) {
          uVar18 = 0x7fffffff;
        }
        uVar22 = (uint)local_4b0[1];
        local_4b0 = local_4b0 + 1;
      } while (uVar22 - 0x30 < 10);
    }
    iVar17 = (int)uVar18;
    uVar16 = local_4f4;
    if (((char)uVar22 == 'E') || ((char)uVar22 == 'O')) {
      bVar10 = local_4b0[1];
      uVar5 = (uint)bVar10;
      local_4b0 = local_4b0 + 1;
      pcVar26 = local_4b0;
      switch(uVar5) {
      case 0:
        goto switchD_001038b7_caseD_0;
      case 0x25:
        goto switchD_001038b7_caseD_25;
      case 0x3a:
        goto LAB_00103e0c;
      case 0x41:
        if (uVar22 == 0) goto LAB_00103f1e;
        break;
      case 0x42:
        if (uVar22 != 0x45) goto LAB_00103f08;
        break;
      case 0x43:
        if (uVar22 != 0x45) goto LAB_00104732;
        goto LAB_00103bd1;
      case 0x44:
        goto switchD_001038f9_caseD_44;
      case 0x46:
        goto switchD_001038f9_caseD_46;
      case 0x47:
      case 0x56:
      case 0x67:
        if (uVar22 != 0x45) goto LAB_00103a41;
        break;
      case 0x48:
        if (uVar22 != 0x45) goto LAB_00104715;
        break;
      case 0x49:
        if (uVar22 != 0x45) goto LAB_001046fc;
        break;
      case 0x4d:
        if (uVar22 != 0x45) goto LAB_00104baf;
        break;
      case 0x4e:
        goto switchD_001038f9_caseD_4e;
      case 0x50:
        goto switchD_001038f9_caseD_50;
      case 0x52:
        goto switchD_001038f9_caseD_52;
      case 0x53:
        if (uVar22 != 0x45) goto LAB_00104b52;
        break;
      case 0x54:
        goto switchD_001038f9_caseD_54;
      case 0x55:
        if (uVar22 != 0x45) goto LAB_00104af8;
        break;
      case 0x57:
        if (uVar22 != 0x45) goto LAB_00104a8e;
        break;
      case 0x58:
        if (uVar22 != 0x4f) goto LAB_00104b9d;
        break;
      case 0x59:
        if (uVar22 == 0x45) goto LAB_00103bd1;
        if (uVar22 != 0x4f) goto LAB_00104a2c;
        break;
      case 0x5a:
        goto switchD_001038f9_caseD_5a;
      case 0x61:
        if (uVar22 == 0) goto LAB_001048bd;
        break;
      case 0x62:
      case 0x68:
        if (cVar14 != '\0') {
          cVar21 = cVar14;
        }
        if (uVar22 != 0x45) goto switchD_001038f9_caseD_72;
        break;
      case 99:
        if (uVar22 != 0x4f) goto LAB_001049e6;
        break;
      case 100:
        if (uVar22 != 0x45) goto LAB_00104a0f;
        break;
      case 0x65:
        if (uVar22 != 0x45) goto LAB_001049f8;
        break;
      case 0x6a:
        if (uVar22 != 0x45) goto LAB_001047c0;
        break;
      case 0x6b:
        if (uVar22 != 0x45) goto LAB_001047a9;
        break;
      case 0x6c:
        if (uVar22 != 0x45) goto LAB_001042bc;
        break;
      case 0x6d:
        if (uVar22 != 0x45) goto LAB_00104289;
        break;
      case 0x6e:
        goto switchD_001038f9_caseD_6e;
      case 0x70:
        goto switchD_001038f9_caseD_70;
      case 0x71:
        goto switchD_001038f9_caseD_71;
      case 0x72:
        goto switchD_001038f9_caseD_72;
      case 0x73:
        goto switchD_001038f9_caseD_73;
      case 0x74:
        goto switchD_001038f9_caseD_74;
      case 0x75:
        goto switchD_001038f9_caseD_75;
      case 0x77:
        if (uVar22 != 0x45) goto LAB_0010438b;
        break;
      case 0x78:
        if (uVar22 != 0x4f) goto LAB_00104379;
        break;
      case 0x79:
        if (uVar22 != 0x45) goto LAB_001042f9;
        goto LAB_00103bd1;
      case 0x7a:
        goto switchD_001038f9_caseD_7a;
      }
      goto bad_format;
    }
    pcVar26 = local_4b0;
    uVar5 = uVar22;
    switch(uVar22 & 0xff) {
    case 0:
switchD_001038b7_caseD_0:
      pcVar26 = local_4b0 + -1;
    default:
      goto bad_format;
    case 0x25:
switchD_001038b7_caseD_25:
      pcVar26 = local_4b0 + -1;
      if (local_4b0 + -1 != format) goto bad_format;
      if ((yr_spec_00 == 0x2d) || (iVar17 < 0)) {
        if (uVar29 < 0xfffffffffffffffe) {
          uVar18 = 1;
          if (s != (FILE *)0x0) goto LAB_00103de6;
          goto LAB_00103df3;
        }
      }
      else {
        uVar7 = (ulong)iVar17;
        uVar18 = 1;
        if (uVar7 != 0) {
          uVar18 = uVar7;
        }
        if (uVar18 < ~uVar29) {
          if (s != (FILE *)0x0) {
            if (1 < iVar17) {
              if ((yr_spec_00 == 0x30) || (lVar24 = 0, yr_spec_00 == 0x2b)) {
                lVar24 = 0;
                do {
                  lVar24 = lVar24 + 1;
                  fputc(0x30,(FILE *)s);
                } while (uVar7 - 1 != lVar24);
              }
              else {
                do {
                  lVar24 = lVar24 + 1;
                  fputc(0x20,(FILE *)s);
                } while (uVar7 - 1 != lVar24);
              }
            }
LAB_00103de6:
            fputc((int)*local_4b0,(FILE *)s);
          }
LAB_00103df3:
          uVar29 = uVar29 + uVar18;
          goto LAB_0010377d;
        }
      }
      goto LAB_001037a8;
    case 0x3a:
      uVar22 = 0;
LAB_00103e0c:
      local_4b0 = pcVar26 + 1;
      uVar18 = 1;
      cVar14 = pcVar26[1];
      while (cVar14 == ':') {
        uVar18 = uVar18 + 1;
        local_4b0 = pcVar26 + uVar18;
        cVar14 = pcVar26[uVar18];
      }
      if (cVar14 == 'z') {
        bVar10 = 0x3a;
        goto do_z_conversion;
      }
      goto bad_format;
    case 0x41:
LAB_00103f1e:
      bVar10 = 0x41;
      if (cVar14 != '\0') {
        cVar21 = cVar14;
      }
      goto LAB_00103f29;
    case 0x42:
      uVar22 = 0;
LAB_00103f08:
      bVar10 = 0x42;
      if (cVar14 != '\0') {
        cVar21 = cVar14;
      }
      cVar27 = '\0';
      goto underlying_strftime;
    case 0x43:
      uVar22 = 0;
LAB_00104732:
      iVar20 = tp->tm_year;
      negative_year = iVar20 < -0x76c;
      uVar16 = (int)((-(uint)(iVar20 + 0x76cU < 0x76c) & 0xffffff9d) + iVar20) / 100 + 0x13;
      bVar4 = -0x76d < iVar20;
      if (yr_spec_00 == 0) {
        yr_spec_00 = yr_spec;
        if (yr_spec == 0x2b) {
LAB_00105090:
          bVar10 = 0x43;
          iVar20 = 2;
          uVar5 = 99;
          goto LAB_0010506e;
        }
      }
      else if (yr_spec_00 == 0x2b) goto LAB_00105090;
      bVar2 = false;
      bVar10 = 0x43;
      iVar20 = 2;
      goto LAB_00103bba;
    case 0x44:
      uVar22 = 0;
switchD_001038f9_caseD_44:
      pcVar26 = local_4b0;
      if (uVar22 == 0) {
        iVar20 = -1;
        pcVar26 = "%m/%d/%y";
        goto subformat_width;
      }
      goto bad_format;
    case 0x46:
      uVar22 = 0;
switchD_001038f9_caseD_46:
      pcVar26 = local_4b0;
      if (uVar22 != 0) goto bad_format;
      if ((yr_spec_00 != 0) || (-1 < iVar17)) {
        pcVar26 = "%Y-%m-%d";
        iVar20 = iVar17 + -6;
        if (iVar20 < 0) {
          iVar20 = 0;
        }
        goto subformat_width;
      }
      pcVar28 = (char *)0x0;
      iVar20 = 4;
      pcVar26 = "%Y-%m-%d";
      pcVar19 = (char *)__strftime_internal((FILE *)0x0,"%Y-%m-%d",tp,(_Bool)cVar21,0x2b,4,
                                            tzset_called,tz,ns);
      yr_spec_00 = 0x2b;
      _negative_year = pcVar19;
      goto LAB_001044af;
    case 0x47:
    case 0x56:
    case 0x67:
      uVar22 = 0;
LAB_00103a41:
      bVar10 = (byte)uVar5;
      iVar20 = tp->tm_yday;
      iVar12 = tp->tm_wday;
      iVar23 = tp->tm_year;
      iVar11 = (iVar20 - iVar12) + 0x17e;
      uVar16 = iVar23 + -100 + (iVar23 >> 0x1f & 400U);
      iVar11 = (iVar20 - iVar11) + 3 + (iVar11 / 7) * 7;
      if (iVar11 < 0) {
        uVar16 = uVar16 - 1;
        iVar11 = 0x16d;
        if (((uVar16 & 3) == 0) &&
           (iVar11 = 0x16e,
           (uVar16 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar16 * 0x40000000) < 0x28f5c29)) {
          iVar11 = ~-(uint)((int)uVar16 % 400 == 0) + 0x16e;
        }
        iVar15 = ((iVar20 + iVar11) - iVar12) + 0x17e;
        iVar12 = -1;
        iVar11 = ((iVar20 + iVar11) - iVar15) + 3 + (iVar15 / 7) * 7;
      }
      else {
        iVar15 = 0x16d;
        if (((uVar16 & 3) == 0) &&
           (iVar15 = 0x16e,
           (uVar16 * -0x3d70a3d7 + 0x51eb850 >> 2 | iVar23 * 0x40000000) < 0x28f5c29)) {
          iVar15 = ~-(uint)((int)uVar16 % 400 == 0) + 0x16e;
        }
        iVar12 = ((iVar20 - iVar15) - iVar12) + 0x17e;
        iVar20 = ((iVar20 - iVar15) - iVar12) + 3 + (iVar12 / 7) * 7;
        if (-1 < iVar20) {
          iVar11 = iVar20;
        }
        iVar12 = (iVar20 >> 0x1f) + 1;
      }
      if (bVar10 != 0x47) {
        if (bVar10 == 0x67) {
          uVar16 = (iVar23 % 100 + iVar12) % 100;
          if ((int)uVar16 < 0) {
            if (iVar23 < -0x76c - iVar12) {
              uVar16 = -uVar16;
            }
            else {
              uVar16 = uVar16 + 100;
            }
          }
          if (yr_spec_00 != 0) goto LAB_00103b9b;
          goto joined_r0x00104350;
        }
        iVar20 = 2;
        uVar16 = iVar11 / 7 + 1;
        break;
      }
      uVar16 = iVar23 + 0x76c + iVar12;
      negative_year = iVar23 < -0x76c - iVar12;
      bVar4 = -0x76c - iVar12 <= iVar23;
      if (yr_spec_00 != 0) goto LAB_00105059;
      if (yr_spec == 0x2b) {
        iVar20 = 4;
        uVar5 = 9999;
        goto LAB_0010506e;
      }
      bVar2 = false;
      iVar20 = 4;
      yr_spec_00 = yr_spec;
      goto LAB_00103bba;
    case 0x48:
      uVar22 = 0;
LAB_00104715:
      bVar10 = 0x48;
      iVar20 = 2;
      uVar16 = tp->tm_hour;
      break;
    case 0x49:
      uVar22 = 0;
LAB_001046fc:
      bVar10 = 0x49;
      iVar20 = 2;
      break;
    case 0x4d:
      uVar22 = 0;
LAB_00104baf:
      bVar10 = 0x4d;
      iVar20 = 2;
      uVar16 = tp->tm_min;
      break;
    case 0x4e:
      uVar22 = 0;
switchD_001038f9_caseD_4e:
      pcVar26 = local_4b0;
      if (uVar22 != 0x45) {
        iVar12 = 9;
        iVar20 = ns;
        if (iVar17 < 1) {
          iVar17 = 9;
        }
LAB_001045d9:
        if (iVar17 < iVar12) {
LAB_001045c0:
          iVar12 = iVar12 + -1;
          iVar20 = iVar20 / 10;
          goto LAB_001045d9;
        }
        if (1 < iVar12) {
          uVar16 = iVar20 * -0x33333333 + 0x19999998;
          if (0x19999998 < (uVar16 >> 1 | (uint)((uVar16 & 1) != 0) << 0x1f)) goto LAB_001045fe;
          goto LAB_001045c0;
        }
        if (iVar12 != 1) goto LAB_0010463c;
LAB_001045fe:
        lVar24 = (long)iVar12;
        do {
          ufmt[lVar24 + 4] = (char)iVar20 + (char)(iVar20 / 10) * -10 + '0';
          lVar24 = lVar24 + -1;
          iVar20 = iVar20 / 10;
        } while (0 < (int)lVar24);
LAB_0010463c:
        uVar18 = (ulong)iVar12;
        if (yr_spec_00 == 0) {
          yr_spec_00 = 0x30;
        }
        if (~uVar29 <= uVar18) goto LAB_001037a8;
        if (s != (FILE *)0x0) {
          if ((_Bool)cVar21 == false) {
            fwrite(buf,uVar18,1,(FILE *)s);
          }
          else {
            fwrite_uppcase(s,buf,uVar18);
          }
        }
        uVar29 = uVar29 + uVar18;
        if ((yr_spec_00 == 0x2d) || (iVar17 - iVar12 < 0)) {
          if (uVar29 == 0xffffffffffffffff) goto LAB_001037a8;
        }
        else {
          uVar18 = (ulong)(iVar17 - iVar12);
          if (~uVar29 <= uVar18) goto LAB_001037a8;
          if (s != (FILE *)0x0) {
            if (uVar18 == 0) goto LAB_0010377d;
            if ((yr_spec_00 == 0x30) || (uVar7 = 0, yr_spec_00 == 0x2b)) {
              uVar7 = 0;
              do {
                uVar7 = uVar7 + 1;
                fputc(0x30,(FILE *)s);
              } while (uVar18 != uVar7);
            }
            else {
              do {
                uVar7 = uVar7 + 1;
                fputc(0x20,(FILE *)s);
              } while (uVar18 != uVar7);
            }
          }
          uVar29 = uVar29 + uVar18;
        }
        goto LAB_0010377d;
      }
bad_format:
      local_4b0 = pcVar26;
      pcVar26 = local_4b0 + (1 - (long)format);
      if ((yr_spec_00 == 0x2d) || (iVar17 < 0)) {
        pcVar19 = (char *)0x0;
        _negative_year = pcVar26;
      }
      else {
        pcVar19 = (char *)(long)iVar17;
        _negative_year = pcVar19;
        if (pcVar19 <= pcVar26) {
          _negative_year = pcVar26;
        }
      }
      if ((char *)~uVar29 <= _negative_year) goto LAB_001037a8;
      if (s != (FILE *)0x0) {
        if (pcVar26 < pcVar19) {
          if ((yr_spec_00 == 0x30) || (lVar24 = 0, yr_spec_00 == 0x2b)) {
            lVar24 = 0;
            do {
              lVar24 = lVar24 + 1;
              fputc(0x30,(FILE *)s);
            } while ((long)pcVar19 - (long)pcVar26 != lVar24);
          }
          else {
            do {
              lVar24 = lVar24 + 1;
              fputc(0x20,(FILE *)s);
            } while ((long)pcVar19 - (long)pcVar26 != lVar24);
          }
        }
        if (cVar21 == '\0') {
          fwrite(format,(size_t)pcVar26,1,(FILE *)s);
        }
        else {
          fwrite_uppcase(s,format,(size_t)pcVar26);
        }
      }
      goto LAB_001039d0;
    case 0x50:
      uVar22 = 0;
switchD_001038f9_caseD_50:
      cVar27 = '\x01';
      goto LAB_001041d7;
    case 0x52:
switchD_001038f9_caseD_52:
      iVar20 = -1;
      pcVar26 = "%H:%M";
      goto subformat_width;
    case 0x53:
      uVar22 = 0;
LAB_00104b52:
      bVar10 = 0x53;
      iVar20 = 2;
      uVar16 = tp->tm_sec;
      break;
    case 0x54:
switchD_001038f9_caseD_54:
      iVar20 = -1;
      pcVar26 = "%H:%M:%S";
subformat_width:
      pcVar19 = (char *)__strftime_internal((FILE *)0x0,pcVar26,tp,(_Bool)cVar21,yr_spec_00,iVar20,
                                            tzset_called,tz,ns);
      if ((yr_spec_00 == 0x2d) || (iVar17 < 0)) {
        pcVar28 = (char *)0x0;
        _negative_year = pcVar19;
      }
      else {
        pcVar28 = (char *)(long)iVar17;
        _negative_year = pcVar28;
        if (pcVar28 <= pcVar19) {
          _negative_year = pcVar19;
        }
      }
LAB_001044af:
      if ((char *)~uVar29 <= _negative_year) goto LAB_001037a8;
      if (s != (FILE *)0x0) {
        if (pcVar19 < pcVar28) {
          if ((yr_spec_00 == 0x30) || (lVar24 = 0, yr_spec_00 == 0x2b)) {
            lVar24 = 0;
            do {
              lVar24 = lVar24 + 1;
              fputc(0x30,(FILE *)s);
            } while ((long)pcVar28 - (long)pcVar19 != lVar24);
          }
          else {
            do {
              lVar24 = lVar24 + 1;
              fputc(0x20,(FILE *)s);
            } while ((long)pcVar28 - (long)pcVar19 != lVar24);
          }
        }
        __strftime_internal(s,pcVar26,tp,(_Bool)cVar21,yr_spec_00,iVar20,tzset_called,tz,ns);
      }
      goto LAB_001039d0;
    case 0x55:
      uVar22 = 0;
LAB_00104af8:
      bVar10 = 0x55;
      iVar20 = 2;
      uVar16 = ((tp->tm_yday - tp->tm_wday) + 7) / 7;
      break;
    case 0x57:
      uVar22 = 0;
LAB_00104a8e:
      iVar20 = 2;
      iVar12 = tp->tm_wday + 6;
      bVar10 = 0x57;
      uVar16 = (((iVar12 / 7) * 7 - iVar12) + 7 + tp->tm_yday) / 7;
      break;
    case 0x58:
      uVar22 = 0;
LAB_00104b9d:
      bVar10 = 0x58;
      cVar27 = '\0';
      goto underlying_strftime;
    case 0x59:
      uVar22 = 0;
LAB_00104a2c:
      bVar10 = 0x59;
      iVar20 = tp->tm_year;
      uVar16 = iVar20 + 0x76c;
      negative_year = iVar20 < -0x76c;
      bVar4 = -0x76d < iVar20;
      if (yr_spec_00 != 0) {
LAB_00105059:
        iVar20 = 4;
        uVar5 = 9999;
        if (yr_spec_00 != 0x2b) {
          bVar2 = false;
          goto LAB_00103bba;
        }
LAB_0010506e:
        bVar2 = true;
        yr_spec_00 = 0x2b;
        if (uVar16 <= uVar5) goto LAB_00104361;
        goto LAB_00103bba;
      }
      if (yr_spec == 0x2b) {
        bVar10 = 0x59;
        iVar20 = 4;
        uVar5 = 9999;
        goto LAB_0010506e;
      }
      bVar2 = false;
      uVar5 = 0;
      iVar20 = 4;
      yr_spec_00 = yr_spec;
      goto LAB_00104a78;
    case 0x5a:
switchD_001038f9_caseD_5a:
      if (cVar14 != '\0') {
        cVar21 = '\0';
      }
      len = strlen(__s);
      if ((yr_spec_00 == 0x2d) || (iVar17 < 0)) {
        uVar7 = 0;
        uVar18 = len;
      }
      else {
        uVar7 = (ulong)iVar17;
        uVar18 = uVar7;
        if (uVar7 <= len) {
          uVar18 = len;
        }
      }
      if (~uVar29 <= uVar18) goto LAB_001037a8;
      if (s != (FILE *)0x0) {
        if (len < uVar7) {
          if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
            if (uVar7 != len) {
              lVar24 = 0;
              do {
                lVar24 = lVar24 + 1;
                fputc(0x30,(FILE *)s);
              } while (uVar7 - len != lVar24);
            }
          }
          else {
            lVar24 = 0;
            if (uVar7 != len) {
              do {
                lVar24 = lVar24 + 1;
                fputc(0x20,(FILE *)s);
              } while (uVar7 - len != lVar24);
            }
          }
        }
        if (cVar14 == '\0') {
          if (cVar21 == '\0') {
            fwrite(__s,len,1,(FILE *)s);
          }
          else {
            fwrite_uppcase(s,__s,len);
          }
        }
        else {
          fwrite_lowcase(s,__s,len);
        }
      }
      goto LAB_001041c7;
    case 0x61:
LAB_001048bd:
      bVar10 = 0x61;
      if (cVar14 != '\0') {
        cVar21 = cVar14;
      }
LAB_00103f29:
      pbVar8 = (byte *)(ufmt + 2);
      cVar27 = '\0';
      goto LAB_00103bf1;
    case 0x62:
    case 0x68:
      uVar22 = 0;
      if (cVar14 != '\0') {
        uVar22 = 0;
        cVar21 = cVar14;
      }
      goto switchD_001038f9_caseD_72;
    case 99:
      uVar22 = 0;
LAB_001049e6:
      bVar10 = 99;
      cVar27 = '\0';
      goto underlying_strftime;
    case 100:
      uVar22 = 0;
LAB_00104a0f:
      bVar10 = 100;
      iVar20 = 2;
      uVar16 = tp->tm_mday;
      break;
    case 0x65:
      uVar22 = 0;
LAB_001049f8:
      bVar10 = 0x65;
      uVar16 = tp->tm_mday;
      goto do_number_spacepad;
    case 0x6a:
      uVar22 = 0;
LAB_001047c0:
      bVar2 = false;
      bVar10 = 0x6a;
      iVar20 = 3;
      iVar12 = tp->tm_yday;
      uVar16 = iVar12 + 1;
      negative_year = iVar12 < -1;
      bVar4 = -2 < iVar12;
      uVar5 = 0;
      goto do_number_body;
    case 0x6b:
      uVar22 = 0;
LAB_001047a9:
      bVar10 = 0x6b;
      uVar16 = tp->tm_hour;
      goto do_number_spacepad;
    case 0x6c:
      uVar22 = 0;
LAB_001042bc:
      bVar10 = 0x6c;
do_number_spacepad:
      iVar20 = 2;
      if (yr_spec_00 == 0) {
        yr_spec_00 = 0x5f;
      }
      break;
    case 0x6d:
      uVar22 = 0;
LAB_00104289:
      bVar2 = false;
      bVar10 = 0x6d;
      iVar20 = 2;
      iVar12 = tp->tm_mon;
      uVar16 = iVar12 + 1;
      negative_year = iVar12 < -1;
      bVar4 = -2 < iVar12;
      uVar5 = 0;
      goto do_number_body;
    case 0x6e:
switchD_001038f9_caseD_6e:
      if ((yr_spec_00 == 0x2d) || (iVar17 < 0)) {
        if (uVar29 < 0xfffffffffffffffe) {
          uVar18 = 1;
          if (s != (FILE *)0x0) goto LAB_00104265;
          goto LAB_0010427c;
        }
      }
      else {
        uVar7 = (ulong)iVar17;
        uVar18 = 1;
        if (uVar7 != 0) {
          uVar18 = uVar7;
        }
        if (uVar18 < ~uVar29) {
          if (s != (FILE *)0x0) {
            if (1 < iVar17) {
              if ((yr_spec_00 == 0x30) || (lVar24 = 0, yr_spec_00 == 0x2b)) {
                lVar24 = 0;
                do {
                  lVar24 = lVar24 + 1;
                  fputc(0x30,(FILE *)s);
                } while (uVar7 - 1 != lVar24);
              }
              else {
                do {
                  lVar24 = lVar24 + 1;
                  fputc(0x20,(FILE *)s);
                } while (uVar7 - 1 != lVar24);
              }
            }
LAB_00104265:
            fputc(10,(FILE *)s);
          }
LAB_0010427c:
          uVar29 = uVar29 + uVar18;
          goto LAB_0010377d;
        }
      }
      goto LAB_001037a8;
    case 0x70:
      uVar22 = 0;
switchD_001038f9_caseD_70:
      cVar27 = '\0';
LAB_001041d7:
      bVar10 = 0x70;
      if (cVar14 != '\0') {
        cVar21 = '\0';
        cVar27 = cVar14;
      }
      goto underlying_strftime;
    case 0x71:
      uVar22 = 0;
switchD_001038f9_caseD_71:
      bVar10 = 0x71;
      if (uVar22 == 0x4f) goto LAB_00103bd1;
      bVar2 = false;
      iVar20 = 1;
      uVar5 = 0;
      negative_year = false;
      uVar16 = (tp->tm_mon * 0xb >> 5) + 1;
      goto LAB_00104838;
    case 0x72:
      uVar22 = 0;
switchD_001038f9_caseD_72:
      bVar10 = (byte)uVar5;
      cVar27 = '\0';
      goto underlying_strftime;
    case 0x73:
switchD_001038f9_caseD_73:
      ltm.tm_isdst = tp->tm_isdst;
      ltm._36_4_ = *(undefined4 *)&tp->field_0x24;
      ltm.tm_gmtoff._0_4_ = *(undefined4 *)&tp->tm_gmtoff;
      ltm.tm_gmtoff._4_4_ = *(undefined4 *)((long)&tp->tm_gmtoff + 4);
      ltm.tm_sec = tp->tm_sec;
      ltm.tm_min = tp->tm_min;
      ltm.tm_hour = tp->tm_hour;
      ltm.tm_mday = tp->tm_mday;
      ltm.tm_mon = tp->tm_mon;
      ltm.tm_year = tp->tm_year;
      ltm.tm_wday = tp->tm_wday;
      ltm.tm_zone = tp->tm_zone;
      ltm.tm_yday = -1;
      tVar9 = mktime_z(tz,&ltm);
      if (-1 < ltm.tm_yday) {
        negative_year = SUB81((ulong)tVar9 >> 0x3f,0);
        pcVar26 = local_431;
        tVar13 = tVar9;
        do {
          lVar24 = tVar13 / 10;
          cVar14 = (char)tVar13 + (char)lVar24 * -10;
          if (tVar9 < 0) {
            cVar14 = -cVar14;
          }
          pcVar26 = pcVar26 + -1;
          *pcVar26 = cVar14 + '0';
          tVar13 = lVar24;
        } while (lVar24 != 0);
        bVar2 = false;
        iVar20 = 1;
        goto do_number_sign_and_padding;
      }
      *piVar6 = 0x4b;
      goto LAB_001037b3;
    case 0x74:
switchD_001038f9_caseD_74:
      if ((yr_spec_00 == 0x2d) || (iVar17 < 0)) {
        if (uVar29 < 0xfffffffffffffffe) {
          uVar18 = 1;
          if (s != (FILE *)0x0) goto LAB_00103fbf;
          goto LAB_0010427c;
        }
      }
      else {
        uVar7 = (ulong)iVar17;
        uVar18 = 1;
        if (uVar7 != 0) {
          uVar18 = uVar7;
        }
        if (uVar18 < ~uVar29) {
          if (s != (FILE *)0x0) {
            if (1 < iVar17) {
              if ((yr_spec_00 == 0x30) || (lVar24 = 0, yr_spec_00 == 0x2b)) {
                lVar24 = 0;
                do {
                  lVar24 = lVar24 + 1;
                  fputc(0x30,(FILE *)s);
                } while (uVar7 - 1 != lVar24);
              }
              else {
                do {
                  lVar24 = lVar24 + 1;
                  fputc(0x20,(FILE *)s);
                } while (uVar7 - 1 != lVar24);
              }
            }
LAB_00103fbf:
            fputc(9,(FILE *)s);
          }
          goto LAB_0010427c;
        }
      }
      goto LAB_001037a8;
    case 0x75:
      uVar22 = 0;
switchD_001038f9_caseD_75:
      bVar10 = 0x75;
      iVar20 = 1;
      uVar16 = (tp->tm_wday + 6) % 7 + 1;
      break;
    case 0x77:
      uVar22 = 0;
LAB_0010438b:
      bVar10 = 0x77;
      iVar20 = 1;
      uVar16 = tp->tm_wday;
      break;
    case 0x78:
      uVar22 = 0;
LAB_00104379:
      bVar10 = 0x78;
      cVar27 = '\0';
underlying_strftime:
      if (uVar22 != 0) goto LAB_00103be1;
      pbVar8 = (byte *)(ufmt + 2);
      goto LAB_00103bf1;
    case 0x79:
      uVar22 = 0;
LAB_001042f9:
      uVar5 = tp->tm_year % 100;
      uVar16 = uVar5;
      if ((int)uVar5 < 0) {
        uVar16 = uVar5 + 100;
        if (tp->tm_year < -0x76c) {
          uVar16 = -uVar5;
        }
      }
      bVar10 = 0x79;
      if (yr_spec_00 == 0) {
        bVar10 = 0x79;
joined_r0x00104350:
        yr_spec_00 = yr_spec;
        if (yr_spec != 0x2b) {
LAB_00103baa:
          bVar4 = true;
          bVar2 = false;
          iVar20 = 2;
          negative_year = false;
          goto LAB_00103bba;
        }
      }
      else {
LAB_00103b9b:
        if (yr_spec_00 != 0x2b) goto LAB_00103baa;
      }
      bVar4 = true;
      negative_year = false;
      iVar20 = 2;
LAB_00104361:
      bVar2 = iVar20 < iVar17;
      yr_spec_00 = 0x2b;
LAB_00103bba:
      uVar5 = 0;
      goto do_number_body;
    case 0x7a:
      uVar22 = 0;
switchD_001038f9_caseD_7a:
      bVar10 = (byte)uVar5;
      uVar18 = 0;
do_z_conversion:
      if (-1 < tp->tm_isdst) {
        negative_year = true;
        iVar12 = (int)tp->tm_gmtoff;
        if ((-1 < iVar12) && (negative_year = false, iVar12 == 0)) {
          negative_year = *__s == '-';
        }
        uVar16 = iVar12 / 0xe10;
        uVar5 = (iVar12 / 0x3c) % 0x3c;
        if (uVar18 == 2) {
tz_hh_mm_ss:
          iVar23 = uVar5 * 100;
          bVar2 = true;
          iVar20 = 9;
          uVar5 = 0x14;
          uVar16 = iVar12 % 0x3c + uVar16 * 10000 + iVar23;
          bVar4 = (bool)(negative_year ^ 1);
        }
        else if (uVar18 < 3) {
          if (uVar18 == 0) {
            bVar2 = true;
            iVar20 = 5;
            bVar4 = (bool)(negative_year ^ 1);
            uVar16 = uVar16 * 100 + uVar5;
            uVar5 = 0;
          }
          else {
tz_hh_mm:
            bVar2 = true;
            iVar20 = 6;
            bVar4 = (bool)(negative_year ^ 1);
            uVar16 = uVar16 * 100 + uVar5;
            uVar5 = 4;
          }
        }
        else {
          pcVar26 = local_4b0;
          if (uVar18 != 3) goto bad_format;
          if (iVar12 % 0x3c != 0) goto tz_hh_mm_ss;
          if (uVar5 != 0) goto tz_hh_mm;
          bVar2 = true;
          iVar20 = 3;
          bVar4 = (bool)(negative_year ^ 1);
        }
        goto do_number_body;
      }
      goto LAB_0010377d;
    }
    bVar2 = false;
    uVar5 = 0;
    bVar3 = (byte)(uVar16 >> 0x18);
    negative_year = (_Bool)(bVar3 >> 7);
    bVar4 = (bool)((byte)~bVar3 >> 7);
do_number_body:
    if ((uVar22 == 0x4f) && (bVar4 != false)) {
LAB_00103bd1:
      cVar27 = '\0';
LAB_00103be1:
      ufmt[2] = (char)uVar22;
      pbVar8 = (byte *)(ufmt + 3);
LAB_00103bf1:
      ufmt._0_2_ = 0x2520;
      *pbVar8 = bVar10;
      pbVar8[1] = 0;
      lVar24 = FUN_001027f0(buf,0x400,ufmt);
      if (lVar24 != 0) {
        pcVar26 = (char *)(lVar24 - 1);
        if ((yr_spec_00 == 0x2d) || (iVar17 < 0)) {
          pcVar19 = (char *)0x0;
          _negative_year = pcVar26;
        }
        else {
          pcVar19 = (char *)(long)iVar17;
          _negative_year = pcVar19;
          if (pcVar19 <= pcVar26) {
            _negative_year = pcVar26;
          }
        }
        if ((char *)~uVar29 <= _negative_year) goto LAB_001037a8;
        if (s != (FILE *)0x0) {
          if (pcVar26 < pcVar19) {
            if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
              if (pcVar19 != pcVar26) {
                lVar24 = 0;
                do {
                  lVar24 = lVar24 + 1;
                  fputc(0x30,(FILE *)s);
                } while ((long)pcVar19 - (long)pcVar26 != lVar24);
              }
            }
            else {
              lVar24 = 0;
              if (pcVar19 != pcVar26) {
                do {
                  lVar24 = lVar24 + 1;
                  fputc(0x20,(FILE *)s);
                } while ((long)pcVar19 - (long)pcVar26 != lVar24);
              }
            }
          }
          if (cVar27 == '\0') {
            if (cVar21 == '\0') {
              fwrite(buf + 1,(size_t)pcVar26,1,(FILE *)s);
            }
            else {
              fwrite_uppcase(s,buf + 1,(size_t)pcVar26);
            }
          }
          else {
            fwrite_lowcase(s,buf + 1,(size_t)pcVar26);
          }
        }
LAB_001039d0:
        uVar29 = uVar29 + (long)_negative_year;
      }
    }
    else {
LAB_00104a78:
      if (negative_year != false) {
        uVar16 = -uVar16;
      }
LAB_00104838:
      pcVar19 = local_431;
      pcVar26 = buf + 0x16;
      while( true ) {
        if ((uVar5 & 1) != 0) {
          pcVar19[-1] = ':';
          pcVar28 = pcVar19 + -2;
          pcVar19 = pcVar26;
          pcVar26 = pcVar28;
        }
        uVar5 = (int)uVar5 >> 1;
        pcVar19[-1] = (char)uVar16 + (char)(uVar16 / 10) * -10 + '0';
        if ((uVar16 < 10) && (uVar5 == 0)) break;
        uVar16 = uVar16 / 10;
        pcVar19 = pcVar26;
        pcVar26 = pcVar26 + -1;
      }
do_number_sign_and_padding:
      uVar16 = yr_spec_00;
      if (yr_spec_00 == 0) {
        uVar16 = 0x30;
      }
      if (iVar17 < 0) {
        iVar17 = iVar20;
      }
      iVar20 = (int)local_431 - (int)pcVar26;
      if (negative_year == false) {
        if (bVar2) {
          negative_year = true;
          goto LAB_00104d35;
        }
        uVar18 = (ulong)iVar20;
        if (((0 < iVar17 - iVar20) && (yr_spec_00 != 0x2d)) || (uVar7 = 0, uVar16 != 0x2d)) {
LAB_00104129:
          uVar7 = (ulong)iVar17;
          uVar18 = (long)iVar20;
          if ((ulong)(long)iVar20 <= uVar7) {
            uVar18 = uVar7;
          }
        }
      }
      else {
        negative_year = true;
LAB_00104d35:
        iVar12 = (iVar17 + -1) - iVar20;
        if ((iVar12 < 1) || (yr_spec_00 == 0x2d)) {
          iVar12 = 0;
        }
        if (uVar16 == 0x5f) {
          if ((s != (FILE *)0x0) && (iVar12 != 0)) {
            lVar24 = 0;
            do {
              lVar24 = lVar24 + 1;
              fputc(0x20,(FILE *)s);
            } while (lVar24 != iVar12);
          }
          uVar29 = uVar29 + (long)iVar12;
          iVar17 = iVar17 - iVar12;
        }
        if (0xfffffffffffffffd < uVar29) goto LAB_001037a8;
        if (s != (FILE *)0x0) {
          fputc((int)negative_year,(FILE *)s);
        }
        uVar18 = (ulong)iVar20;
        uVar29 = uVar29 + 1;
        uVar7 = 0;
        if ((uVar16 != 0x2d) && (iVar17 = iVar17 + -1, -1 < iVar17)) goto LAB_00104129;
      }
      uVar25 = (ulong)iVar20;
      if (~uVar29 <= uVar18) {
LAB_001037a8:
        *piVar6 = 0x22;
LAB_001037b3:
        uVar29 = 0;
        goto LAB_001037b6;
      }
      if (s != (FILE *)0x0) {
        if (uVar25 < uVar7) {
          if ((uVar16 == 0x30) || (lVar24 = 0, uVar16 == 0x2b)) {
            lVar24 = 0;
            do {
              lVar24 = lVar24 + 1;
              fputc(0x30,(FILE *)s);
            } while (uVar7 - uVar25 != lVar24);
          }
          else {
            do {
              lVar24 = lVar24 + 1;
              fputc(0x20,(FILE *)s);
            } while (uVar7 - uVar25 != lVar24);
          }
        }
        if ((_Bool)cVar21 == false) {
          fwrite(pcVar26,uVar25,1,(FILE *)s);
        }
        else {
          fwrite_uppcase(s,pcVar26,uVar25);
        }
      }
LAB_001041c7:
      uVar29 = uVar29 + uVar18;
    }
LAB_0010377d:
    cVar21 = local_4b0[1];
    format = local_4b0 + 1;
    uVar18 = 0xffffffffffffffff;
  } while( true );
}

