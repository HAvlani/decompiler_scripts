
/* WARNING: Could not reconcile some variable overlaps */

_Bool make_dir_parents(char *dir,savewd_conflict *wd,
                      anon_subr_int_char_ptr_char_ptr_void_ptr *make_ancestor,void *options,
                      mode_t mode,anon_subr_void_char_ptr_void_ptr *announce,mode_t mode_bits,
                      uid_t owner,gid_t group,_Bool preserve_existing)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ptrdiff_t pVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  mode_t local_f0;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar8 = dir;
  if ((*dir == '/') || (wd->state != ERROR_STATE)) {
    if (make_ancestor == (anon_subr_int_char_ptr_char_ptr_void_ptr *)0x0) {
LAB_00103496:
      if ((owner & group) == 0xffffffff) {
        if ((mode_bits & 0xc00 | mode & 0x200) != 0) {
          uVar3 = 0xffffffed;
          goto LAB_001034d2;
        }
        iVar4 = mkdir(pcVar8,mode);
        if (iVar4 != 0) goto LAB_001034f3;
        (*announce)(dir,options);
        if ((mode_bits & mode & 0x1ff) == 0) goto LAB_001035fd;
        iVar5 = 3;
        local_f0 = mode;
      }
      else {
        uVar3 = 0xffffffc0;
LAB_001034d2:
        local_f0 = mode & uVar3;
        iVar4 = mkdir(pcVar8,local_f0);
        if (iVar4 == 0) {
          (*announce)(dir,options);
          iVar5 = 3;
        }
        else {
LAB_001034f3:
          piVar7 = __errno_location();
          iVar4 = *piVar7;
          if (preserve_existing != false) {
            if (iVar4 != 0) {
              bVar2 = iVar4 != 2 && make_ancestor != (anon_subr_int_char_ptr_char_ptr_void_ptr *)0x0
              ;
              if (bVar2) {
                iVar5 = __xstat(1,pcVar8,(stat *)&st);
                if (iVar5 == 0) {
                  if ((st.st_mode & 0xf000) == 0x4000) goto LAB_0010355c;
                }
                else if (((iVar4 == 0x11) && (*piVar7 != 2)) && (*piVar7 != 0x14)) {
                  pcVar8 = quote(dir);
                  uVar9 = dcgettext(0,"cannot stat %s",5);
                  bVar2 = false;
                  error(0,*piVar7,uVar9,pcVar8);
                  goto LAB_0010355c;
                }
              }
              goto LAB_00103529;
            }
            goto LAB_001035fd;
          }
          local_f0 = 0xffffffff;
          iVar5 = 2;
        }
      }
      iVar5 = savewd_chdir((savewd_conflict1 *)wd,pcVar8,iVar5,(int *)&st);
      if (-2 < iVar5) {
        if (iVar5 == 0) {
          pcVar8 = ".";
        }
        iVar5 = dirchownmod((int)st.st_dev,pcVar8,local_f0,owner,group,mode,mode_bits);
        if (iVar5 != 0) {
          if (iVar4 == 0) {
            piVar7 = __errno_location();
          }
          else if (((iVar4 == 2) ||
                   (make_ancestor == (anon_subr_int_char_ptr_char_ptr_void_ptr *)0x0)) ||
                  (piVar7 = __errno_location(), *piVar7 == 0x14)) goto LAB_00103529;
          pcVar8 = quote(dir);
          pcVar10 = "cannot change permissions of %s";
          if ((owner & group) != 0xffffffff) {
            pcVar10 = "cannot change owner and permissions of %s";
          }
          uVar9 = dcgettext(0,pcVar10,5);
          bVar2 = false;
          error(0,*piVar7,uVar9,pcVar8);
          goto LAB_0010355c;
        }
      }
    }
    else {
LAB_0010346d:
      pVar6 = mkancesdirs(dir,(savewd_conflict2 *)wd,make_ancestor,options);
      if (-1 < pVar6) {
        pcVar8 = dir + pVar6;
        goto LAB_00103496;
      }
      if (pVar6 == -1) {
        piVar7 = __errno_location();
        iVar4 = *piVar7;
        goto LAB_00103529;
      }
    }
LAB_001035fd:
    bVar2 = true;
  }
  else {
    iVar4 = wd->val;
    if (iVar4 == 0) {
      if (make_ancestor != (anon_subr_int_char_ptr_char_ptr_void_ptr *)0x0) goto LAB_0010346d;
      goto LAB_00103496;
    }
LAB_00103529:
    pcVar8 = quote(dir);
    uVar9 = dcgettext(0,"cannot create directory %s",5);
    bVar2 = false;
    error(0,iVar4,uVar9,pcVar8);
  }
LAB_0010355c:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}

