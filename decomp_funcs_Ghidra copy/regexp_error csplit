
void regexp_error(control *p,intmax_t repetition,_Bool ignore)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  char buf [21];
  
  pcVar1 = quote(global_argv[p->argnum]);
  pcVar3 = program_name;
  uVar2 = dcgettext(0,"%s: %s: match not found",5);
  __fprintf_chk(stderr,1,uVar2,pcVar3,pcVar1);
  if (repetition == 0) {
    fputc(10,stderr);
  }
  else {
    pcVar3 = imaxtostr(repetition,buf);
    uVar2 = dcgettext(0," on repetition %s\n",5);
    __fprintf_chk(stderr,1,uVar2,pcVar3);
  }
  if (ignore == false) {
    dump_rest_of_file();
    close_output_file();
  }
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}

