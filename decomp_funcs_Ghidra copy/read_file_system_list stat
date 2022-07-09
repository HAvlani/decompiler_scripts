
mount_entry * read_file_system_list(_Bool need_fs_type)

{
  undefined *puVar1;
  int iVar2;
  FILE *__stream;
  __ssize_t _Var3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  mount_entry *pmVar8;
  byte *pbVar9;
  ulong uVar10;
  char **ppcVar11;
  mount_entry *pmVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  char *pcVar19;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  mount_entry **local_80;
  uint devmaj;
  uint devmin;
  int mntroot_s;
  mount_entry *mount_list;
  char *line;
  size_t buf_size;
  long local_40;
  
  bVar24 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen("/proc/self/mountinfo","re");
  if (__stream == (FILE *)0x0) {
    pmVar8 = (mount_entry *)setmntent("/etc/mtab","r");
    if (pmVar8 == (mount_entry *)0x0) goto LAB_00106fee;
    local_80 = &mount_list;
    ppcVar11 = (char **)getmntent(pmVar8);
    while (ppcVar11 != (char **)0x0) {
      lVar14 = hasmntopt(ppcVar11,&DAT_00111ce4);
      pmVar12 = (mount_entry *)xmalloc(0x38);
      pcVar19 = xstrdup(*ppcVar11);
      pcVar4 = ppcVar11[1];
      pmVar12->me_devname = pcVar19;
      pcVar19 = xstrdup(pcVar4);
      pmVar12->me_mntroot = (char *)0x0;
      pcVar4 = ppcVar11[2];
      bVar23 = true;
      pmVar12->me_mountdir = pcVar19;
      pbVar9 = (byte *)xstrdup(pcVar4);
      lVar15 = 7;
      puVar1 = &pmVar12->field_0x28;
      bVar20 = false;
      *puVar1 = *puVar1 | 4;
      bVar22 = *puVar1 == '\0';
      pmVar12->me_type = (char *)pbVar9;
      pbVar16 = pbVar9;
      pbVar17 = (byte *)"autofs";
      do {
        if (lVar15 == 0) break;
        lVar15 = lVar15 + -1;
        bVar20 = *pbVar16 < *pbVar17;
        bVar22 = *pbVar16 == *pbVar17;
        pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
      } while (bVar22);
      bVar21 = false;
      bVar20 = (!bVar20 && !bVar22) == bVar20;
      if (!bVar20) {
        lVar15 = 5;
        pbVar16 = pbVar9;
        pbVar17 = &DAT_001114a1;
        do {
          if (lVar15 == 0) break;
          lVar15 = lVar15 + -1;
          bVar21 = *pbVar16 < *pbVar17;
          bVar20 = *pbVar16 == *pbVar17;
          pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
          pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
        } while (bVar20);
        bVar22 = false;
        bVar20 = (!bVar21 && !bVar20) == bVar21;
        if (!bVar20) {
          lVar15 = 6;
          pbVar16 = pbVar9;
          pbVar17 = (byte *)"subfs";
          do {
            if (lVar15 == 0) break;
            lVar15 = lVar15 + -1;
            bVar22 = *pbVar16 < *pbVar17;
            bVar20 = *pbVar16 == *pbVar17;
            pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
            pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
          } while (bVar20);
          bVar21 = false;
          bVar20 = (!bVar22 && !bVar20) == bVar22;
          if (!bVar20) {
            lVar15 = 8;
            pbVar16 = pbVar9;
            pbVar17 = (byte *)"debugfs";
            do {
              if (lVar15 == 0) break;
              lVar15 = lVar15 + -1;
              bVar21 = *pbVar16 < *pbVar17;
              bVar20 = *pbVar16 == *pbVar17;
              pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
              pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
            } while (bVar20);
            bVar22 = false;
            bVar20 = (!bVar21 && !bVar20) == bVar21;
            if (!bVar20) {
              lVar15 = 7;
              pbVar16 = pbVar9;
              pbVar17 = (byte *)"devpts";
              do {
                if (lVar15 == 0) break;
                lVar15 = lVar15 + -1;
                bVar22 = *pbVar16 < *pbVar17;
                bVar20 = *pbVar16 == *pbVar17;
                pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
              } while (bVar20);
              bVar21 = false;
              bVar20 = (!bVar22 && !bVar20) == bVar22;
              if (!bVar20) {
                lVar15 = 8;
                pbVar16 = pbVar9;
                pbVar17 = (byte *)"fusectl";
                do {
                  if (lVar15 == 0) break;
                  lVar15 = lVar15 + -1;
                  bVar21 = *pbVar16 < *pbVar17;
                  bVar20 = *pbVar16 == *pbVar17;
                  pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                  pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                } while (bVar20);
                bVar22 = false;
                bVar20 = (!bVar21 && !bVar20) == bVar21;
                if (!bVar20) {
                  lVar15 = 0xc;
                  pbVar16 = pbVar9;
                  pbVar17 = (byte *)"fuse.portal";
                  do {
                    if (lVar15 == 0) break;
                    lVar15 = lVar15 + -1;
                    bVar22 = *pbVar16 < *pbVar17;
                    bVar20 = *pbVar16 == *pbVar17;
                    pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                    pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                  } while (bVar20);
                  bVar21 = false;
                  bVar20 = (!bVar22 && !bVar20) == bVar22;
                  if (!bVar20) {
                    lVar15 = 7;
                    pbVar16 = pbVar9;
                    pbVar17 = (byte *)"mqueue";
                    do {
                      if (lVar15 == 0) break;
                      lVar15 = lVar15 + -1;
                      bVar21 = *pbVar16 < *pbVar17;
                      bVar20 = *pbVar16 == *pbVar17;
                      pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                      pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                    } while (bVar20);
                    bVar22 = false;
                    bVar20 = (!bVar21 && !bVar20) == bVar21;
                    if (!bVar20) {
                      lVar15 = 0xb;
                      pbVar16 = pbVar9;
                      pbVar17 = (byte *)"rpc_pipefs";
                      do {
                        if (lVar15 == 0) break;
                        lVar15 = lVar15 + -1;
                        bVar22 = *pbVar16 < *pbVar17;
                        bVar20 = *pbVar16 == *pbVar17;
                        pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                        pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                      } while (bVar20);
                      bVar21 = false;
                      bVar20 = (!bVar22 && !bVar20) == bVar22;
                      if (!bVar20) {
                        lVar15 = 6;
                        pbVar16 = pbVar9;
                        pbVar17 = (byte *)"sysfs";
                        do {
                          if (lVar15 == 0) break;
                          lVar15 = lVar15 + -1;
                          bVar21 = *pbVar16 < *pbVar17;
                          bVar20 = *pbVar16 == *pbVar17;
                          pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                          pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                        } while (bVar20);
                        bVar22 = false;
                        bVar20 = (!bVar21 && !bVar20) == bVar21;
                        if (!bVar20) {
                          lVar15 = 6;
                          pbVar16 = pbVar9;
                          pbVar17 = (byte *)"devfs";
                          do {
                            if (lVar15 == 0) break;
                            lVar15 = lVar15 + -1;
                            bVar22 = *pbVar16 < *pbVar17;
                            bVar20 = *pbVar16 == *pbVar17;
                            pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                            pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                          } while (bVar20);
                          if ((((!bVar22 && !bVar20) != bVar22) &&
                              (iVar2 = strcmp((char *)pbVar9,"kernfs"), iVar2 != 0)) &&
                             (iVar2 = strcmp((char *)pbVar9,"ignore"), iVar2 != 0)) {
                            iVar2 = strcmp((char *)pbVar9,"none");
                            bVar23 = lVar14 == 0 && iVar2 == 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pbVar16 = (byte *)pmVar12->me_devname;
      pmVar12->field_0x28 = pmVar12->field_0x28 & 0xfe | bVar23;
      pcVar4 = strchr((char *)pbVar16,0x3a);
      bVar23 = true;
      if (pcVar4 == (char *)0x0) {
        bVar20 = *pbVar16 < 0x2f;
        bVar22 = *pbVar16 == 0x2f;
        if (bVar22) {
          bVar20 = pbVar16[1] < 0x2f;
          bVar22 = pbVar16[1] == 0x2f;
          if (bVar22) {
            lVar14 = 6;
            pbVar17 = pbVar9;
            pbVar18 = (byte *)"smbfs";
            do {
              if (lVar14 == 0) break;
              lVar14 = lVar14 + -1;
              bVar20 = *pbVar17 < *pbVar18;
              bVar22 = *pbVar17 == *pbVar18;
              pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
              pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
            } while (bVar22);
            bVar21 = false;
            bVar20 = (!bVar20 && !bVar22) == bVar20;
            if (!bVar20) {
              lVar14 = 5;
              pbVar17 = pbVar9;
              pbVar18 = &DAT_00111cc3;
              do {
                if (lVar14 == 0) break;
                lVar14 = lVar14 + -1;
                bVar21 = *pbVar17 < *pbVar18;
                bVar20 = *pbVar17 == *pbVar18;
                pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
              } while (bVar20);
              bVar22 = false;
              bVar21 = (!bVar21 && !bVar20) == bVar21;
              if (!bVar21) {
                lVar14 = 5;
                pbVar17 = pbVar9;
                pbVar18 = &DAT_001113ea;
                do {
                  if (lVar14 == 0) break;
                  lVar14 = lVar14 + -1;
                  bVar22 = *pbVar17 < *pbVar18;
                  bVar21 = *pbVar17 == *pbVar18;
                  pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                  pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                } while (bVar21);
                bVar20 = false;
                bVar22 = (!bVar22 && !bVar21) == bVar22;
                if (!bVar22) goto LAB_001075d2;
              }
            }
            goto LAB_00107530;
          }
        }
LAB_001075d2:
        lVar14 = 5;
        bVar23 = true;
        pbVar17 = pbVar9;
        pbVar18 = &DAT_00111317;
        do {
          if (lVar14 == 0) break;
          lVar14 = lVar14 + -1;
          bVar20 = *pbVar17 < *pbVar18;
          bVar22 = *pbVar17 == *pbVar18;
          pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
          pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
        } while (bVar22);
        bVar21 = false;
        bVar20 = (!bVar20 && !bVar22) == bVar20;
        if (!bVar20) {
          lVar14 = 4;
          pbVar17 = pbVar9;
          pbVar18 = &DAT_0011147f;
          do {
            if (lVar14 == 0) break;
            lVar14 = lVar14 + -1;
            bVar21 = *pbVar17 < *pbVar18;
            bVar20 = *pbVar17 == *pbVar18;
            pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
            pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
          } while (bVar20);
          bVar22 = false;
          bVar20 = (!bVar21 && !bVar20) == bVar21;
          if (!bVar20) {
            lVar14 = 5;
            pbVar17 = pbVar9;
            pbVar18 = &DAT_00111497;
            do {
              if (lVar14 == 0) break;
              lVar14 = lVar14 + -1;
              bVar22 = *pbVar17 < *pbVar18;
              bVar20 = *pbVar17 == *pbVar18;
              pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
              pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
            } while (bVar20);
            bVar21 = false;
            bVar20 = (!bVar22 && !bVar20) == bVar22;
            if (!bVar20) {
              lVar14 = 0xb;
              pbVar17 = pbVar9;
              pbVar18 = (byte *)"auristorfs";
              do {
                if (lVar14 == 0) break;
                lVar14 = lVar14 + -1;
                bVar21 = *pbVar17 < *pbVar18;
                bVar20 = *pbVar17 == *pbVar18;
                pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
              } while (bVar20);
              bVar22 = false;
              bVar20 = (!bVar21 && !bVar20) == bVar21;
              if (!bVar20) {
                lVar14 = 6;
                pbVar17 = pbVar9;
                pbVar18 = (byte *)"fhgfs";
                do {
                  if (lVar14 == 0) break;
                  lVar14 = lVar14 + -1;
                  bVar22 = *pbVar17 < *pbVar18;
                  bVar20 = *pbVar17 == *pbVar18;
                  pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                  pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                } while (bVar20);
                bVar21 = false;
                bVar20 = (!bVar22 && !bVar20) == bVar22;
                if (!bVar20) {
                  lVar14 = 5;
                  pbVar17 = pbVar9;
                  pbVar18 = &DAT_0011149c;
                  do {
                    if (lVar14 == 0) break;
                    lVar14 = lVar14 + -1;
                    bVar21 = *pbVar17 < *pbVar18;
                    bVar20 = *pbVar17 == *pbVar18;
                    pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                    pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                  } while (bVar20);
                  bVar22 = false;
                  bVar20 = (!bVar21 && !bVar20) == bVar21;
                  if (!bVar20) {
                    lVar14 = 6;
                    pbVar17 = pbVar9;
                    pbVar18 = (byte *)"ibrix";
                    do {
                      if (lVar14 == 0) break;
                      lVar14 = lVar14 + -1;
                      bVar22 = *pbVar17 < *pbVar18;
                      bVar20 = *pbVar17 == *pbVar18;
                      pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                      pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                    } while (bVar20);
                    bVar21 = false;
                    bVar20 = (!bVar22 && !bVar20) == bVar22;
                    if (!bVar20) {
                      lVar14 = 6;
                      pbVar17 = pbVar9;
                      pbVar18 = (byte *)"ocfs2";
                      do {
                        if (lVar14 == 0) break;
                        lVar14 = lVar14 + -1;
                        bVar21 = *pbVar17 < *pbVar18;
                        bVar20 = *pbVar17 == *pbVar18;
                        pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                        pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                      } while (bVar20);
                      bVar22 = false;
                      bVar20 = (!bVar21 && !bVar20) == bVar21;
                      if (!bVar20) {
                        lVar14 = 5;
                        pbVar17 = &DAT_001114c6;
                        do {
                          if (lVar14 == 0) break;
                          lVar14 = lVar14 + -1;
                          bVar22 = *pbVar9 < *pbVar17;
                          bVar20 = *pbVar9 == *pbVar17;
                          pbVar9 = pbVar9 + (ulong)bVar24 * -2 + 1;
                          pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                        } while (bVar20);
                        if ((!bVar22 && !bVar20) != bVar22) {
                          iVar2 = strcmp("-hosts",(char *)pbVar16);
                          bVar23 = iVar2 == 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00107530:
      pmVar12->me_dev = 0xffffffffffffffff;
      pmVar12->field_0x28 = pmVar12->field_0x28 & 0xfd | bVar23 * '\x02';
      *local_80 = pmVar12;
      local_80 = &pmVar12->me_next;
      ppcVar11 = (char **)getmntent(pmVar8);
    }
    iVar2 = endmntent(pmVar8);
    if (iVar2 != 0) goto LAB_00106fdd;
LAB_0010757e:
    piVar13 = __errno_location();
    iVar2 = *piVar13;
  }
  else {
    local_80 = &mount_list;
    line = (char *)0x0;
    buf_size = 0;
    while (_Var3 = __getdelim(&line,&buf_size,10,__stream), _Var3 != -1) {
      iVar2 = __isoc99_sscanf(line,"%*u %*u %u:%u %n",&devmaj,&devmin,&mntroot_s);
      if (iVar2 - 2U < 2) {
        pcVar19 = line + mntroot_s;
        pcVar4 = strchr(pcVar19,0x20);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
          pcVar4 = pcVar4 + 1;
          pcVar5 = strchr(pcVar4,0x20);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
            pcVar5 = strstr(pcVar5 + 1," - ");
            if (pcVar5 != (char *)0x0) {
              pcVar5 = pcVar5 + 3;
              pcVar6 = strchr(pcVar5,0x20);
              if (pcVar6 != (char *)0x0) {
                *pcVar6 = '\0';
                pcVar6 = pcVar6 + 1;
                pcVar7 = strchr(pcVar6,0x20);
                if (pcVar7 != (char *)0x0) {
                  *pcVar7 = '\0';
                  unescape_tab(pcVar6);
                  unescape_tab(pcVar4);
                  unescape_tab(pcVar19);
                  unescape_tab(pcVar5);
                  pmVar8 = (mount_entry *)xmalloc(0x38);
                  pcVar6 = xstrdup(pcVar6);
                  pmVar8->me_devname = pcVar6;
                  pcVar4 = xstrdup(pcVar4);
                  pmVar8->me_mountdir = pcVar4;
                  pcVar4 = xstrdup(pcVar19);
                  bVar23 = true;
                  pmVar8->me_mntroot = pcVar4;
                  pbVar9 = (byte *)xstrdup(pcVar5);
                  pmVar8->me_type = (char *)pbVar9;
                  pmVar8->field_0x28 = pmVar8->field_0x28 | 4;
                  bVar20 = false;
                  uVar10 = ((ulong)devmin & 0xffffff00) << 0xc |
                           ((ulong)devmaj & 0xfffff000) << 0x20 | (ulong)((devmaj & 0xfff) << 8) |
                           (ulong)(byte)devmin;
                  bVar22 = uVar10 == 0;
                  lVar14 = 7;
                  pbVar16 = pbVar9;
                  pbVar17 = (byte *)"autofs";
                  do {
                    if (lVar14 == 0) break;
                    lVar14 = lVar14 + -1;
                    bVar20 = *pbVar16 < *pbVar17;
                    bVar22 = *pbVar16 == *pbVar17;
                    pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                    pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                  } while (bVar22);
                  pmVar8->me_dev = uVar10;
                  bVar21 = false;
                  bVar20 = (!bVar20 && !bVar22) == bVar20;
                  if (!bVar20) {
                    lVar14 = 5;
                    pbVar16 = pbVar9;
                    pbVar17 = &DAT_001114a1;
                    do {
                      if (lVar14 == 0) break;
                      lVar14 = lVar14 + -1;
                      bVar21 = *pbVar16 < *pbVar17;
                      bVar20 = *pbVar16 == *pbVar17;
                      pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                      pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                    } while (bVar20);
                    bVar22 = false;
                    bVar20 = (!bVar21 && !bVar20) == bVar21;
                    if (!bVar20) {
                      lVar14 = 6;
                      pbVar16 = pbVar9;
                      pbVar17 = (byte *)"subfs";
                      do {
                        if (lVar14 == 0) break;
                        lVar14 = lVar14 + -1;
                        bVar22 = *pbVar16 < *pbVar17;
                        bVar20 = *pbVar16 == *pbVar17;
                        pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                        pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                      } while (bVar20);
                      bVar21 = false;
                      bVar20 = (!bVar22 && !bVar20) == bVar22;
                      if (!bVar20) {
                        lVar14 = 8;
                        pbVar16 = pbVar9;
                        pbVar17 = (byte *)"debugfs";
                        do {
                          if (lVar14 == 0) break;
                          lVar14 = lVar14 + -1;
                          bVar21 = *pbVar16 < *pbVar17;
                          bVar20 = *pbVar16 == *pbVar17;
                          pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                          pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                        } while (bVar20);
                        bVar22 = false;
                        bVar20 = (!bVar21 && !bVar20) == bVar21;
                        if (!bVar20) {
                          lVar14 = 7;
                          pbVar16 = pbVar9;
                          pbVar17 = (byte *)"devpts";
                          do {
                            if (lVar14 == 0) break;
                            lVar14 = lVar14 + -1;
                            bVar22 = *pbVar16 < *pbVar17;
                            bVar20 = *pbVar16 == *pbVar17;
                            pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                            pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                          } while (bVar20);
                          bVar21 = false;
                          bVar20 = (!bVar22 && !bVar20) == bVar22;
                          if (!bVar20) {
                            lVar14 = 8;
                            pbVar16 = pbVar9;
                            pbVar17 = (byte *)"fusectl";
                            do {
                              if (lVar14 == 0) break;
                              lVar14 = lVar14 + -1;
                              bVar21 = *pbVar16 < *pbVar17;
                              bVar20 = *pbVar16 == *pbVar17;
                              pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                              pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                            } while (bVar20);
                            bVar22 = false;
                            bVar20 = (!bVar21 && !bVar20) == bVar21;
                            if (!bVar20) {
                              lVar14 = 0xc;
                              pbVar16 = pbVar9;
                              pbVar17 = (byte *)"fuse.portal";
                              do {
                                if (lVar14 == 0) break;
                                lVar14 = lVar14 + -1;
                                bVar22 = *pbVar16 < *pbVar17;
                                bVar20 = *pbVar16 == *pbVar17;
                                pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                                pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                              } while (bVar20);
                              bVar21 = false;
                              bVar20 = (!bVar22 && !bVar20) == bVar22;
                              if (!bVar20) {
                                lVar14 = 7;
                                pbVar16 = pbVar9;
                                pbVar17 = (byte *)"mqueue";
                                do {
                                  if (lVar14 == 0) break;
                                  lVar14 = lVar14 + -1;
                                  bVar21 = *pbVar16 < *pbVar17;
                                  bVar20 = *pbVar16 == *pbVar17;
                                  pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                                  pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                                } while (bVar20);
                                bVar22 = false;
                                bVar20 = (!bVar21 && !bVar20) == bVar21;
                                if (!bVar20) {
                                  lVar14 = 0xb;
                                  pbVar16 = pbVar9;
                                  pbVar17 = (byte *)"rpc_pipefs";
                                  do {
                                    if (lVar14 == 0) break;
                                    lVar14 = lVar14 + -1;
                                    bVar22 = *pbVar16 < *pbVar17;
                                    bVar20 = *pbVar16 == *pbVar17;
                                    pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                                    pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                                  } while (bVar20);
                                  bVar21 = false;
                                  bVar20 = (!bVar22 && !bVar20) == bVar22;
                                  if (!bVar20) {
                                    lVar14 = 6;
                                    pbVar16 = pbVar9;
                                    pbVar17 = (byte *)"sysfs";
                                    do {
                                      if (lVar14 == 0) break;
                                      lVar14 = lVar14 + -1;
                                      bVar21 = *pbVar16 < *pbVar17;
                                      bVar20 = *pbVar16 == *pbVar17;
                                      pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                                      pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                                    } while (bVar20);
                                    bVar22 = false;
                                    bVar20 = (!bVar21 && !bVar20) == bVar21;
                                    if (!bVar20) {
                                      lVar14 = 6;
                                      pbVar16 = pbVar9;
                                      pbVar17 = (byte *)"devfs";
                                      do {
                                        if (lVar14 == 0) break;
                                        lVar14 = lVar14 + -1;
                                        bVar22 = *pbVar16 < *pbVar17;
                                        bVar20 = *pbVar16 == *pbVar17;
                                        pbVar16 = pbVar16 + (ulong)bVar24 * -2 + 1;
                                        pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                                      } while (bVar20);
                                      if ((((!bVar22 && !bVar20) != bVar22) &&
                                          (iVar2 = strcmp((char *)pbVar9,"kernfs"), iVar2 != 0)) &&
                                         (iVar2 = strcmp((char *)pbVar9,"ignore"), iVar2 != 0)) {
                                        iVar2 = strcmp((char *)pbVar9,"none");
                                        bVar23 = iVar2 == 0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  pbVar16 = (byte *)pmVar8->me_devname;
                  pmVar8->field_0x28 = pmVar8->field_0x28 & 0xfe | bVar23;
                  pcVar4 = strchr((char *)pbVar16,0x3a);
                  bVar23 = true;
                  if (pcVar4 == (char *)0x0) {
                    bVar20 = *pbVar16 < 0x2f;
                    bVar22 = *pbVar16 == 0x2f;
                    if (bVar22) {
                      bVar20 = pbVar16[1] < 0x2f;
                      bVar22 = pbVar16[1] == 0x2f;
                      if (bVar22) {
                        lVar14 = 6;
                        pbVar17 = pbVar9;
                        pbVar18 = (byte *)"smbfs";
                        do {
                          if (lVar14 == 0) break;
                          lVar14 = lVar14 + -1;
                          bVar20 = *pbVar17 < *pbVar18;
                          bVar22 = *pbVar17 == *pbVar18;
                          pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                          pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                        } while (bVar22);
                        bVar21 = false;
                        bVar20 = (!bVar20 && !bVar22) == bVar20;
                        if (!bVar20) {
                          lVar14 = 5;
                          pbVar17 = pbVar9;
                          pbVar18 = &DAT_00111cc3;
                          do {
                            if (lVar14 == 0) break;
                            lVar14 = lVar14 + -1;
                            bVar21 = *pbVar17 < *pbVar18;
                            bVar20 = *pbVar17 == *pbVar18;
                            pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                            pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                          } while (bVar20);
                          bVar22 = false;
                          bVar21 = (!bVar21 && !bVar20) == bVar21;
                          if (!bVar21) {
                            lVar14 = 5;
                            pbVar17 = pbVar9;
                            pbVar18 = &DAT_001113ea;
                            do {
                              if (lVar14 == 0) break;
                              lVar14 = lVar14 + -1;
                              bVar22 = *pbVar17 < *pbVar18;
                              bVar21 = *pbVar17 == *pbVar18;
                              pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                              pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                            } while (bVar21);
                            bVar20 = false;
                            bVar22 = (!bVar22 && !bVar21) == bVar22;
                            if (!bVar22) goto LAB_0010718b;
                          }
                        }
                        goto LAB_00106f8c;
                      }
                    }
LAB_0010718b:
                    lVar14 = 5;
                    bVar23 = true;
                    pbVar17 = pbVar9;
                    pbVar18 = &DAT_00111317;
                    do {
                      if (lVar14 == 0) break;
                      lVar14 = lVar14 + -1;
                      bVar20 = *pbVar17 < *pbVar18;
                      bVar22 = *pbVar17 == *pbVar18;
                      pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                      pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                    } while (bVar22);
                    bVar21 = false;
                    bVar20 = (!bVar20 && !bVar22) == bVar20;
                    if (!bVar20) {
                      lVar14 = 4;
                      pbVar17 = pbVar9;
                      pbVar18 = &DAT_0011147f;
                      do {
                        if (lVar14 == 0) break;
                        lVar14 = lVar14 + -1;
                        bVar21 = *pbVar17 < *pbVar18;
                        bVar20 = *pbVar17 == *pbVar18;
                        pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                        pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                      } while (bVar20);
                      bVar22 = false;
                      bVar20 = (!bVar21 && !bVar20) == bVar21;
                      if (!bVar20) {
                        lVar14 = 5;
                        pbVar17 = pbVar9;
                        pbVar18 = &DAT_00111497;
                        do {
                          if (lVar14 == 0) break;
                          lVar14 = lVar14 + -1;
                          bVar22 = *pbVar17 < *pbVar18;
                          bVar20 = *pbVar17 == *pbVar18;
                          pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                          pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                        } while (bVar20);
                        bVar21 = false;
                        bVar20 = (!bVar22 && !bVar20) == bVar22;
                        if (!bVar20) {
                          lVar14 = 0xb;
                          pbVar17 = pbVar9;
                          pbVar18 = (byte *)"auristorfs";
                          do {
                            if (lVar14 == 0) break;
                            lVar14 = lVar14 + -1;
                            bVar21 = *pbVar17 < *pbVar18;
                            bVar20 = *pbVar17 == *pbVar18;
                            pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                            pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                          } while (bVar20);
                          bVar22 = false;
                          bVar20 = (!bVar21 && !bVar20) == bVar21;
                          if (!bVar20) {
                            lVar14 = 6;
                            pbVar17 = pbVar9;
                            pbVar18 = (byte *)"fhgfs";
                            do {
                              if (lVar14 == 0) break;
                              lVar14 = lVar14 + -1;
                              bVar22 = *pbVar17 < *pbVar18;
                              bVar20 = *pbVar17 == *pbVar18;
                              pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                              pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                            } while (bVar20);
                            bVar21 = false;
                            bVar20 = (!bVar22 && !bVar20) == bVar22;
                            if (!bVar20) {
                              lVar14 = 5;
                              pbVar17 = pbVar9;
                              pbVar18 = &DAT_0011149c;
                              do {
                                if (lVar14 == 0) break;
                                lVar14 = lVar14 + -1;
                                bVar21 = *pbVar17 < *pbVar18;
                                bVar20 = *pbVar17 == *pbVar18;
                                pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                                pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                              } while (bVar20);
                              bVar22 = false;
                              bVar20 = (!bVar21 && !bVar20) == bVar21;
                              if (!bVar20) {
                                lVar14 = 6;
                                pbVar17 = pbVar9;
                                pbVar18 = (byte *)"ibrix";
                                do {
                                  if (lVar14 == 0) break;
                                  lVar14 = lVar14 + -1;
                                  bVar22 = *pbVar17 < *pbVar18;
                                  bVar20 = *pbVar17 == *pbVar18;
                                  pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                                  pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                                } while (bVar20);
                                bVar21 = false;
                                bVar20 = (!bVar22 && !bVar20) == bVar22;
                                if (!bVar20) {
                                  lVar14 = 6;
                                  pbVar17 = pbVar9;
                                  pbVar18 = (byte *)"ocfs2";
                                  do {
                                    if (lVar14 == 0) break;
                                    lVar14 = lVar14 + -1;
                                    bVar21 = *pbVar17 < *pbVar18;
                                    bVar20 = *pbVar17 == *pbVar18;
                                    pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                                    pbVar18 = pbVar18 + (ulong)bVar24 * -2 + 1;
                                  } while (bVar20);
                                  bVar22 = false;
                                  bVar20 = (!bVar21 && !bVar20) == bVar21;
                                  if (!bVar20) {
                                    lVar14 = 5;
                                    pbVar17 = &DAT_001114c6;
                                    do {
                                      if (lVar14 == 0) break;
                                      lVar14 = lVar14 + -1;
                                      bVar22 = *pbVar9 < *pbVar17;
                                      bVar20 = *pbVar9 == *pbVar17;
                                      pbVar9 = pbVar9 + (ulong)bVar24 * -2 + 1;
                                      pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
                                    } while (bVar20);
                                    if ((!bVar22 && !bVar20) != bVar22) {
                                      iVar2 = strcmp("-hosts",(char *)pbVar16);
                                      bVar23 = iVar2 == 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
LAB_00106f8c:
                  pmVar8->field_0x28 = pmVar8->field_0x28 & 0xfd | bVar23 * '\x02';
                  *local_80 = pmVar8;
                  local_80 = &pmVar8->me_next;
                }
              }
            }
          }
        }
      }
    }
    rpl_free(line);
    if ((*(byte *)&__stream->_flags & 0x20) == 0) {
      iVar2 = rpl_fclose((FILE *)__stream);
      if (iVar2 != -1) {
LAB_00106fdd:
        *local_80 = (mount_entry *)0x0;
        pmVar8 = mount_list;
        goto LAB_00106fee;
      }
      goto LAB_0010757e;
    }
    piVar13 = __errno_location();
    iVar2 = *piVar13;
    rpl_fclose((FILE *)__stream);
    *piVar13 = iVar2;
  }
  *local_80 = (mount_entry *)0x0;
  while (mount_list != (mount_entry *)0x0) {
    pmVar8 = mount_list->me_next;
    free_mount_entry(mount_list);
    mount_list = pmVar8;
  }
  *piVar13 = iVar2;
  pmVar8 = (mount_entry *)0x0;
LAB_00106fee:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pmVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

