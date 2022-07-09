
void sortlines(line *lines,size_t nthreads,size_t total_lines,merge_node *node,
              merge_node_queue *queue,FILE *tfp,char *temp_output)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  merge_node *node_00;
  size_t sVar8;
  line *plVar9;
  line *plVar10;
  line *plVar11;
  line *plVar12;
  size_t sVar13;
  size_t sVar14;
  long lVar15;
  long lVar16;
  merge_node *node_01;
  size_t sVar17;
  ulong uVar18;
  line *plVar19;
  char cVar20;
  line *plVar21;
  line **pplVar22;
  line *plVar23;
  line *plVar24;
  long in_FS_OFFSET;
  pthread_t thread;
  thread_args args;
  
  uVar18 = nthreads >> 1;
  sVar8 = node->nlo;
  sVar13 = node->nhi;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  args.node = node->lo_child;
  args.output_temp = temp_output;
  args.lines = lines;
  args.nthreads = uVar18;
  args.total_lines = total_lines;
  args.queue = queue;
  args.tfp = tfp;
  if ((0x1ffff < sVar8 + sVar13) && (1 < nthreads)) {
    iVar7 = pthread_create(&thread,(pthread_attr_t *)0x0,sortlines_thread,&args);
    if (iVar7 == 0) {
      sortlines(lines + -node->nlo,nthreads - uVar18,total_lines,node->hi_child,queue,tfp,
                temp_output);
      pthread_join(thread,(void **)0x0);
      goto LAB_0010b9c5;
    }
    sVar8 = node->nlo;
    sVar13 = node->nhi;
  }
  plVar21 = lines + -sVar8;
  if (1 < sVar13) {
    sequential_sort(plVar21,sVar13,lines + -total_lines + -(sVar8 >> 1),false);
  }
  if (1 < sVar8) {
    sequential_sort(lines,sVar8,lines + -total_lines,false);
  }
  node->lo = lines;
  node->hi = plVar21;
  node->end_lo = plVar21;
  node->end_hi = lines + (-sVar13 - sVar8);
  queue_insert(queue,node);
  __mutex = &queue->mutex;
