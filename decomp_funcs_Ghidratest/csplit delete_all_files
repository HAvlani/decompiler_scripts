
void delete_all_files(_Bool in_signal_handler)

{
  int iVar1;
  char *__name;
  int *piVar2;
  undefined8 uVar3;
  int num;
  
  num = files_created + -1;
  if (-1 < num) {
    do {
      __name = make_filename(num);
      iVar1 = unlink(__name);
      if (((iVar1 != 0) && (piVar2 = __errno_location(), *piVar2 != 2)) &&
         (in_signal_handler == false)) {
        uVar3 = quotearg_n_style_colon(0,3,__name);
        error(0,*piVar2,"%s",uVar3);
      }
      num = num + -1;
    } while (num != -1);
  }
  files_created = 0;
  return;
}

