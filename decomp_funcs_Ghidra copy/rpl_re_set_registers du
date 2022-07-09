
void rpl_re_set_registers
               (re_pattern_buffer *bufp,re_registers *regs,__re_size_t num_regs,regoff_t *starts,
               regoff_t *ends)

{
  if (num_regs != 0) {
    bufp->field_0x38 = bufp->field_0x38 & 0xf9 | 2;
    regs->num_regs = num_regs;
    regs->start = starts;
    regs->end = ends;
    return;
  }
  bufp->field_0x38 = bufp->field_0x38 & 0xf9;
  regs->num_regs = 0;
  regs->end = (regoff_t *)0x0;
  regs->start = (regoff_t *)0x0;
  return;
}

