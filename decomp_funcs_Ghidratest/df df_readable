
char * df_readable(_Bool negative,uintmax_t n,char *buf,uintmax_t input_units,uintmax_t output_units
                  )

{
  char *pcVar1;
  
  if (negative == false) {
    pcVar1 = human_readable(n,buf + negative,human_output_opts,input_units,output_units);
    return pcVar1;
  }
  pcVar1 = human_readable(-n,buf + negative,human_output_opts,input_units,output_units);
  pcVar1[-1] = '-';
  return pcVar1 + -1;
}

