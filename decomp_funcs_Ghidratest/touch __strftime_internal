
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

size_t __strftime_internal(char *s,size_t maxsize,char *format,tm *tp,_Bool upcase,int yr_spec,
                          int width,_Bool *tzset_called,timezone_t tz,int ns)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  time_t tVar8;
  char *pcVar9;
  byte bVar10;
  undefined uVar11;
  uint uVar12;
  time_t tVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  size_t sVar18;
  char *pcVar19;
  size_t __n;
  ulong uVar20;
  char cVar21;
  ulong uVar22;
  char *pcVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  char cVar27;
  uint yr_spec_00;
  uint uVar28;
  char *pcVar29;
  char *__s;
  char *pcVar30;
  size_t sVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  undefined8 *puVar35;
  long in_FS_OFFSET;
  _Bool negative_year;
  ulong local_4b0;
  tm ltm;
  char ufmt [5];
  char buf [23];
  char local_431 [1009];
  long local_40;
  
  uVar34 = (ulong)width;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  __s = tp->tm_zone;
  uVar28 = tp->tm_hour;
  iVar1 = *piVar6;
  if (__s == (char *)0x0) {
    __s = "";
  }
  if ((int)uVar28 < 0xd) {
    if (uVar28 == 0) {
      uVar28 = 0xc;
    }
  }
  else {
    uVar28 = uVar28 - 0xc;
  }
  cVar27 = *format;
  sVar31 = 0;
  do {
    if (cVar27 == '\0') {
      if (((undefined8 *)s != (undefined8 *)0x0) && (maxsize != 0)) {
        *s = 0;
      }
      *piVar6 = iVar1;
LAB_0010d41e:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return sVar31;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pcVar23 = format;
    if (cVar27 != '%') {
      uVar20 = 0;
      if (-1 < (int)uVar34) {
        uVar20 = uVar34;
      }
      uVar22 = 1;
      if (uVar20 != 0) {
        uVar22 = uVar20;
      }
      if (maxsize - sVar31 <= uVar22) goto LAB_0010d410;
      if ((undefined8 *)s != (undefined8 *)0x0) {
        puVar35 = (undefined8 *)s;
        if (1 < (int)uVar34) {
          puVar35 = (undefined8 *)((long)s + (uVar20 - 1));
          memset(s,0x20,uVar20 - 1);
        }
        s = (char *)((long)puVar35 + 1);
        *(char *)puVar35 = *format;
      }
      sVar31 = sVar31 + uVar22;
      goto LAB_0010d3d9;
    }
    uVar12 = 0;
    uVar16 = 0;
    cVar27 = upcase;
    do {
      while( true ) {
        do {
          yr_spec_00 = uVar16;
          cVar14 = (char)uVar12;
          pcVar19 = pcVar23 + 1;
          uVar4 = (uint)*pcVar19;
          pcVar23 = pcVar23 + 1;
          bVar10 = *pcVar19 - 0x23;
          if (0x3c < bVar10) goto LAB_0010d4e4;
          uVar20 = 1 << (bVar10 & 0x3f);
          uVar16 = uVar4;
        } while ((uVar20 & 0x1000000000002500) != 0);
        uVar16 = yr_spec_00;
        if ((uVar20 & 0x800000000000000) == 0) break;
        cVar27 = true;
      }
      uVar12 = (uint)uVar20 & 1;
    } while ((uVar20 & 1) != 0);
LAB_0010d4e4:
    if (uVar4 - 0x30 < 10) {
      uVar34 = 0;
      do {
        lVar7 = (long)(int)uVar34 * 10;
        iVar33 = (int)lVar7;
        if ((iVar33 != lVar7) ||
           (uVar34 = (ulong)(uint)(iVar33 + *pcVar23 + -0x30), SCARRY4(iVar33,*pcVar23 + -0x30))) {
          uVar34 = 0x7fffffff;
        }
        uVar4 = (uint)pcVar23[1];
        pcVar23 = pcVar23 + 1;
      } while (uVar4 - 0x30 < 10);
    }
    cVar24 = (char)uVar4;
    iVar32 = (int)uVar34;
    uVar16 = uVar28;
    if ((cVar24 == 'E') || (cVar24 == 'O')) {
      cVar24 = pcVar23[1];
      pcVar23 = pcVar23 + 1;
      pcVar19 = pcVar23;
      switch(cVar24) {
      case '\0':
        goto switchD_0010d514_caseD_0;
      default:
        goto switchD_0010d514_caseD_1;
      case '%':
        goto switchD_0010d514_caseD_25;
      case ':':
        goto LAB_0010da0d;
      case 'A':
        if (uVar4 == 0) goto LAB_0010db1f;
        break;
      case 'B':
        if (uVar4 != 0x45) goto LAB_0010db09;
        break;
      case 'C':
        if (uVar4 != 0x45) goto LAB_0010e39f;
        goto LAB_0010d7f1;
      case 'D':
        goto switchD_0010d550_caseD_44;
      case 'F':
        goto switchD_0010d550_caseD_46;
      case 'G':
      case 'V':
      case 'g':
        if (uVar4 != 0x45) goto LAB_0010d659;
        break;
      case 'H':
        if (uVar4 != 0x45) goto LAB_0010e744;
        break;
      case 'I':
        if (uVar4 != 0x45) goto LAB_0010e729;
        break;
      case 'M':
        if (uVar4 != 0x45) goto LAB_0010e583;
        break;
      case 'N':
        goto switchD_0010d550_caseD_4e;
      case 'P':
        goto switchD_0010d550_caseD_50;
      case 'R':
        goto switchD_0010d550_caseD_52;
      case 'S':
        if (uVar4 != 0x45) goto LAB_0010e6de;
        break;
      case 'T':
        goto switchD_0010d550_caseD_54;
      case 'U':
        if (uVar4 != 0x45) goto LAB_0010e683;
        break;
      case 'W':
        if (uVar4 != 0x45) goto LAB_0010e617;
        break;
      case 'X':
        if (uVar4 != 0x4f) goto LAB_0010e606;
        break;
      case 'Y':
        if (uVar4 == 0x45) goto LAB_0010d7f1;
        if (uVar4 != 0x4f) goto LAB_0010e5a2;
        break;
      case 'Z':
        goto switchD_0010d550_caseD_5a;
      case 'a':
        if (uVar4 == 0) goto LAB_0010e0ff;
        break;
      case 'b':
      case 'h':
        if (cVar14 != '\0') {
          cVar27 = cVar14;
        }
        if (uVar4 != 0x45) goto switchD_0010d550_caseD_72;
        break;
      case 'c':
        if (uVar4 != 0x4f) goto LAB_0010e201;
        break;
      case 'd':
        if (uVar4 != 0x45) goto LAB_0010e0e2;
        break;
      case 'e':
        if (uVar4 != 0x45) goto LAB_0010e0ce;
        break;
      case 'j':
        if (uVar4 != 0x45) goto LAB_0010e099;
        break;
      case 'k':
        if (uVar4 != 0x45) goto LAB_0010e085;
        break;
      case 'l':
        if (uVar4 != 0x45) goto LAB_0010e05e;
        break;
      case 'm':
        if (uVar4 != 0x45) goto LAB_0010e029;
        break;
      case 'n':
        goto switchD_0010d550_caseD_6e;
      case 'p':
        goto switchD_0010d550_caseD_70;
      case 'q':
        goto switchD_0010d550_caseD_71;
      case 'r':
        goto switchD_0010d550_caseD_72;
      case 's':
        goto switchD_0010d550_caseD_73;
      case 't':
        goto switchD_0010d550_caseD_74;
      case 'u':
        goto switchD_0010d550_caseD_75;
      case 'w':
        if (uVar4 != 0x45) goto LAB_0010dbe3;
        break;
      case 'x':
        if (uVar4 != 0x4f) goto LAB_0010dbd2;
        break;
      case 'y':
        if (uVar4 != 0x45) goto LAB_0010db4c;
        goto LAB_0010d7f1;
      case 'z':
        goto switchD_0010d550_caseD_7a;
      }
LAB_0010d920:
      pcVar30 = (char *)(maxsize - sVar31);
      pcVar19 = pcVar23;
      goto bad_format;
    }
    pcVar19 = pcVar23;
    switch(uVar4 & 0xff) {
    case 0:
switchD_0010d514_caseD_0:
      pcVar23 = pcVar23 + -1;
      goto LAB_0010d920;
    default:
      goto switchD_0010d514_caseD_1;
    case 0x25:
switchD_0010d514_caseD_25:
      pcVar19 = pcVar23 + -1;
      pcVar30 = (char *)(maxsize - sVar31);
      if (pcVar19 == format) {
        if ((yr_spec_00 == 0x2d) || (iVar32 < 0)) {
          if ((char *)0x1 < pcVar30) {
            pcVar19 = (char *)0x1;
            if ((undefined8 *)s != (undefined8 *)0x0) goto LAB_0010d9e8;
            goto LAB_0010d9f4;
          }
        }
        else {
          pcVar29 = (char *)(long)iVar32;
          pcVar19 = (char *)0x1;
          if (pcVar29 != (char *)0x0) {
            pcVar19 = pcVar29;
          }
          if (pcVar19 < pcVar30) {
            if ((undefined8 *)s != (undefined8 *)0x0) {
              if (1 < iVar32) {
                pcVar29 = pcVar29 + -1;
                if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
                  memset(s,0x30,(size_t)pcVar29);
                  s = (char *)(undefined8 *)((long)s + (long)pcVar29);
                }
                else {
                  memset(s,0x20,(size_t)pcVar29);
                  s = (char *)(undefined8 *)((long)s + (long)pcVar29);
                }
              }
LAB_0010d9e8:
              *s = *pcVar23;
              s = (char *)((long)s + 1);
            }
LAB_0010d9f4:
            sVar31 = sVar31 + (long)pcVar19;
            goto LAB_0010d3d9;
          }
        }
        goto LAB_0010d410;
      }
      goto bad_format;
    case 0x3a:
      uVar4 = 0;
LAB_0010da0d:
      cVar14 = pcVar19[1];
      pcVar23 = pcVar19 + 1;
      if (cVar14 == ':') {
        local_4b0 = 1;
        do {
          local_4b0 = local_4b0 + 1;
          cVar14 = pcVar19[local_4b0];
          pcVar23 = pcVar19 + local_4b0;
        } while (cVar14 == ':');
      }
      else {
        local_4b0 = 1;
      }
      if (cVar14 == 'z') {
        cVar24 = ':';
        goto do_z_conversion;
      }
      goto switchD_0010d514_caseD_1;
    case 0x41:
LAB_0010db1f:
      cVar24 = 'A';
      if (cVar14 != '\0') {
        cVar27 = cVar14;
      }
      goto LAB_0010db2b;
    case 0x42:
      uVar4 = 0;
LAB_0010db09:
      cVar24 = 'B';
      if (cVar14 != '\0') {
        cVar27 = cVar14;
      }
      cVar21 = '\0';
      goto underlying_strftime;
    case 0x43:
      uVar4 = 0;
LAB_0010e39f:
      iVar33 = tp->tm_year;
      negative_year = iVar33 < -0x76c;
      uVar16 = (int)((-(uint)(iVar33 + 0x76cU < 0x76c) & 0xffffff9d) + iVar33) / 100 + 0x13;
      bVar3 = -0x76d < iVar33;
      if (yr_spec_00 == 0) {
        yr_spec_00 = yr_spec;
        if (yr_spec == 0x2b) {
LAB_0010eb6e:
          iVar25 = 2;
          cVar24 = 'C';
          uVar12 = 99;
          goto LAB_0010eb4c;
        }
      }
      else if (yr_spec_00 == 0x2b) goto LAB_0010eb6e;
      bVar2 = false;
      cVar24 = 'C';
      iVar25 = 2;
      goto LAB_0010d7d6;
    case 0x44:
      uVar4 = 0;
switchD_0010d550_caseD_44:
      pcVar30 = (char *)(maxsize - sVar31);
      pcVar19 = pcVar23;
      if (uVar4 != 0) goto bad_format;
      pcVar19 = "%m/%d/%y";
      iVar33 = -1;
      goto subformat_width;
    case 0x46:
      uVar4 = 0;
switchD_0010d550_caseD_46:
      pcVar30 = (char *)(maxsize - sVar31);
      pcVar19 = pcVar23;
      if (uVar4 != 0) goto bad_format;
      if ((-1 < iVar32) || (yr_spec_00 != 0)) {
        pcVar19 = "%Y-%m-%d";
        iVar33 = 0;
        if (-1 < iVar32 + -6) {
          iVar33 = iVar32 + -6;
        }
        goto subformat_width;
      }
      pcVar19 = "%Y-%m-%d";
      pcVar9 = (char *)__strftime_internal((char *)0x0,0xffffffffffffffff,"%Y-%m-%d",tp,
                                           (_Bool)cVar27,0x2b,4,tzset_called,tz,ns);
      pcVar17 = (char *)0x0;
      yr_spec_00 = 0x2b;
      iVar33 = 4;
      pcVar29 = pcVar9;
      goto LAB_0010e2c0;
    case 0x47:
    case 0x56:
    case 0x67:
      uVar4 = 0;
LAB_0010d659:
      iVar33 = tp->tm_year;
      iVar25 = tp->tm_yday;
      uVar16 = iVar33 + -100 + (iVar33 >> 0x1f & 400U);
      iVar26 = tp->tm_wday;
      iVar15 = (iVar25 - iVar26) + 0x17e;
      iVar15 = (iVar25 - iVar15) + 3 + (iVar15 / 7) * 7;
      if (iVar15 < 0) {
        uVar16 = uVar16 - 1;
        iVar15 = 0x16d;
        if (((uVar16 & 3) == 0) &&
           (iVar15 = 0x16e,
           (uVar16 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar16 * 0x40000000) < 0x28f5c29)) {
          iVar15 = ~-(uint)((int)uVar16 % 400 == 0) + 0x16e;
        }
        iVar26 = ((iVar15 + iVar25) - iVar26) + 0x17e;
        iVar15 = ((iVar15 + iVar25) - iVar26) + 3 + (iVar26 / 7) * 7;
        iVar25 = -1;
      }
      else {
        iVar5 = 0x16d;
        if (((uVar16 & 3) == 0) &&
           (iVar5 = 0x16e, (uVar16 * -0x3d70a3d7 + 0x51eb850 >> 2 | iVar33 * 0x40000000) < 0x28f5c29
           )) {
          iVar5 = ~-(uint)((int)uVar16 % 400 == 0) + 0x16e;
        }
        iVar26 = ((iVar25 - iVar5) - iVar26) + 0x17e;
        iVar25 = ((iVar25 - iVar5) - iVar26) + 3 + (iVar26 / 7) * 7;
        if (-1 < iVar25) {
          iVar15 = iVar25;
        }
        iVar25 = (iVar25 >> 0x1f) + 1;
      }
      if (cVar24 != 'G') {
        if (cVar24 == 'g') {
          uVar16 = (iVar33 % 100 + iVar25) % 100;
          if ((int)uVar16 < 0) {
            if (iVar33 < -0x76c - iVar25) {
              uVar16 = -uVar16;
            }
            else {
              uVar16 = uVar16 + 100;
            }
          }
          if (yr_spec_00 != 0) goto LAB_0010d7b5;
          goto joined_r0x0010dba5;
        }
        iVar25 = 2;
        uVar16 = iVar15 / 7 + 1;
        break;
      }
      uVar16 = iVar33 + 0x76c + iVar25;
      negative_year = iVar33 < -0x76c - iVar25;
      bVar3 = -0x76c - iVar25 <= iVar33;
      if (yr_spec_00 != 0) goto LAB_0010eb35;
      if (yr_spec == 0x2b) {
        iVar25 = 4;
        uVar12 = 9999;
        goto LAB_0010eb4c;
      }
      bVar2 = false;
      iVar25 = 4;
      yr_spec_00 = yr_spec;
      goto LAB_0010d7d6;
    case 0x48:
      uVar4 = 0;
LAB_0010e744:
      iVar25 = 2;
      cVar24 = 'H';
      uVar16 = tp->tm_hour;
      break;
    case 0x49:
      uVar4 = 0;
LAB_0010e729:
      iVar25 = 2;
      cVar24 = 'I';
      break;
    case 0x4d:
      uVar4 = 0;
LAB_0010e583:
      iVar25 = 2;
      cVar24 = 'M';
      uVar16 = tp->tm_min;
      break;
    case 0x4e:
      uVar4 = 0;
switchD_0010d550_caseD_4e:
      pcVar30 = (char *)(maxsize - sVar31);
      pcVar19 = pcVar23;
      if (uVar4 == 0x45) goto bad_format;
      iVar25 = 9;
      iVar33 = ns;
      if (iVar32 < 1) {
        iVar32 = 9;
      }
LAB_0010e460:
      if (iVar32 < iVar25) {
LAB_0010e448:
        iVar25 = iVar25 + -1;
        iVar33 = iVar33 / 10;
        goto LAB_0010e460;
      }
      if (1 < iVar25) {
        uVar16 = iVar33 * -0x33333333 + 0x19999998;
        if (0x19999998 < (uVar16 >> 1 | (uint)((uVar16 & 1) != 0) << 0x1f)) goto LAB_0010e484;
        goto LAB_0010e448;
      }
      if (iVar25 != 1) goto LAB_0010e4c4;
LAB_0010e484:
      lVar7 = (long)iVar25;
      do {
        ufmt[lVar7 + 4] = (char)iVar33 + (char)(iVar33 / 10) * -10 + '0';
        lVar7 = lVar7 + -1;
        iVar33 = iVar33 / 10;
      } while (0 < (int)lVar7);
LAB_0010e4c4:
      pcVar19 = (char *)(long)iVar25;
      if (yr_spec_00 == 0) {
        yr_spec_00 = 0x30;
      }
      if (pcVar30 <= pcVar19) goto LAB_0010d410;
      if ((undefined8 *)s != (undefined8 *)0x0) {
        if ((_Bool)cVar27 == false) {
          if (pcVar19 < (char *)0x8) {
            if (((ulong)pcVar19 & 4) == 0) {
              if (pcVar19 != (char *)0x0) {
                *s = buf[0];
                if (((ulong)pcVar19 & 2) != 0) {
                  *(undefined2 *)((long)s + (long)(pcVar19 + -2)) =
                       *(undefined2 *)(ufmt + (long)(pcVar19 + 3));
                }
              }
            }
            else {
              *(undefined4 *)s = buf._0_4_;
              *(undefined4 *)((long)s + (long)(pcVar19 + -4)) =
                   *(undefined4 *)(ufmt + (long)(pcVar19 + 1));
            }
          }
          else {
            *(ulong *)s = CONCAT44(buf._4_4_,buf._0_4_);
            *(undefined8 *)((long)s + (long)(pcVar19 + -8)) =
                 *(undefined8 *)(&stack0xfffffffffffffbb0 + (long)pcVar19);
            lVar7 = (long)s - ((ulong)((long)s + 8) & 0xfffffffffffffff8);
            if (7 < ((ulong)(pcVar19 + lVar7) & 0xfffffffffffffff8)) {
              uVar34 = 0;
              do {
                *(undefined8 *)(((ulong)((long)s + 8) & 0xfffffffffffffff8) + uVar34) =
                     *(undefined8 *)(buf + (uVar34 - lVar7));
                uVar34 = uVar34 + 8;
              } while (uVar34 < ((ulong)(pcVar19 + lVar7) & 0xfffffffffffffff8));
            }
          }
        }
        else {
          memcpy_uppcase(s,buf,(size_t)pcVar19);
        }
        s = (char *)((long)s + (long)pcVar19);
      }
      sVar31 = sVar31 + (long)pcVar19;
      if ((yr_spec_00 == 0x2d) || (iVar32 - iVar25 < 0)) {
        if (maxsize == sVar31) goto LAB_0010d410;
      }
      else {
        uVar34 = (ulong)(iVar32 - iVar25);
        if (maxsize - sVar31 <= uVar34) goto LAB_0010d410;
        if ((undefined8 *)s == (undefined8 *)0x0) {
          sVar31 = sVar31 + uVar34;
        }
        else if (uVar34 != 0) {
          sVar31 = sVar31 + uVar34;
          if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
            memset(s,0x30,uVar34);
            s = (char *)(undefined8 *)((long)s + uVar34);
          }
          else {
            memset(s,0x20,uVar34);
            s = (char *)(undefined8 *)((long)s + uVar34);
          }
        }
      }
      goto LAB_0010d3d9;
    case 0x50:
      uVar4 = 0;
switchD_0010d550_caseD_50:
      cVar21 = '\x01';
      goto LAB_0010df8a;
    case 0x52:
switchD_0010d550_caseD_52:
      pcVar19 = "%H:%M";
      pcVar30 = (char *)(maxsize - sVar31);
      iVar33 = -1;
      goto subformat_width;
    case 0x53:
      uVar4 = 0;
LAB_0010e6de:
      iVar25 = 2;
      cVar24 = 'S';
      uVar16 = tp->tm_sec;
      break;
    case 0x54:
switchD_0010d550_caseD_54:
      pcVar19 = "%H:%M:%S";
      pcVar30 = (char *)(maxsize - sVar31);
      iVar33 = -1;
subformat_width:
      pcVar9 = (char *)__strftime_internal((char *)0x0,0xffffffffffffffff,pcVar19,tp,(_Bool)cVar27,
                                           yr_spec_00,iVar33,tzset_called,tz,ns);
      if ((yr_spec_00 == 0x2d) || (iVar32 < 0)) {
        pcVar17 = (char *)0x0;
        pcVar29 = pcVar9;
      }
      else {
        pcVar17 = (char *)(long)iVar32;
        pcVar29 = pcVar17;
        if (pcVar17 <= pcVar9) {
          pcVar29 = pcVar9;
        }
      }
LAB_0010e2c0:
      if (pcVar30 <= pcVar29) goto LAB_0010d410;
      if ((undefined8 *)s != (undefined8 *)0x0) {
        puVar35 = (undefined8 *)s;
        if (pcVar9 < pcVar17) {
          sVar18 = (long)pcVar17 - (long)pcVar9;
          puVar35 = (undefined8 *)((long)s + sVar18);
          if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
            memset(s,0x30,sVar18);
          }
          else {
            memset(s,0x20,sVar18);
          }
        }
        __strftime_internal((char *)puVar35,(size_t)pcVar30,pcVar19,tp,(_Bool)cVar27,yr_spec_00,
                            iVar33,tzset_called,tz,ns);
        s = (char *)((long)puVar35 + (long)pcVar9);
      }
      goto LAB_0010d605;
    case 0x55:
      uVar4 = 0;
