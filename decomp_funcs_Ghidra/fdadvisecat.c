
/* WARNING: Unknown calling convention yet parameter storage is locked */

int fdadvise(int __fd,__off_t __offset,__off_t __len,int __advise)

{
  int iVar1;
  
  iVar1 = posix_fadvise(__fd,__offset,__len,__advise);
  return iVar1;
}

