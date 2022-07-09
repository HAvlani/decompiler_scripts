
void set_fields(char *fieldstr,uint options)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  size_t sVar7;
  ushort **ppuVar8;
  ulong uVar9;
  size_t s;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  uintmax_t uVar13;
  ulong uVar14;
  field_range_pair *pfVar15;
  char *pcVar16;
  field_range_pair *pfVar17;
  ulong uVar18;
  long lVar19;
  
  if ((((options & 1) == 0) || (*fieldstr != '-')) || (fieldstr[1] != '\0')) {
    uVar18 = 0;
    bVar4 = false;
  }
  else {
    fieldstr = fieldstr + 1;
    uVar18 = 1;
    bVar4 = true;
  }
  bVar6 = false;
  bVar2 = false;
  uVar13 = 1;
  bVar5 = bVar4;
  do {
    bVar1 = *fieldstr;
    if (bVar1 == 0x2d) {
      if (bVar4) {
        if ((options & 4) == 0) {
          uVar11 = dcgettext(0,"invalid field range",5);
        }
        else {
          uVar11 = dcgettext(0,"invalid byte or character range",5);
        }
        goto LAB_00103d96;
      }
      bVar6 = (bool)(uVar18 == 0 & bVar5);
      if (bVar6) {
        if ((options & 4) == 0) {
LAB_00103e70:
          uVar11 = dcgettext(0,"fields are numbered from 1",5);
        }
        else {
          uVar11 = dcgettext(0,"byte/character positions are numbered from 1",5);
        }
        goto LAB_00103d96;
      }
      if (bVar5) {
        uVar14 = 0;
        uVar13 = uVar18;
        bVar4 = bVar5;
      }
      else {
        uVar14 = 0;
        bVar4 = true;
        uVar13 = 1;
        bVar6 = bVar5;
      }
    }
    else if (((bVar1 == 0x2c) || (ppuVar8 = __ctype_b_loc(), (*(byte *)(*ppuVar8 + bVar1) & 1) != 0)
             ) || (bVar1 == 0)) {
      if (bVar4) {
        if (bVar5) {
          if (!bVar2) goto LAB_00103a2b;
LAB_00103bd9:
          if (uVar18 < uVar13) {
            pcVar16 = "invalid decreasing range";
            goto LAB_00103d8c;
          }
          add_range_pair(uVar13,uVar18);
        }
        else {
          if (bVar2) goto LAB_00103bd9;
          if ((options & 1) == 0) {
            pcVar16 = "invalid range with no endpoint: -";
            goto LAB_00103d8c;
          }
          uVar13 = 1;
LAB_00103a2b:
          add_range_pair(uVar13,0xffffffffffffffff);
        }
        bVar1 = *fieldstr;
      }
      else {
        if (uVar18 == 0) {
          if ((options & 4) == 0) goto LAB_00103e70;
          uVar11 = dcgettext(0,"byte/character positions are numbered from 1",5);
          goto LAB_00103d96;
        }
        add_range_pair(uVar18,uVar18);
        bVar1 = *fieldstr;
      }
      if (bVar1 == 0) break;
      uVar14 = 0;
      bVar6 = false;
      bVar4 = false;
      bVar5 = false;
      bVar2 = false;
    }
    else {
      if (9 < (int)(char)bVar1 - 0x30U) {
        pcVar16 = quote(fieldstr);
        if ((options & 4) == 0) {
          uVar11 = dcgettext(0,"invalid field value %s",5);
        }
        else {
          uVar11 = dcgettext(0,"invalid byte/character position %s",5);
        }
        error(0,0,uVar11,pcVar16);
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      if ((!bVar6) || (set_fields::lexical_block_0::num_start == (char *)0x0)) {
        set_fields::lexical_block_0::num_start = fieldstr;
      }
      pcVar16 = set_fields::lexical_block_0::num_start;
      bVar3 = bVar4;
      if (!bVar4) {
        bVar5 = true;
        bVar3 = bVar2;
      }
      if (((0x1999999999999999 < uVar18) ||
          (uVar14 = (long)((char)bVar1 + -0x30) + uVar18 * 10, uVar14 == 0xffffffffffffffff)) ||
         (uVar14 < uVar18)) {
        s = strspn(set_fields::lexical_block_0::num_start,"0123456789");
        pcVar16 = ximemdup0(pcVar16,s);
        pcVar10 = quote(pcVar16);
        if ((options & 4) == 0) {
          uVar11 = dcgettext(0,"field number %s is too large",5);
        }
        else {
          uVar11 = dcgettext(0,"byte/character offset %s is too large",5);
        }
        error(0,0,uVar11,pcVar10);
        rpl_free(pcVar16);
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      bVar6 = true;
      bVar2 = bVar3;
    }
    fieldstr = (char *)((byte *)fieldstr + 1);
    uVar18 = uVar14;
  } while( true );
  if (n_frp == 0) {
    if ((options & 4) == 0) {
      pcVar16 = "missing list of fields";
LAB_00103d8c:
      uVar11 = dcgettext(0,pcVar16,5);
    }
    else {
      uVar11 = dcgettext(0,"missing list of byte/character positions",5);
    }
LAB_00103d96:
    error(0,0,uVar11);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  lVar19 = -2;
  qsort(frp,n_frp,0x10,compare_ranges);
  uVar18 = 0;
  pfVar17 = frp;
  if (n_frp != 0) {
    while (uVar14 = uVar18 + 1, uVar14 < n_frp) {
      while( true ) {
        pfVar15 = pfVar17 + uVar14;
        uVar9 = pfVar17[uVar18].hi;
        if (uVar9 <= pfVar15->lo && pfVar15->lo != uVar9) break;
        if (uVar9 <= pfVar15->hi) {
          uVar9 = pfVar15->hi;
        }
        lVar12 = n_frp + lVar19;
        pfVar17[uVar18].hi = uVar9;
        memmove(pfVar15,pfVar17 + uVar18 + 2,lVar12 * 0x10);
        n_frp = n_frp - 1;
        pfVar17 = frp;
        if (n_frp <= uVar14) goto LAB_00103b70;
      }
      lVar19 = lVar19 + -1;
      uVar18 = uVar14;
      if (n_frp <= uVar14) break;
    }
  }
LAB_00103b70:
  sVar7 = n_frp;
  if ((options & 2) != 0) {
    frp = (field_range_pair *)0x0;
    n_frp = 0;
    n_frp_allocated = 0;
    if (1 < pfVar17->lo) {
      add_range_pair(1,pfVar17->lo - 1);
    }
    pfVar15 = pfVar17 + 1;
    if (1 < sVar7) {
      do {
        uVar13 = pfVar15[-1].hi + 1;
        if (uVar13 != pfVar15->lo) {
          add_range_pair(uVar13,pfVar15->lo - 1);
        }
        pfVar15 = pfVar15 + 1;
      } while (pfVar17 + sVar7 != pfVar15);
    }
    if (pfVar17[sVar7 - 1].hi == 0xffffffffffffffff) {
      rpl_free(pfVar17);
      pfVar17 = frp;
    }
    else {
      add_range_pair(pfVar17[sVar7 - 1].hi + 1,0xffffffffffffffff);
      rpl_free(pfVar17);
      pfVar17 = frp;
    }
  }
  n_frp = n_frp + 1;
  frp = (field_range_pair *)xrealloc(pfVar17,n_frp * 0x10);
  pfVar17 = frp + (n_frp - 1);
  pfVar17->hi = 0xffffffffffffffff;
  pfVar17->lo = 0xffffffffffffffff;
  return;
}

