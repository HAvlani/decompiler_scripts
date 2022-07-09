
/* WARNING: Unknown calling convention yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_00122eb8)();
  return pdVar1;
}

