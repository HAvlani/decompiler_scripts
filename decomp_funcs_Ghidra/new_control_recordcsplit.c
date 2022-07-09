
control * new_control_record(void)

{
  control *pcVar1;
  
  if (control_used == new_control_record::control_allocated) {
    controls = (control *)xpalloc(controls,&new_control_record::control_allocated,1,-1,0x60);
  }
  pcVar1 = controls + control_used;
  control_used = control_used + 1;
  pcVar1->regexpr = false;
  pcVar1->repeat = 0;
  pcVar1->repeat_forever = false;
  pcVar1->lines_required = 0;
  pcVar1->offset = 0;
  return pcVar1;
}

