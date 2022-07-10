
/* WARNING: Could not reconcile some variable overlaps */

_Bool print_factors(char *input)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  _Bool _Var6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  uintmax_t t0;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  factors *pfVar13;
  char *pcVar14;
  uintmax_t *puVar15;
  long in_FS_OFFSET;
  mp_factors factors;
  mpz_t t;
  uintmax_t local_138 [26];
  uchar local_68 [26];
  byte local_4e;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *input;
  pcVar14 = input;
  while (cVar1 == ' ') {
    pcVar10 = pcVar14 + 1;
    pcVar14 = pcVar14 + 1;
    cVar1 = *pcVar10;
  }
  bVar2 = true;
  pcVar14 = pcVar14 + (cVar1 == '+');
  pcVar10 = pcVar14;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    if (cVar1 == '\0') {
      t0 = 0;
      uVar12 = 0;
      pcVar10 = pcVar14;
      if (!bVar2) goto LAB_00105df0;
      break;
    }
    bVar2 = false;
  } while ((int)cVar1 - 0x30U < 10);
  pcVar14 = quote(input);
  uVar7 = dcgettext(0,"%s is not a valid positive integer",5);
  error(0,0,uVar7,pcVar14);
  _Var6 = false;
  goto LAB_00105dab;
  while( true ) {
    uVar8 = (ulong)((int)*pcVar10 - 0x30);
    if (0x1999999999999999 < uVar12) break;
    uVar3 = t0 * 10;
    uVar4 = t0 * 2;
    uVar11 = (uint)(t0 >> 0x20);
    t0 = uVar3 + uVar8;
    uVar5 = uVar12 * 10;
    uVar8 = (ulong)((uint)CARRY8(uVar3,uVar8) +
                   ((uVar11 >> 0x1d) - ((int)uVar11 >> 0x1f)) + (uint)(uVar3 < uVar4));
    uVar12 = uVar5 + uVar8;
    pcVar10 = pcVar10 + 1;
    if (CARRY8(uVar5,uVar8)) break;
LAB_00105df0:
    if (*pcVar10 == '\0') {
      if (-1 < (long)uVar12) {
        if (dev_debug != false) {
          fwrite("[using single-precision arithmetic] ",1,0x24,stderr);
        }
        print_uintmaxes(uVar12,t0);
        lbuf_putc(':');
        factor(uVar12,t0,(factors *)t);
        if (local_4e != 0) {
          puVar15 = local_138;
          pfVar13 = (factors *)t;
          do {
            uVar11 = 0;
            if (pfVar13->e[0] != '\0') {
              do {
                uVar11 = uVar11 + 1;
                lbuf_putc(' ');
                lbuf_putint(*puVar15,0);
              } while (uVar11 < pfVar13->e[0]);
            }
            pfVar13 = (factors *)((long)pfVar13->plarge + 1);
            puVar15 = puVar15 + 1;
          } while ((uint)((int)pfVar13 - (int)(factors *)t) < (uint)local_4e);
        }
        if (t[0]._mp_d != (mp_limb_t *)0x0) {
          lbuf_putc(' ');
          print_uintmaxes((uintmax_t)t[0]._mp_d,t[0]._0_8_);
        }
        lbuf_putc('\n');
        _Var6 = true;
        goto LAB_00105dab;
      }
      break;
    }
  }
  if (dev_debug != false) {
    fwrite("[using arbitrary-precision arithmetic] ",1,0x27,stderr);
  }
  mpz_init_set_str(t,pcVar14,10);
  mpz_out_str((FILE *)stdout,10,t);
  pcVar14 = stdout->_IO_write_ptr;
  if (pcVar14 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar14 + 1;
    *pcVar14 = ':';
  }
  else {
    __overflow(stdout,0x3a);
  }
  mp_factor(t,&factors);
  if (factors.nfactors != 0) {
    uVar12 = 0;
    puVar9 = factors.e;
    do {
      uVar8 = 0;
      if (puVar9[uVar12] != 0) {
        do {
          pcVar14 = stdout->_IO_write_ptr;
          if (pcVar14 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar14 + 1;
            *pcVar14 = ' ';
          }
          else {
            __overflow(stdout,0x20);
          }
          mpz_out_str((FILE *)stdout,10,(__mpz_struct *)factors.p[uVar12]);
          uVar8 = (ulong)((int)uVar8 + 1);
          puVar9 = factors.e;
        } while (uVar8 < factors.e[uVar12]);
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < factors.nfactors);
  }
  mp_factor_clear(&factors);
  mpz_clear(t);
  pcVar14 = stdout->_IO_write_ptr;
  if (pcVar14 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar14 + 1;
    *pcVar14 = '\n';
  }
  else {
    __overflow(stdout,10);
  }
  fflush_unlocked(stdout);
  _Var6 = true;
LAB_00105dab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