LAB_0010e683:
      iVar25 = 2;
      cVar24 = 'U';
      uVar16 = ((tp->tm_yday - tp->tm_wday) + 7) / 7;
      break;
    case 0x57:
      uVar4 = 0;
LAB_0010e617:
      iVar25 = 2;
      iVar33 = tp->tm_wday + 6;
      cVar24 = 'W';
      uVar16 = (((iVar33 / 7) * 7 - iVar33) + 7 + tp->tm_yday) / 7;
      break;
    case 0x58:
      uVar4 = 0;
LAB_0010e606:
      cVar24 = 'X';
      cVar21 = '\0';
      goto underlying_strftime;
    case 0x59:
      uVar4 = 0;
LAB_0010e5a2:
      cVar24 = 'Y';
      iVar33 = tp->tm_year;
      uVar16 = iVar33 + 0x76c;
      negative_year = iVar33 < -0x76c;
      bVar3 = -0x76d < iVar33;
      if (yr_spec_00 != 0) {
LAB_0010eb35:
        iVar25 = 4;
        uVar12 = 9999;
        if (yr_spec_00 != 0x2b) {
          bVar2 = false;
          goto LAB_0010d7d6;
        }
LAB_0010eb4c:
        bVar2 = true;
        yr_spec_00 = 0x2b;
        if (uVar16 <= uVar12) goto LAB_0010dbb8;
        goto LAB_0010d7d6;
      }
      if (yr_spec == 0x2b) {
        iVar25 = 4;
        cVar24 = 'Y';
        uVar12 = 9999;
        goto LAB_0010eb4c;
      }
      bVar2 = false;
      uVar12 = 0;
      iVar25 = 4;
      yr_spec_00 = yr_spec;
      goto LAB_0010e5f0;
    case 0x5a:
