
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_uptime(size_t n,STRUCT_UTMP *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  FILE *__stream;
  char *pcVar5;
  long lVar6;
  tm *tp;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  _IO_FILE *p_Var10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  double dVar13;
  time_t time_now;
  double avg [3];
  char buf [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = n - 1;
  __stream = fopen("/proc/uptime","r");
  if (__stream == (FILE *)0x0) {
LAB_00102b97:
    lVar6 = 0;
    if (n == 0) {
      time_now = time((time_t *)0x0);
      goto LAB_00102f10;
    }
LAB_00102ba3:
    lVar12 = 0;
    lVar11 = 0;
    do {
      if ((this->ut_user[0] == '\0') || (this->ut_type != 7)) {
        if (this->ut_type == 2) {
          lVar12 = (long)(this->ut_tv).tv_sec;
        }
      }
      else {
        lVar11 = lVar11 + 1;
      }
      lVar9 = lVar9 + -1;
      this = this + 1;
    } while (lVar9 != -1);
    time_now = time((time_t *)0x0);
    if ((lVar6 == 0) && (lVar6 = time_now - lVar12, lVar12 == 0)) goto LAB_00102f10;
LAB_00102c0d:
    uVar2 = (lVar6 % 0x15180) / 0xe10;
    uVar3 = (lVar6 % 0x15180 - (long)((int)uVar2 * 0xe10)) / 0x3c;
    tp = localtime(&time_now);
    if (tp == (tm *)0x0) {
      uVar7 = dcgettext(0," ??:????  ",5);
      __printf_chk(1,uVar7);
    }
    else {
      pcVar5 = (char *)dcgettext(0," %H:%M:%S  ",5);
      fprintftime((FILE *)stdout,pcVar5,(tm *)tp,(timezone_t)0x0,0);
    }
    if (lVar6 == -1) {
      uVar7 = dcgettext(0,"up ???? days ??:??,  ",5);
      __printf_chk(1,uVar7);
    }
    else if (lVar6 < 0x15180) {
      uVar7 = dcgettext(0,"up  %2d:%02d,  ",5);
      __printf_chk(1,uVar7,uVar2 & 0xffffffff,uVar3 & 0xffffffff);
    }
    else {
      uVar7 = dcngettext(0,"up %ld day %2d:%02d,  ","up %ld days %2d:%02d,  ",lVar6 / 0x15180,5);
      __printf_chk(1,uVar7,lVar6 / 0x15180,uVar2 & 0xffffffff,uVar3 & 0xffffffff);
    }
    uVar7 = dcngettext(0,"%lu user","%lu users",lVar11,5);
    __printf_chk(1,uVar7,lVar11);
    iVar4 = getloadavg(avg,3);
    if (iVar4 != -1) {
      if (0 < iVar4) {
        uVar7 = dcgettext(0,",  load average: %.2f",5);
        __printf_chk(avg[0],1,uVar7);
      }
      if (iVar4 < 2) {
        if (iVar4 != 1) goto LAB_00102d90;
      }
      else {
        __printf_chk(avg[1],1,", %.2f");
        if (iVar4 != 2) {
          __printf_chk(avg[2],1,", %.2f");
        }
      }
    }
    pcVar5 = stdout->_IO_write_ptr;
    p_Var10 = stdout;
    if (pcVar5 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar5 + 1;
      *pcVar5 = '\n';
      goto LAB_00102d90;
    }
  }
  else {
    pcVar5 = fgets_unlocked(buf,0x2000,__stream);
    if ((pcVar5 != buf) ||
       (dVar13 = c_strtod(pcVar5,(char **)&time_now), (char *)time_now == pcVar5)) {
      rpl_fclose((FILE *)__stream);
      goto LAB_00102b97;
    }
    if ((dVar13 < _DAT_001094a0) || (DAT_001094a8 <= dVar13)) {
      rpl_fclose((FILE *)__stream);
      if (n != 0) {
        lVar6 = -1;
        goto LAB_00102ba3;
      }
      lVar6 = -1;
      time_now = time((time_t *)0x0);
LAB_00102efc:
      lVar11 = 0;
      goto LAB_00102c0d;
    }
    lVar6 = (long)dVar13;
    rpl_fclose((FILE *)__stream);
    if (n != 0) goto LAB_00102ba3;
    time_now = time((time_t *)0x0);
    if (lVar6 != 0) goto LAB_00102efc;
LAB_00102f10:
    uVar7 = dcgettext(0,"couldn\'t get boot time",5);
    piVar8 = __errno_location();
    p_Var10 = (_IO_FILE *)0x1;
    error(1,*piVar8,uVar7);
  }
  __overflow(p_Var10,10);
LAB_00102d90:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

