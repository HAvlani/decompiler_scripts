
size_t argv_iter_n_args(argv_iterator *ai)

{
  if (ai->fp != (FILE *)0x0) {
    return ai->item_idx;
  }
  return (long)ai->p - (long)ai->arg_list >> 3;
}

