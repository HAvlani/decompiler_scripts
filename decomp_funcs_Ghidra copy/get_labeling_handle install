
selabel_handle * get_labeling_handle(void)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (get_labeling_handle::initialized != false) {
    return get_labeling_handle::hnd;
  }
  get_labeling_handle::initialized = true;
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  get_labeling_handle::hnd = (selabel_handle *)0x0;
  uVar2 = dcgettext(0,"warning: security labeling handle failed",5);
  error(0,*piVar1,uVar2);
  return get_labeling_handle::hnd;
}