switchD_0010d550_caseD_5a:
      if (cVar14 != '\0') {
        cVar27 = '\0';
      }
      sVar18 = strlen(__s);
      if ((iVar32 < 0) || (yr_spec_00 == 0x2d)) {
        uVar34 = 0;
        _negative_year = (char *)sVar18;
      }
      else {
        uVar34 = (ulong)iVar32;
        _negative_year = (char *)uVar34;
        if (uVar34 <= sVar18) {
          _negative_year = (char *)sVar18;
        }
      }
      if (_negative_year < maxsize - sVar31) {
        if ((undefined8 *)s != (undefined8 *)0x0) {
          puVar35 = (undefined8 *)s;
          if (sVar18 < uVar34) {
            __n = uVar34 - sVar18;
            puVar35 = (undefined8 *)((long)s + __n);
            if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
              memset(s,0x30,__n);
            }
            else {
              memset(s,0x20,__n);
            }
          }
          if (cVar14 == '\0') {
            if (cVar27 == '\0') {
              memcpy(puVar35,__s,sVar18);
            }
            else {
              memcpy_uppcase((char *)puVar35,__s,sVar18);
            }
          }
          else {
            memcpy_lowcase((char *)puVar35,__s,sVar18);
          }
          s = (char *)((long)puVar35 + sVar18);
        }
        sVar31 = sVar31 + (long)_negative_year;
        goto LAB_0010d3d9;
      }
      goto LAB_0010d410;
    case 0x61:
