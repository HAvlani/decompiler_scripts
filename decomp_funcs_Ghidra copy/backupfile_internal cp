
char * backupfile_internal(int dir_fd,char *file,backup_type backup_type,_Bool rename)

{
  size_t __n;
  undefined4 *puVar1;
  ulong uVar2;
  undefined2 uVar3;
  bool bVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char *name;
  size_t sVar9;
  size_t sVar10;
  size_t sVar11;
  char *pcVar12;
  long lVar13;
  dirent *pdVar14;
  size_t sVar15;
  char *pcVar16;
  void *pvVar17;
  int *piVar18;
  undefined2 *puVar19;
  DIR *__dirp;
  char *pcVar20;
  long lVar21;
  byte bVar22;
  size_t sVar23;
  long in_FS_OFFSET;
  byte bVar24;
  backup_type local_bc;
  ulong local_a8;
  long local_78;
  int sdir;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  name = last_component(file);
  lVar21 = (long)name - (long)file;
  sVar9 = base_len(name);
  __n = lVar21 + sVar9;
  if (simple_backup_suffix == (char *)0x0) {
    set_simple_backup_suffix((char *)0x0);
  }
  sVar10 = strlen(simple_backup_suffix);
  sVar10 = sVar10 + 1;
  sVar11 = 9;
  if (8 < (long)sVar10) {
    sVar11 = sVar10;
  }
  sVar11 = __n + 1 + sVar11;
  pcVar12 = (char *)malloc(sVar11);
  if (pcVar12 != (char *)0x0) {
    local_78 = 0;
    lVar13 = __n - lVar21;
    __dirp = (DIR *)0x0;
    sdir = -100;
    pcVar16 = pcVar12;
    local_bc = backup_type;
    do {
      memcpy(pcVar16,file,__n);
      if (local_bc == simple_backups) {
        bVar4 = true;
        memcpy(pcVar16 + __n,simple_backup_suffix,sVar10);
        pcVar12 = pcVar16;
      }
      else if (__dirp == (DIR *)0x0) {
        puVar19 = (undefined2 *)(pcVar16 + lVar21);
        uVar3 = *puVar19;
        *puVar19 = 0x2e;
        __dirp = opendirat(dir_fd,pcVar16,0,&sdir);
        puVar1 = (undefined4 *)((long)puVar19 + lVar13);
        if (__dirp != (DIR *)0x0) {
          *puVar19 = uVar3;
          *puVar1 = 0x7e317e2e;
          *(undefined *)(puVar1 + 1) = 0;
          goto LAB_0010c105;
        }
        piVar18 = __errno_location();
        *puVar19 = uVar3;
        iVar8 = *piVar18;
        *puVar1 = 0x7e317e2e;
        bVar24 = (iVar8 == 0xc) + 2;
        *(undefined *)(puVar1 + 1) = 0;
        if (bVar24 == 2) goto LAB_0010c408;
        if (bVar24 == 3) {
LAB_0010c558:
          pcVar12 = (char *)0x0;
          rpl_free(pcVar16);
          piVar18 = __errno_location();
          *piVar18 = 0xc;
          goto LAB_0010c3a0;
        }
LAB_0010c31a:
        if (bVar24 == 1) goto LAB_0010c430;
LAB_0010c324:
        bVar4 = true;
        pcVar12 = pcVar16;
      }
      else {
        rewinddir((DIR *)__dirp);
LAB_0010c105:
        sVar23 = 1;
        local_a8 = sVar11;
        bVar22 = 2;
LAB_0010c120:
        bVar24 = bVar22;
        pdVar14 = readdir((DIR *)__dirp);
        pcVar12 = pcVar16;
        bVar22 = bVar24;
        if (pdVar14 != (dirent *)0x0) {
          while( true ) {
            pcVar20 = pdVar14->d_name;
            sVar15 = strlen(pcVar20);
            pcVar16 = pcVar12;
            if (sVar15 < lVar13 + 4U) break;
            iVar8 = memcmp(pcVar12 + lVar21,pcVar20,lVar13 + 2U);
            if (iVar8 != 0) break;
            pcVar20 = pcVar20 + lVar13 + 2U;
            if (8 < (byte)(*pcVar20 - 0x31U)) break;
            cVar7 = pcVar20[1];
            iVar8 = (int)cVar7;
            bVar24 = *pcVar20 == '9';
            if (iVar8 - 0x30U < 10) {
              sVar15 = 1;
              do {
                cVar6 = (char)iVar8;
                sVar15 = sVar15 + 1;
                cVar7 = pcVar20[sVar15];
                iVar8 = (int)cVar7;
                bVar24 = cVar6 == '9' & bVar24;
              } while (iVar8 - 0x30U < 10);
            }
            else {
              sVar15 = 1;
            }
            if (((cVar7 != '~') || (pcVar20[sVar15 + 1] != '\0')) ||
               (((long)sVar15 <= (long)sVar23 &&
                ((sVar23 != sVar15 || (iVar8 = memcmp(pcVar12 + __n + 2,pcVar20,sVar15), 0 < iVar8))
                )))) break;
            sVar23 = bVar24 + sVar15;
            uVar2 = sVar23 + __n + 4;
            if ((long)local_a8 < (long)uVar2) {
              local_a8 = uVar2;
              if (!SCARRY8((long)uVar2 >> 1,uVar2)) {
                local_a8 = ((long)uVar2 >> 1) + uVar2;
              }
              pcVar16 = (char *)realloc(pcVar12,local_a8 == 0 | local_a8);
              if (pcVar16 == (char *)0x0) {
                closedir((DIR *)__dirp);
                pcVar16 = pcVar12;
                goto LAB_0010c558;
              }
            }
            puVar19 = (undefined2 *)(pcVar16 + __n);
            *puVar19 = 0x7e2e;
            *(undefined *)(puVar19 + 1) = 0x30;
            pvVar17 = memcpy((void *)((long)puVar19 + (ulong)bVar24 + 2),pcVar20,sVar15 + 2);
            cVar7 = ((char *)(sVar15 + (long)pvVar17))[-1];
            pcVar12 = (char *)(sVar15 + (long)pvVar17);
            while (pcVar20 = pcVar12 + -1, cVar7 == '9') {
              *pcVar20 = '0';
              cVar7 = pcVar12[-2];
              pcVar12 = pcVar20;
            }
            *pcVar20 = cVar7 + '\x01';
            pdVar14 = readdir((DIR *)__dirp);
            pcVar12 = pcVar16;
            bVar22 = bVar24;
            if (pdVar14 == (dirent *)0x0) goto LAB_0010c310;
          }
          goto LAB_0010c120;
        }
LAB_0010c310:
        if (bVar24 != 2) goto LAB_0010c31a;
LAB_0010c408:
        if (local_bc == numbered_existing_backups) {
          memcpy(pcVar16 + __n,simple_backup_suffix,sVar10);
          local_bc = simple_backups;
        }
LAB_0010c430:
        bVar4 = true;
        puVar19 = (undefined2 *)last_component(pcVar16);
        sVar9 = base_len((char *)puVar19);
        iVar8 = sdir;
        pcVar12 = pcVar16;
        if ((long)sVar9 < 0xf) goto LAB_0010c329;
        if (local_78 == 0) {
          piVar18 = __errno_location();
          if (iVar8 < 0) {
            uVar3 = *puVar19;
            *puVar19 = 0x2e;
            *piVar18 = 0;
            local_78 = pathconf(pcVar16,3);
            iVar8 = *piVar18;
            *puVar19 = uVar3;
            local_78 = local_78 - (ulong)(iVar8 == 0);
          }
          else {
            *piVar18 = 0;
            local_78 = fpathconf(iVar8,3);
            local_78 = local_78 - (ulong)(*piVar18 == 0);
          }
          if (-1 < local_78) goto LAB_0010c4ab;
          lVar5 = 0xe;
          if (local_78 == -1) {
            lVar5 = local_78;
          }
        }
        else {
LAB_0010c4ab:
          lVar5 = local_78;
          if ((long)sVar9 <= local_78) goto LAB_0010c324;
        }
        local_78 = lVar5;
        pcVar16 = pcVar16 + (__n - (long)puVar19);
        if (local_78 <= (long)(pcVar16 + (__n - (long)puVar19))) {
          pcVar16 = (char *)(local_78 + -1);
        }
        bVar4 = false;
        *(char *)((long)puVar19 + (long)pcVar16) = '~';
        *(char *)((long)puVar19 + (long)(pcVar16 + 1)) = '\0';
      }
LAB_0010c329:
      if (rename == false) {
LAB_0010c590:
        if (__dirp != (DIR *)0x0) {
          closedir((DIR *)__dirp);
        }
        goto LAB_0010c3a0;
      }
      pcVar16 = pcVar12;
      pcVar20 = file;
      iVar8 = dir_fd;
      if (-1 < sdir) {
        pcVar16 = pcVar12 + lVar21;
        pcVar20 = name;
        iVar8 = sdir;
      }
      iVar8 = renameatu(iVar8,pcVar20,sdir,pcVar16,(uint)(local_bc != simple_backups));
      if (iVar8 == 0) goto LAB_0010c590;
      piVar18 = __errno_location();
      iVar8 = *piVar18;
    } while ((iVar8 == 0x11) && (pcVar16 = pcVar12, bVar4));
    if (__dirp != (DIR *)0x0) {
      closedir((DIR *)__dirp);
    }
    rpl_free(pcVar12);
    *piVar18 = iVar8;
    pcVar12 = (char *)0x0;
  }
LAB_0010c3a0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

