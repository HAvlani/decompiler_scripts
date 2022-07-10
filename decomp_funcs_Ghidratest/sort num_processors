
ulong num_processors(nproc_query query)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  
  if (query == NPROC_CURRENT_OVERRIDABLE) {
    pcVar2 = getenv("OMP_NUM_THREADS");
    if (pcVar2 != (char *)0x0) {
      uVar1 = parse_omp_threads(pcVar2);
      pcVar2 = getenv("OMP_THREAD_LIMIT");
      if (pcVar2 == (char *)0x0) {
        uVar3 = 0xffffffffffffffff;
      }
      else {
        uVar3 = parse_omp_threads(pcVar2);
        if (uVar3 == 0) {
          uVar3 = 0xffffffffffffffff;
        }
      }
      if (uVar1 != 0) {
        if (uVar3 <= uVar1) {
          uVar1 = uVar3;
        }
        return uVar1;
      }
      goto LAB_0010f4d3;
    }
    pcVar2 = getenv("OMP_THREAD_LIMIT");
    if ((pcVar2 != (char *)0x0) && (uVar3 = parse_omp_threads(pcVar2), uVar3 != 0))
    goto LAB_0010f4d3;
  }
  else if (query != NPROC_CURRENT) {
    uVar1 = sysconf(0x53);
    uVar3 = uVar1;
    if ((uVar1 - 1 < 2) && (uVar3 = num_processors_via_affinity_mask(), uVar3 <= uVar1)) {
      return uVar1;
    }
    if ((long)uVar3 < 1) {
      return 1;
    }
    return uVar3;
  }
  uVar3 = 0xffffffffffffffff;
LAB_0010f4d3:
  uVar1 = num_processors_via_affinity_mask();
  if ((uVar1 == 0) && (uVar1 = sysconf(0x54), (long)uVar1 < 1)) {
    return 1;
  }
  if (uVar1 <= uVar3) {
    uVar3 = uVar1;
  }
  return uVar3;
}