LAB_0010e0ff:
      cVar24 = 'a';
      if (cVar14 != '\0') {
        cVar27 = cVar14;
      }
LAB_0010db2b:
      cVar21 = '\0';
      pcVar19 = ufmt + 2;
      goto LAB_0010d810;
    case 0x62:
    case 0x68:
      uVar4 = 0;
      if (cVar14 != '\0') {
        cVar27 = cVar14;
      }
      goto switchD_0010d550_caseD_72;
    case 99:
      uVar4 = 0;
LAB_0010e201:
      cVar24 = 'c';
      cVar21 = '\0';
      goto underlying_strftime;
    case 100:
      uVar4 = 0;
LAB_0010e0e2:
      iVar25 = 2;
      cVar24 = 'd';
      uVar16 = tp->tm_mday;
      break;
    case 0x65:
      uVar4 = 0;
LAB_0010e0ce:
      cVar24 = 'e';
      uVar16 = tp->tm_mday;
      goto do_number_spacepad;
    case 0x6a:
      uVar4 = 0;
LAB_0010e099:
      bVar2 = false;
      cVar24 = 'j';
      iVar25 = 3;
      iVar33 = tp->tm_yday;
      uVar16 = iVar33 + 1;
      negative_year = iVar33 < -1;
      bVar3 = -2 < iVar33;
      uVar12 = 0;
      goto do_number_body;
    case 0x6b:
      uVar4 = 0;
