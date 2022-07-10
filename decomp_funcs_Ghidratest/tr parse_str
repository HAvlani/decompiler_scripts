
_Bool parse_str(char *s,Spec_list *spec_list)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uchar c;
  long lVar4;
  ulong uVar5;
  count cVar6;
  _Bool _Var7;
  uint uVar8;
  strtol_error sVar9;
  int iVar10;
  size_t sVar11;
  char *p;
  _Bool *p_00;
  ulong uVar12;
  List_element *pLVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 uVar16;
  uint uVar17;
  List_element *pLVar18;
  char *pcVar19;
  count repeat_count_00;
  byte bVar20;
  uint uVar21;
  ulong uVar22;
  size_t sVar23;
  uchar *puVar24;
  uint uVar25;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long in_FS_OFFSET;
  count repeat_count;
  char *d_end;
  E_string es;
  ulong uVar26;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  sVar11 = strlen(s);
  p = (char *)xmalloc(sVar11);
  es.s = p;
  p_00 = (_Bool *)xcalloc(sVar11,1);
  es.escaped = p_00;
  if (*s != 0) {
    uVar12 = 0;
    uVar22 = 0;
    bVar20 = *s;
    do {
      while( true ) {
        iVar10 = (int)uVar12;
        uVar12 = (ulong)(iVar10 + 1);
        uVar25 = (int)uVar22 + 1;
        uVar26 = (ulong)uVar25;
        bVar1 = s[uVar12];
        if (bVar20 != 0x5c) break;
        p_00[uVar22] = true;
        if (bVar1 == 0) {
          uVar16 = dcgettext(0,"warning: an unescaped backslash at end of string is not portable",5)
          ;
          error(0,0,uVar16);
          p_00[uVar22] = false;
          bVar20 = 0x5c;
          uVar8 = iVar10 + 1;
        }
        else {
          uVar17 = bVar1 - 0x30;
          bVar20 = (byte)uVar17;
          switch(uVar17 & 0xff) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            uVar8 = iVar10 + 2;
            if ((int)s[uVar8] - 0x30U < 8) {
              uVar21 = ((int)s[uVar8] - 0x30U) + uVar17 * 8;
              bVar20 = (byte)uVar21;
              uVar17 = (int)s[iVar10 + 3] - 0x30;
              uVar8 = iVar10 + 3;
              if (uVar17 < 8) {
                if ((int)(uVar17 + (uVar21 & 0xff) * 8) < 0x100) {
                  bVar20 = (char)uVar17 + bVar20 * '\b';
                  uVar8 = iVar10 + 4;
                }
                else {
                  uVar16 = dcgettext(0,
                                     "warning: the ambiguous octal escape \\%c%c%c is being\n\tinterpreted as the 2-byte sequence \\0%c%c, %c"
                                     ,5);
                  error(0,0,uVar16);
                  uVar8 = iVar10 + 3;
                }
              }
            }
            break;
          case 0x2c:
            bVar20 = 0x5c;
            uVar8 = iVar10 + 2;
            break;
          case 0x31:
            bVar1 = 7;
          default:
            bVar20 = bVar1;
            uVar8 = iVar10 + 2;
            break;
          case 0x32:
            bVar20 = 8;
            uVar8 = iVar10 + 2;
            break;
          case 0x36:
            bVar20 = 0xc;
            uVar8 = iVar10 + 2;
            break;
          case 0x3e:
            bVar20 = 10;
            uVar8 = iVar10 + 2;
            break;
          case 0x42:
            bVar20 = 0xd;
            uVar8 = iVar10 + 2;
            break;
          case 0x44:
            bVar20 = 9;
            uVar8 = iVar10 + 2;
            break;
          case 0x46:
            bVar20 = 0xb;
            uVar8 = iVar10 + 2;
          }
        }
        uVar12 = (ulong)uVar8;
        p[uVar22] = bVar20;
        uVar22 = uVar26;
        bVar20 = s[uVar12];
        if (s[uVar12] == 0) goto LAB_00104073;
      }
      p[uVar22] = bVar20;
      uVar22 = uVar26;
      bVar20 = bVar1;
    } while (bVar1 != 0);
