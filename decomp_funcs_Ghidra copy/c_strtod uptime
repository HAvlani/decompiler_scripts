
double c_strtod(char *nptr,char **endptr)

{
  double extraout_XMM0_Qa;
  
  if (c_locale_cache == (locale_t)0x0) {
    c_locale_cache = (locale_t)newlocale(0x1fbf,"C",(__locale_t)0x0);
  }
  if (c_locale_cache != (locale_t)0x0) {
    (*(code *)PTR_strtod_l_0010ce20)(nptr,endptr);
    return extraout_XMM0_Qa;
  }
  if (endptr != (char **)0x0) {
    *endptr = nptr;
  }
  return 0.0;
}

