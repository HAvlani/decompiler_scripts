
regoff_t re_search_2_stub(re_pattern_buffer *bufp,char *string1,Idx length1,char *string2,
                         Idx length2,Idx start,regoff_t range,re_registers *regs,Idx stop,
                         _Bool ret_len)

{
  regoff_t rVar1;
  char *string;
  char *p;
  
  if ((((char)((byte)((ulong)length2 >> 0x38) | (byte)((ulong)stop >> 0x38)) < '\0') ||
      (length1 < 0)) || (SCARRY8(length1,length2))) {
LAB_00113da8:
    rVar1 = -2;
  }
  else {
    if (length2 == 0) {
      p = (char *)0x0;
      string = string1;
    }
    else {
      string = string2;
      p = (char *)0x0;
      if (length1 != 0) {
        string = (char *)malloc(length1 + length2);
        if (string == (char *)0x0) goto LAB_00113da8;
        memcpy(string,string1,length1);
        memcpy(string + length1,string2,length2);
        p = string;
      }
    }
    rVar1 = re_search_stub(bufp,string,length1 + length2,start,range,stop,regs,ret_len);
    rpl_free(p);
  }
  return rVar1;
}

