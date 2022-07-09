
int main(int param_1,char **param_2)

{
  Range_element_type RVar1;
  ushort *puVar2;
  ulong uVar3;
  _Bool _Var4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  List_element *pLVar9;
  ushort **ppuVar10;
  __int32_t **pp_Var11;
  char **ppcVar12;
  int *piVar13;
  count cVar14;
  char *buf;
  char *buf_00;
  ushort *puVar15;
  char *buf_01;
  Spec_list *extraout_RDX;
  Spec_list *pSVar16;
  char *pcVar17;
  Spec_list *pSVar18;
  uchar the_char;
  size_t sVar19;
  count repeat_count;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  undefined uVar23;
  long lVar24;
  uint uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  char cVar27;
  char cVar28;
  byte bVar29;
  ulong local_208;
  ulong local_200;
  List_element *local_1f8;
  List_element *local_1f0;
  uint local_1e4;
  char **local_1e0;
  int local_1d0;
  int local_1cc;
  Spec_list local_1c8;
  Spec_list local_188;
  undefined8 local_148 [33];
  long local_40;
  
  bVar29 = 0;
  pcVar17 = (char *)(long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
LAB_00102780:
  do {
    iVar5 = getopt_long(param_1,param_2,"+AcCdst");
    if (iVar5 == -1) goto LAB_00102874;
    if (iVar5 != 99) {
      if (99 < iVar5) {
        if (iVar5 == 0x73) {
          squeeze_repeats = true;
        }
        else if (iVar5 == 0x74) {
          truncate_set1 = true;
        }
        else {
          if (iVar5 != 100) goto LAB_0010325a;
          delete = true;
        }
        goto LAB_00102780;
      }
      if (iVar5 == 0x41) {
        setlocale(3,"C");
        setlocale(0,"C");
        goto LAB_00102780;
      }
      if (iVar5 < 0x42) {
        if (iVar5 == -0x83) {
          version_etc((FILE *)stdout,"tr","GNU coreutils",Version,"Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_0010325a;
      }
      if (iVar5 != 0x43) goto LAB_0010325a;
    }
    complement = true;
  } while( true );
code_r0x00102c2f:
  *(char *)(local_1c8.n_indefinite_repeats + 0x10e0e0) = (char)iVar6;
  if (local_1cc != 2) {
LAB_00102c9c:
    local_1c8.tail = (local_1c8.tail)->next;
    local_1c8.state = 0xffffffffffffffff;
    pLVar9 = (*(List_element **)((long)pcVar17 + 8))->next;
    *(count *)((long)pcVar17 + 0x10) = 0xffffffffffffffff;
    *(List_element **)((long)pcVar17 + 8) = pLVar9;
  }
  goto LAB_00102c3a;
LAB_00102874:
  cVar14 = (count)optind;
  uVar25 = param_1 - optind;
  pSVar16 = (Spec_list *)(ulong)uVar25;
  if (uVar25 != 2) {
    if (delete == squeeze_repeats) {
      iVar6 = 2;
      iVar5 = 2;
    }
    else {
LAB_001028a7:
      iVar6 = 1;
      iVar5 = 2 - (uint)(squeeze_repeats < delete);
    }
    translating = false;
    ppcVar12 = param_2;
    if ((int)uVar25 < iVar6) {
LAB_001033e6:
      local_1c8.n_indefinite_repeats = (size_t)ppcVar12;
      if (uVar25 == 0) {
        uVar8 = dcgettext(0,"missing operand",5);
        error(0,0,uVar8);
        goto LAB_0010325a;
      }
LAB_00103442:
      pcVar17 = quote(*(char **)(local_1c8.n_indefinite_repeats +
                                &((Spec_list *)((long)pcVar17 + -0x38))->field_0x37 * 8));
      uVar8 = dcgettext(0,"missing operand after %s",5);
      error(0,0,uVar8,pcVar17);
      pcVar17 = "Two strings must be given when both deleting and squeezing repeats.";
      if (squeeze_repeats == false) {
        pcVar17 = "Two strings must be given when translating.";
      }
    }
    else {
LAB_001028bc:
      uVar7 = optind;
      if ((int)uVar25 <= iVar5) {
        pSVar18 = &local_1c8;
        local_1c8.head = (List_element *)xmalloc(0x20);
        (local_1c8.head)->next = (List_element *)0x0;
        local_1c8.tail = local_1c8.head;
        _Var4 = parse_str(param_2[(int)optind],pSVar18);
        the_char = (uchar)pSVar18;
        if (_Var4 != false) {
          pcVar17 = (char *)0x0;
          if (uVar25 == 2) goto LAB_00102d20;
          goto LAB_0010290d;
        }
        goto LAB_00102d66;
      }
LAB_001031f0:
      pcVar17 = quote(param_2[(int)(iVar5 + uVar7)]);
      uVar8 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar8,pcVar17);
      pcVar17 = "Only one string may be given when deleting without squeezing repeats.";
      if (uVar25 != 2) goto LAB_0010325a;
    }
    uVar8 = dcgettext(0,pcVar17,5);
    __fprintf_chk(stderr,1,"%s\n",uVar8);
LAB_0010325a:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (delete == false) {
    translating = true;
    iVar5 = 2;
    if (squeeze_repeats != false) goto LAB_001028bc;
  }
  else {
    translating = false;
    if (squeeze_repeats == false) goto LAB_001028a7;
  }
  local_1c8.head = (List_element *)xmalloc(0x20);
  (local_1c8.head)->next = (List_element *)0x0;
  local_1c8.tail = local_1c8.head;
  _Var4 = parse_str(param_2[(int)optind],&local_1c8);
  if (_Var4 != false) {
LAB_00102d20:
    pcVar17 = (char *)&local_188;
    local_188.head = (List_element *)xmalloc(0x20);
    (local_188.head)->next = (List_element *)0x0;
    pSVar18 = (Spec_list *)pcVar17;
    local_188.tail = local_188.head;
    _Var4 = parse_str(param_2[(long)(int)optind + 1],(Spec_list *)pcVar17);
    the_char = (uchar)pSVar18;
    if (_Var4 != false) {
LAB_0010290d:
      get_spec_stats(&local_1c8);
      if (complement != false) {
        local_1c8.state = 0xfffffffffffffffe;
        puVar20 = local_148;
        for (cVar14 = 0x20; cVar14 != 0; cVar14 = cVar14 - 1) {
          *puVar20 = 0;
          puVar20 = puVar20 + (ulong)bVar29 * -2 + 1;
        }
        iVar5 = 0x100;
        while( true ) {
          the_char = '\0';
          iVar6 = get_next(&local_1c8);
          if (iVar6 == -1) break;
          bVar29 = *(byte *)((long)local_148 + (long)iVar6);
          *(undefined *)((long)local_148 + (long)iVar6) = 1;
          iVar5 = iVar5 - (uint)(bVar29 ^ 1);
        }
        local_1c8.length = (count)iVar5;
      }
      uVar3 = local_1c8.length;
      if ((char **)local_1c8.n_indefinite_repeats != (char **)0x0) {
LAB_001033c2:
        uVar8 = dcgettext(0,"the [c*] repeat construct may not appear in string1",5);
        error(1,0,uVar8);
        ppcVar12 = (char **)local_1c8.n_indefinite_repeats;
        goto LAB_001033e6;
      }
      if ((Spec_list *)pcVar17 != (Spec_list *)0x0) {
        get_spec_stats(pcVar17);
        if ((uVar3 < *(count *)((long)pcVar17 + 0x18)) || (*(size_t *)((long)pcVar17 + 0x20) != 1))
        {
          if (*(size_t *)((long)pcVar17 + 0x20) < 2) {
            if (translating != false) goto LAB_00102e90;
            if (*(size_t *)((long)pcVar17 + 0x20) != 0) goto LAB_00102981;
            goto LAB_00102adb;
          }
        }
        else {
          cVar14 = uVar3 - *(count *)((long)pcVar17 + 0x18);
          bVar26 = translating == false;
          *(count *)&((*(List_element **)((long)pcVar17 + 0x28))->u).field_0x8 = cVar14;
          *(ulong *)((long)pcVar17 + 0x18) = uVar3;
          if (bVar26) {
LAB_00102981:
            uVar8 = dcgettext(0,"the [c*] construct may appear in string2 only when translating",5);
            the_char = '\0';
            error(1,0,uVar8);
            pcVar17 = (char *)pSVar16;
LAB_001029a5:
            pSVar16 = (Spec_list *)(ulong)local_1e4;
            if ((local_200 < local_1c8.length) || (local_208 < *(count *)((long)pcVar17 + 0x18)))
            goto LAB_001032c3;
            local_1c8.tail = local_1f8;
            *(List_element **)((long)pcVar17 + 8) = local_1f0;
            local_208 = *(count *)((long)pcVar17 + 0x18);
LAB_001029f7:
            uVar25 = (uint)pSVar16;
            local_1c8.n_indefinite_repeats = (size_t)local_1e0;
            if ((local_1c8.length <= local_208) || (truncate_set1 != false)) goto LAB_00102adb;
LAB_00102a14:
            uVar25 = (uint)pSVar16;
            if (local_208 == 0) {
              uVar8 = dcgettext(0,"when not truncating set1, string2 must be non-empty",5);
              the_char = '\0';
              repeat_count = 1;
              error(1,0,uVar8);
              pSVar16 = extraout_RDX;
LAB_00103292:
              append_repeated_char(repeat_count,the_char,pSVar16);
              goto LAB_00103297;
            }
            pLVar9 = *(List_element **)((long)pcVar17 + 8);
            RVar1 = pLVar9->type;
            if (RVar1 == RE_RANGE) {
              uVar23 = (pLVar9->u).field_0x1;
LAB_00102a3a:
              repeat_count = 0x20;
              lVar24 = local_1c8.length - local_208;
              pLVar9 = (List_element *)xmalloc(0x20);
              pSVar16 = *(Spec_list **)((long)pcVar17 + 8);
              pLVar9->next = (List_element *)0x0;
              pLVar9->type = RE_REPEATED_CHAR;
              *(undefined *)&pLVar9->u = uVar23;
              *(long *)&(pLVar9->u).field_0x8 = lVar24;
              if (pSVar16 != (Spec_list *)0x0) {
                pSVar16->tail = pLVar9;
                *(List_element **)((long)pcVar17 + 8) = pLVar9;
                *(count *)((long)pcVar17 + 0x18) = local_1c8.length;
                if (complement != false) goto LAB_00102a8b;
                goto LAB_00102adb;
              }
              goto LAB_00103292;
            }
            if (RVar1 < RE_CHAR_CLASS) {
LAB_00102a35:
              uVar23 = *(undefined *)&pLVar9->u;
              goto LAB_00102a3a;
            }
            pSVar18 = (Spec_list *)pcVar17;
            if (RVar1 != RE_CHAR_CLASS) {
              if (RVar1 != RE_REPEATED_CHAR) {
                iVar5 = main_cold();
                return iVar5;
              }
              goto LAB_00102a35;
            }
LAB_0010330e:
            pcVar17 = (char *)pSVar16;
            uVar8 = dcgettext(0,
                              "when translating with string1 longer than string2,\nthe latter string must not end with a character class"
                              ,5);
            error(1,0,uVar8);
LAB_00103332:
            uVar25 = (uint)pcVar17;
            uVar8 = dcgettext(0,"misaligned [:upper:] and/or [:lower:] construct",5);
            error(1,0,uVar8);
            pcVar17 = (char *)pSVar18;
LAB_00103356:
            uVar8 = dcgettext(0,
                              "when translating, the only character classes that may appear in\nstring2 are \'upper\' and \'lower\'"
                              ,5);
            error(1,0,uVar8);
          }
          else {
LAB_00102e90:
            if (*(_Bool *)((long)pcVar17 + 0x30) == false) {
              if (*(_Bool *)((long)pcVar17 + 0x32) == false) {
                local_200 = local_1c8.length;
                local_208 = *(count *)((long)pcVar17 + 0x18);
                if (complement == false) {
                  cVar28 = *(_Bool *)((long)pcVar17 + 0x31);
                  local_1e0 = (char **)local_1c8.n_indefinite_repeats;
                  if ((_Bool)cVar28 != false) {
                    ppuVar10 = __ctype_b_loc();
                    lVar24 = 0;
                    lVar22 = 0;
                    puVar15 = *ppuVar10;
                    puVar2 = puVar15 + 0x100;
                    do {
                      cVar14 = (ulong)*puVar15 & 0xffffffffffff0100;
                      lVar22 = (lVar22 + 1) - (ulong)((short)cVar14 == 0);
                      lVar24 = (lVar24 + 1) - (ulong)((*puVar15 & 0x200) == 0);
                      puVar15 = puVar15 + 1;
                    } while (puVar15 != puVar2);
                    *(count *)((long)pcVar17 + 0x10) = 0xfffffffffffffffe;
                    local_1f8 = local_1c8.tail;
                    local_1f0 = *(List_element **)((long)pcVar17 + 8);
                    pSVar18 = (Spec_list *)&local_1cc;
                    local_1c8.state = 0xfffffffffffffffe;
                    cVar27 = cVar28;
                    do {
                      uVar7 = get_next(&local_1c8,&local_1d0);
                      local_1c8.n_indefinite_repeats = (size_t)uVar7;
                      iVar6 = get_next(pcVar17);
                      iVar5 = local_1cc;
                      if (cVar28 == '\0') {
                        if (local_1cc != 2) {
LAB_00102f8f:
                          local_1c8.tail = (local_1c8.tail)->next;
                          local_1c8.state = 0xffffffffffffffff;
                          pLVar9 = (*(List_element **)((long)pcVar17 + 8))->next;
                          *(count *)((long)pcVar17 + 0x10) = 0xffffffffffffffff;
                          *(List_element **)((long)pcVar17 + 8) = pLVar9;
                          lVar21 = lVar24 + -1;
                          if (local_1d0 == 1) {
                            lVar21 = lVar22 + -1;
                          }
                          local_1c8.length = local_1c8.length - lVar21;
                          lVar21 = lVar24 + -1;
                          if (local_1cc + -1 == 0) {
                            lVar21 = lVar22 + -1;
                          }
                          cVar14 = *(count *)((long)pcVar17 + 0x18) - lVar21;
                          *(count *)((long)pcVar17 + 0x18) = cVar14;
                          iVar5 = local_1cc + -1;
                        }
                      }
                      else if (local_1cc != 2) {
                        if ((cVar27 != '\0') && (local_1d0 != 2)) goto LAB_00102f8f;
                        goto LAB_00103332;
                      }
                      the_char = (uchar)iVar5;
                      cVar27 = local_1c8.state == 0xffffffffffffffff;
                      cVar28 = *(count *)((long)pcVar17 + 0x10) == 0xffffffffffffffff;
                      local_1e4 = uVar25;
                    } while ((uVar7 != 0xffffffff) && (iVar6 != -1));
                    goto LAB_001029a5;
                  }
                  goto LAB_001029f7;
                }
                if ((local_208 < local_1c8.length) && (truncate_set1 == false)) goto LAB_00102a14;
LAB_00102a8b:
                uVar7 = (uint)cVar14;
                if (local_1c8.has_char_class != false) {
                  if (*(count *)((long)pcVar17 + 0x18) == local_1c8.length) {
                    *(count *)((long)pcVar17 + 0x10) = 0xfffffffffffffffe;
                    iVar5 = get_next(pcVar17,0);
                    uVar7 = (uint)cVar14;
                    if (iVar5 != -1) {
                      do {
                        iVar6 = get_next(pcVar17,0);
                        uVar7 = (uint)cVar14;
                        if (iVar6 == -1) goto LAB_00102adb;
                      } while (iVar5 == iVar6);
                    }
                  }
                  uVar8 = dcgettext(0,
                                    "when translating with complemented character classes,\nstring2 must map all characters in the domain to one"
                                    ,5);
                  iVar5 = error(1,0,uVar8);
                  param_2 = (char **)local_1c8.n_indefinite_repeats;
                  goto LAB_001031f0;
                }
                goto LAB_00102adb;
              }
              goto LAB_00103356;
            }
          }
          uVar8 = dcgettext(0,"[=c=] expressions may not appear in string2 when translating",5);
          error(1,0,uVar8);
        }
        uVar8 = dcgettext(0,"only one [c*] repeat construct may appear in string2",5);
        error(1,0,uVar8);
        goto LAB_001033c2;
      }
LAB_00102adb:
      fadvise(stdin,FADVISE_SEQUENTIAL);
      _Var4 = squeeze_repeats;
      if ((uVar25 == 1) && (squeeze_repeats != false)) {
        sVar19 = (size_t)complement;
        set_initialize(&local_1c8,complement,in_squeeze_set);
        squeeze_filter(plain_read,sVar19,buf);
      }
      else {
        if (delete != false) {
          if (uVar25 == 1) {
            pcVar17 = io_buf;
            set_initialize(&local_1c8,complement,in_delete_set);
            do {
              local_1c8.n_indefinite_repeats = read_and_delete(io_buf,0x2000);
              if ((char **)local_1c8.n_indefinite_repeats == (char **)0x0) goto LAB_00102b23;
              ppcVar12 = (char **)fwrite_unlocked(io_buf,1,local_1c8.n_indefinite_repeats,stdout);
            } while ((char **)local_1c8.n_indefinite_repeats == ppcVar12);
LAB_00103297:
            uVar8 = dcgettext(0,"write error",5);
            piVar13 = __errno_location();
            error(1,*piVar13,uVar8);
LAB_001032c3:
                    /* WARNING: Subroutine does not return */
            __assert_fail("old_s1_len >= s1->length && old_s2_len >= s2->length","src/tr.c",0x4c8,
                          "validate_case_classes");
          }
          if ((uVar25 == 2) && (squeeze_repeats != false)) {
            set_initialize(&local_1c8,complement,in_delete_set);
            sVar19 = 0;
            set_initialize((Spec_list *)pcVar17,false,in_squeeze_set);
            squeeze_filter(read_and_delete,sVar19,buf_00);
            goto LAB_00102b23;
          }
        }
        if (translating != false) {
          lVar24 = 0;
          if (complement == false) {
            do {
              xlate[lVar24] = (char)lVar24;
              lVar24 = lVar24 + 1;
            } while (lVar24 != 0x100);
            *(count *)((long)pcVar17 + 0x10) = 0xfffffffffffffffe;
            local_1c8.state = 0xfffffffffffffffe;
LAB_00102c3a:
            iVar5 = get_next(&local_1c8,&local_1d0);
            local_1c8.n_indefinite_repeats = (size_t)iVar5;
            iVar6 = get_next(pcVar17);
            if (local_1d0 == 0) {
              if (local_1cc != 1) goto LAB_00102c1d;
              ppuVar10 = __ctype_b_loc();
              lVar24 = 0;
              puVar2 = *ppuVar10;
              do {
                if ((*(byte *)((long)puVar2 + lVar24 * 2 + 1) & 2) != 0) {
                  pp_Var11 = __ctype_toupper_loc();
                  xlate[lVar24] = (char)(*pp_Var11)[lVar24];
                }
                lVar24 = lVar24 + 1;
              } while (lVar24 != 0x100);
              goto LAB_00102c9c;
            }
            if ((local_1d0 == 1) && (local_1cc == 0)) {
              ppuVar10 = __ctype_b_loc();
              lVar24 = 0;
              puVar2 = *ppuVar10;
              do {
                if ((*(byte *)((long)puVar2 + lVar24 * 2 + 1) & 1) != 0) {
                  pp_Var11 = __ctype_tolower_loc();
                  xlate[lVar24] = (char)(*pp_Var11)[lVar24];
                }
                lVar24 = lVar24 + 1;
              } while (lVar24 != 0x100);
              goto LAB_00102c9c;
            }
LAB_00102c1d:
            if (iVar5 != -1) {
              if (iVar6 != -1) goto code_r0x00102c2f;
              local_1c8.n_indefinite_repeats = (size_t)(iVar5 + 1U);
              if ((iVar5 + 1U != 0) && (truncate_set1 == false)) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("c1 == -1 || truncate_set1","src/tr.c",0x765,
                              (char *)&__PRETTY_FUNCTION___7781);
              }
            }
            goto LAB_00102db8;
          }
          set_initialize(&local_1c8,false,in_delete_set);
          *(count *)((long)pcVar17 + 0x10) = 0xfffffffffffffffe;
          lVar24 = 0;
          do {
            xlate[lVar24] = (char)lVar24;
            lVar24 = lVar24 + 1;
          } while (lVar24 != 0x100);
          do {
            if (*(char *)(local_1c8.n_indefinite_repeats + 0x10e1e0) == '\0') {
              iVar5 = get_next(pcVar17);
              if (iVar5 == -1) {
                if (truncate_set1 == false) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("ch != -1 || truncate_set1","src/tr.c",0x730,
                                (char *)&__PRETTY_FUNCTION___7781);
                }
                break;
              }
              *(char *)(local_1c8.n_indefinite_repeats + 0x10e0e0) = (char)iVar5;
            }
            local_1c8.n_indefinite_repeats = local_1c8.n_indefinite_repeats + 1;
          } while ((char **)local_1c8.n_indefinite_repeats != (char **)0x100);
LAB_00102db8:
          if (_Var4 == false) {
            do {
              local_1c8.n_indefinite_repeats = read_and_xlate(io_buf,0x2000);
              if ((char **)local_1c8.n_indefinite_repeats == (char **)0x0) goto LAB_00102b23;
              ppcVar12 = (char **)fwrite_unlocked(io_buf,1,local_1c8.n_indefinite_repeats,stdout);
            } while ((char **)local_1c8.n_indefinite_repeats == ppcVar12);
            uVar8 = dcgettext(0,"write error",5);
            piVar13 = __errno_location();
            error(1,*piVar13,uVar8);
            pSVar18 = (Spec_list *)pcVar17;
            pSVar16 = (Spec_list *)xlate;
            goto LAB_0010330e;
          }
          sVar19 = 0;
          set_initialize((Spec_list *)pcVar17,false,in_squeeze_set);
          squeeze_filter(read_and_xlate,sVar19,buf_01);
        }
      }
LAB_00102b23:
      iVar5 = close(0);
      if (iVar5 == 0) goto LAB_00102b32;
      uVar8 = dcgettext(0,"standard input",5);
      piVar13 = __errno_location();
      error(1,*piVar13,uVar8);
      goto LAB_00103442;
    }
  }
LAB_00102d66:
  iVar5 = 1;
LAB_00102b32:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}

