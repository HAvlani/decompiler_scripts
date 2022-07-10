
void push_current_dired_pos(obstack *obs)

{
  off_t *poVar1;
  
  poVar1 = (off_t *)obs->next_free;
  if ((ulong)((long)obs->chunk_limit - (long)poVar1) < 8) {
    _obstack_newchunk(obs,8);
    poVar1 = (off_t *)obs->next_free;
  }
  *poVar1 = dired_pos;
  obs->next_free = obs->next_free + 8;
  return;
}

