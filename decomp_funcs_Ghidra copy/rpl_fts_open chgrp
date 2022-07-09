
FTS * rpl_fts_open(char **argv,int options,anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *compar)

{
  _Bool _Var1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  FTS *sp;
  size_t sVar5;
  FTSENT *pFVar6;
  _ftsent *p_Var7;
  int *piVar8;
  _ftsent *p_Var9;
  char *pcVar10;
  ulong uVar11;
  char **ppcVar12;
  FTSENT *local_50;
  byte local_42;
  FTSENT *local_40;
  
  if ((((options & 0xfffff000U) != 0) || ((options & 0x204U) == 0x204)) || ((options & 0x12U) == 0))
  {
    piVar8 = __errno_location();
    *piVar8 = 0x16;
    return (FTS *)0x0;
  }
  sp = (FTS *)calloc(1,0x80);
  if (sp == (FTS *)0x0) {
    return (FTS *)0x0;
  }
  sp->fts_compar = (anon_subr_int__ftsent_ptr_ptr__ftsent_ptr_ptr_for_fts_compar *)compar;
  pcVar10 = *argv;
  sp->fts_cwd_fd = -100;
  uVar3 = options & 0xfffffdffU | 4;
  if ((options & 2U) == 0) {
    uVar3 = options;
  }
  sp->fts_options = uVar3;
  if (pcVar10 != (char *)0x0) {
    uVar11 = 0;
    ppcVar12 = argv;
    do {
      sVar5 = strlen(pcVar10);
      if (uVar11 < sVar5) {
        uVar11 = sVar5;
      }
      pcVar10 = ppcVar12[1];
      ppcVar12 = ppcVar12 + 1;
    } while (pcVar10 != (char *)0x0);
  }
  local_42 = fts_palloc();
  if ((_Bool)local_42 == false) goto mem1;
  local_50 = (FTSENT *)*argv;
  if (local_50 == (FTSENT *)0x0) {
    if (compar != (anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0) {
      pcVar10 = (char *)0x0;
LAB_00105d28:
      local_42 = (byte)((uint)sp->fts_options >> 10) & 1;
      goto LAB_00105d37;
    }
LAB_00105f7a:
    p_Var7 = (FTSENT *)0x0;
LAB_00105e44:
    pFVar6 = fts_alloc(sp,"",0);
    sp->fts_cur = pFVar6;
    if (pFVar6 != (FTSENT *)0x0) {
      pFVar6->fts_link = p_Var7;
      pFVar6->fts_info = 9;
      pFVar6->fts_level = 1;
      _Var1 = setup_dir();
      if (_Var1 != false) {
        if ((sp->fts_options & 0x204U) == 0) {
          iVar4 = diropen();
          sp->fts_rfd = iVar4;
          if (iVar4 < 0) {
            sp->fts_options = sp->fts_options | 4;
          }
        }
        i_ring_init(&sp->fts_fd_ring,-1);
        return sp;
      }
    }
mem3:
    fts_lfree(p_Var7);
    rpl_free(local_50);
  }
  else {
    local_50 = fts_alloc(sp,"",0);
    if (local_50 != (FTSENT *)0x0) {
      local_50->fts_level = -1;
      pcVar10 = *argv;
      if (compar != (anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0) goto LAB_00105d28;
LAB_00105d37:
      if (pcVar10 == (char *)0x0) goto LAB_00105f7a;
      local_40 = (FTSENT *)0x0;
      uVar11 = 0;
      p_Var9 = (_ftsent *)0x0;
      do {
        sVar5 = strlen(pcVar10);
        if (((2 < sVar5) && ((((byte)((uint)options >> 0xb) ^ 1) & 1) != 0)) &&
           (pcVar10[sVar5 - 1] == '/')) {
          do {
            if (pcVar10[sVar5 - 2] != '/') break;
            sVar5 = sVar5 - 1;
          } while (sVar5 != 1);
        }
        pFVar6 = fts_alloc(sp,pcVar10,sVar5);
        p_Var7 = p_Var9;
        if (pFVar6 == (FTSENT *)0x0) goto mem3;
        pFVar6->fts_level = 0;
        pFVar6->fts_parent = local_50;
        pFVar6->fts_accpath = (char *)(pFVar6 + 1);
        p_Var7 = pFVar6;
        if ((p_Var9 == (_ftsent *)0x0) || (local_42 == 0)) {
          uVar2 = fts_stat(sp,pFVar6,false);
          pFVar6->fts_info = uVar2;
          if (compar != (anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0) goto LAB_00105dc5;
          pFVar6->fts_link = (_ftsent *)0x0;
          if (p_Var9 != (_ftsent *)0x0) goto LAB_00105f00;
        }
        else {
          pFVar6->fts_statp[0].st_size = 2;
          pFVar6->fts_info = 0xb;
          if (compar == (anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0) {
            pFVar6->fts_link = (_ftsent *)0x0;
LAB_00105f00:
            local_40->fts_link = pFVar6;
            p_Var7 = p_Var9;
          }
          else {
LAB_00105dc5:
            pFVar6->fts_link = p_Var9;
            pFVar6 = local_40;
          }
        }
        local_40 = pFVar6;
        uVar11 = uVar11 + 1;
        pcVar10 = argv[uVar11];
        p_Var9 = p_Var7;
      } while (pcVar10 != (char *)0x0);
      if ((compar != (anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0) && (1 < uVar11)) {
        p_Var7 = fts_sort(sp,p_Var7,uVar11);
      }
      goto LAB_00105e44;
    }
  }
  rpl_free(sp->fts_path);
mem1:
  rpl_free(sp);
  return (FTS *)0x0;
}

