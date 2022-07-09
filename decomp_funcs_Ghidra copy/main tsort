
int main(int argc,char **argv)

{
  size_t *psVar1;
  char cVar2;
  char **ppcVar3;
  item *root;
  item *piVar4;
  bool bVar5;
  int iVar6;
  FILE *pFVar7;
  size_t sVar8;
  char **ppcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  int *piVar14;
  char cVar15;
  uint uVar16;
  char **ppcVar17;
  successor *psVar18;
  char **ppcVar19;
  char **ppcVar20;
  item *piVar21;
  char **ppcVar22;
  char **ppcVar23;
  undefined8 uVar24;
  char **local_80;
  char *local_68;
  int local_5c;
  token_buffer tokenbuffer;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  uVar24 = 0x10271b;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"tsort","GNU coreutils",Version,true,usage,"Mark Kettenis",0,uVar24);
  if (1 < argc - optind) {
    pcVar12 = quote(argv[(long)optind + 1]);
    uVar24 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar24,pcVar12);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (optind == argc) {
    local_80 = (char **)xzalloc(0x38);
    local_5c = 0;
    local_68 = "-";
  }
  else {
    local_68 = argv[optind];
    local_5c = strcmp(local_68,"-");
    local_80 = (char **)xzalloc(0x38);
    if ((local_5c != 0) && (pFVar7 = freopen_safer(local_68,"r",stdin), pFVar7 == (FILE *)0x0))
    goto LAB_00102dd2;
  }
  fadvise(stdin,FADVISE_SEQUENTIAL);
  init_tokenbuffer(&tokenbuffer);
  do {
    ppcVar9 = (char **)0x0;
    do {
      ppcVar23 = ppcVar9;
      sVar8 = readtoken(stdin," \t\n",3,&tokenbuffer);
      pcVar12 = tokenbuffer.buffer;
      if (sVar8 == 0xffffffffffffffff) {
        if (ppcVar23 != (char **)0x0) {
          uVar24 = quotearg_n_style_colon(0,3,local_68);
          uVar13 = dcgettext(0,"%s: input contains an odd number of tokens",5);
          error(1,0,uVar13,uVar24);
          goto LAB_00102d98;
        }
        root = (item *)local_80[2];
        if (root != (item *)0x0) {
          recurse_tree(root,count_items);
        }
        uVar16 = 1;
        goto LAB_00102b4a;
      }
      if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("len != 0","src/tsort.c",0x1ca,"tsort");
      }
      ppcVar22 = (char **)local_80[2];
      if (ppcVar22 == (char **)0x0) {
        ppcVar9 = (char **)xzalloc(0x38);
        if (pcVar12 != (char *)0x0) {
          pcVar12 = xstrdup(pcVar12);
          *ppcVar9 = pcVar12;
        }
        local_80[2] = (char *)ppcVar9;
      }
      else {
        ppcVar17 = local_80;
        ppcVar9 = ppcVar22;
        if (tokenbuffer.buffer == (char *)0x0) {
LAB_00102d1f:
                    /* WARNING: Subroutine does not return */
          __assert_fail("str && p && p->str","src/tsort.c",0x8c,"search_item");
        }
        while( true ) {
          ppcVar20 = ppcVar9;
          if (*ppcVar20 == (char *)0x0) goto LAB_00102d1f;
          iVar6 = strcmp(pcVar12,*ppcVar20);
          ppcVar9 = ppcVar20;
          if (iVar6 == 0) goto joined_r0x0010288a;
          ppcVar9 = (char **)ppcVar20[2];
          if (iVar6 < 0) {
            ppcVar9 = (char **)ppcVar20[1];
          }
          if (ppcVar9 == (char **)0x0) break;
          if (*(char *)(ppcVar9 + 3) != '\0') {
            ppcVar17 = ppcVar20;
            ppcVar22 = ppcVar9;
          }
        }
        ppcVar9 = (char **)xzalloc(0x38);
        pcVar10 = xstrdup(pcVar12);
        *ppcVar9 = pcVar10;
        if (iVar6 < 0) {
          ppcVar20[1] = (char *)ppcVar9;
        }
        else {
          ppcVar20[2] = (char *)ppcVar9;
        }
        if (*ppcVar22 == (char *)0x0) {
LAB_00102d3e:
                    /* WARNING: Subroutine does not return */
          __assert_fail("str && s && s->str && !STREQ (str, s->str)","src/tsort.c",0xa3,
                        "search_item");
        }
        iVar6 = strcmp(pcVar12,*ppcVar22);
        if (iVar6 == 0) goto LAB_00102d3e;
        ppcVar20 = (char **)ppcVar22[2];
        if (iVar6 < 0) {
          ppcVar20 = (char **)ppcVar22[1];
        }
        uVar16 = iVar6 >> 0x1f | 1;
        ppcVar3 = ppcVar20;
        while (ppcVar3 != ppcVar9) {
          if ((ppcVar3 == (char **)0x0) || (*ppcVar3 == (char *)0x0)) {
LAB_00102d00:
                    /* WARNING: Subroutine does not return */
            __assert_fail("str && p && p->str && !STREQ (str, p->str)","src/tsort.c",0xb1,
                          "search_item");
          }
          iVar6 = strcmp(pcVar12,*ppcVar3);
          if (iVar6 == 0) goto LAB_00102d00;
          if (iVar6 < 0) {
            *(undefined *)(ppcVar3 + 3) = 0xff;
            ppcVar3 = (char **)ppcVar3[1];
          }
          else {
            *(undefined *)(ppcVar3 + 3) = 1;
            ppcVar3 = (char **)ppcVar3[2];
          }
        }
        cVar2 = *(char *)(ppcVar22 + 3);
        cVar15 = (char)uVar16;
        if ((cVar2 == '\0') || ((int)cVar2 == -uVar16)) {
          *(char *)(ppcVar22 + 3) = cVar15 + cVar2;
        }
        else {
          if (uVar16 == (int)*(char *)(ppcVar20 + 3)) {
            if (uVar16 == 0xffffffff) {
              ppcVar22[1] = ppcVar20[2];
              ppcVar20[2] = (char *)ppcVar22;
            }
            else {
              ppcVar22[2] = ppcVar20[1];
              ppcVar20[1] = (char *)ppcVar22;
            }
            *(undefined *)(ppcVar20 + 3) = 0;
            *(char *)(ppcVar22 + 3) = '\0';
          }
          else {
            ppcVar3 = (char **)ppcVar20[1];
            ppcVar19 = (char **)ppcVar20[2];
            if (uVar16 == 0xffffffff) {
              ppcVar20[2] = ppcVar19[1];
              ppcVar19[1] = (char *)ppcVar20;
              ppcVar22[1] = ppcVar19[2];
              ppcVar19[2] = (char *)ppcVar22;
            }
            else {
              ppcVar20[1] = ppcVar3[2];
              ppcVar3[2] = (char *)ppcVar20;
              ppcVar22[2] = ppcVar3[1];
              ppcVar3[1] = (char *)ppcVar22;
              ppcVar19 = ppcVar3;
            }
            *(char *)(ppcVar22 + 3) = '\0';
            *(undefined *)(ppcVar20 + 3) = 0;
            if (uVar16 == (int)*(char *)(ppcVar19 + 3)) {
              *(char *)(ppcVar22 + 3) = -cVar15;
            }
            else if (-uVar16 == (int)*(char *)(ppcVar19 + 3)) {
              *(char *)(ppcVar20 + 3) = cVar15;
            }
            *(undefined *)(ppcVar19 + 3) = 0;
            ppcVar20 = ppcVar19;
          }
          if (ppcVar22 == (char **)ppcVar17[2]) {
            ppcVar17[2] = (char *)ppcVar20;
          }
          else {
            ppcVar17[1] = (char *)ppcVar20;
          }
        }
      }
joined_r0x0010288a:
    } while (ppcVar23 == (char **)0x0);
    iVar6 = strcmp(*ppcVar23,*ppcVar9);
    if (iVar6 != 0) {
      ppcVar9[4] = ppcVar9[4] + 1;
      puVar11 = (undefined8 *)xmalloc(0x10);
      pcVar12 = ppcVar23[6];
      *puVar11 = ppcVar9;
      puVar11[1] = pcVar12;
      ppcVar23[6] = (char *)puVar11;
    }
  } while( true );