LAB_0010e085:
      cVar24 = 'k';
      uVar16 = tp->tm_hour;
      goto do_number_spacepad;
    case 0x6c:
      uVar4 = 0;
LAB_0010e05e:
      cVar24 = 'l';
do_number_spacepad:
      iVar25 = 2;
      if (yr_spec_00 == 0) {
        yr_spec_00 = 0x5f;
      }
      break;
    case 0x6d:
      uVar4 = 0;
LAB_0010e029:
      bVar2 = false;
      cVar24 = 'm';
      iVar25 = 2;
      iVar33 = tp->tm_mon;
      uVar16 = iVar33 + 1;
      negative_year = iVar33 < -1;
      bVar3 = -2 < iVar33;
      uVar12 = 0;
      goto do_number_body;
    case 0x6e:
switchD_0010d550_caseD_6e:
      if ((yr_spec_00 == 0x2d) || (iVar32 < 0)) {
        if (1 < maxsize - sVar31) {
          uVar34 = 1;
          if ((undefined8 *)s != (undefined8 *)0x0) goto LAB_0010e017;
          goto LAB_0010dcf2;
        }
      }
      else {
        uVar20 = (ulong)iVar32;
        uVar34 = 1;
        if (uVar20 != 0) {
          uVar34 = uVar20;
        }
        if (uVar34 < maxsize - sVar31) {
          if ((undefined8 *)s != (undefined8 *)0x0) {
            if (1 < iVar32) {
              sVar18 = uVar20 - 1;
              if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
                memset(s,0x30,sVar18);
                s = (char *)(undefined8 *)((long)s + sVar18);
              }
              else {
                memset(s,0x20,sVar18);
                s = (char *)(undefined8 *)((long)s + sVar18);
              }
            }
LAB_0010e017:
            *s = 10;
            s = (char *)((long)s + 1);
          }
LAB_0010dcf2:
          sVar31 = sVar31 + uVar34;
          goto LAB_0010d3d9;
        }
      }
      goto LAB_0010d410;
    case 0x70:
      uVar4 = 0;
