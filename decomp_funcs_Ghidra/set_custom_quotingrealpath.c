
void set_custom_quoting(quoting_options *param_1,char *param_2,char *param_3)

{
  if (param_1 == (quoting_options *)0x0) {
    param_1 = &default_quoting_options;
  }
  param_1->style = custom_quoting_style;
  if ((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) {
    param_1->left_quote = param_2;
    param_1->right_quote = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

