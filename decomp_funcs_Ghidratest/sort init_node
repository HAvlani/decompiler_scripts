
merge_node *
init_node(merge_node *parent,merge_node *node_pool,line *dest,size_t nthreads,size_t total_lines,
         _Bool is_lo_child)

{
  uint uVar1;
  size_t sVar2;
  merge_node *pmVar3;
  line **pplVar4;
  line *dest_00;
  ulong uVar5;
  line *dest_01;
  
  dest_00 = dest + -total_lines;
  if (is_lo_child == false) {
    uVar5 = parent->nhi >> 1;
    sVar2 = parent->nhi - uVar5;
    pplVar4 = &parent->end_hi;
  }
  else {
    uVar5 = parent->nlo >> 1;
    sVar2 = parent->nlo - uVar5;
    pplVar4 = &parent->end_lo;
  }
  dest_01 = dest_00 + -uVar5;
  node_pool->nhi = sVar2;
  uVar1 = parent->level;
  pmVar3 = node_pool + 1;
  node_pool->parent = parent;
  node_pool->end_lo = dest_00;
  node_pool->lo = dest_00;
  node_pool->end_hi = dest_01;
  node_pool->hi = dest_01;
  node_pool->dest = pplVar4;
  node_pool->nlo = uVar5;
  node_pool->level = uVar1 + 1;
  node_pool->queued = false;
  pthread_mutex_init((pthread_mutex_t *)&node_pool->lock,(pthread_mutexattr_t *)0x0);
  if (nthreads < 2) {
    node_pool->lo_child = (merge_node *)0x0;
    node_pool->hi_child = (merge_node *)0x0;
    return pmVar3;
  }
  node_pool->lo_child = pmVar3;
  pmVar3 = init_node(node_pool,pmVar3,dest_00,nthreads >> 1,total_lines,true);
  node_pool->hi_child = pmVar3;
  pmVar3 = init_node(node_pool,pmVar3,dest_01,nthreads - (nthreads >> 1),total_lines,false);
  return pmVar3;
}