switchD_0010d550_caseD_70:
      cVar21 = '\0';
LAB_0010df8a:
      cVar24 = 'p';
      if (cVar14 != '\0') {
        cVar27 = '\0';
        cVar21 = cVar14;
      }
      goto underlying_strftime;
    case 0x71:
      uVar4 = 0;
switchD_0010d550_caseD_71:
      cVar24 = 'q';
      if (uVar4 == 0x4f) goto LAB_0010d7f1;
      bVar2 = false;
      uVar12 = 0;
      negative_year = false;
      iVar25 = 1;
      uVar16 = (tp->tm_mon * 0xb >> 5) + 1;
      goto LAB_0010dd40;
    case 0x72:
      uVar4 = 0;
switchD_0010d550_caseD_72:
      cVar21 = '\0';
      goto underlying_strftime;
    case 0x73:
switchD_0010d550_caseD_73:
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
      tVar8 = mktime_z(tz,&ltm);
      if (-1 < ltm.tm_yday) {
        negative_year = SUB81((ulong)tVar8 >> 0x3f,0);
        pcVar19 = local_431;
        tVar13 = tVar8;
        do {
          lVar7 = tVar13 / 10;
          cVar14 = (char)tVar13 + (char)lVar7 * -10;
          if (tVar8 < 0) {
            cVar14 = -cVar14;
          }
          pcVar19 = pcVar19 + -1;
          *pcVar19 = cVar14 + '0';
          tVar13 = lVar7;
        } while (lVar7 != 0);
        bVar2 = false;
        iVar25 = 1;
        goto do_number_sign_and_padding;
      }
      *piVar6 = 0x4b;
      goto LAB_0010d41b;
    case 0x74:
switchD_0010d550_caseD_74:
      if ((yr_spec_00 == 0x2d) || (iVar32 < 0)) {
        if (1 < maxsize - sVar31) {
          uVar34 = 1;
          if ((undefined8 *)s != (undefined8 *)0x0) goto LAB_0010dcea;
          goto LAB_0010dcf2;
        }
      }
      else {
        uVar20 = (ulong)iVar32;
        uVar34 = 1;
        if (uVar20 != 0) {
          uVar34 = uVar20;
        }
        if (uVar34 < maxsize - sVar31) {
          if ((undefined8 *)s != (undefined8 *)0x0) {
            if (1 < iVar32) {
              sVar18 = uVar20 - 1;
              if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
                memset(s,0x30,sVar18);
                s = (char *)(undefined8 *)((long)s + sVar18);
              }
              else {
                memset(s,0x20,sVar18);
                s = (char *)(undefined8 *)((long)s + sVar18);
              }
            }
LAB_0010dcea:
            *s = 9;
            s = (char *)((long)s + 1);
          }
          goto LAB_0010dcf2;
        }
      }
      goto LAB_0010d410;
    case 0x75:
      uVar4 = 0;
switchD_0010d550_caseD_75:
      iVar25 = 1;
      cVar24 = 'u';
      uVar16 = (tp->tm_wday + 6) % 7 + 1;
      break;
    case 0x77:
      uVar4 = 0;
LAB_0010dbe3:
      iVar25 = 1;
      cVar24 = 'w';
      uVar16 = tp->tm_wday;
      break;
    case 0x78:
      uVar4 = 0;
LAB_0010dbd2:
      cVar24 = 'x';
      cVar21 = '\0';
underlying_strftime:
      if (uVar4 != 0) goto LAB_0010d800;
      pcVar19 = ufmt + 2;
      goto LAB_0010d810;
    case 0x79:
      uVar4 = 0;
