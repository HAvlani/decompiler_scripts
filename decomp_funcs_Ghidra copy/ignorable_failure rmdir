
_Bool ignorable_failure(int error_number,char *dir)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  DIR *__dirp;
  dirent *pdVar4;
  
  if (ignore_fail_on_non_empty == false) {
    return false;
  }
  bVar1 = error_number == 0x11 || error_number == 0x27;
  if (((bVar1) || (0x1e < (uint)error_number)) ||
     ((1 << ((byte)error_number & 0x3f) & 0x40012002U) == 0)) {
    return bVar1;
  }
  iVar2 = openat(-100,dir,0x30900);
  piVar3 = __errno_location();
  if (iVar2 < 0) {
    iVar2 = *piVar3;
  }
  else {
    __dirp = fdopendir(iVar2);
    if (__dirp == (DIR *)0x0) {
      close(iVar2);
      iVar2 = *piVar3;
    }
    else {
      *piVar3 = 0;
      do {
        pdVar4 = readdir(__dirp);
        if (pdVar4 == (dirent *)0x0) {
          iVar2 = *piVar3;
          closedir(__dirp);
          *piVar3 = iVar2;
          if (iVar2 == 0) {
            return false;
          }
          goto LAB_00102d42;
        }
      } while ((pdVar4->d_name[0] == '.') &&
              ((pdVar4->d_name[(ulong)(pdVar4->d_name[1] == '.') + 1] == '\0' ||
               (pdVar4->d_name[(ulong)(pdVar4->d_name[1] == '.') + 1] == '/'))));
      iVar2 = *piVar3;
      closedir(__dirp);
      *piVar3 = iVar2;
    }
  }
LAB_00102d42:
  return iVar2 == 0;
}

