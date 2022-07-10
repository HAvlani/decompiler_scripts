
void replace_problematic_chars(char *cell)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (replace_problematic_chars::tty_out < 0) {
    replace_problematic_chars::tty_out = isatty(1);
  }
  UNRECOVERED_JUMPTABLE = replace_invalid_chars;
  if (replace_problematic_chars::tty_out == 0) {
    UNRECOVERED_JUMPTABLE = replace_control_chars;
  }
                    /* WARNING: Could not recover jumptable at 0x00105306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(cell);
  return;
}

