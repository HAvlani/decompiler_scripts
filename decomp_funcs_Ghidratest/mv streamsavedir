
char * streamsavedir(DIR *dirp,savedir_option option)

{
  char cVar1;
  __compar_fn_t __compar;
  int *piVar2;
  dirent *pdVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  char **p;
  char *p_00;
  long lVar7;
  char **ppcVar8;
  char **ppcVar9;
  size_t __nmemb;
  long in_FS_OFFSET;
  idx_t allocated;
  idx_t entries_allocated;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  allocated = 0;
  entries_allocated = 0;
  __compar = (__compar_fn_t)comparison_function_table[option];
  if (dirp == (DIR *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    lVar7 = 0;
    __nmemb = 0;
    p = (char **)0x0;
    piVar2 = __errno_location();
    p_00 = (char *)0x0;
    while( true ) {
      *piVar2 = 0;
      pdVar3 = readdir((DIR *)dirp);
      if (pdVar3 == (dirent *)0x0) break;
      pcVar5 = pdVar3->d_name;
      cVar1 = pdVar3->d_name[0];
      if (cVar1 == '.') {
        if (pdVar3->d_name[1] == '.') {
          cVar1 = pdVar3->d_name[2];
        }
        else {
          cVar1 = pdVar3->d_name[1];
        }
      }
      if (cVar1 != '\0') {
        sVar4 = strlen(pcVar5);
        sVar4 = sVar4 + 1;
        if (__compar == (__compar_fn_t)0x0) {
          if (allocated - lVar7 <= (long)sVar4) {
            p_00 = (char *)xpalloc(p_00,&allocated,sVar4 - (allocated - lVar7),0x7ffffffffffffffe,1)
            ;
          }
          memcpy(p_00 + lVar7,pcVar5,sVar4);
        }
        else {
          if (entries_allocated == __nmemb) {
            p = (char **)xpalloc(p,&entries_allocated,1,-1,0x10);
          }
          pcVar5 = xstrdup(pcVar5);
          p[__nmemb * 2] = pcVar5;
          (p + __nmemb * 2)[1] = (char *)pdVar3->d_ino;
          __nmemb = __nmemb + 1;
        }
        lVar7 = lVar7 + sVar4;
      }
    }
    if (*piVar2 == 0) {
      if (__compar == (__compar_fn_t)0x0) {
        if (lVar7 == allocated) {
          p_00 = (char *)xirealloc(p_00,lVar7 + 1);
        }
        pcVar5 = p_00 + lVar7;
      }
      else {
        if (__nmemb == 0) {
          pcVar5 = (char *)ximalloc(lVar7 + 1);
          p_00 = pcVar5;
        }
        else {
          pcVar5 = (char *)0x0;
          qsort(p,__nmemb,0x10,__compar);
          p_00 = (char *)ximalloc(lVar7 + 1);
          ppcVar8 = p;
          do {
            ppcVar9 = ppcVar8 + 2;
            pcVar6 = stpcpy(p_00 + (long)pcVar5,*ppcVar8);
            pcVar5 = pcVar6 + (long)(pcVar5 + (1 - (long)(p_00 + (long)pcVar5)));
            rpl_free(*ppcVar8);
            ppcVar8 = ppcVar9;
          } while (ppcVar9 != p + __nmemb * 2);
          pcVar5 = p_00 + (long)pcVar5;
        }
        rpl_free(p);
      }
      *pcVar5 = '\0';
      pcVar5 = p_00;
    }
    else {
      rpl_free(p);
      pcVar5 = (char *)0x0;
      rpl_free(p_00);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

