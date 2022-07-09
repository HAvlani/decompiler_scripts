
/* WARNING: Could not reconcile some variable overlaps */

int dopass(int fd,stat *st,char *qname,off_t *sizep,int type,randread_source *s,ulong k,ulong n)

{
  long lVar1;
  bool bVar2;
  size_t size;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined *__src;
  __off_t _Var6;
  int *piVar7;
  ulong uVar8;
  ssize_t sVar9;
  char *pcVar10;
  char *pcVar11;
  time_t tVar12;
  char cVar13;
  uint uVar14;
  undefined uVar15;
  uint uVar16;
  ulong uVar17;
  idx_t size_00;
  undefined4 uVar18;
  size_t __n;
  ulong n_00;
  long in_FS_OFFSET;
  undefined8 uVar19;
  undefined8 uVar20;
  uintmax_t local_860;
  ulong local_840;
  char *local_820;
  time_t local_818;
  long local_810;
  mtop op;
  char pass_string [7];
  char previous_offset_buf [652];
  char offset_buf [652];
  char buf [21];
  
  n_00 = *sizep;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = getpagesize();
  if (type < 1) {
LAB_00103a80:
    local_840 = 0x10000;
    size_00 = 0x10002;
    uVar17 = 0x10002;
  }
  else {
    uVar14 = type & 0xfff;
    uVar16 = uVar14 << 0xc | uVar14;
    cVar13 = (char)(uVar16 >> 4);
    if (((char)(uVar16 >> 8) == cVar13) && (cVar13 == (char)uVar14)) goto LAB_00103a80;
    local_840 = 0xf000;
    size_00 = 0xf000;
    uVar17 = 0xf000;
  }
  __src = (undefined *)xalignalloc((long)iVar5,size_00);
  bVar2 = 0 < (long)n_00 && n_00 < local_840;
  if (0 >= (long)n_00 || n_00 >= local_840) {
    direct_mode(fd,true);
  }
  if ((st->st_mode & 0xf000) != 0x2000) {
LAB_001035fd:
    uVar19 = 0x103609;
    _Var6 = lseek(fd,0,0);
    if (_Var6 < 1) {
      if (_Var6 == 0) goto joined_r0x0010368c;
      piVar7 = __errno_location();
    }
    else {
      piVar7 = __errno_location();
      *piVar7 = 0x16;
    }
    uVar19 = dcgettext(0,"%s: cannot rewind",5);
    iVar5 = *piVar7;
LAB_00103639:
    error(0,iVar5,uVar19,qname);
LAB_00103645:
    rpl_free(__src);
    uVar14 = 0xffffffff;
LAB_0010364f:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar14;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  op.mt_op = 6;
  op.mt_count = 1;
  uVar19 = 0x103b68;
  iVar5 = ioctl(fd,0x40086d01,&op);
  if (iVar5 != 0) goto LAB_001035fd;
joined_r0x0010368c:
  if (type < 0) {
    pass_string._0_4_ = 0x646e6172;
    pass_string._4_2_ = 0x6d6f;
    pass_string[6] = '\0';
    goto joined_r0x00103ba2;
  }
  uVar14 = (type & 0xfffU) << 0xc | type & 0xfffU;
  uVar15 = (undefined)(uVar14 >> 4);
  uVar4 = (ushort)uVar14;
  if ((long)n_00 < 0) {
    *__src = uVar15;
    *(ushort *)(__src + 1) = uVar4 << 8 | uVar4 >> 8;
LAB_001036d4:
    __n = 3;
    do {
      uVar8 = __n * 2;
      uVar19 = 0x1036f3;
      memcpy(__src + __n,__src,__n);
      __n = uVar8;
    } while (uVar8 <= uVar17 >> 1);
  }
  else {
    *__src = uVar15;
    if (n_00 < uVar17) {
      uVar17 = n_00;
    }
    *(ushort *)(__src + 1) = uVar4 << 8 | uVar4 >> 8;
    if (5 < uVar17) goto LAB_001036d4;
    uVar8 = 3;
  }
  if (uVar8 < uVar17) {
    uVar19 = 0x103c33;
    memcpy(__src + uVar8,__src,uVar17 - uVar8);
    if ((type & 0x1000U) != 0) goto LAB_00103717;
  }
  else if (((type & 0x1000U) != 0) && (uVar17 != 0)) {
LAB_00103717:
    uVar8 = 0;
    do {
      __src[uVar8] = __src[uVar8] + -0x80;
      uVar8 = uVar8 + 0x200;
    } while (uVar8 < uVar17);
  }
  __sprintf_chk(pass_string,1,7,"%02x%02x%02x",*__src,__src[1],__src[2],uVar19);
joined_r0x00103ba2:
  if (n != 0) {
    uVar20 = 0x103bbb;
    uVar19 = dcgettext(0,"%s: pass %lu/%lu (%s)...",5);
    error(0,0,uVar19,qname,k,n,pass_string,uVar20);
    tVar12 = time((time_t *)0x0);
    local_810 = tVar12 + 5;
  }
  bVar3 = 0;
  local_820 = "";
  local_818 = 0;
  local_860 = 0;
LAB_00103794:
  do {
    size = local_840;
    if (((-1 < (long)n_00) && (uVar17 = n_00 - local_860, uVar17 < local_840)) &&
       (((long)n_00 < (long)local_860 || (size = uVar17, uVar17 == 0)))) {
      iVar5 = dosync(fd,qname);
      if (iVar5 == 0) {
        rpl_free(__src);
        uVar14 = (uint)bVar3;
      }
      else {
        piVar7 = __errno_location();
        if (*piVar7 != 5) goto LAB_00103645;
        rpl_free(__src);
        uVar14 = 1;
      }
      goto LAB_0010364f;
    }
    if (type < 0) {
      randread(s,__src,size);
    }
    uVar17 = 0;
LAB_001037ec:
    do {
      sVar9 = write(fd,__src + uVar17,size - uVar17);
      if (sVar9 < 1) {
        if ((long)n_00 < 0) {
          if (sVar9 != 0) {
            piVar7 = __errno_location();
            iVar5 = *piVar7;
            if (iVar5 != 0x1c) {
              if ((!bVar2) && (iVar5 == 0x16)) goto LAB_00103ad0;
              pcVar10 = umaxtostr(local_860 + uVar17,buf);
              uVar19 = dcgettext(0,"%s: error writing at offset %s",5);
              error(0,iVar5,uVar19,qname,pcVar10);
              goto LAB_00103645;
            }
          }
          if (0x7fffffffffffffff - local_860 < uVar17) goto LAB_00103d1e;
          n_00 = uVar17 + local_860;
          *sizep = n_00;
          local_860 = n_00;
          if (n != 0) goto LAB_00103cd5;
          goto LAB_00103794;
        }
        piVar7 = __errno_location();
        iVar5 = *piVar7;
        if ((iVar5 != 0x16) || (bVar2)) {
          pcVar10 = umaxtostr(local_860 + uVar17,buf);
          uVar19 = dcgettext(0,"%s: error writing at offset %s",5);
          error(0,iVar5,uVar19,qname,pcVar10);
          if ((iVar5 != 5) || (size <= (uVar17 | 0x1ff))) goto LAB_00103645;
          uVar17 = (uVar17 | 0x1ff) + 1;
          _Var6 = lseek(fd,local_860 + uVar17,0);
          if (_Var6 == -1) {
            uVar19 = dcgettext(0,"%s: lseek failed",5);
            error(0,*piVar7,uVar19,qname);
            goto LAB_00103645;
          }
          bVar3 = 1;
          if (size <= uVar17) break;
          goto LAB_001037ec;
        }
LAB_00103ad0:
        direct_mode(fd,false);
        bVar2 = true;
      }
      else {
        uVar17 = uVar17 + sVar9;
      }
    } while (uVar17 < size);
    if (0x7fffffffffffffff - local_860 < uVar17) goto LAB_00103d1e;
    local_860 = uVar17 + local_860;
  } while (n == 0);
  if (n_00 == local_860) {
LAB_00103cd5:
    if ((*local_820 == '\0') && (local_818 = time((time_t *)0x0), local_818 < local_810))
    goto LAB_00103794;
    pcVar10 = human_readable(local_860,offset_buf,0x1b2,1,1);
  }
  else {
    local_818 = time((time_t *)0x0);
    if (local_818 < local_810) goto LAB_00103794;
    pcVar10 = human_readable(local_860,offset_buf,0x1b2,1,1);
    iVar5 = strcmp(local_820,pcVar10);
    if (iVar5 == 0) goto LAB_00103794;
  }
  if ((long)n_00 < 0) {
    uVar19 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s",5);
    error(0,0,uVar19,qname,k,n,pass_string,pcVar10);
  }
  else {
    uVar18 = 100;
    if (n_00 != 0) {
      if (local_860 < 0x28f5c28f5c28f5d) {
        uVar18 = (undefined4)((local_860 * 100) / n_00);
      }
      else {
        uVar18 = (undefined4)
                 (local_860 /
                 (ulong)(((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)n_00) >> 0x40,0
                                       ) + n_00) >> 6) - ((long)n_00 >> 0x3f)));
      }
    }
    pcVar11 = human_readable(n_00,buf,0x1b0,1,1);
    if (n_00 == local_860) {
      pcVar10 = pcVar11;
    }
    uVar19 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s/%s %d%%",5);
    error(0,0,uVar19,qname,k,n,pass_string,pcVar10,pcVar11,uVar18);
  }
  local_820 = previous_offset_buf;
  __strcpy_chk(local_820,pcVar10,0x28c);
  local_810 = local_818 + 5;
  iVar5 = dosync(fd,qname);
  if (iVar5 != 0) {
    piVar7 = __errno_location();
    if (*piVar7 != 5) goto LAB_00103645;
    bVar3 = 1;
  }
  goto LAB_00103794;
LAB_00103d1e:
  uVar19 = dcgettext(0,"%s: file too large",5);
  iVar5 = 0;
  goto LAB_00103639;
}

