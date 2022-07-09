
void finish_and_exit(FILE *in,char *infile)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  iVar1 = rpl_fclose(in);
  if (iVar1 != 0) {
    uVar2 = (byte)*infile - 0x2d;
    if (uVar2 == 0) goto LAB_001036c5;
    do {
      piVar3 = __errno_location();
      if (uVar2 == 0) {
        uVar4 = dcgettext(0,"closing standard input",5);
        error(1,*piVar3,uVar4);
      }
      uVar4 = quotearg_n_style_colon(0,3,infile);
      error(1,*piVar3,"%s",uVar4);
LAB_001036c5:
      uVar2 = (uint)(byte)infile[1];
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  exit(0);
}

