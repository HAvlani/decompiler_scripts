
int main(int argc,char **argv)

{
  size_t sVar1;
  char cVar2;
  long lVar3;
  __dev_t _Var4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  file_name *p;
  dev_ino *pdVar8;
  DIR *__dirp;
  dirent *pdVar9;
  undefined8 uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  stat *psVar14;
  char *pcVar15;
  stat *psVar16;
  size_t unaff_R14;
  uint *unaff_R15;
  long in_FS_OFFSET;
  bool bVar17;
  byte bVar18;
  dev_ino dev_ino_buf;
  stat dot_sb;
  stat parent_sb;
  stat ent_sb;
  
  bVar18 = 0;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar7 = getenv("POSIXLY_CORRECT");
  bVar17 = pcVar7 != (char *)0x0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  while (iVar5 = getopt_long(argc,argv,&DAT_001070d9,longopts,0), iVar5 != -1) {
    if (iVar5 == 0x4c) {
      bVar17 = true;
    }
    else {
      if (iVar5 < 0x4d) {
        if (iVar5 == -0x83) {
          version_etc(stdout,"pwd","GNU coreutils",Version,"Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
LAB_001028d3:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      if (iVar5 != 0x50) goto LAB_001028d3;
      bVar17 = false;
    }
  }
  if (optind < argc) {
    uVar10 = dcgettext(0,"ignoring non-option arguments",5);
    error(0,0,uVar10);
  }
  if ((bVar17) && (pcVar7 = logical_getcwd(), pcVar7 != (char *)0x0)) {
    puts(pcVar7);
  }
  else {
    pcVar7 = xgetcwd();
    if (pcVar7 == (char *)0x0) {
      p = (file_name *)xmalloc(0x18);
      p->n_alloc = 0x2000;
      pcVar7 = (char *)xmalloc(0x2000);
      p->buf = pcVar7;
      p->start = pcVar7 + (p->n_alloc - 1);
      pcVar7[p->n_alloc - 1] = '\0';
      pdVar8 = get_root_dev_ino(&dev_ino_buf);
      if (pdVar8 != (dev_ino *)0x0) {
        unaff_R14 = 1;
        iVar5 = __xstat(1,".",(stat *)&dot_sb);
        if (-1 < iVar5) {
LAB_00102973:
          if ((dot_sb.st_ino == pdVar8->st_ino) && (dot_sb.st_dev == pdVar8->st_dev))
          goto LAB_00102d00;
          sVar1 = unaff_R14 + 1;
          __dirp = opendir("..");
          if (__dirp != (DIR *)0x0) {
            iVar5 = dirfd(__dirp);
            if (iVar5 < 0) goto LAB_00102b41;
            iVar6 = fchdir(iVar5);
            if (iVar6 < 0) goto LAB_00102b71;
            iVar5 = __fxstat(1,iVar5,(stat *)&parent_sb);
            do {
              unaff_R15 = (uint *)__errno_location();
              _Var4 = parent_sb.st_dev;
              argv = (char **)dot_sb.st_dev;
              if (iVar5 < 0) goto LAB_00102cc5;
              bVar17 = parent_sb.st_dev == dot_sb.st_dev;
              do {
                while( true ) {
                  *unaff_R15 = 0;
                  do {
                    pdVar9 = readdir(__dirp);
                    if (pdVar9 == (dirent *)0x0) {
                      argv = (char **)(ulong)*unaff_R15;
                      if (*unaff_R15 != 0) goto LAB_00102bed;
                      iVar5 = closedir(__dirp);
                      if (iVar5 == 0) goto LAB_00102bb3;
                      goto LAB_00102b06;
                    }
                    pcVar7 = pdVar9->d_name;
                  } while ((pdVar9->d_name[0] == '.') &&
                          ((pdVar9->d_name[(ulong)(pdVar9->d_name[1] == '.') + 1] == '\0' ||
                           (pdVar9->d_name[(ulong)(pdVar9->d_name[1] == '.') + 1] == '/'))));
                  if ((pdVar9->d_ino != 0) && (bVar17)) break;
                  iVar5 = __lxstat(1,pcVar7,(stat *)&ent_sb);
                  if (((-1 < iVar5) && (ent_sb.st_ino == dot_sb.st_ino)) &&
                     (((char **)_Var4 == argv || (ent_sb.st_dev == dot_sb.st_dev))))
                  goto LAB_00102aa7;
                }
              } while (pdVar9->d_ino != dot_sb.st_ino);
LAB_00102aa7:
              uVar12 = 0xffffffffffffffff;
              pcVar15 = pcVar7;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar15 + (ulong)bVar18 * -2 + 1;
              } while (cVar2 != '\0');
              file_name_prepend(p,pcVar7,~uVar12 - 1);
              iVar5 = closedir(__dirp);
              if (iVar5 == 0) goto code_r0x00102ad0;
LAB_00102b06:
              while( true ) {
                pcVar7 = nth_parent(unaff_R14);
                __dirp = (DIR *)quote(pcVar7);
                uVar10 = dcgettext(0,"reading directory %s",5);
                error(1,*unaff_R15,uVar10);
LAB_00102b41:
                iVar5 = chdir("..");
                if (-1 < iVar5) break;
LAB_00102b71:
                pcVar7 = nth_parent(unaff_R14);
                pcVar7 = quote(pcVar7);
                uVar10 = dcgettext(0,"failed to chdir to %s",5);
                piVar11 = __errno_location();
                error(1,*piVar11,uVar10,pcVar7);
LAB_00102bb3:
                pcVar7 = nth_parent(unaff_R14);
                __dirp = (DIR *)quote(pcVar7);
                uVar10 = dcgettext(0,"couldn\'t find directory entry in %s with matching i-node",5);
                error(1,0,uVar10,__dirp);
LAB_00102bed:
                closedir(__dirp);
                *unaff_R15 = (uint)argv;
              }
              iVar5 = __xstat(1,".",(stat *)&parent_sb);
            } while( true );
          }
          pcVar7 = nth_parent(unaff_R14);
          pcVar7 = quote(pcVar7);
          uVar10 = dcgettext(0,"cannot open directory %s",5);
          piVar11 = __errno_location();
          error(1,*piVar11,uVar10,pcVar7);
        }
        pcVar7 = quotearg_style(shell_escape_always_quoting_style,".");
        uVar10 = dcgettext(0,"failed to stat %s",5);
        piVar11 = __errno_location();
        error(1,*piVar11,uVar10,pcVar7);
      }
      pcVar7 = quotearg_style(shell_escape_always_quoting_style,"/");
      uVar10 = dcgettext(0,"failed to get attributes of %s",5);
      piVar11 = __errno_location();
      error(1,*piVar11,uVar10,pcVar7);
LAB_00102cc5:
      pcVar7 = nth_parent(unaff_R14);
      pcVar7 = quote(pcVar7);
      uVar10 = dcgettext(0,"failed to stat %s",5);
      error(1,*unaff_R15,uVar10,pcVar7);
LAB_00102d00:
      pcVar7 = p->start;
      if (*pcVar7 == '\0') {
        file_name_prepend(p,"",0);
        pcVar7 = p->start;
      }
      puts(pcVar7);
      rpl_free(p->buf);
      rpl_free(p);
    }
    else {
      puts(pcVar7);
      rpl_free(pcVar7);
    }
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
code_r0x00102ad0:
  psVar14 = &parent_sb;
  psVar16 = &dot_sb;
  for (lVar13 = 0x24; unaff_R14 = sVar1, lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined4 *)&psVar16->st_dev = *(undefined4 *)&psVar14->st_dev;
    psVar14 = (stat *)((long)psVar14 + (ulong)bVar18 * -8 + 4);
    psVar16 = (stat *)((long)psVar16 + (ulong)bVar18 * -8 + 4);
  }
  goto LAB_00102973;
}

