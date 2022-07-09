
regoff_t rpl_re_search_2(re_pattern_buffer *bufp,char *string1,Idx length1,char *string2,Idx length2
                        ,Idx start,regoff_t range,re_registers *regs,Idx stop)

{
  regoff_t rVar1;
  
  rVar1 = re_search_2_stub(bufp,string1,length1,string2,length2,start,range,regs,stop,false);
  return rVar1;
}

