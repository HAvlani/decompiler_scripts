
/* WARNING: Unknown calling convention yet parameter storage is locked */

void writeline(void)

{
  int in_ECX;
  FILE *in_RDX;
  void **in_RSI;
  size_t *in_RDI;
  
  if (in_ECX == 2) {
    if (only_file_2 == false) {
      return;
    }
    if (only_file_1 == false) goto LAB_00102aed;
  }
  else {
    if (in_ECX != 3) {
      if (only_file_1 == false) {
        return;
      }
      goto LAB_00102aed;
    }
    if (both == false) {
      return;
    }
    if (only_file_1 != false) {
      fwrite_unlocked(col_sep,1,col_sep_len,in_RDX);
    }
    if (only_file_2 == false) goto LAB_00102aed;
  }
  fwrite_unlocked(col_sep,1,col_sep_len,in_RDX);
LAB_00102aed:
  fwrite_unlocked(*in_RSI,1,*in_RDI,in_RDX);
  return;
}

