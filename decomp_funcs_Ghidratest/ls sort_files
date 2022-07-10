
void sort_files(void)

{
  fileinfo **ppfVar1;
  void **base;
  int iVar2;
  fileinfo **ppfVar3;
  size_t sVar4;
  sort_type sVar5;
  fileinfo *pfVar6;
  ulong uVar7;
  bool bVar8;
  
  if (sorted_file_alloc < (cwd_n_used >> 1) + cwd_n_used) {
    rpl_free(sorted_file);
    sorted_file = (void **)xnmalloc(cwd_n_used,0x18);
    sorted_file_alloc = cwd_n_used * 3;
    if (cwd_n_used == 0) goto LAB_001093a7;
LAB_001091ec:
    sVar4 = cwd_n_used;
    ppfVar1 = (fileinfo **)(sorted_file + cwd_n_used);
    ppfVar3 = (fileinfo **)sorted_file;
    pfVar6 = cwd_file;
    do {
      *ppfVar3 = pfVar6;
      ppfVar3 = ppfVar3 + 1;
      pfVar6 = pfVar6 + 1;
    } while (ppfVar3 != ppfVar1);
    if (sort_type != sort_width) goto LAB_00109222;
LAB_0010931b:
    uVar7 = 0;
    do {
      pfVar6 = (fileinfo *)sorted_file[uVar7];
      sVar4 = pfVar6->width;
      if (sVar4 == 0) {
        sVar4 = fileinfo_name_width(pfVar6);
      }
      uVar7 = uVar7 + 1;
      bVar8 = uVar7 < cwd_n_used;
      pfVar6->width = sVar4;
    } while (bVar8);
  }
  else {
    if (cwd_n_used != 0) goto LAB_001091ec;
LAB_001093a7:
    sVar4 = cwd_n_used;
    if (sort_type == sort_width) goto LAB_00109239;
LAB_00109222:
    if (((line_length != 0) && (format + ~one_per_line < 2)) && (sVar4 != 0)) goto LAB_0010931b;
  }
  if (sort_type == sort_none) {
    return;
  }
LAB_00109239:
  iVar2 = _setjmp((__jmp_buf_tag *)failed_strcoll);
  sVar4 = cwd_n_used;
  base = sorted_file;
  sVar5 = sort_type;
  if (iVar2 != 0) {
    if (sort_type == sort_version) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("sort_type != sort_version","src/ls.c",0x1008,"sort_files");
    }
    if (cwd_n_used != 0) {
      ppfVar1 = (fileinfo **)(sorted_file + cwd_n_used);
      ppfVar3 = (fileinfo **)sorted_file;
      pfVar6 = cwd_file;
      do {
        *ppfVar3 = pfVar6;
        ppfVar3 = ppfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      } while (ppfVar1 != ppfVar3);
    }
    iVar2 = 1;
  }
  if (sVar5 == sort_time) {
    sVar5 = time_type + (time_ctime|time_numtypes);
  }
  mpsort(base,sVar4,
         (comparison_function *)sort_functions[sVar5][iVar2][sort_reverse][directories_first]);
  return;
}