LAB_00104073:
    es.len = uVar26;
    if (uVar25 < 3) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar22 = 2;
      do {
        bVar20 = p[uVar12];
        uVar27 = uVar12 + 1;
        cVar2 = p[uVar12 + 1];
        if ((bVar20 == 0x5b) && (cVar3 = p_00[uVar12], (_Bool)cVar3 == false)) {
          if (((cVar2 != ':') && (cVar2 != '=')) || (p_00[uVar27] != false)) {
try_bracketed_repeat:
            if ((p[uVar22] == '*') && (p_00[uVar22] == false)) {
              for (uVar28 = uVar12 + 3; (uVar28 < uVar26 && (p_00[uVar28] == false));
                  uVar28 = uVar28 + 1) {
                if (p[uVar28] == ']') {
                  sVar23 = (uVar28 - uVar27) - 2;
                  if (sVar23 == 0) {
                    repeat_count = 0;
                  }
                  else {
                    pcVar14 = p + uVar12 + 3;
                    sVar9 = xstrtoumax(pcVar14,&d_end,
                                       (*pcVar14 != '0') + 8 + (uint)(*pcVar14 != '0'),&repeat_count
                                       ,(char *)0x0);
                    if (((sVar9 != LONGINT_OK) || (repeat_count == 0xffffffffffffffff)) ||
                       (d_end != pcVar14 + sVar23)) {
                      pcVar14 = make_printable_str(pcVar14,sVar23);
                      pcVar15 = quote(pcVar14);
                      pcVar19 = "invalid repeat count %s in [c*n] construct";
                      goto LAB_001045a1;
                    }
                  }
                  cVar6 = repeat_count;
                  repeat_count_00 = 0x20;
                  pLVar13 = (List_element *)xmalloc(0x20);
                  pLVar13->next = (List_element *)0x0;
                  *(count *)&(pLVar13->u).field_0x8 = cVar6;
                  pLVar18 = spec_list->tail;
                  pLVar13->type = RE_REPEATED_CHAR;
                  *(char *)&pLVar13->u = cVar2;
                  if (pLVar18 == (List_element *)0x0) {
                    append_repeated_char(repeat_count_00,(uchar)spec_list,(Spec_list *)0x0);
LAB_0010478b:
                    /* WARNING: Subroutine does not return */
                    __assert_fail("list->tail","src/tr.c",0x2bd,"append_char_class");
                  }
                  pLVar18->next = pLVar13;
                  uVar22 = uVar28 + 3;
                  spec_list->tail = pLVar13;
                  uVar12 = uVar28 + 1;
                  goto joined_r0x0010420c;
                }
              }
            }
            goto LAB_001040a0;
          }
          uVar28 = uVar22;
          do {
            uVar5 = uVar28;
            if (uVar26 - 1 <= uVar5) goto try_bracketed_repeat;
            uVar28 = uVar5 + 1;
          } while ((((p[uVar5] != cVar2) || (p[uVar5 + 1] != ']')) || (p_00[uVar5] != false)) ||
                  (p_00[uVar5 + 1] != false));
          pcVar14 = p + uVar22;
          sVar23 = (uVar5 - uVar12) - 2;
          if (sVar23 == 0) {
            pcVar14 = "missing character class name \'[::]\'";
            if (cVar2 != ':') {
              pcVar14 = "missing equivalence class character \'[==]\'";
            }
            uVar16 = dcgettext(0,pcVar14,5);
            error(0,0,uVar16);
            goto LAB_0010440c;
          }
          if (cVar2 == ':') {
            lVar29 = 0;
            do {
              pcVar15 = char_class_name[lVar29];
              iVar10 = strncmp(pcVar14,pcVar15,sVar23);
              if ((iVar10 == 0) && (sVar11 = strlen(pcVar15), sVar23 == sVar11)) {
                pLVar13 = (List_element *)xmalloc(0x20);
                pLVar13->next = (List_element *)0x0;
                pLVar18 = spec_list->tail;
                pLVar13->type = RE_CHAR_CLASS;
                *(int *)&pLVar13->u = (int)lVar29;
                if (pLVar18 != (List_element *)0x0) goto LAB_001045f7;
                goto LAB_0010478b;
              }
              lVar29 = lVar29 + 1;
            } while (lVar29 != 0xc);
            _Var7 = star_digits_closebracket(&es,uVar22);
            if (_Var7 != false) goto try_bracketed_repeat;
            pcVar14 = make_printable_str(pcVar14,sVar23);
            pcVar15 = quote(pcVar14);
            pcVar19 = "invalid character class %s";
LAB_001045a1:
            uVar16 = dcgettext(0,pcVar19,5);
LAB_00104335:
            error(0,0,uVar16,pcVar15);
            rpl_free(pcVar14);
            goto LAB_0010440c;
          }
          if (sVar23 != 1) {
            _Var7 = star_digits_closebracket(&es,uVar22);
            if (_Var7 != false) goto try_bracketed_repeat;
            pcVar15 = make_printable_str(pcVar14,sVar23);
            uVar16 = dcgettext(0,"%s: equivalence class operand must be a single character",5);
            pcVar14 = pcVar15;
            goto LAB_00104335;
          }
          pLVar13 = (List_element *)xmalloc(0x20);
          pLVar13->next = (List_element *)0x0;
          cVar2 = *pcVar14;
          pLVar13->type = RE_EQUIV_CLASS;
          *(char *)&pLVar13->u = cVar2;
          pLVar18 = spec_list->tail;
          if (pLVar18 == (List_element *)0x0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("list->tail","src/tr.c",0x2e7,"append_equiv_class");
          }
LAB_001045f7:
          pLVar18->next = pLVar13;
          uVar27 = uVar5 + 2;
          spec_list->tail = pLVar13;
        }
        else {
LAB_001040a0:
          if ((cVar2 == '-') && (cVar3 = p_00[uVar27], (_Bool)cVar3 == false)) {
            bVar1 = p[uVar22];
            if (bVar1 < bVar20) {
              pcVar14 = make_printable_char(bVar20);
              pcVar15 = make_printable_char(bVar1);
              uVar16 = dcgettext(0,
                                 "range-endpoints of \'%s-%s\' are in reverse collating sequence order"
                                 ,5);
              error(0,0,uVar16,pcVar14,pcVar15);
              rpl_free(pcVar14);
              rpl_free(pcVar15);
              goto LAB_0010440c;
            }
            pLVar13 = (List_element *)xmalloc(0x20);
            pLVar13->next = (List_element *)0x0;
            pLVar18 = spec_list->tail;
            pLVar13->type = RE_RANGE;
            *(byte *)&pLVar13->u = bVar20;
            (pLVar13->u).field_0x1 = bVar1;
            if (pLVar18 == (List_element *)0x0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("list->tail","src/tr.c",0x2a7,"append_range");
            }
            pLVar18->next = pLVar13;
            uVar27 = uVar12 + 3;
            spec_list->tail = pLVar13;
          }
          else {
            append_normal_char(spec_list,bVar20);
          }
        }
        uVar22 = uVar27 + 2;
        uVar12 = uVar27;
joined_r0x0010420c:
      } while (uVar22 < uVar26);
    }
    puVar24 = (uchar *)(p + uVar12);
    if (uVar12 < uVar26) {
      do {
        c = *puVar24;
        puVar24 = puVar24 + 1;
        append_normal_char(spec_list,c);
      } while ((uchar *)(p + uVar26) != puVar24);
    }
  }
  cVar3 = '\x01';
LAB_0010440c:
  rpl_free(p);
  rpl_free(p_00);
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (_Bool)cVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