LAB_0010b490:
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
  while (node_00 = (merge_node *)heap_remove_top(queue->priority_queue),
        node_00 == (merge_node *)0x0) {
    pthread_cond_wait((pthread_cond_t *)&queue->cond,(pthread_mutex_t *)__mutex);
  }
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  __mutex_00 = &node_00->lock;
  pthread_mutex_lock((pthread_mutex_t *)__mutex_00);
  uVar1 = node_00->level;
  node_00->queued = false;
  if (uVar1 != 0) {
    plVar21 = node_00->lo;
    plVar23 = node_00->hi;
    plVar19 = node_00->end_lo;
    lVar15 = (total_lines >> ((char)uVar1 * '\x02' + 2U & 0x3f)) + 1;
    if (1 < uVar1) {
      pplVar22 = node_00->dest;
      plVar11 = plVar23;
      plVar12 = plVar21;
      lVar16 = lVar15;
      plVar24 = *pplVar22;
      if (plVar21 == plVar19) {
        cVar20 = '\0';
        sVar8 = 0;
        sVar14 = 0;
      }
      else {
LAB_0010b560:
        do {
          if (node_00->end_hi == plVar11) {
            pplVar22 = node_00->dest;
            cVar20 = node_00->queued;
            plVar10 = node_00->lo;
LAB_0010b690:
            sVar14 = (long)plVar21 - (long)plVar12 >> 5;
            sVar8 = (long)plVar23 - (long)plVar11 >> 5;
            sVar13 = node_00->nhi;
            sVar17 = node_00->nlo;
            if (sVar13 != sVar8) goto LAB_0010b5f7;
            if ((plVar19 == plVar10) || (lVar15 = lVar16 + -1, plVar23 = plVar24, lVar16 == 0))
            goto LAB_0010b6f0;
            goto LAB_0010b6c6;
          }
          lVar15 = lVar16 + -1;
          if (lVar16 == 0) {
            pplVar22 = node_00->dest;
            cVar20 = node_00->queued;
            plVar10 = node_00->lo;
            lVar16 = -1;
            goto LAB_0010b690;
          }
          plVar10 = plVar24 + -1;
          iVar7 = compare(plVar12 + -1,plVar11 + -1);
          lVar16 = lVar15;
          if (iVar7 < 1) {
            plVar9 = node_00->lo;
            plVar19 = node_00->end_lo;
            plVar11 = node_00->hi;
            uVar3 = *(undefined4 *)&plVar9[-1].text;
            uVar4 = *(undefined4 *)((long)&plVar9[-1].text + 4);
            uVar5 = *(undefined4 *)(&DAT_ffffffffffffffe8 + (long)plVar9);
            uVar6 = *(undefined4 *)((long)&plVar9[-1].length + 4);
            plVar12 = plVar9 + -1;
            node_00->lo = plVar12;
            *(undefined4 *)&plVar10->text = uVar3;
            *(undefined4 *)((long)&plVar24[-1].text + 4) = uVar4;
            *(undefined4 *)&plVar24[-1].length = uVar5;
            *(undefined4 *)((long)&plVar24[-1].length + 4) = uVar6;
            uVar3 = *(undefined4 *)((long)&plVar9[-1].keybeg + 4);
            uVar4 = *(undefined4 *)&plVar9[-1].keylim;
            uVar5 = *(undefined4 *)((long)&plVar9[-1].keylim + 4);
            *(undefined4 *)&plVar24[-1].keybeg = *(undefined4 *)&plVar9[-1].keybeg;
            *(undefined4 *)((long)&plVar24[-1].keybeg + 4) = uVar3;
            *(undefined4 *)&plVar24[-1].keylim = uVar4;
            *(undefined4 *)((long)&plVar24[-1].keylim + 4) = uVar5;
            plVar24 = plVar10;
            if (plVar19 == plVar12) break;
            goto LAB_0010b560;
          }
          plVar9 = node_00->hi;
          plVar12 = node_00->lo;
          plVar19 = node_00->end_lo;
          uVar3 = *(undefined4 *)&plVar9[-1].text;
          uVar4 = *(undefined4 *)((long)&plVar9[-1].text + 4);
          uVar5 = *(undefined4 *)&plVar9[-1].length;
          uVar6 = *(undefined4 *)((long)&plVar9[-1].length + 4);
          plVar11 = plVar9 + -1;
          node_00->hi = plVar11;
          *(undefined4 *)&plVar10->text = uVar3;
          *(undefined4 *)((long)&plVar24[-1].text + 4) = uVar4;
          *(undefined4 *)&plVar24[-1].length = uVar5;
          *(undefined4 *)((long)&plVar24[-1].length + 4) = uVar6;
          uVar3 = *(undefined4 *)((long)&plVar9[-1].keybeg + 4);
          uVar4 = *(undefined4 *)&plVar9[-1].keylim;
          uVar5 = *(undefined4 *)((long)&plVar9[-1].keylim + 4);
          *(undefined4 *)&plVar24[-1].keybeg = *(undefined4 *)&plVar9[-1].keybeg;
          *(undefined4 *)((long)&plVar24[-1].keybeg + 4) = uVar3;
          *(undefined4 *)&plVar24[-1].keylim = uVar4;
          *(undefined4 *)((long)&plVar24[-1].keylim + 4) = uVar5;
          plVar24 = plVar10;
        } while (plVar19 != plVar12);
        pplVar22 = node_00->dest;
        cVar20 = node_00->queued;
        sVar14 = (long)plVar21 - (long)plVar12 >> 5;
        sVar8 = (long)plVar23 - (long)plVar11 >> 5;
        plVar24 = plVar10;
      }
      sVar13 = node_00->nhi;
      sVar17 = node_00->nlo;
      plVar10 = plVar12;
      lVar16 = lVar15;
      if (sVar13 != sVar8) {
LAB_0010b5f7:
        if (((sVar17 == sVar14) && (plVar19 = node_00->end_hi, plVar19 != plVar11)) &&
           (lVar15 = lVar16 + -1, plVar12 = plVar24, lVar16 != 0)) {
          do {
            plVar9 = plVar11 + -1;
            uVar3 = *(undefined4 *)&plVar9->text;
            uVar4 = *(undefined4 *)((long)&plVar11[-1].text + 4);
            uVar5 = *(undefined4 *)&plVar11[-1].length;
            uVar6 = *(undefined4 *)((long)&plVar11[-1].length + 4);
            plVar24 = plVar12 + -1;
            node_00->hi = plVar9;
            *(undefined4 *)&plVar24->text = uVar3;
            *(undefined4 *)((long)&plVar12[-1].text + 4) = uVar4;
            *(undefined4 *)&plVar12[-1].length = uVar5;
            *(undefined4 *)((long)&plVar12[-1].length + 4) = uVar6;
            uVar3 = *(undefined4 *)((long)&plVar11[-1].keybeg + 4);
            uVar4 = *(undefined4 *)&plVar11[-1].keylim;
            uVar5 = *(undefined4 *)((long)&plVar11[-1].keylim + 4);
            *(undefined4 *)&plVar12[-1].keybeg = *(undefined4 *)&plVar11[-1].keybeg;
            *(undefined4 *)((long)&plVar12[-1].keybeg + 4) = uVar3;
            *(undefined4 *)&plVar12[-1].keylim = uVar4;
            *(undefined4 *)((long)&plVar12[-1].keylim + 4) = uVar5;
            if (plVar9 == plVar19) {
              sVar8 = (long)plVar23 - (long)plVar9 >> 5;
              goto LAB_0010b6f0;
            }
            lVar15 = lVar15 + -1;
            plVar12 = plVar24;
            plVar11 = plVar9;
          } while (lVar15 != -1);
          sVar8 = (long)plVar23 - (long)plVar9 >> 5;
        }
      }
      goto LAB_0010b6f0;
    }
    sVar8 = 0;
    sVar13 = 0;
    plVar11 = plVar23;
    plVar10 = plVar21;
    lVar16 = lVar15;
    if (plVar21 != plVar19) {
LAB_0010b7f4:
      do {
        if (node_00->end_hi == plVar11) {
LAB_0010b897:
          sVar8 = node_00->nhi;
          if ((long)plVar23 - (long)plVar11 >> 5 != sVar8) {
            sVar17 = node_00->nlo;
            if ((long)plVar21 - (long)plVar10 >> 5 != sVar17) goto LAB_0010b873;
            goto LAB_0010b937;
          }
          if ((plVar10 != node_00->end_lo) && (lVar15 = lVar16 + -1, lVar16 != 0))
          goto LAB_0010b8d6;
          sVar17 = node_00->nlo;
          cVar20 = node_00->queued;
          sVar13 = sVar8;
          goto LAB_0010b6f3;
        }
        lVar15 = lVar16 + -1;
        if (lVar16 == 0) {
          lVar16 = -1;
          goto LAB_0010b897;
        }
        iVar7 = compare(plVar10 + -1,plVar11 + -1);
        lVar16 = lVar15;
        if (iVar7 < 1) {
          plVar19 = node_00->lo;
          node_00->lo = plVar19 + -1;
          write_unique(plVar19 + -1,tfp,temp_output);
          plVar10 = node_00->lo;
          plVar11 = node_00->hi;
          if (plVar10 == node_00->end_lo) break;
          goto LAB_0010b7f4;
        }
        plVar19 = node_00->hi;
        node_00->hi = plVar19 + -1;
        write_unique(plVar19 + -1,tfp,temp_output);
        plVar10 = node_00->lo;
        plVar11 = node_00->hi;
      } while (plVar10 != node_00->end_lo);
      sVar13 = (long)plVar21 - (long)plVar10 >> 5;
      sVar8 = (long)plVar23 - (long)plVar11 >> 5;
    }
    sVar17 = node_00->nlo;
    if (node_00->nhi == sVar8) {
      cVar20 = node_00->queued;
      sVar13 = sVar8;
    }
    else {
      lVar16 = lVar15;
      if (sVar13 == sVar17) {
LAB_0010b937:
        if ((node_00->end_hi != plVar11) && (lVar15 = lVar16 + -1, lVar16 != 0)) {
          do {
            node_00->hi = plVar11 + -1;
            write_unique(plVar11 + -1,tfp,temp_output);
            plVar11 = node_00->hi;
            if (plVar11 == node_00->end_hi) break;
            lVar15 = lVar15 + -1;
          } while (lVar15 != -1);
          sVar17 = node_00->nlo;
          cVar20 = node_00->queued;
          sVar8 = (long)plVar23 - (long)plVar11 >> 5;
          plVar10 = node_00->lo;
          sVar13 = node_00->nhi;
          goto LAB_0010b6f3;
        }
      }
LAB_0010b873:
      cVar20 = node_00->queued;
      sVar8 = (long)plVar23 - (long)node_00->hi >> 5;
      sVar13 = node_00->nhi;
    }
    goto LAB_0010b6f3;
  }
  pthread_mutex_unlock((pthread_mutex_t *)__mutex_00);
  queue_insert(queue,node_00);
