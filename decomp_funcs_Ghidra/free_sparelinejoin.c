
void free_spareline(void)

{
  if (spareline[0] != (line *)0x0) {
    freeline(spareline[0]);
    rpl_free(spareline[0]);
  }
  if (spareline[1] != (line *)0x0) {
    freeline(spareline[1]);
    rpl_free(spareline[1]);
    return;
  }
  return;
}

