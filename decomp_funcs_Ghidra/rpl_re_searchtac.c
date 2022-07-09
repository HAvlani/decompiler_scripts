
regoff_t rpl_re_search(re_pattern_buffer *bufp,char *string,Idx length,Idx start,regoff_t range,
                      re_registers *regs)

{
  regoff_t rVar1;
  
  rVar1 = re_search_stub(bufp,string,length,start,range,length,regs,false);
  return rVar1;
}

