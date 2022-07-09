
_Bool sparse_copy(int src_fd,int dest_fd,char **abuf,size_t buf_size,size_t hole_size,
                 _Bool punch_holes,_Bool allow_reflink,char *src_name,char *dst_name,
                 uintmax_t max_n_read,off_t *total_n_read,_Bool *last_write_made_hole)

{
  uint uVar1;
  bool bVar2;
  _Bool _Var3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  char *pcVar8;
  size_t sVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  size_t __n;
  ulong uVar15;
  ulong uVar16;
  char *__s2;
  size_t sVar17;
  byte bVar18;
  char *pcVar19;
  bool bVar20;
  size_t sVar21;
  bool bVar22;
  bool bVar23;
  char **buf;
  ulong local_70;
  
  *last_write_made_hole = false;
  *total_n_read = 0;
  if ((hole_size == 0) && (allow_reflink != false)) {
    if (max_n_read != 0) {
      while( true ) {
        while( true ) {
          lVar5 = copy_file_range(src_fd,0,dest_fd);
          if (lVar5 == 0) {
            if (*total_n_read != 0) {
              return true;
            }
            goto LAB_00106285;
          }
          if (lVar5 < 0) break;
          *total_n_read = *total_n_read + lVar5;
          max_n_read = max_n_read - lVar5;
          if (max_n_read == 0) {
            return true;
          }
        }
        puVar10 = (uint *)__errno_location();
        uVar1 = *puVar10;
        bVar23 = uVar1 == 0x5f;
        if (uVar1 < 0x27) {
          bVar23 = (bool)(bVar23 | (byte)(0x4004440200 >> ((byte)uVar1 & 0x3f)) & 1);
        }
        if (bVar23 != false) goto LAB_00106285;
        if (uVar1 == 1) break;
        if (uVar1 != 4) {
LAB_001065d2:
          uVar11 = quotearg_n_style(1,4,dst_name);
          uVar12 = quotearg_n_style(0,4,src_name);
          uVar13 = dcgettext(0,"error copying %s to %s",5);
          error(0,*puVar10,uVar13,uVar12,uVar11);
          return false;
        }
      }
      if (*total_n_read == 0) goto LAB_00106285;
      goto LAB_001065d2;
    }
  }
  else if (max_n_read != 0) {
LAB_00106285:
    sVar17 = buf_size;
    if (hole_size != 0) {
      sVar17 = hole_size;
    }
    sVar21 = 0;
    bVar23 = false;
    local_70 = max_n_read;
    do {
      while( true ) {
        pcVar8 = *abuf;
        if (pcVar8 == (char *)0x0) {
          iVar4 = getpagesize();
          pcVar8 = (char *)xalignalloc((long)iVar4,buf_size);
          *abuf = pcVar8;
        }
        uVar6 = buf_size;
        if (local_70 <= buf_size) {
          uVar6 = local_70;
        }
        uVar6 = read(src_fd,pcVar8,uVar6);
        if (-1 < (long)uVar6) break;
        piVar7 = __errno_location();
        if (*piVar7 != 4) {
          pcVar8 = quotearg_style(shell_escape_always_quoting_style,src_name);
          uVar11 = dcgettext(0,"error reading %s",5);
          error(0,*piVar7,uVar11,pcVar8);
          return false;
        }
      }
      if (uVar6 == 0) break;
      *total_n_read = *total_n_read + uVar6;
      sVar9 = sVar17;
      uVar16 = uVar6;
      pcVar19 = pcVar8;
LAB_00106380:
      do {
        uVar15 = sVar9;
        if (uVar16 < sVar9) {
          uVar15 = uVar16;
        }
        bVar20 = hole_size != 0 && uVar15 != 0;
        __n = uVar15;
        __s2 = pcVar8;
        if (hole_size != 0 && uVar15 != 0) {
          do {
            if (*__s2 != '\0') {
              bVar22 = false;
              bVar14 = bVar23;
              bVar2 = bVar20;
              goto LAB_001063e9;
            }
            __s2 = __s2 + 1;
            __n = __n - 1;
            if (__n == 0) {
              bVar18 = (bVar23 ^ 1U) & sVar21 != 0;
              goto LAB_001064f0;
            }
          } while ((__n & 0xf) != 0);
          iVar4 = memcmp(pcVar8,__s2,__n);
          bVar22 = iVar4 == 0;
          bVar14 = (bool)(bVar22 ^ bVar23);
          bVar2 = iVar4 != 0;
LAB_001063e9:
          bVar18 = sVar21 != 0 & bVar14;
          bVar20 = bVar22;
          if ((uVar15 == uVar16) && (bVar2)) {
            if (bVar18 == 0) {
              bVar20 = false;
              goto LAB_00106492;
            }
            bVar22 = true;
            bVar20 = false;
          }
          else {
LAB_001064f0:
            if (bVar18 == 0) goto LAB_001064f9;
            bVar22 = false;
          }
joined_r0x001064a6:
          if (bVar23 == false) {
            sVar9 = full_write(dest_fd,pcVar19,sVar21);
            if (sVar21 != sVar9) {
              pcVar8 = quotearg_style(shell_escape_always_quoting_style,dst_name);
              uVar11 = dcgettext(0,"error writing %s",5);
              piVar7 = __errno_location();
              error(0,*piVar7,uVar11,pcVar8);
              return false;
            }
          }
          else {
            _Var3 = create_hole(dest_fd,dst_name,punch_holes,sVar21);
            if (_Var3 == false) {
              return false;
            }
          }
          pcVar19 = pcVar8;
          sVar21 = uVar15;
          bVar23 = bVar20;
          if (bVar22) {
            if (uVar15 == 0) {
              if (bVar18 != 0) {
                sVar21 = 0;
                break;
              }
              uVar16 = 0;
            }
            else if (bVar18 != 0) {
              sVar9 = 0;
              goto LAB_00106380;
            }
            uVar16 = uVar16 - uVar15;
            sVar21 = 0;
          }
          else {
            uVar16 = uVar16 - uVar15;
          }
        }
        else {
          if (((uVar15 == uVar16) && (bVar23 != true)) || (bVar20 = bVar23, uVar15 == 0)) {
LAB_00106492:
            sVar21 = sVar21 + uVar15;
            bVar18 = 0;
            bVar22 = true;
            goto joined_r0x001064a6;
          }
LAB_001064f9:
          sVar21 = sVar21 + uVar15;
          if (sVar21 + 0x8000000000000000 < uVar15) {
            pcVar8 = quotearg_style(shell_escape_always_quoting_style,src_name);
            uVar11 = dcgettext(0,"overflow reading %s",5);
            error(0,0,uVar11,pcVar8);
            return false;
          }
          uVar16 = uVar16 - uVar15;
          bVar23 = bVar20;
        }
        pcVar8 = pcVar8 + uVar15;
        sVar9 = uVar15;
      } while (uVar16 != 0);
      local_70 = local_70 - uVar6;
      *last_write_made_hole = bVar23;
    } while (local_70 != 0);
    if (bVar23 != false) {
      _Var3 = create_hole(dest_fd,dst_name,punch_holes,sVar21);
      return _Var3;
    }
  }
  return true;
}

