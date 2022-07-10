
/* WARNING: Could not reconcile some variable overlaps */

char * quotearg_char_mem(char *arg,size_t argsize,char ch)

{
  uint uVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  quoting_options options;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  options._0_8_ = default_quoting_options._0_8_;
  options.quote_these_too._0_8_ = default_quoting_options.quote_these_too._0_8_;
  options.right_quote = default_quoting_options.right_quote;
  options.quote_these_too._8_8_ = default_quoting_options.quote_these_too._8_8_;
  options.quote_these_too._16_8_ = default_quoting_options.quote_these_too._16_8_;
  options.quote_these_too._24_8_ = default_quoting_options.quote_these_too._24_8_;
  options.left_quote = default_quoting_options.left_quote;
  uVar1 = options.quote_these_too[(byte)ch >> 5];
  options.quote_these_too[(byte)ch >> 5] = (~(uVar1 >> (ch & 0x1fU)) & 1) << (ch & 0x1fU) ^ uVar1;
  pcVar2 = (char *)quotearg_n_options(default_quoting_options._0_8_,
                                      default_quoting_options.quote_these_too._8_8_,
                                      default_quoting_options.quote_these_too._24_8_,0,arg,argsize,
                                      &options);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

