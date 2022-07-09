
reg_syntax_t rpl_re_set_syntax(reg_syntax_t syntax)

{
  reg_syntax_t rVar1;
  
  rVar1 = rpl_re_syntax_options;
  rpl_re_syntax_options = syntax;
  return rVar1;
}