LAB_00102b4a:
  if (n_strings == 0) {
LAB_00102c01:
    iVar6 = rpl_fclose(stdin);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      exit(uVar16 ^ 1);
    }
LAB_00102d98:
    if (local_5c != 0) goto LAB_00102e03;
    uVar24 = dcgettext(0,"standard input",5);
    do {
      piVar14 = __errno_location();
      error(1,*piVar14,"%s",uVar24);
LAB_00102dd2:
      uVar24 = quotearg_n_style_colon(0,3,local_68);
      piVar14 = __errno_location();
      error(1,*piVar14,"%s",uVar24);
LAB_00102e03:
      uVar24 = quotearg_n_style_colon(0,3,local_68);
    } while( true );
  }
  if (root == (item *)0x0) {
    if (head != (item *)0x0) goto LAB_00102b80;
  }
  else {
    recurse_tree(root,scan_zeros);
    sVar8 = n_strings;
    for (; head != (item *)0x0; head = head->qlink) {
LAB_00102b80:
      psVar18 = head->top;
      puts(head->str);
      piVar21 = zeros;
      bVar5 = false;
      sVar8 = n_strings - 1;
      head->printed = true;
      n_strings = sVar8;
      if (psVar18 != (successor *)0x0) {
        do {
          piVar4 = psVar18->suc;
          psVar1 = &piVar4->count;
          *psVar1 = *psVar1 - 1;
          if (*psVar1 == 0) {
            piVar21->qlink = piVar4;
            bVar5 = true;
            piVar21 = piVar4;
          }
          psVar18 = psVar18->next;
        } while (psVar18 != (successor *)0x0);
        if (bVar5) {
          zeros = piVar21;
        }
      }
    }
    if (sVar8 == 0) goto LAB_00102c01;
  }
  uVar24 = quotearg_n_style_colon(0,3,local_68);
  uVar13 = dcgettext(0,"%s: input contains a loop:",5);
  uVar16 = 0;
  error(0,0,uVar13,uVar24);
  do {
    if (root != (item *)0x0) {
      recurse_tree(root,detect_loop);
    }
  } while (loop != (item *)0x0);
  goto LAB_00102b4a;
}

