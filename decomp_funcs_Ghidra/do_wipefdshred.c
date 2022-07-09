
_Bool do_wipefd(int fd,char *qname,randint_source *s,Options *flags)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void *pvVar5;
  randread_source *s_00;
  undefined8 uVar6;
  randint rVar7;
  long lVar8;
  bool bVar9;
  size_t sVar10;
  int *piVar11;
  int *__src;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  ulong local_148;
  size_t local_140;
  long local_130;
  _Bool local_121;
  ulong local_120;
  long local_118;
  long local_110;
  off_t pass_size;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0;
  if (flags->verbose != false) {
    local_120 = (ulong)flags->zero_fill + flags->n_iterations;
  }
  iVar2 = __fxstat(1,fd,(stat *)&st);
  if (iVar2 != 0) {
    uVar6 = dcgettext(0,"%s: fstat failed",5);
    piVar4 = __errno_location();
    error(0,*piVar4,uVar6,qname);
    local_121 = false;
    goto LAB_00103fe9;
  }
  uVar3 = st.st_mode & 0xf000;
  if (uVar3 == 0x2000) {
    iVar2 = isatty(fd);
    if (iVar2 == 0) {
      uVar3 = st.st_mode & 0xf000;
      goto LAB_00103e9f;
    }
  }
  else {
LAB_00103e9f:
    bVar9 = uVar3 == 0x1000 || uVar3 == 0xc000;
    if (uVar3 != 0x1000 && uVar3 != 0xc000) {
      if ((uVar3 == 0x8000) && (st.st_size < 0)) {
        uVar6 = dcgettext(0,"%s: file has negative size",5);
        error(0,0,uVar6,qname);
        local_121 = bVar9;
        goto LAB_00103fe9;
      }
      piVar4 = (int *)xnmalloc(flags->n_iterations,4);
      local_118 = flags->size;
      lVar8 = local_118;
      if (local_118 == -1) {
        if ((st.st_mode & 0xf000) == 0x8000) {
          local_118 = st.st_size;
          lVar8 = local_118;
          if (flags->exact == false) {
            if (0x1fffffffffffffff < st.st_blksize - 1U) {
              st.st_blksize = 0x200;
            }
            if ((st.st_size == 0) || (local_130 = st.st_size, st.st_blksize <= st.st_size)) {
              local_130 = 0;
            }
            if (st.st_size % st.st_blksize != 0) {
              local_118 = st.st_blksize - st.st_size % st.st_blksize;
              if (0x7fffffffffffffff - st.st_size <= local_118) {
                local_118 = 0x7fffffffffffffff - st.st_size;
              }
              local_118 = st.st_size + local_118;
            }
            goto LAB_00104097;
          }
        }
        else {
          lVar8 = lseek(fd,0,2);
          if (lVar8 < 1) {
            lVar8 = local_118;
          }
        }
      }
      else if ((st.st_mode & 0xf000) == 0x8000) {
        local_130 = st.st_size;
        if (0x1fffffffffffffff < st.st_blksize - 1U) {
          st.st_blksize = 0x200;
        }
        if (local_118 < st.st_blksize) {
          st.st_blksize = local_118;
        }
        if (st.st_size < st.st_blksize) {
LAB_00104097:
          local_140 = flags->n_iterations;
          if (local_140 != 0) goto LAB_00103f29;
          goto LAB_001040b0;
        }
      }
      local_118 = lVar8;
      local_140 = flags->n_iterations;
      if (local_140 == 0) {
        s_00 = randint_get_source(s);
        local_121 = true;
        goto LAB_00104156;
      }
      local_130 = 0;
LAB_00103f29:
      iVar2 = -2;
      local_110 = 0;
      piVar11 = patterns;
      sVar10 = local_140;
      piVar13 = piVar4;
      do {
        if (iVar2 == 0) {
          iVar2 = -2;
          piVar11 = patterns + 1;
LAB_00103f6c:
          uVar14 = (ulong)-iVar2;
          if (sVar10 <= uVar14) {
            local_110 = local_110 + sVar10;
            goto LAB_00104292;
          }
          local_110 = local_110 + uVar14;
        }
        else {
          __src = piVar11 + 1;
          piVar11 = __src;
          if (iVar2 < 0) goto LAB_00103f6c;
          uVar14 = (ulong)iVar2;
          if (sVar10 < uVar14) goto LAB_001041f0;
          piVar11 = __src + uVar14;
          pvVar5 = memcpy(piVar13,__src,uVar14 * 4);
          piVar13 = (int *)((long)pvVar5 + uVar14 * 4);
        }
        sVar10 = sVar10 - uVar14;
        iVar2 = *piVar11;
      } while( true );
    }
  }
  uVar6 = dcgettext(0,"%s: invalid file type",5);
  error(0,0,uVar6,qname);
  local_121 = false;
  goto LAB_00103fe9;
