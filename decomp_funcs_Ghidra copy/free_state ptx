
void free_state(re_dfastate_t *state)

{
  rpl_free((state->non_eps_nodes).elems);
  rpl_free((state->inveclosure).elems);
  if (state->entrance_nodes != &state->nodes) {
    rpl_free(state->entrance_nodes->elems);
    rpl_free(state->entrance_nodes);
  }
  rpl_free((state->nodes).elems);
  rpl_free(state->word_trtable);
  rpl_free(state->trtable);
  rpl_free(state);
  return;
}

