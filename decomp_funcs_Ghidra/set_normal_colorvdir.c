
void set_normal_color(void)

{
  _Bool _Var1;
  
  if (print_with_color == false) {
    return;
  }
  _Var1 = is_colored(C_NORM);
  if (_Var1 == false) {
    return;
  }
  put_indicator();
  put_indicator();
  put_indicator();
  return;
}

