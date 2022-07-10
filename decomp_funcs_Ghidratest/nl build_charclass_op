
bin_tree_t *
build_charclass_op(re_dfa_t *dfa,uchar *trans,char *class_name,char *extra,_Bool non_match,
                  reg_errcode_t *err)

{
  byte bVar1;
  long lVar2;
  re_bitset_ptr_t pbVar3;
  byte bVar4;
  byte bVar5;
  reg_errcode_t rVar6;
  ulong *p;
  re_charset_t *cset;
  ulong *puVar7;
  long lVar8;
  bin_tree_t *pbVar9;
  long lVar10;
  long in_FS_OFFSET;
  Idx alloc;
  re_token_t br_token;
  re_token_t t;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  p = (ulong *)calloc(0x20,1);
  if (p != (ulong *)0x0) {
    cset = (re_charset_t *)calloc(0x50,1);
    if (cset == (re_charset_t *)0x0) {
      pbVar9 = (bin_tree_t *)0x0;
      rpl_free(p);
      *err = _REG_ESPACE;
      goto LAB_0010b82f;
    }
    cset->field_0x20 = cset->field_0x20 & 0xfe | non_match & 1U;
    rVar6 = build_charclass();
    if (rVar6 != _REG_NOERROR) {
      pbVar9 = (bin_tree_t *)0x0;
      rpl_free(p);
      free_charset(cset);
      *err = rVar6;
      goto LAB_0010b82f;
    }
    bVar1 = *extra;
    while (bVar1 != 0) {
      lVar10 = (long)(char)bVar1;
      lVar8 = lVar10 + 0x3f;
      if (-1 < lVar10) {
        lVar8 = lVar10;
      }
      extra = (char *)((byte *)extra + 1);
      bVar4 = bVar1 & 0x3f;
      bVar5 = (char)bVar1 >> 7;
      bVar1 = *extra;
      p[lVar8 >> 6] = p[lVar8 >> 6] | 1 << (bVar4 - (bVar5 >> 2) & 0x3f);
    }
    if (non_match != false) {
      puVar7 = p;
      do {
        *puVar7 = ~*puVar7;
        puVar7 = puVar7 + 1;
      } while (p + 4 != puVar7);
    }
    if (1 < dfa->mb_cur_max) {
      pbVar3 = dfa->sb_char;
      lVar8 = 0;
      do {
        *(ulong *)((long)p + lVar8) = *(ulong *)((long)p + lVar8) & *(ulong *)((long)pbVar3 + lVar8)
        ;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0x20);
    }
    pbVar9 = create_token_tree();
    if (pbVar9 != (bin_tree_t *)0x0) {
      if (dfa->mb_cur_max < 2) {
        free_charset(cset);
        goto LAB_0010b82f;
      }
      dfa->field_0xb0 = dfa->field_0xb0 | 2;
      pbVar9 = create_token_tree();
      if (pbVar9 != (bin_tree_t *)0x0) {
        pbVar9 = create_token_tree();
        goto LAB_0010b82f;
      }
    }
    rpl_free(p);
    free_charset(cset);
  }
  pbVar9 = (bin_tree_t *)0x0;
  *err = _REG_ESPACE;
LAB_0010b82f:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar9;
}

