
void queue_insert(merge_node_queue *queue,merge_node *node)

{
  pthread_mutex_lock((pthread_mutex_t *)&queue->mutex);
  heap_insert(queue->priority_queue,node);
  node->queued = true;
  pthread_cond_signal((pthread_cond_t *)&queue->cond);
  pthread_mutex_unlock((pthread_mutex_t *)&queue->mutex);
  return;
}

