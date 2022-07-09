
void merge(sortfile *files,size_t ntemps,size_t nfiles,char *output_file)

{
  long lVar1;
  byte *__s2;
  int iVar2;
  tempnode *ptVar3;
  size_t sVar4;
  stat *psVar5;
  FILE *ofp;
  int *piVar6;
  char *pcVar7;
  char *message;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  sortfile *psVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  sortfile *__dest;
  long in_FS_OFFSET;
  size_t local_110;
  ulong local_108;
  FILE **fps;
  FILE *tfp;
  stat instat;
  
  uVar14 = (ulong)nmerge;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = nfiles;
  if (uVar14 < nfiles) {
    do {
      uVar15 = 0;
      lVar11 = 0;
      if (local_108 < uVar14) {
        uVar8 = 0;
        uVar9 = uVar14;
        uVar13 = local_108;
        psVar12 = files;
        __dest = files;
      }
      else {
        do {
          ptVar3 = maybe_create_temp(&tfp,false);
          uVar9 = (ulong)nmerge;
          uVar14 = ntemps;
          if (uVar9 <= ntemps) {
            uVar14 = uVar9;
          }
          sVar4 = mergefiles(files + lVar11,uVar14,uVar9,tfp,&ptVar3->field_0xd);
          uVar9 = (ulong)nmerge;
          uVar14 = ntemps;
          if (sVar4 <= ntemps) {
            uVar14 = sVar4;
          }
          lVar11 = lVar11 + sVar4;
          ntemps = ntemps - uVar14;
          uVar14 = uVar15 + 1;
          files[uVar15].name = &ptVar3->field_0xd;
          files[uVar15].temp = ptVar3;
          uVar15 = uVar14;
        } while (uVar9 <= local_108 - lVar11);
        uVar8 = uVar14 % uVar9;
        uVar14 = uVar9 - uVar8;
        uVar13 = local_108 - lVar11;
        psVar12 = files + lVar11;
        __dest = files + uVar14;
      }
      if (uVar14 < uVar13) {
        uVar9 = (uVar13 + 1 + uVar8) - uVar9;
        ptVar3 = maybe_create_temp(&tfp,false);
        uVar14 = ntemps;
        if (uVar9 <= ntemps) {
          uVar14 = uVar9;
        }
        sVar4 = mergefiles(psVar12,uVar14,uVar9,tfp,&ptVar3->field_0xd);
        uVar14 = ntemps;
        if (sVar4 <= ntemps) {
          uVar14 = sVar4;
        }
        uVar15 = uVar15 + 1;
        lVar11 = lVar11 + sVar4;
        __dest->name = &ptVar3->field_0xd;
        __dest->temp = ptVar3;
        ntemps = ntemps - uVar14;
        psVar12 = files + lVar11;
        __dest = files + uVar15;
      }
      ntemps = ntemps + uVar15;
      memmove(__dest,psVar12,(local_108 - lVar11) * 0x10);
      uVar14 = (ulong)nmerge;
      local_108 = local_108 + (uVar15 - lVar11);
    } while (uVar14 < local_108);
  }
  if (ntemps < local_108) {
    ptVar3 = (tempnode *)0x0;
    psVar12 = files + ntemps;
    uVar14 = ntemps;
LAB_0010afbd:
    do {
      __s2 = (byte *)psVar12->name;
      uVar10 = *__s2 - 0x2d;
      if (uVar10 == 0) {
        uVar10 = (uint)__s2[1];
      }
      if ((output_file == (char *)0x0) || (iVar2 = strcmp(output_file,(char *)__s2), iVar2 != 0)) {
        psVar5 = get_outstatus();
        if (psVar5 == (stat *)0x0) break;
        if (uVar10 == 0) goto LAB_0010af89;
        iVar2 = __xstat(1,psVar12->name,(stat *)&instat);
        if ((iVar2 == 0) && (instat.st_ino == psVar5->st_ino)) goto LAB_0010b012;
      }
      else {
        if (uVar10 != 0) {
LAB_0010b01d:
          pcVar7 = &ptVar3->field_0xd;
          if (ptVar3 == (tempnode *)0x0) {
            ptVar3 = maybe_create_temp(&tfp,false);
            pcVar7 = &ptVar3->field_0xd;
            mergefiles(psVar12,0,1,tfp,pcVar7);
          }
          psVar12->name = pcVar7;
          uVar14 = uVar14 + 1;
          psVar12->temp = ptVar3;
          psVar12 = psVar12 + 1;
          if (local_108 == uVar14) break;
          goto LAB_0010afbd;
        }
        psVar5 = get_outstatus();
        if (psVar5 == (stat *)0x0) break;
LAB_0010af89:
        iVar2 = __fxstat(1,0,(stat *)&instat);
        if ((iVar2 == 0) && (instat.st_ino == psVar5->st_ino)) {
LAB_0010b012:
          if (instat.st_dev == psVar5->st_dev) goto LAB_0010b01d;
        }
      }
      uVar14 = uVar14 + 1;
      psVar12 = psVar12 + 1;
    } while (local_108 != uVar14);
  }
  local_110 = ntemps;
  do {
    sVar4 = open_input_files(files,local_108,&fps);
    if (local_108 == sVar4) {
      ofp = stream_open(output_file,"w");
      if (ofp != (FILE *)0x0) {
        mergefps(files,local_110,local_108,ofp,output_file,fps);
        if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar6 = __errno_location();
      if ((*piVar6 != 0x18) || (local_108 < 3)) {
        pcVar7 = (char *)dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
        sort_die(pcVar7,output_file);
      }
    }
    else if (sVar4 < 3) {
      pcVar7 = files[sVar4].name;
      message = (char *)dcgettext(0,"open failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(message,pcVar7);
    }
    uVar14 = sVar4 - 1;
    psVar12 = files + uVar14;
    while( true ) {
      xfclose(fps[uVar14],psVar12->name);
      ptVar3 = maybe_create_temp(&tfp,2 < uVar14);
      if (ptVar3 != (tempnode *)0x0) break;
      uVar14 = uVar14 - 1;
      psVar12 = psVar12 + -1;
    }
    sVar4 = local_110;
    if (uVar14 < local_110) {
      sVar4 = uVar14;
    }
    lVar11 = local_108 - uVar14;
    mergefps(files,sVar4,uVar14,tfp,&ptVar3->field_0xd,fps);
    local_108 = lVar11 + 1;
    files->name = &ptVar3->field_0xd;
    files->temp = ptVar3;
    memmove(files + 1,psVar12,lVar11 * 0x10);
    local_110 = (local_110 - sVar4) + 1;
  } while( true );
}

