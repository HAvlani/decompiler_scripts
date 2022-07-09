
void print_stuff(char *pw_name)

{
  FILE *pFVar1;
  _Bool _Var2;
  int iVar3;
  char *pcVar4;
  passwd *ppVar5;
  group *pgVar6;
  undefined8 uVar7;
  int *piVar8;
  uid_t __uid;
  long lVar9;
  __gid_t gid;
  gid_t gid_00;
  long in_FS_OFFSET;
  gid_t *groups;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (just_user == false) {
    if (just_group == false) {
      if (just_group_list == false) {
        pcVar4 = umaxtostr((ulong)ruid,buf_7440);
        uVar7 = dcgettext(0,"uid=%s",5);
        __printf_chk(1,uVar7,pcVar4);
        ppVar5 = getpwuid(ruid);
        if (ppVar5 != (passwd *)0x0) {
          __printf_chk(1,&DAT_001085a6,ppVar5->pw_name);
        }
        pcVar4 = umaxtostr((ulong)rgid,buf_7436);
        uVar7 = dcgettext(0," gid=%s",5);
        __printf_chk(1,uVar7,pcVar4);
        pgVar6 = getgrgid(rgid);
        if (pgVar6 != (group *)0x0) {
          __printf_chk(1,&DAT_001085a6,pgVar6->gr_name);
        }
        if (euid != ruid) {
          pcVar4 = umaxtostr((ulong)euid,buf_7440);
          uVar7 = dcgettext(0," euid=%s",5);
          __printf_chk(1,uVar7,pcVar4);
          ppVar5 = getpwuid(euid);
          if (ppVar5 != (passwd *)0x0) {
            __printf_chk(1,&DAT_001085a6,ppVar5->pw_name);
          }
        }
        if (egid != rgid) {
          pcVar4 = umaxtostr((ulong)egid,buf_7436);
          uVar7 = dcgettext(0," egid=%s",5);
          __printf_chk(1,uVar7,pcVar4);
          pgVar6 = getgrgid(egid);
          if (pgVar6 != (group *)0x0) {
            __printf_chk(1,&DAT_001085a6,pgVar6->gr_name);
          }
        }
        if (pw_name == (char *)0x0) {
          iVar3 = xgetgroups((char *)0x0,egid,&groups);
          if (iVar3 < 0) {
            uVar7 = dcgettext(0,"failed to get groups for the current process",5);
            piVar8 = __errno_location();
            error(0,*piVar8,uVar7);
            goto LAB_00103243;
          }
        }
        else {
          gid = 0xffffffff;
          if (ppVar5 != (passwd *)0x0) {
            gid = ppVar5->pw_gid;
          }
          iVar3 = xgetgroups(pw_name,gid,&groups);
          if (iVar3 < 0) {
            pcVar4 = quote(pw_name);
            uVar7 = dcgettext(0,"failed to get groups for user %s",5);
            piVar8 = __errno_location();
            error(0,*piVar8,uVar7,pcVar4);
LAB_00103243:
            ok = false;
            goto LAB_00102ea7;
          }
        }
        pFVar1 = stdout;
        if (iVar3 != 0) {
          pcVar4 = (char *)dcgettext(0," groups=",5);
          lVar9 = 0;
          fputs_unlocked(pcVar4,pFVar1);
          while( true ) {
            pFVar1 = stdout;
            pcVar4 = umaxtostr((ulong)*(uint *)((long)groups + lVar9),buf_7436);
            fputs_unlocked(pcVar4,pFVar1);
            pgVar6 = getgrgid(*(__gid_t *)((long)groups + lVar9));
            if (pgVar6 != (group *)0x0) {
              __printf_chk(1,&DAT_001085a6,pgVar6->gr_name);
            }
            if (lVar9 == (ulong)(iVar3 - 1) << 2) break;
            pcVar4 = stdout->_IO_write_ptr;
            if (pcVar4 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = pcVar4 + 1;
              *pcVar4 = ',';
            }
            else {
              __overflow(stdout,0x2c);
            }
            lVar9 = lVar9 + 4;
          }
        }
        rpl_free(groups);
      }
      else {
        _Var2 = print_group_list(pw_name,ruid,rgid,egid,use_name,(opt_zero == false) << 5);
        ok = (_Bool)(ok & _Var2);
      }
    }
    else {
      gid_00 = egid;
      if (use_real != false) {
        gid_00 = rgid;
      }
      _Var2 = print_group(gid_00,use_name);
      ok = (_Bool)(ok & _Var2);
    }
  }
  else {
    __uid = euid;
    if (use_real != false) {
      __uid = ruid;
    }
    if (use_name == false) {
LAB_00102e89:
      pcVar4 = umaxtostr((ulong)__uid,buf_7440);
    }
    else {
      ppVar5 = getpwuid(__uid);
      if (ppVar5 == (passwd *)0x0) {
        pcVar4 = umaxtostr((ulong)__uid,buf_7440);
        uVar7 = dcgettext(0,"cannot find name for user ID %s",5);
        error(0,0,uVar7,pcVar4);
        ok = false;
        goto LAB_00102e89;
      }
      pcVar4 = ppVar5->pw_name;
    }
    fputs_unlocked(pcVar4,stdout);
  }
LAB_00102ea7:
  pcVar4 = stdout->_IO_write_ptr;
  if (opt_zero == false) {
    iVar3 = 10;
  }
  else {
    if ((just_group_list != false) && (multiple_users != false)) {
      if (pcVar4 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar4 + 1;
        *pcVar4 = '\0';
      }
      else {
        __overflow(stdout,0);
      }
      pcVar4 = stdout->_IO_write_ptr;
      if (pcVar4 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar4 + 1;
        *pcVar4 = '\0';
      }
      else {
        __overflow(stdout,0);
      }
      goto LAB_00102eef;
    }
    iVar3 = 0;
  }
  if (pcVar4 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar4 + 1;
    *pcVar4 = (char)iVar3;
  }
  else {
    __overflow(stdout,iVar3);
  }
LAB_00102eef:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