LAB_0010b9c5:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while (lVar15 = lVar15 + -1, lVar15 != -1) {
LAB_0010b8d6:
    node_00->lo = plVar10 + -1;
    write_unique(plVar10 + -1,tfp,temp_output);
    plVar10 = node_00->lo;
    if (plVar10 == node_00->end_lo) {
      sVar17 = node_00->nlo;
      sVar13 = node_00->nhi;
      cVar20 = node_00->queued;
      sVar8 = (long)plVar23 - (long)node_00->hi >> 5;
      plVar10 = node_00->end_lo;
      goto LAB_0010b6f3;
    }
  }
  sVar17 = node_00->nlo;
  sVar13 = node_00->nhi;
  cVar20 = node_00->queued;
  sVar8 = (long)plVar23 - (long)node_00->hi >> 5;
  goto LAB_0010b6f3;
  while (lVar15 = lVar15 + -1, plVar10 = plVar11, plVar23 = plVar24, lVar15 != -1) {
LAB_0010b6c6:
    plVar11 = plVar10 + -1;
    uVar3 = *(undefined4 *)&plVar11->text;
    uVar4 = *(undefined4 *)((long)&plVar10[-1].text + 4);
    uVar5 = *(undefined4 *)&plVar10[-1].length;
    uVar6 = *(undefined4 *)((long)&plVar10[-1].length + 4);
    plVar24 = plVar23 + -1;
    node_00->lo = plVar11;
    *(undefined4 *)&plVar24->text = uVar3;
    *(undefined4 *)((long)&plVar23[-1].text + 4) = uVar4;
    *(undefined4 *)&plVar23[-1].length = uVar5;
    *(undefined4 *)((long)&plVar23[-1].length + 4) = uVar6;
    uVar3 = *(undefined4 *)((long)&plVar10[-1].keybeg + 4);
    uVar4 = *(undefined4 *)&plVar10[-1].keylim;
    uVar5 = *(undefined4 *)((long)&plVar10[-1].keylim + 4);
    *(undefined4 *)&plVar23[-1].keybeg = *(undefined4 *)&plVar10[-1].keybeg;
    *(undefined4 *)((long)&plVar23[-1].keybeg + 4) = uVar3;
    *(undefined4 *)&plVar23[-1].keylim = uVar4;
    *(undefined4 *)((long)&plVar23[-1].keylim + 4) = uVar5;
    plVar10 = plVar19;
    if (plVar11 == plVar19) break;
  }
LAB_0010b6f0:
  *pplVar22 = plVar24;
LAB_0010b6f3:
  node_00->nhi = sVar13 - sVar8;
  node_00->nlo = sVar17 - ((long)plVar21 - (long)plVar10 >> 5);
  if (cVar20 == '\0') {
    queue_check_insert(queue,node_00);
  }
  if (node_00->level < 2) {
    if (node_00->nhi + node_00->nlo == 0) {
      queue_insert(queue,node_00->parent);
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&node_00->parent->lock);
    node_01 = node_00->parent;
    if (node_01->queued == false) {
      queue_check_insert(queue,node_01);
      node_01 = node_00->parent;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&node_01->lock);
  }
  pthread_mutex_unlock((pthread_mutex_t *)__mutex_00);
  goto LAB_0010b490;
}

