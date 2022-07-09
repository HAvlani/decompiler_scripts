
void add_tab_stop(uintmax_t tabval)

{
  ulong uVar1;
  
  uVar1 = tabval;
  if (first_free_tab == 0) {
LAB_001031eb:
    if (first_free_tab != n_tabs_allocated) goto LAB_001031f0;
  }
  else {
    if (tab_list[first_free_tab - 1] <= tabval) {
      uVar1 = tabval - tab_list[first_free_tab - 1];
      goto LAB_001031eb;
    }
    if (first_free_tab != n_tabs_allocated) {
      tab_list[first_free_tab] = tabval;
      first_free_tab = first_free_tab + 1;
      return;
    }
    uVar1 = 0;
  }
  tab_list = (uintmax_t *)x2nrealloc(tab_list,&n_tabs_allocated,8);
LAB_001031f0:
  tab_list[first_free_tab] = tabval;
  if (max_column_width < uVar1) {
    max_column_width = uVar1;
  }
  first_free_tab = first_free_tab + 1;
  return;
}