LAB_0010db4c:
      uVar12 = tp->tm_year % 100;
      uVar16 = uVar12;
      if ((int)uVar12 < 0) {
        uVar16 = uVar12 + 100;
        if (tp->tm_year < -0x76c) {
          uVar16 = -uVar12;
        }
      }
      cVar24 = 'y';
      if (yr_spec_00 == 0) {
        cVar24 = 'y';
joined_r0x0010dba5:
        yr_spec_00 = yr_spec;
        if (yr_spec != 0x2b) goto LAB_0010d7c4;
LAB_0010dbab:
        bVar3 = true;
        negative_year = false;
        iVar25 = 2;
LAB_0010dbb8:
        bVar2 = iVar25 < iVar32;
        yr_spec_00 = 0x2b;
      }
      else {
LAB_0010d7b5:
        if (yr_spec_00 == 0x2b) goto LAB_0010dbab;
LAB_0010d7c4:
        bVar3 = true;
        bVar2 = false;
        negative_year = false;
        iVar25 = 2;
      }
LAB_0010d7d6:
      uVar12 = 0;
      goto do_number_body;
    case 0x7a:
      uVar4 = 0;
switchD_0010d550_caseD_7a:
      local_4b0 = 0;
do_z_conversion:
      if (-1 < tp->tm_isdst) {
        negative_year = true;
        iVar33 = (int)tp->tm_gmtoff;
        if ((-1 < iVar33) && (negative_year = false, iVar33 == 0)) {
          negative_year = *__s == '-';
        }
        uVar16 = iVar33 / 0xe10;
        uVar12 = (iVar33 / 0x3c) % 0x3c;
        if (local_4b0 == 2) {
tz_hh_mm_ss:
          iVar26 = uVar12 * 100;
          bVar2 = true;
          iVar25 = 9;
          uVar12 = 0x14;
          uVar16 = iVar33 % 0x3c + uVar16 * 10000 + iVar26;
          bVar3 = (bool)(negative_year ^ 1);
        }
        else if (local_4b0 < 3) {
          if (local_4b0 == 0) {
            bVar2 = true;
            iVar25 = 5;
            bVar3 = (bool)(negative_year ^ 1);
            uVar16 = uVar16 * 100 + uVar12;
            uVar12 = 0;
          }
          else {
tz_hh_mm:
            bVar2 = true;
            iVar25 = 6;
            bVar3 = (bool)(negative_year ^ 1);
            uVar16 = uVar16 * 100 + uVar12;
            uVar12 = 4;
          }
        }
        else {
          if (local_4b0 != 3) goto LAB_0010d920;
          if (iVar33 % 0x3c != 0) goto tz_hh_mm_ss;
          if (uVar12 != 0) goto tz_hh_mm;
          bVar2 = true;
          iVar25 = 3;
          bVar3 = (bool)(negative_year ^ 1);
        }
        goto do_number_body;
      }
      goto LAB_0010d3d9;
    }
    bVar2 = false;
    uVar12 = 0;
    bVar10 = (byte)(uVar16 >> 0x18);
    negative_year = (_Bool)(bVar10 >> 7);
    bVar3 = (bool)((byte)~bVar10 >> 7);
do_number_body:
    if ((uVar4 != 0x4f) || (bVar3 == false)) {
LAB_0010e5f0:
      if (negative_year != false) {
        uVar16 = -uVar16;
      }
LAB_0010dd40:
      uVar34 = (ulong)uVar16;
      pcVar30 = local_431;
      pcVar19 = buf + 0x16;
      while( true ) {
        if ((uVar12 & 1) != 0) {
          pcVar30[-1] = ':';
          pcVar29 = pcVar30 + -2;
          pcVar30 = pcVar19;
          pcVar19 = pcVar29;
        }
        uVar12 = (int)uVar12 >> 1;
        pcVar30[-1] = (char)uVar34 + (char)(uVar34 / 10) * -10 + '0';
        if (((uint)uVar34 < 10) && (uVar12 == 0)) break;
        uVar34 = uVar34 / 10;
        pcVar30 = pcVar19;
        pcVar19 = pcVar19 + -1;
      }
do_number_sign_and_padding:
      local_4b0._0_4_ = yr_spec_00;
      if (yr_spec_00 == 0) {
        local_4b0._0_4_ = 0x30;
      }
      if (iVar32 < 0) {
        iVar32 = iVar25;
      }
      iVar33 = (int)local_431 - (int)pcVar19;
      if (negative_year == false) {
        if (bVar2) {
          uVar11 = 0x2b;
          goto LAB_0010e8d5;
        }
        if (((iVar32 - iVar33 < 1) || (yr_spec_00 == 0x2d)) && ((uint)local_4b0 == 0x2d)) {
LAB_0010e94e:
          pcVar29 = (char *)(long)iVar33;
          pcVar30 = (char *)0x0;
        }
        else {
LAB_0010de02:
          pcVar30 = (char *)(long)iVar32;
          pcVar29 = (char *)(long)iVar33;
          if ((char *)(long)iVar33 <= pcVar30) {
            pcVar29 = pcVar30;
          }
        }
LAB_0010de0f:
        _negative_year = (char *)(long)iVar33;
        if (pcVar29 < (char *)(maxsize - sVar31)) {
          if ((undefined8 *)s != (undefined8 *)0x0) {
            puVar35 = (undefined8 *)s;
            if (_negative_year < pcVar30) {
              sVar18 = (long)pcVar30 - (long)_negative_year;
              puVar35 = (undefined8 *)((long)s + sVar18);
              if (((uint)local_4b0 == 0x30) || ((uint)local_4b0 == 0x2b)) {
                memset(s,0x30,sVar18);
              }
              else {
                memset(s,0x20,sVar18);
              }
            }
LAB_0010d8f9:
            if (cVar27 == '\0') {
              memcpy(puVar35,pcVar19,(size_t)_negative_year);
            }
            else {
              memcpy_uppcase((char *)puVar35,pcVar19,(size_t)_negative_year);
            }
            goto LAB_0010d90c;
          }
          goto LAB_0010d605;
        }
      }
      else {
        uVar11 = 0x2d;
LAB_0010e8d5:
        iVar25 = iVar32 + -1;
        iVar26 = iVar25 - iVar33;
        if ((iVar26 < 1) || (yr_spec_00 == 0x2d)) {
          iVar26 = 0;
        }
        if ((uint)local_4b0 == 0x5f) {
          sVar18 = (size_t)iVar26;
          sVar31 = sVar31 + sVar18;
          if ((undefined8 *)s == (undefined8 *)0x0) {
            if (1 < maxsize - sVar31) {
              sVar31 = sVar31 + 1;
              iVar32 = (iVar32 - iVar26) + -1;
              goto LAB_0010e919;
            }
          }
          else {
            memset(s,0x20,sVar18);
            s = (char *)((long)s + sVar18);
            if (1 < maxsize - sVar31) {
              local_4b0._0_4_ = 0x5f;
              iVar25 = (iVar32 - iVar26) + -1;
              goto LAB_0010e905;
            }
          }
        }
        else if (1 < maxsize - sVar31) {
          if ((undefined8 *)s != (undefined8 *)0x0) {
LAB_0010e905:
            *s = uVar11;
            s = (char *)((long)s + 1);
          }
          sVar31 = sVar31 + 1;
          iVar32 = iVar25;
          if ((uint)local_4b0 == 0x2d) goto LAB_0010e94e;
LAB_0010e919:
          pcVar29 = (char *)(long)iVar33;
          pcVar30 = (char *)0x0;
          if (-1 < iVar32) goto LAB_0010de02;
          goto LAB_0010de0f;
        }
      }
LAB_0010d410:
      *piVar6 = 0x22;
LAB_0010d41b:
      sVar31 = 0;
      goto LAB_0010d41e;
    }
