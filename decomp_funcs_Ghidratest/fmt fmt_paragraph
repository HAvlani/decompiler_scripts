
void fmt_paragraph(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  WORD *pWVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  WORD *pWVar10;
  WORD *pWVar11;
  long lVar13;
  long lVar14;
  int iVar15;
  WORD *pWVar12;
  
  iVar8 = max_width;
  pWVar6 = word_limit;
  pWVar10 = word_limit + -1;
  iVar2 = word_limit->length;
  word_limit->best_cost = 0;
  pWVar6->length = iVar8;
  iVar7 = goal_width;
  iVar5 = first_indent;
  iVar4 = other_indent;
  iVar3 = last_line_length;
  for (; (WORD *)0x10c11f < pWVar10; pWVar10 = pWVar10 + -1) {
    iVar15 = iVar4;
    if (pWVar10 == unused_word_type) {
      iVar15 = iVar5;
    }
    lVar13 = 0x7fffffffffffffff;
    iVar15 = iVar15 + pWVar10->length;
    pWVar11 = pWVar10;
    do {
      pWVar12 = pWVar11 + 1;
      if (pWVar6 == pWVar12) {
        lVar9 = 0;
      }
      else {
        lVar9 = (long)((iVar7 - iVar15) * 10);
        lVar9 = lVar9 * lVar9;
        if (pWVar6 != pWVar11[1].next_break) {
          lVar14 = (long)((iVar15 - pWVar11[1].line_length) * 10);
          lVar9 = lVar9 + (lVar14 * lVar14 >> 1);
        }
      }
      lVar9 = lVar9 + pWVar11[1].best_cost;
      if ((pWVar10 == unused_word_type) && (0 < iVar3)) {
        lVar14 = (long)((iVar15 - iVar3) * 10);
        lVar9 = lVar9 + (lVar14 * lVar14 >> 1);
      }
      if (lVar9 < lVar13) {
        pWVar10->next_break = pWVar12;
        pWVar10->line_length = iVar15;
        lVar13 = lVar9;
      }
    } while ((pWVar6 != pWVar12) &&
            (iVar15 = iVar15 + pWVar11[1].length + pWVar11->space, pWVar11 = pWVar12, iVar15 < iVar8
            ));
    lVar9 = 0x1324;
    if (unused_word_type < pWVar10) {
      bVar1 = pWVar10[-1].field_0x10;
      if ((bVar1 & 2) == 0) {
        lVar9 = 0xce4;
        if ((((bVar1 & 4) == 0) && (lVar9 = 0x1324, unused_word_type + 1 < pWVar10)) &&
           ((pWVar10[-2].field_0x10 & 8) != 0)) {
          lVar9 = SUB168((SEXT816(40000) & (undefined  [16])0xffffffffffffffff | ZEXT816(40000)) /
                         SEXT816((long)(pWVar10[-1].length + 2)),0) + 0x1324;
        }
      }
      else {
        lVar9 = (ulong)(-(uint)((bVar1 & 8) == 0) & 0x58804) + 0x960;
      }
    }
    if ((pWVar10->field_0x10 & 1) == 0) {
      if ((pWVar10->field_0x10 & 8) != 0) {
        lVar9 = lVar9 + SUB168((SEXT816(0x57e4) & (undefined  [16])0xffffffffffffffff |
                               ZEXT816(0x57e4)) / SEXT816((long)(pWVar10->length + 2)),0);
      }
    }
    else {
      lVar9 = lVar9 + -0x640;
    }
    pWVar10->best_cost = lVar13 + lVar9;
  }
  pWVar6->length = iVar2;
  return;
}

