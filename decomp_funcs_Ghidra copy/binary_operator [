
uint binary_operator(byte param_1)

{
  char **ppcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  long in_FS_OFFSET;
  bool bVar12;
  stat local_188;
  stat local_f8;
  char local_68 [32];
  char local_48 [24];
  long local_30;
  
  ppcVar1 = argv;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pos + 1;
  if (param_1 != 0) {
    iVar5 = pos + 2;
    pos = pos + 1;
  }
  bVar11 = 0;
  if (iVar5 < argc + -2) {
    pcVar9 = argv[(long)iVar5 + 1];
    if (((*pcVar9 == '-') && (pcVar9[1] == 'l')) && (pcVar9[2] == '\0')) {
      bVar11 = 1;
      pos = iVar5;
    }
    else {
      bVar11 = 0;
    }
  }
  iVar6 = pos;
  pcVar9 = argv[iVar5];
  if (*pcVar9 != '-') {
    if ((*pcVar9 == '=') && ((pcVar9[1] == '\0' || ((pcVar9[1] == '=' && (pcVar9[2] == '\0')))))) {
      iVar5 = strcmp(argv[pos],argv[(long)pos + 2]);
      uVar10 = (uint)(iVar5 == 0);
      pos = iVar6 + 3;
    }
    else {
      if ((*pcVar9 != '!') || ((pcVar9[1] != '=' || (pcVar9[2] != '\0')))) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar5 = strcmp(argv[pos],argv[(long)pos + 2]);
      uVar10 = (uint)(iVar5 != 0);
      pos = iVar6 + 3;
    }
    goto LAB_00102e14;
  }
  cVar4 = pcVar9[1];
  if (((cVar4 == 'l') || (cVar4 == 'g')) && ((pcVar9[2] == 'e' || (pcVar9[2] == 't')))) {
    if (pcVar9[3] == '\0') {
LAB_00103006:
      if (param_1 == 0) {
        pcVar9 = find_int(argv[(long)iVar5 + -1]);
      }
      else {
        sVar7 = strlen(argv[(long)iVar5 + -1]);
        pcVar9 = umaxtostr(sVar7,local_68);
      }
      if (bVar11 == 0) {
        pcVar8 = find_int(argv[(long)iVar5 + 1]);
      }
      else {
        sVar7 = strlen(argv[(long)iVar5 + 2]);
        pcVar8 = umaxtostr(sVar7,local_48);
      }
      iVar6 = strintcmp(pcVar9,pcVar8);
      bVar12 = argv[iVar5][2] == 'e';
      cVar4 = argv[iVar5][1];
      pos = pos + 3;
      if (cVar4 == 'l') {
        uVar10 = (uint)(iVar6 < (int)(uint)bVar12);
      }
      else if (cVar4 == 'g') {
        uVar10 = (uint)((int)-(uint)bVar12 < iVar6);
      }
      else {
        uVar10 = (uint)((iVar6 != 0) == bVar12);
      }
      goto LAB_00102e14;
    }
LAB_00102e8d:
    if (cVar4 == 'o') {
      if ((pcVar9[2] != 't') || (pcVar9[3] != '\0')) goto LAB_00103198;
      pos = pos + 3;
      uVar10 = (uint)(bVar11 | param_1);
      if ((bVar11 | param_1) != 0) {
        pcVar9 = "-ot does not accept -l";
        goto LAB_00103271;
      }
      iVar6 = __xstat(1,argv[(long)iVar5 + -1],&local_f8);
      lVar3 = local_f8.st_mtim.tv_nsec;
      lVar2 = local_f8.st_mtim.tv_sec;
      if (iVar6 == 0) {
        iVar5 = __xstat(1,ppcVar1[(long)iVar5 + 1],&local_f8);
        if (iVar5 == 0) {
          uVar10 = ((uint)(local_f8.st_mtim.tv_nsec < lVar3) -
                   (uint)(lVar3 < local_f8.st_mtim.tv_nsec)) +
                   ((uint)(local_f8.st_mtim.tv_sec < lVar2) -
                   (uint)(lVar2 < local_f8.st_mtim.tv_sec)) * 2 >> 0x1f;
        }
      }
      else {
        iVar5 = __xstat(1,ppcVar1[(long)iVar5 + 1],&local_f8);
        uVar10 = (uint)(iVar5 == 0);
      }
      goto LAB_00102e14;
    }
    if ('o' < cVar4) goto LAB_00103198;
    if (cVar4 == 'e') {
      cVar4 = pcVar9[2];
      goto LAB_00102f5d;
    }
    if (cVar4 != 'n') goto LAB_00103198;
    cVar4 = pcVar9[2];
  }
  else {
    if (cVar4 == 'e') {
      cVar4 = pcVar9[2];
      if (cVar4 == 'q') {
LAB_0010318d:
        if (pcVar9[3] != '\0') goto LAB_00103198;
        goto LAB_00103006;
      }
LAB_00102f5d:
      if ((cVar4 != 'f') || (pcVar9[3] != '\0')) goto LAB_00103198;
      pos = pos + 3;
      uVar10 = (uint)(bVar11 | param_1);
      if ((bVar11 | param_1) != 0) {
        pcVar9 = "-ef does not accept -l";
        goto LAB_00103271;
      }
      iVar6 = __xstat(1,argv[(long)iVar5 + -1],&local_188);
      if (iVar6 == 0) {
        iVar5 = __xstat(1,ppcVar1[(long)iVar5 + 1],&local_f8);
        if ((iVar5 == 0) && (local_188.st_dev == local_f8.st_dev)) {
          uVar10 = (uint)(local_188.st_ino == local_f8.st_ino);
        }
      }
      goto LAB_00102e14;
    }
    if (cVar4 != 'n') goto LAB_00102e8d;
    cVar4 = pcVar9[2];
    if (cVar4 == 'e') goto LAB_0010318d;
  }
  if ((cVar4 != 't') || (pcVar9[3] != '\0')) {
LAB_00103198:
    pcVar9 = quote(pcVar9);
    pcVar8 = (char *)dcgettext(0,"%s: unknown binary operator",5);
                    /* WARNING: Subroutine does not return */
    test_syntax_error(pcVar8,pcVar9);
  }
  pos = pos + 3;
  uVar10 = (uint)(bVar11 | param_1);
  if ((bVar11 | param_1) != 0) {
    pcVar9 = "-nt does not accept -l";
LAB_00103271:
    pos = iVar6 + 3;
    pcVar9 = (char *)dcgettext(0,pcVar9,5);
                    /* WARNING: Subroutine does not return */
    test_syntax_error(pcVar9);
  }
  iVar6 = __xstat(1,argv[(long)iVar5 + -1],&local_f8);
  lVar3 = local_f8.st_mtim.tv_nsec;
  lVar2 = local_f8.st_mtim.tv_sec;
  if (iVar6 == 0) {
    uVar10 = 1;
    iVar5 = __xstat(1,ppcVar1[(long)iVar5 + 1],&local_f8);
    if (iVar5 == 0) {
      uVar10 = (uint)(0 < (int)(((uint)(local_f8.st_mtim.tv_nsec < lVar3) -
                                (uint)(lVar3 < local_f8.st_mtim.tv_nsec)) +
                               ((uint)(local_f8.st_mtim.tv_sec < lVar2) -
                               (uint)(lVar2 < local_f8.st_mtim.tv_sec)) * 2));
    }
  }
  else {
    __xstat(1,ppcVar1[(long)iVar5 + 1],&local_f8);
  }
LAB_00102e14:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

