
void queue_check_insert(merge_node_queue *queue,merge_node *node)

{
  if (node->lo == node->end_lo) {
    if ((node->hi != node->end_hi) && (node->nlo == 0)) {
      queue_insert(queue,node);
      return;
    }
  }
  else if ((node->hi != node->end_hi) || (node->nhi == 0)) {
    queue_insert(queue,node);
    return;
  }
  return;
}