LAB_001041f0:
  if ((1 < sVar10) && (uVar14 <= sVar10 * 3)) {
    do {
      if ((sVar10 == uVar14) ||
         (rVar7 = randint_genmax(s,uVar14 - 1), piVar11 = piVar13, rVar7 < sVar10)) {
        piVar11 = piVar13 + 1;
        *piVar13 = *__src;
        sVar10 = sVar10 - 1;
        if (sVar10 == 0) goto LAB_00104292;
      }
      uVar14 = uVar14 - 1;
      piVar13 = piVar11;
      __src = __src + 1;
    } while( true );
  }
  local_110 = local_110 + sVar10;
LAB_00104292:
  sVar10 = 0;
  uVar14 = local_110 - 1;
  local_110 = local_140 - local_110;
  uVar12 = uVar14;
  do {
    while (uVar12 <= uVar14) {
      uVar12 = (uVar12 + (local_140 - 1)) - uVar14;
      piVar4[local_110] = piVar4[sVar10];
      local_110 = local_110 + 1;
      piVar4[sVar10] = -1;
      sVar10 = sVar10 + 1;
      if (sVar10 == local_140) goto LAB_001040b0;
    }
    uVar12 = uVar12 - uVar14;
    rVar7 = randint_genmax(s,(local_110 + -1) - sVar10);
    iVar2 = piVar4[sVar10];
    lVar8 = rVar7 + sVar10;
    piVar4[sVar10] = piVar4[lVar8];
    sVar10 = sVar10 + 1;
    piVar4[lVar8] = iVar2;
  } while (sVar10 != local_140);
LAB_001040b0:
  s_00 = randint_get_source(s);
  if (local_130 == 0) {
    local_121 = true;
    goto LAB_00104156;
  }
  pass_size = local_130;
  local_121 = true;
  local_148 = 0;
  while( true ) {
    sVar10 = flags->n_iterations;
    if (flags->zero_fill + sVar10 != 0) {
      uVar14 = 0;
      do {
        iVar2 = 0;
        if (uVar14 < sVar10) {
          iVar2 = piVar4[uVar14];
        }
        uVar14 = uVar14 + 1;
        iVar2 = dopass(fd,&st,qname,&pass_size,iVar2,s_00,uVar14,local_148);
        if (iVar2 != 0) {
          local_121 = bVar9;
          if (iVar2 < 0) goto wipefd_out;
          local_121 = false;
        }
        sVar10 = flags->n_iterations;
      } while (uVar14 < flags->zero_fill + sVar10);
    }
LAB_00104156:
    lVar8 = local_118;
    if (local_118 == 0) break;
    local_148 = local_120;
    local_118 = 0;
    pass_size = lVar8;
  }
  if (((flags->remove_file != remove_none) && (iVar2 = ftruncate(fd,0), iVar2 != 0)) &&
     ((st.st_mode & 0xf000) == 0x8000)) {
    uVar6 = dcgettext(0,"%s: error truncating",5);
    piVar13 = __errno_location();
    error(0,*piVar13,uVar6,qname);
    local_121 = bVar9;
  }
wipefd_out:
  rpl_free(piVar4);
LAB_00103fe9:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_121;
}