LAB_0010d7f1:
    cVar21 = '\0';
LAB_0010d800:
    ufmt[2] = (char)uVar4;
    pcVar19 = ufmt + 3;
LAB_0010d810:
    ufmt._0_2_ = 0x2520;
    *pcVar19 = cVar24;
    pcVar19[1] = '\0';
    lVar7 = FUN_00103850(buf,0x400,ufmt);
    if (lVar7 != 0) {
      _negative_year = (char *)(lVar7 - 1);
      if ((yr_spec_00 == 0x2d) || (iVar32 < 0)) {
        pcVar19 = (char *)0x0;
        pcVar29 = _negative_year;
      }
      else {
        pcVar19 = (char *)(long)iVar32;
        pcVar29 = pcVar19;
        if (pcVar19 <= _negative_year) {
          pcVar29 = _negative_year;
        }
      }
      if ((char *)(maxsize - sVar31) <= pcVar29) goto LAB_0010d410;
      if ((undefined8 *)s != (undefined8 *)0x0) {
        puVar35 = (undefined8 *)s;
        if (_negative_year < pcVar19) {
          sVar18 = (long)pcVar19 - (long)_negative_year;
          puVar35 = (undefined8 *)((long)s + sVar18);
          if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
            memset(s,0x30,sVar18);
          }
          else {
            memset(s,0x20,sVar18);
          }
        }
        pcVar19 = buf + 1;
        if (cVar21 == '\0') goto LAB_0010d8f9;
        memcpy_lowcase((char *)puVar35,pcVar19,(size_t)_negative_year);
LAB_0010d90c:
        s = (char *)((long)puVar35 + (long)_negative_year);
      }
LAB_0010d605:
      sVar31 = sVar31 + (long)pcVar29;
    }
LAB_0010d3d9:
    cVar27 = pcVar23[1];
    format = pcVar23 + 1;
    uVar34 = 0xffffffffffffffff;
  } while( true );
switchD_0010d514_caseD_1:
  pcVar30 = (char *)(maxsize - sVar31);
bad_format:
  pcVar9 = pcVar19 + (1 - (long)format);
  if ((iVar32 < 0) || (yr_spec_00 == 0x2d)) {
    pcVar17 = (char *)0x0;
    pcVar29 = pcVar9;
  }
  else {
    pcVar17 = (char *)(long)iVar32;
    pcVar29 = pcVar17;
    if (pcVar17 <= pcVar9) {
      pcVar29 = pcVar9;
    }
  }
  if (pcVar30 <= pcVar29) goto LAB_0010d410;
  pcVar23 = pcVar19;
  if ((undefined8 *)s != (undefined8 *)0x0) {
    puVar35 = (undefined8 *)s;
    if (pcVar9 < pcVar17) {
      sVar18 = (long)pcVar17 - (long)pcVar9;
      puVar35 = (undefined8 *)((long)s + sVar18);
      if ((yr_spec_00 == 0x30) || (yr_spec_00 == 0x2b)) {
        memset(s,0x30,sVar18);
      }
      else {
        memset(s,0x20,sVar18);
      }
    }
    if (cVar27 == '\0') {
      memcpy(puVar35,format,(size_t)pcVar9);
    }
    else {
      memcpy_uppcase((char *)puVar35,format,(size_t)pcVar9);
    }
    s = (char *)((long)puVar35 + (long)pcVar9);
  }
  goto LAB_0010d605;
}

