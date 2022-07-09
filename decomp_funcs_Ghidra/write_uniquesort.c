
void write_unique(line *line,FILE *tfp,char *temp_output)

{
  int iVar1;
  
  if (unique != false) {
    if (CONCAT44(saved_line.text._4_4_,saved_line.text._0_4_) != 0) {
      iVar1 = compare(line,&saved_line);
      if (iVar1 == 0) {
        return;
      }
    }
    saved_line.text._0_4_ = *(undefined4 *)&line->text;
    saved_line.text._4_4_ = *(undefined4 *)((long)&line->text + 4);
    saved_line.length._0_4_ = *(undefined4 *)&line->length;
    saved_line.length._4_4_ = *(undefined4 *)((long)&line->length + 4);
    saved_line.keybeg._0_4_ = *(undefined4 *)&line->keybeg;
    saved_line.keybeg._4_4_ = *(undefined4 *)((long)&line->keybeg + 4);
    saved_line.keylim._0_4_ = *(undefined4 *)&line->keylim;
    saved_line.keylim._4_4_ = *(undefined4 *)((long)&line->keylim + 4);
  }
  write_line(line,tfp,temp_output);
  return;
}

