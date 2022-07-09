
void quotearg_n_custom_mem
               (undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  char *pcStack32;
  char *local_18;
  long local_10;
  
  uStack64 = default_quoting_options.quote_these_too._0_8_;
  local_38 = default_quoting_options.quote_these_too._8_8_;
  uStack48 = default_quoting_options.quote_these_too._16_8_;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = default_quoting_options.quote_these_too._24_8_;
  pcStack32 = default_quoting_options.left_quote;
  local_18 = default_quoting_options.right_quote;
  local_48 = CONCAT44((int)((ulong)default_quoting_options._0_8_ >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    pcStack32 = (char *)param_2;
    local_18 = (char *)param_3;
    quotearg_n_options(default_quoting_options._0_8_,default_quoting_options.quote_these_too._8_8_,
                       default_quoting_options.quote_these_too._24_8_,param_1,param_4,param_5,
                       &local_48);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

